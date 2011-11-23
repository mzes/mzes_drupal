<?php
/**
 * @file
 * aid_media_coverage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aid_media_coverage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function aid_media_coverage_node_info() {
  $items = array(
    'media_coverage' => array(
      'name' => t('Media Coverage'),
      'base' => 'node_content',
      'description' => t('Use for media coverage about your organization.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
