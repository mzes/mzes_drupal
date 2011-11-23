<?php
/**
 * @file
 * aid_defaults.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function aid_defaults_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '5',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '3',
  );

  // Exported role: staff
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => '2',
  );

  // Exported role: web editor
  $roles['web editor'] = array(
    'name' => 'web editor',
    'weight' => '4',
  );

  return $roles;
}
