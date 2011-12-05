<?php
/**
 * @file
 * mzes_displaysuite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mzes_displaysuite_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
