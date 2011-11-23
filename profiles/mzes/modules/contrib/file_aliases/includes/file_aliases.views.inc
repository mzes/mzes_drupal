<?php
/**
 * @file
 * Contains views data and handlers for the File Aliases module.
 */

/**
 * Implements hook_views_handlers().
 */
function file_aliases_views_handlers() {
  $handlers = array(
    'info' => array(
      'path' => drupal_get_path('module', 'file_aliases') . '/includes',
    ),
    'handlers' => array(
      'file_aliases_views_handler_field_file' => array(
        'parent' => 'views_handler_field_file',
      ),
    ),
  );

  // Invoke file_aliases_hook_views_handlers().
  foreach (module_list() as $module) {
    if (function_exists($function = 'file_aliases_' . $module . '_views_handlers')) {
      $function($handlers['handlers']);
    }
  }

  return $handlers;
}

/**
 * Implements hook_views_data_alter().
 */
function file_aliases_views_data_alter(&$data) {
  $data['files']['filealias'] = array(
    'title' => t('Path Alias'),
    'help' => t('The path alias of the file.'),
    'field' => array(
      'handler' => 'file_aliases_views_handler_field_file',
      'click sortable' => TRUE,
    ),
  );

  // Invoke file_aliases_hook_views_data_alter().
  foreach (module_list() as $module) {
    if (function_exists($function = 'file_aliases_' . $module . '_views_data_alter')) {
      $function($data);
    }
  }
}
