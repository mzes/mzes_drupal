<?php
/**
 * @file
 * mzes_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mzes_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_staff|node|profile|form';
  $field_group->group_name = 'group_profile_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_supplemental';
  $field_group->data = array(
    'label' => 'Staff Info',
    'weight' => '56',
    'children' => array(
      0 => 'field_profile_staff',
      1 => 'field_profile_staff_status',
      2 => 'field_profile_title_job',
      3 => 'field_profile_gender',
      4 => 'field_profile_internal_email',
      5 => 'field_profile_staff_external',
      6 => 'field_profile_staff_position',
      7 => 'field_profile_staff_rec_no',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_staff|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_supplemental|node|profile|form';
  $field_group->group_name = 'group_profile_supplemental';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supplemental Info',
    'weight' => '15',
    'children' => array(
      0 => 'group_profile_contact',
      1 => 'group_profile_personal',
      2 => 'group_profile_research',
      3 => 'group_profile_staff',
      4 => 'group_profile_classification',
      5 => 'group_profile_links',
      6 => 'group_profile_associated',
      7 => 'group_profile_admin_meta',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_profile_supplemental|node|profile|form'] = $field_group;

  return $export;
}
