<?php
/**
 * @file
 * pillar_linkit_profil.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pillar_linkit_profil_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}
