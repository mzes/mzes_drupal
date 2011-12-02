<?php
/**
 * @file
 * aid_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aid_event_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_associated|node|event|form';
  $field_group->group_name = 'group_event_associated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_supplemental';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '22',
    'children' => array(
      0 => 'field_event_attachments',
      1 => 'field_event_media_assets',
      2 => 'field_event_related_nodes',
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
  $export['group_event_associated|node|event|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_classification|node|event|form';
  $field_group->group_name = 'group_event_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_supplemental';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '19',
    'children' => array(
      0 => 'field_event_category',
      1 => 'field_event_department',
      2 => 'field_event_internal',
      3 => 'field_event_research_area',
      4 => 'field_event_tags',
      5 => 'field_event_topics',
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
  $export['group_event_classification|node|event|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_links|node|event|form';
  $field_group->group_name = 'group_event_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_supplemental';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '21',
    'children' => array(
      0 => 'field_event_urls',
      1 => 'field_event_website',
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
  $export['group_event_links|node|event|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_supplemental|node|event|form';
  $field_group->group_name = 'group_event_supplemental';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supplemental Info',
    'weight' => '7',
    'children' => array(
      0 => 'group_event_links',
      1 => 'group_event_associated',
      2 => 'group_event_classification',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_event_supplemental|node|event|form'] = $field_group;

  return $export;
}
