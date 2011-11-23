<?php
/**
 * @file
 * This file contains the admin functions for the Media browser plus module.
 */


/**
 * @todo Document what this function does.
 *
 * @param $files
 * @param $context
 */
function media_browser_plus_folder_media_import($root, $dir, &$context) {
  $per_page = 50;
  $media_count = media_browser_plus_load_multiple(array('apply_filter' => FALSE, 'count_only' => TRUE));

  if (empty($context['sandbox'])) {
    $context['sandbox']['progress'] = 0;
    $context['sandbox']['max'] = $media_count;
  }
  // Look how far we got and where we have to resume.
  $media_start = $context['sandbox']['progress'];
  $page = $media_start == 0 ? 0 : bcdiv($media_start, $per_page, 0);

  if (!isset($context['results'])) {
    $context['results'] = array('success' => array(), 'errors' => array());
  }
  $order = array(array('property' => array('fid', 'ASC')));
  $attributes = array('apply_filter' => FALSE, 'paging' => TRUE, 'per_page' => $per_page, 'page' => $page, 'order' => $order);
  $media_query = media_browser_plus_load_multiple($attributes);
  // Checking media.
  foreach ($media_query->results as $media) {
    if (!isset($media->field_folder[LANGUAGE_NONE])) {
      $media->field_folder = array(LANGUAGE_NONE => array(array('tid' => $root)));
      $context['results']['success'] = $media->fid;
      $destination = $dir . $media->filename;
      file_move($media, $destination, FILE_EXISTS_RENAME);
    }
  }
  // Increment start.
  $media_start = $media_start + $per_page;
  // Make sure start is not above max (for progress).
  $media_start = $media_start > $media_count ? $media_count : $media_start;
  // Set sandbox value.
  $context['sandbox']['max'] = $media_count;
  $context['sandbox']['progress'] = $media_start;
  // And other context values.
  $context['message'] = t('Checking') . '...(' . $context['sandbox']['progress'] . '/' . $context['sandbox']['max'] . ') ';
  if ($context['sandbox']['progress'] < $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  }
}

/**
 * Finished
 *
 * @param $success
 * @param $results
 * @param $operations
 */
function media_browser_plus_folder_media_import_finished($success, $results, $operations) {
  if ($success) {
    drupal_set_message(t('Successful put all "unfolderized" media items into "Media Root" folder'));
  }
  else {
    drupal_set_message(t('Error during media batch'), 'error');
  }
  variable_del('media_folder_import_start');
  if (!drupal_installation_attempted()) {
    drupal_goto('admin/content/media');
  }
}

