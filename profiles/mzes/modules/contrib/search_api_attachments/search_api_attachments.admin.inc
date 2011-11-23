<?php


/**
 * @file
 * Admin settings
 */

/**
 * Page callback to show the settings for the attachments.
 */
function search_api_attachments_settings_form() {
  $form = array();
  $form['search_api_attachments_tika_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Tika directory path:'),
    '#default_value' => variable_get('search_api_attachments_tika_path', ''),
    '#description' => t('The full path to tika directory. All library jars must be in the same directory. E.g. /var/apache-tika-0.8-src/tika-app/target/'),
  );
  $form['search_api_attachments_tika_jar'] = array(
    '#type' => 'textfield',
    '#title' => t('Tika jar file:'),
    '#default_value' => variable_get('search_api_attachments_tika_jar', 'tika-app-0.8.jar'),
    '#description' => t('The name of the tika CLI application jar file, e.g. tika-app-0.8.jar.'),
  );
  return system_settings_form($form);
}

/**
 * Validation handler for the settings form.
 */
function search_api_attachments_settings_form_validate($form, &$form_state) {
  if (empty($form_state['values']['search_api_attachments_tika_jar'])) {
    form_set_error('search_api_attachments_tika_jar', t('Tika jar is mandatory.'));
  }
  $path = realpath($form_state['values']['search_api_attachments_tika_path']);
  if (!file_exists($path . '/' . $form_state['values']['search_api_attachments_tika_jar'])) {
    form_set_error('search_api_attachments_tika_path', t('Tika jar file not found at this path.'));
  }
}
