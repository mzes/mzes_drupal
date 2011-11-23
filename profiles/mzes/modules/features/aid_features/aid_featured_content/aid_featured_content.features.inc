<?php
/**
 * @file
 * aid_featured_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aid_featured_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function aid_featured_content_node_info() {
  $items = array(
    'featured_content' => array(
      'name' => t('Featured Content'),
      'base' => 'node_content',
      'description' => t('Featured content for prominent display, e.g. in the main carousel atop the home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
