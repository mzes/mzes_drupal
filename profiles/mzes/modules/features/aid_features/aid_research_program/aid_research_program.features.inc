<?php
/**
 * @file
 * aid_research_program.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aid_research_program_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function aid_research_program_node_info() {
  $items = array(
    'research_program' => array(
      'name' => t('Research Program'),
      'base' => 'node_content',
      'description' => t('Describe a coordinated set of projects undertaking related research. This content type takes the form of an outline with built-in hierarchical navigation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'research_program_section' => array(
      'name' => t('Research Program Section'),
      'base' => 'node_content',
      'description' => t('Create a section of a research program.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
