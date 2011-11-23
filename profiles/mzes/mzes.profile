<?php

// Use Profiler for creating install profile
!function_exists('profiler_v2') ? require_once('libraries/profiler/profiler.inc') : FALSE;
profiler_v2('mzes');

/**
 * Implements hook_init
 */
// function mzes_init() {
//  $cache = cache_get("mzes_info");
//  if (isset($cache->data)) {
//    $data = $cache->data;
//  }
//  else {
//    $info =  drupal_parse_info_file(dirname(__file__) . '/mzes.info');
//    $data = array("profile" => "mzes", "profile_version" => $info['version']);
//    cache_set("mzes_info", $data);
//  }
//  drupal_add_js($data, 'setting');
// 
// }

/**
 * implements hook_install_configure_form_alter()
 */
function mzes_form_install_configure_form_alter(&$form, &$form_state) {
  $form['site_information']['site_name']['#default_value'] = 'Mannheimer Zentrum für Europäische Sozialforschung'; 
  $form['site_information']['site_mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST']; 
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST']; 
}
