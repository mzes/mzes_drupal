<?php
/**
 * @file
 * aid_news_item.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aid_news_item_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function aid_news_item_node_info() {
  $items = array(
    'news_item' => array(
      'name' => t('News Item'),
      'base' => 'node_content',
      'description' => t('Use news items for time-specific content like general news or announcements.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
