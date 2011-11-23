<?php
/**
 * @file
 * aid_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aid_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function aid_profile_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => t('Create a profile, which may provide information about a content author, a staff member, an associated researcher or institution, a project collaborator, or even an organization. '),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => t('This is the name used as the title of this content. This may be comprised of the First and Last names, or of the Organization name, or any other name that you choose.'),
    ),
  );
  return $items;
}
