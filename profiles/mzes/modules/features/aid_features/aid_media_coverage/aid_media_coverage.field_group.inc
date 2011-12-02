<?php
/**
 * @file
 * aid_media_coverage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aid_media_coverage_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_coverage_associated|node|media_coverage|form';
  $field_group->group_name = 'group_media_coverage_associated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_coverage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media_coverage_supplement';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '22',
    'children' => array(
      0 => 'field_media_coverage_assets',
      1 => 'field_media_coverage_attachments',
      2 => 'field_media_coverage_biblio',
      3 => 'field_media_coverage_profile',
      4 => 'field_media_coverage_project',
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
  $export['group_media_coverage_associated|node|media_coverage|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_coverage_classifi|node|media_coverage|form';
  $field_group->group_name = 'group_media_coverage_classifi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_coverage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media_coverage_supplement';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '21',
    'children' => array(
      0 => 'field_media_coverage_category',
      1 => 'field_media_coverage_department',
      2 => 'field_media_coverage_res_area',
      3 => 'field_media_coverage_tags',
      4 => 'field_media_coverage_topics',
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
  $export['group_media_coverage_classifi|node|media_coverage|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_coverage_supplement|node|media_coverage|form';
  $field_group->group_name = 'group_media_coverage_supplement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_coverage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supplemental Info',
    'weight' => '9',
    'children' => array(
      0 => 'group_media_coverage_classifi',
      1 => 'group_media_coverage_associated',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_media_coverage_supplement|node|media_coverage|form'] = $field_group;

  return $export;
}
