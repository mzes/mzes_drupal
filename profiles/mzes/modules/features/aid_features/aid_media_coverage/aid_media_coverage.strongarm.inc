<?php
/**
 * @file
 * aid_media_coverage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function aid_media_coverage_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_media_coverage';
  $strongarm->value = 0;
  $export['comment_anonymous_media_coverage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_media_coverage';
  $strongarm->value = 1;
  $export['comment_default_mode_media_coverage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_media_coverage';
  $strongarm->value = '50';
  $export['comment_default_per_page_media_coverage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_media_coverage';
  $strongarm->value = 1;
  $export['comment_form_location_media_coverage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_media_coverage';
  $strongarm->value = '0';
  $export['comment_media_coverage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_media_coverage';
  $strongarm->value = '1';
  $export['comment_preview_media_coverage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_media_coverage';
  $strongarm->value = 1;
  $export['comment_subject_field_media_coverage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_media_coverage';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_media_coverage'] = $strongarm;

  return $export;
}
