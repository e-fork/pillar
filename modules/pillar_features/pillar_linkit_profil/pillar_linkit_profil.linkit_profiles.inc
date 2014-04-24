<?php
/**
 * @file
 * pillar_linkit_profil.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function pillar_linkit_profil_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'linkit_standard';
  $linkit_profile->admin_title = 'Linkit_Standard';
  $linkit_profile->admin_description = 'Standardverlinkung von Nodes';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'plain_text' => 'plain_text',
    ),
    'search_plugins' => array(
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-9',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-8',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-7',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'article' => 0,
        'page' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-9',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '1',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['linkit_standard'] = $linkit_profile;

  return $export;
}
