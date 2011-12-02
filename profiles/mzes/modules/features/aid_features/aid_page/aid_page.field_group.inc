<?php
/**
 * @file
 * aid_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aid_page_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_page_associated|node|page|form';
  $field_group->group_name = 'group_site_page_associated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_page_supplemental';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '8',
    'children' => array(
      0 => 'field_site_page_attachments',
      1 => 'field_site_page_media_assets',
      2 => 'field_site_page_related_nodes',
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
  $export['group_site_page_associated|node|page|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_page_classification|node|page|form';
  $field_group->group_name = 'group_site_page_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_site_page_supplemental';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '7',
    'children' => array(
      0 => 'field_site_page_tags',
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
  $export['group_site_page_classification|node|page|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_page_supplemental|node|page|form';
  $field_group->group_name = 'group_site_page_supplemental';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supplemental Info',
    'weight' => '5',
    'children' => array(
      0 => 'group_site_page_classification',
      1 => 'group_site_page_associated',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_site_page_supplemental|node|page|form'] = $field_group;

  return $export;
}
