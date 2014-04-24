<?php
/**
 * @file
 * pillar_textformate.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pillar_textformate_filter_default_formats() {
  $formats = array();

  // Exported format: Default.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Default',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
