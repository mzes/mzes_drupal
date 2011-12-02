<?php
/**
 * @file
 * aid_news_item.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aid_news_item_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_item_associated|node|news_item|form';
  $field_group->group_name = 'group_news_item_associated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_item_supplemental';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '15',
    'children' => array(
      0 => 'field_news_item_attachments',
      1 => 'field_news_item_media_assets',
      2 => 'field_news_item_related_nodes',
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
  $export['group_news_item_associated|node|news_item|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_item_categorization|node|news_item|form';
  $field_group->group_name = 'group_news_item_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_item_supplemental';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '14',
    'children' => array(
      0 => 'field_news_item_category',
      1 => 'field_news_item_department',
      2 => 'field_news_item_research_area',
      3 => 'field_news_item_tags',
      4 => 'field_news_item_topics',
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
  $export['group_news_item_categorization|node|news_item|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_item_supplemental|node|news_item|form';
  $field_group->group_name = 'group_news_item_supplemental';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supplemental Info',
    'weight' => '4',
    'children' => array(
      0 => 'group_news_item_categorization',
      1 => 'group_news_item_associated',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_news_item_supplemental|node|news_item|form'] = $field_group;

  return $export;
}
