<?php

/**
 * @file
 * Admin page callback file for the languageassign module.
 */


/**
 * Users
 */

require_once drupal_get_path('module', 'user') . '/user.admin.inc';

/**
 * We want to add a Language column to the user table at admin/people.
 * Unfortunately, the list of columns in that table is hard-coded in
 * user_admin_account() in user.admin.inc.  So override and entirely
 * replicate that here, with the Language column added.
 */

/**
 * Page callback for admin/people.
 * 
 * @param unknown_type $callback_arg
 * This function is identical to user_admin() in user.admin.inc,
 * except that it calls our custom form builders for the user filter and admin forms.
 */
function languageassign_user_admin($callback_arg = '') {
  $op = isset($_POST['op']) ? $_POST['op'] : $callback_arg;

  switch ($op) {
    case t('Create new account'):
    case 'create':
      $build['user_register'] = drupal_get_form('user_register_form');
      break;
    default:
      if (!empty($_POST['accounts']) && isset($_POST['operation']) && ($_POST['operation'] == 'cancel')) {
        $build['user_multiple_cancel_confirm'] = drupal_get_form('user_multiple_cancel_confirm');
      }
      else {
        $build['user_filter_form'] = drupal_get_form('user_filter_form');
        $build['user_admin_account'] = drupal_get_form('languageassign_user_admin_account'); // <-- N.B.
      }
  }
  return $build;
}

/**
 * Form builder; User administration page.
 *
 * @ingroup forms
 * @see user_admin_account()
 * @see languageassign_user_admin_account_validate()
 * @see languageassign_user_admin_account_submit()
 * 
 * This function is identical to user_admin_account() in user.admin.inc,
 * except that we:
 * - Add a (sortable) Language column to the user table
 * - Separate out the language assignment operations, relabel them,
 *   and group them under a separate "Set language" optgroup.
 */
function languageassign_user_admin_account() {

  $header = array(
    'username' => array('data' => t('Username'), 'field' => 'u.name'),
    'status' => array('data' => t('Status'), 'field' => 'u.status'),
    'roles' => array('data' => t('Roles')),
    'member_for' => array('data' => t('Member for'), 'field' => 'u.created', 'sort' => 'desc'),
    'access' => array('data' => t('Last access'), 'field' => 'u.access'),
    'language' => array('data' => t('Language'), 'field' => 'u.language'),
    'operations' => array('data' => t('Operations')),
  );

  $query = db_select('users', 'u');
  $query->condition('u.uid', 0, '<>');
  user_build_filter_query($query);

  $count_query = clone $query;
  $count_query->addExpression('COUNT(u.uid)');

  $query = $query->extend('PagerDefault')->extend('TableSort');
  $query
    ->fields('u', array('uid', 'name', 'status', 'created', 'access', 'language'))
    ->limit(50)
    ->orderByHeader($header)
    ->setCountQuery($count_query);
  $result = $query->execute();

  $form['options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Update options'),
    '#attributes' => array('class' => array('container-inline')),
  );
  // Retrieve user operations; separate out language assignment operations
  // and put them into a separate optgroup.
  $options = array();
  $la_opts = array();
  foreach (module_invoke_all('user_operations') as $operation => $array) {
    if (substr($operation, 0, 15) == 'languageassign-') {
      $langcode = substr($operation, 15);
      $la_opts[$operation] = locale_language_name($langcode);
    }
    else {
      $options[$operation] = $array['label'];
    }
  }
  $options += array(t('Set language') => $la_opts);
  $form['options']['operation'] = array(
    '#type' => 'select',
    '#title' => t('Operation'),
    '#title_display' => 'invisible',
    '#options' => $options,
    '#default_value' => 'unblock',
  );
  $options = array();
  $form['options']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update'),
  );

  $destination = drupal_get_destination();

  $status = array(t('blocked'), t('active'));
  $roles = array_map('check_plain', user_roles(TRUE));
  $accounts = array();
  foreach ($result as $account) {
    $users_roles = array();
    $roles_result = db_query('SELECT rid FROM {users_roles} WHERE uid = :uid', array(':uid' => $account->uid));
    foreach ($roles_result as $user_role) {
      $users_roles[] = $roles[$user_role->rid];
    }
    asort($users_roles);

    $options[$account->uid] = array(
      'username' => theme('username', array('account' => $account)),
      'status' =>  $status[$account->status],
      'roles' => theme('item_list', array('items' => $users_roles)),
      'member_for' => format_interval(REQUEST_TIME - $account->created),
      'access' =>  $account->access ? t('@time ago', array('@time' => format_interval(REQUEST_TIME - $account->access))) : t('never'),
      'language' => locale_language_name($account->language),
      'operations' => array('data' => array('#type' => 'link', '#title' => t('edit'), '#href' => "user/$account->uid/edit", '#options' => array('query' => $destination))),
    );
  }

  $form['accounts'] = array(
    '#type' => 'tableselect',
    '#header' => $header,
    '#options' => $options,
    '#empty' => t('No people available.'),
  );
  $form['pager'] = array('#markup' => theme('pager'));

  // Process hooks on user_admin_account().
  $form_state = form_state_defaults();
  drupal_prepare_form('user_admin_account', $form, $form_state);
  
  return $form;
}

/**
 * Form submission handler for languageassign_user_admin_account().
 *
 * @see languageassign_user_admin_account()
 * @see languageassign_user_admin_account_validate()
 */
function languageassign_user_admin_account_submit($form, &$form_state) {
  return user_admin_account_submit($form, $form_state);
}

/**
 * Form validation handler for languageassign_user_admin_account().
 *
 * @see languageassign_user_admin_account()
 * @see languageassign_user_admin_account_submit()
 */
function languageassign_user_admin_account_validate($form, &$form_state) {
  return user_admin_account_validate($form, $form_state);
}
