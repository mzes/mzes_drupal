<?php
/**
 * @file
 * File module integration.
 */

/**
 * Implements hook_filefield_paths_form_alter().
 */
function file_filefield_paths_form_alter(&$form, &$ffp) {
  if (isset($form['#field']) && $form['#field']['type'] == 'file' && isset($form['instance']['settings']['file_directory'])) {
    $ffp[$form['#field']['field_name']] = array(
      'show' => TRUE,
      'type' => "{$form['instance']['entity_type']['#value']}::{$form['instance']['bundle']['#value']}",
      'form_path' => &$form['instance']["ffp_{$form['#field']['field_name']}"],
      'file_path_default' => $form['instance']['settings']['file_directory']['#default_value']
    );

    // Create path settings fieldset
    $ffp[$form['#field']['field_name']]['form_path'] = array(
      '#type' => 'fieldset',
      '#title' => t('File Path settings'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#weight' => 1,
    );

    $ffp[$form['#field']['field_name']]['form_path']['file_path'] = $form['instance']['settings']['file_directory'];
    $ffp[$form['#field']['field_name']]['form_path']['file_path']['#title'] = t('File path');
    $form['instance']['settings']['file_directory']['#access'] = FALSE;
  }
}

/**
 * Implements hook_filefield_paths_form_submit().
 */
function file_filefield_paths_form_submit(&$form_state, &$ffp) {
  if (isset($form_state['values']['form_id']) && $form_state['values']['form_id'] == 'field_ui_field_edit_form') {
    $form_state['values']["ffp_{$form_state['values']['instance']['field_name']}"] = $form_state['values']['instance']["ffp_{$form_state['values']['instance']['field_name']}"];
    $ffp[$form_state['values']['instance']['field_name']] = array(
      'type' => "{$form_state['values']['instance']['entity_type']}::{$form_state['values']['instance']['bundle']}",
    );

    $form_state['values']['instance']['settings']['file_directory'] = $form_state['values']["ffp_{$form_state['values']['instance']['field_name']}"]['file_path'];
  }
}

/**
 * Implements hook_filefield_paths_get_fields().
 */
function file_filefield_paths_get_fields(&$entity, &$ffp) {
  if (is_object($entity)) {
    $fields = field_info_fields();
    foreach ($fields as $name => $field) {
      if ($field['type'] == 'file' && isset($entity->{$field['field_name']}) && is_array($entity->{$field['field_name']})) {
        foreach ($entity->{$field['field_name']} as $language) {
          foreach ($language as $file) {
            $new = isset($file['new']) ? $file['new'] : FALSE;
            $file = file_load($file['fid']);

            $ffp['#files'][] = array(
              'field' => (array) $file,
              'module' => $field['module'],
              'name' => $field['field_name'],
              'new' => $new || $file->timestamp == REQUEST_TIME,
            );

            $ffp['#types'][$field['field_name']] = TRUE;
          }
        }
      }
    }
  }
}

/**
 * Implements hook_filefield_paths_batch_update().
 */
function file_filefield_paths_batch_update($instance, &$objects) {
  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', $instance['entity_type'])
    ->entityCondition('bundle', array($instance['bundle']))
    ->fieldCondition($instance['field_name'])
    ->execute();

  $objects = array_keys($result[$instance['entity_type']]);
}

/**
 * Implements hook_filefield_paths_update().
 */
function file_filefield_paths_update($oid, $instance) {
  $entity = current(entity_load($instance['entity_type'], array($oid)));

  // Flag files for update.
  if (isset($entity->{$instance['field_name']})) {
    foreach ($entity->{$instance['field_name']} as &$language) {
      foreach ($language as &$file) {
        if (!is_array($file) || empty($file['uri'])) {
          continue;
        }

        $file['new'] = TRUE;
      }
    }
  }

  // Process Entity.
  filefield_paths_entity_update($entity, $instance['entity_type']);
}
