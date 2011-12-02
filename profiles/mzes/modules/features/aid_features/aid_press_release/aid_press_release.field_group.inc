<?php
/**
 * @file
 * aid_press_release.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aid_press_release_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_press_release_associated|node|press_release|form';
  $field_group->group_name = 'group_press_release_associated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_press_release_supplemental';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '15',
    'children' => array(
      0 => 'field_pressrelease_attachments',
      1 => 'field_pressrelease_media_assets',
      2 => 'field_pressrelease_related_nodes',
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
  $export['group_press_release_associated|node|press_release|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_press_release_classifi|node|press_release|form';
  $field_group->group_name = 'group_press_release_classifi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_press_release_supplemental';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '14',
    'children' => array(
      0 => 'field_pressrelease_category',
      1 => 'field_pressrelease_department',
      2 => 'field_pressrelease_res_areas',
      3 => 'field_pressrelease_tags',
      4 => 'field_pressrelease_topics',
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
  $export['group_press_release_classifi|node|press_release|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_press_release_supplemental|node|press_release|form';
  $field_group->group_name = 'group_press_release_supplemental';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supplemental Info',
    'weight' => '4',
    'children' => array(
      0 => 'group_press_release_classifi',
      1 => 'group_press_release_associated',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_press_release_supplemental|node|press_release|form'] = $field_group;

  return $export;
}
