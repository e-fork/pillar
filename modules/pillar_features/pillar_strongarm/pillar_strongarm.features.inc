<?php
/**
 * @file
 * pillar_strongarm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pillar_strongarm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
