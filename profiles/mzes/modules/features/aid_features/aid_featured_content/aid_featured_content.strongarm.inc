<?php
/**
 * @file
 * aid_featured_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function aid_featured_content_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_featured_content';
  $strongarm->value = 0;
  $export['comment_anonymous_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_featured_content';
  $strongarm->value = 1;
  $export['comment_default_mode_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_featured_content';
  $strongarm->value = '50';
  $export['comment_default_per_page_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_featured_content';
  $strongarm->value = '0';
  $export['comment_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_featured_content';
  $strongarm->value = 1;
  $export['comment_form_location_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_featured_content';
  $strongarm->value = '1';
  $export['comment_preview_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_featured_content';
  $strongarm->value = 1;
  $export['comment_subject_field_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_featured_content';
  $strongarm->value = '1';
  $export['i18n_node_extended_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_featured_content';
  $strongarm->value = array();
  $export['i18n_node_options_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_featured_content';
  $strongarm->value = array(
    0 => 'comment',
    1 => 'status',
    2 => 'promote',
    3 => 'moderate',
    4 => 'sticky',
    5 => 'field_featured_content_image',
  );
  $export['i18n_sync_node_type_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_featured_content';
  $strongarm->value = '2';
  $export['language_content_type_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_featured_content';
  $strongarm->value = array();
  $export['menu_options_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_featured_content';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_featured_content';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_featured_content';
  $strongarm->value = '1';
  $export['node_preview_featured_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_featured_content';
  $strongarm->value = 0;
  $export['node_submitted_featured_content'] = $strongarm;

  return $export;
}
