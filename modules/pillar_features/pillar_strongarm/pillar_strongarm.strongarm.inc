<?php
/**
 * @file
 * pillar_strongarm.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pillar_strongarm_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'configurable_timezones';
  $strongarm->value = 0;
  $export['configurable_timezones'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Berlin';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '1';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'empty_timezone_message';
  $strongarm->value = 0;
  $export['empty_timezone_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fences_default_classes';
  $strongarm->value = 1;
  $export['fences_default_classes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fences_default_markup';
  $strongarm->value = 1;
  $export['fences_default_markup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'wysiwyg' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_default_scheme';
  $strongarm->value = 'public';
  $export['file_default_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_alt';
  $strongarm->value = '[file:field_file_image_alt_text]';
  $export['file_entity_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_default_allowed_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm';
  $export['file_entity_default_allowed_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_fields';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_file_type';
  $strongarm->value = 1;
  $export['file_entity_file_upload_wizard_skip_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_scheme';
  $strongarm->value = 1;
  $export['file_entity_file_upload_wizard_skip_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_max_filesize';
  $strongarm->value = '';
  $export['file_entity_max_filesize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_title';
  $strongarm->value = '[file:field_file_image_title_text]';
  $export['file_entity_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/files/private';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_public_path';
  $strongarm->value = 'sites/default/files';
  $export['file_public_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_element_name';
  $strongarm->value = 'url';
  $export['honeypot_element_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_user_pass';
  $strongarm->value = 1;
  $export['honeypot_form_user_pass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_user_register_form';
  $strongarm->value = 1;
  $export['honeypot_form_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_log';
  $strongarm->value = 0;
  $export['honeypot_log'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_protect_all_forms';
  $strongarm->value = 0;
  $export['honeypot_protect_all_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_time_limit';
  $strongarm->value = '5';
  $export['honeypot_time_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_jpeg_quality';
  $strongarm->value = '100';
  $export['image_jpeg_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_author_options';
  $strongarm->value = array();
  $export['jammer_author_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_body_options';
  $strongarm->value = array();
  $export['jammer_body_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_comment_settings';
  $strongarm->value = array();
  $export['jammer_comment_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_delete_button_unset_node_types';
  $strongarm->value = array();
  $export['jammer_delete_button_unset_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_menu_options';
  $strongarm->value = array();
  $export['jammer_menu_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_node_promoted';
  $strongarm->value = 1;
  $export['jammer_node_promoted'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_node_sticky';
  $strongarm->value = 1;
  $export['jammer_node_sticky'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_path_options';
  $strongarm->value = array();
  $export['jammer_path_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_preview_button_unset_node_types';
  $strongarm->value = array();
  $export['jammer_preview_button_unset_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_revision_information';
  $strongarm->value = array();
  $export['jammer_revision_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_revision_log_textarea_unset_node_types';
  $strongarm->value = array();
  $export['jammer_revision_log_textarea_unset_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_submit_button_unset_node_types';
  $strongarm->value = array();
  $export['jammer_submit_button_unset_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_teaser_controls_unset_node_types';
  $strongarm->value = array();
  $export['jammer_teaser_controls_unset_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_user_delete_hide_button';
  $strongarm->value = 1;
  $export['jammer_user_delete_hide_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 1;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'Deutsch',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'de',
    'weight' => '-10',
    'javascript' => 'd0ywvlZ81J3EiS2Moc-ZYyLeOByvpxsABv7-6v2Y_0I',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array();
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'manualcrop';
  $strongarm->value = array(
    'cache_control' => 1,
  );
  $export['manualcrop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediaelement_sitewide';
  $strongarm->value = 1;
  $export['mediaelement_sitewide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_icon_base_directory';
  $strongarm->value = 'public://media-icons';
  $export['media_icon_base_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'wysiwyg' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_document_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_document_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'wysiwyg' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_file_wysiwyg_view_mode';
  $strongarm->value = 'teaser';
  $export['media_wysiwyg_view_mode_image_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_file_wysiwyg_view_mode_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_image_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'wysiwyg' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_video_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_video_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'default' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'wysiwyg' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 253,
    4 => 252,
    5 => 250,
    6 => 245,
    7 => 127,
    8 => 126,
    9 => 125,
    10 => 124,
    11 => 123,
    12 => 122,
    13 => 121,
    14 => 117,
    15 => 112,
    16 => 63,
    17 => 62,
    18 => 61,
    19 => 60,
    20 => 59,
    21 => 58,
    22 => 44,
    23 => 31,
    24 => 30,
    25 => 29,
    26 => 27,
    27 => 24,
    28 => 21,
    29 => 15,
    30 => 14,
    31 => 13,
    32 => 11,
    33 => 7,
    34 => 6,
    35 => 5,
    36 => 3,
    37 => 2,
    38 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_schema_installed';
  $strongarm->value = TRUE;
  $export['metatag_schema_installed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minify_captured_js';
  $strongarm->value = array(
    'misc/drupal.js' => array(
      'file_path' => 'misc/drupal.js',
      'file_name' => 'drupal.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/jquery/1.10/jquery.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/jquery/1.10/jquery.min.js',
      'file_name' => 'jquery.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'misc/jquery.once.js' => array(
      'file_path' => 'misc/jquery.once.js',
      'file_name' => 'jquery.once.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/devel/devel_krumo_path.js' => array(
      'file_path' => 'sites/all/modules/devel/devel_krumo_path.js',
      'file_name' => 'devel_krumo_path.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/linkit/editors/ckeditor/linkitDialog.js' => array(
      'file_path' => 'sites/all/modules/linkit/editors/ckeditor/linkitDialog.js',
      'file_name' => 'linkitDialog.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'modules/contextual/contextual.js' => array(
      'file_path' => 'modules/contextual/contextual.js',
      'file_name' => 'contextual.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/admin_menu/admin_menu.js' => array(
      'file_path' => 'sites/all/modules/admin_menu/admin_menu.js',
      'file_name' => 'admin_menu.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js' => array(
      'file_path' => 'sites/all/modules/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js',
      'file_name' => 'admin_menu_toolbar.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_matGYgTm04mmPm92tkORkqoR9k_5PAV96HYRj0F44rQ.js' => array(
      'file_path' => 'public://languages/de_matGYgTm04mmPm92tkORkqoR9k_5PAV96HYRj0F44rQ.js',
      'file_name' => 'de_matGYgTm04mmPm92tkORkqoR9k_5PAV96HYRj0F44rQ.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_NjNIWOTBKKw6Xx2r_G8cBK8Erc2mfciTsrIx-LayZHI.js' => array(
      'file_path' => 'public://languages/de_NjNIWOTBKKw6Xx2r_G8cBK8Erc2mfciTsrIx-LayZHI.js',
      'file_name' => 'de_NjNIWOTBKKw6Xx2r_G8cBK8Erc2mfciTsrIx-LayZHI.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_jWpYc3Efcdstj0Y3T_M6SV5zyWtPZ7WiO_3G8ndIB7c.js' => array(
      'file_path' => 'public://languages/de_jWpYc3Efcdstj0Y3T_M6SV5zyWtPZ7WiO_3G8ndIB7c.js',
      'file_name' => 'de_jWpYc3Efcdstj0Y3T_M6SV5zyWtPZ7WiO_3G8ndIB7c.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_VoFZ384bDFzCjER2Tt8hQ9R60EG0K1yd8eVINogPz64.js' => array(
      'file_path' => 'public://languages/de_VoFZ384bDFzCjER2Tt8hQ9R60EG0K1yd8eVINogPz64.js',
      'file_name' => 'de_VoFZ384bDFzCjER2Tt8hQ9R60EG0K1yd8eVINogPz64.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_bbE4vYT12A_9NMU6NisvM_mmhN6FlZ3gO194w3U-LTg.js' => array(
      'file_path' => 'public://languages/de_bbE4vYT12A_9NMU6NisvM_mmhN6FlZ3gO194w3U-LTg.js',
      'file_name' => 'de_bbE4vYT12A_9NMU6NisvM_mmhN6FlZ3gO194w3U-LTg.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_Xma_1DVUZY1-tAK2V6jVPfE0gZa8MO_8-B_sedGLRng.js' => array(
      'file_path' => 'public://languages/de_Xma_1DVUZY1-tAK2V6jVPfE0gZa8MO_8-B_sedGLRng.js',
      'file_name' => 'de_Xma_1DVUZY1-tAK2V6jVPfE0gZa8MO_8-B_sedGLRng.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/navbar/js/matchmedia.js' => array(
      'file_path' => 'sites/all/modules/navbar/js/matchmedia.js',
      'file_name' => 'matchmedia.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/navbar/js/debounce.js' => array(
      'file_path' => 'sites/all/modules/navbar/js/debounce.js',
      'file_name' => 'debounce.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/navbar/js/announce.js' => array(
      'file_path' => 'sites/all/modules/navbar/js/announce.js',
      'file_name' => 'announce.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/navbar/js/displace.js' => array(
      'file_path' => 'sites/all/modules/navbar/js/displace.js',
      'file_name' => 'displace.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/navbar/js/navbar.menu.js' => array(
      'file_path' => 'sites/all/modules/navbar/js/navbar.menu.js',
      'file_name' => 'navbar.menu.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/navbar/js/navbar.js' => array(
      'file_path' => 'sites/all/modules/navbar/js/navbar.js',
      'file_name' => 'navbar.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/navbar/js/jquery/ducktape.events.js' => array(
      'file_path' => 'sites/all/modules/navbar/js/jquery/ducktape.events.js',
      'file_name' => 'ducktape.events.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_n2JvGFlKvtVlQCezQEl4JghFnagl4vTixAT4Hdf0XyA.js' => array(
      'file_path' => 'public://languages/de_n2JvGFlKvtVlQCezQEl4JghFnagl4vTixAT4Hdf0XyA.js',
      'file_name' => 'de_n2JvGFlKvtVlQCezQEl4JghFnagl4vTixAT4Hdf0XyA.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/libraries/modernizr/modernizr.js' => array(
      'file_path' => 'sites/all/libraries/modernizr/modernizr.js',
      'file_name' => 'modernizr.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/libraries/underscore/underscore-min.js' => array(
      'file_path' => 'sites/all/libraries/underscore/underscore-min.js',
      'file_name' => 'underscore-min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/libraries/backbone/backbone-min.js' => array(
      'file_path' => 'sites/all/libraries/backbone/backbone-min.js',
      'file_name' => 'backbone-min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/admin_menu/admin_devel/admin_devel.js' => array(
      'file_path' => 'sites/all/modules/admin_menu/admin_devel/admin_devel.js',
      'file_name' => 'admin_devel.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_atesXFC0V7CYDVzbN_PIpegKxhYrivCs-fqwYCy1ak8.js' => array(
      'file_path' => 'public://languages/de_atesXFC0V7CYDVzbN_PIpegKxhYrivCs-fqwYCy1ak8.js',
      'file_name' => 'de_atesXFC0V7CYDVzbN_PIpegKxhYrivCs-fqwYCy1ak8.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/ui/external/jquery.cookie.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/ui/external/jquery.cookie.js',
      'file_name' => 'jquery.cookie.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/misc/jquery.form.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/misc/jquery.form.min.js',
      'file_name' => 'jquery.form.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/ctools/js/auto-submit.js' => array(
      'file_path' => 'sites/all/modules/ctools/js/auto-submit.js',
      'file_name' => 'auto-submit.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/media/js/plugins/media.views.js' => array(
      'file_path' => 'sites/all/modules/media/js/plugins/media.views.js',
      'file_name' => 'media.views.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/views/js/base.js' => array(
      'file_path' => 'sites/all/modules/views/js/base.js',
      'file_name' => 'base.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'misc/progress.js' => array(
      'file_path' => 'misc/progress.js',
      'file_name' => 'progress.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/js/jquery_update.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/js/jquery_update.js',
      'file_name' => 'jquery_update.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'misc/ajax.js' => array(
      'file_path' => 'misc/ajax.js',
      'file_name' => 'ajax.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/views/js/ajax_view.js' => array(
      'file_path' => 'sites/all/modules/views/js/ajax_view.js',
      'file_name' => 'ajax_view.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'modules/file/file.js' => array(
      'file_path' => 'modules/file/file.js',
      'file_name' => 'file.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.core.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.core.min.js',
      'file_name' => 'jquery.ui.core.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.widget.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.widget.min.js',
      'file_name' => 'jquery.ui.widget.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.tabs.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.tabs.min.js',
      'file_name' => 'jquery.ui.tabs.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.mouse.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.mouse.min.js',
      'file_name' => 'jquery.ui.mouse.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.draggable.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.draggable.min.js',
      'file_name' => 'jquery.ui.draggable.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.button.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.button.min.js',
      'file_name' => 'jquery.ui.button.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.position.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.position.min.js',
      'file_name' => 'jquery.ui.position.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.resizable.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.resizable.min.js',
      'file_name' => 'jquery.ui.resizable.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.dialog.min.js' => array(
      'file_path' => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.dialog.min.js',
      'file_name' => 'jquery.ui.dialog.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/media/js/media.core.js' => array(
      'file_path' => 'sites/all/modules/media/js/media.core.js',
      'file_name' => 'media.core.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/media/js/util/json2.js' => array(
      'file_path' => 'sites/all/modules/media/js/util/json2.js',
      'file_name' => 'json2.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/media/js/util/ba-debug.min.js' => array(
      'file_path' => 'sites/all/modules/media/js/util/ba-debug.min.js',
      'file_name' => 'ba-debug.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/media/js/media.browser.js' => array(
      'file_path' => 'sites/all/modules/media/js/media.browser.js',
      'file_name' => 'media.browser.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_dRUIbLxaCmT0nHsjIgAT61SzZ_dhaaJmZia-JcuMerw.js' => array(
      'file_path' => 'public://languages/de_dRUIbLxaCmT0nHsjIgAT61SzZ_dhaaJmZia-JcuMerw.js',
      'file_name' => 'de_dRUIbLxaCmT0nHsjIgAT61SzZ_dhaaJmZia-JcuMerw.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/elfinder/js/elfinder.jquery.min.js' => array(
      'file_path' => 'sites/all/modules/elfinder/js/elfinder.jquery.min.js',
      'file_name' => 'elfinder.jquery.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/elfinder/js/elfinder.jquery-ui.min.js' => array(
      'file_path' => 'sites/all/modules/elfinder/js/elfinder.jquery-ui.min.js',
      'file_name' => 'elfinder.jquery-ui.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/libraries/elfinder/js/elfinder.min.js' => array(
      'file_path' => 'sites/all/libraries/elfinder/js/elfinder.min.js',
      'file_name' => 'elfinder.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/libraries/elfinder/js/i18n/elfinder.de.js' => array(
      'file_path' => 'sites/all/libraries/elfinder/js/i18n/elfinder.de.js',
      'file_name' => 'elfinder.de.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/elfinder/editors/ckeditor/ckeditor.callback.js' => array(
      'file_path' => 'sites/all/modules/elfinder/editors/ckeditor/ckeditor.callback.js',
      'file_name' => 'ckeditor.callback.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/elfinder/js/info.js' => array(
      'file_path' => 'sites/all/modules/elfinder/js/info.js',
      'file_name' => 'info.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/elfinder/js/elfinder.callback.js' => array(
      'file_path' => 'sites/all/modules/elfinder/js/elfinder.callback.js',
      'file_name' => 'elfinder.callback.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_NxZFkviA4Rx0VVsyfEpMEV5_xDfE7i8WTfQEiBXS5S8.js' => array(
      'file_path' => 'public://languages/de_NxZFkviA4Rx0VVsyfEpMEV5_xDfE7i8WTfQEiBXS5S8.js',
      'file_name' => 'de_NxZFkviA4Rx0VVsyfEpMEV5_xDfE7i8WTfQEiBXS5S8.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/libraries/mediaelement/build/mediaelement-and-player.min.js' => array(
      'file_path' => 'sites/all/libraries/mediaelement/build/mediaelement-and-player.min.js',
      'file_name' => 'mediaelement-and-player.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/mediaelement/mediaelement.js' => array(
      'file_path' => 'sites/all/modules/mediaelement/mediaelement.js',
      'file_name' => 'mediaelement.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_h0iG0GA0VFLaAuUFzpy6YnRr3l73vOckIIH2FF9cLio.js' => array(
      'file_path' => 'public://languages/de_h0iG0GA0VFLaAuUFzpy6YnRr3l73vOckIIH2FF9cLio.js',
      'file_name' => 'de_h0iG0GA0VFLaAuUFzpy6YnRr3l73vOckIIH2FF9cLio.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_96NTZ2zYDfyU7yUCx0AbgBdaQB-ITPjmqqYRiv_6jKs.js' => array(
      'file_path' => 'public://languages/de_96NTZ2zYDfyU7yUCx0AbgBdaQB-ITPjmqqYRiv_6jKs.js',
      'file_name' => 'de_96NTZ2zYDfyU7yUCx0AbgBdaQB-ITPjmqqYRiv_6jKs.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_8m8XADtCGxOYFhFYeziGLdQYdYQ51eOlucMk0FgiDaw.js' => array(
      'file_path' => 'public://languages/de_8m8XADtCGxOYFhFYeziGLdQYdYQ51eOlucMk0FgiDaw.js',
      'file_name' => 'de_8m8XADtCGxOYFhFYeziGLdQYdYQ51eOlucMk0FgiDaw.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_qm0kXzv8g1IPS9_sBP0ZZ_u12CT75LKhp_aoVJrFbsA.js' => array(
      'file_path' => 'public://languages/de_qm0kXzv8g1IPS9_sBP0ZZ_u12CT75LKhp_aoVJrFbsA.js',
      'file_name' => 'de_qm0kXzv8g1IPS9_sBP0ZZ_u12CT75LKhp_aoVJrFbsA.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'misc/form.js' => array(
      'file_path' => 'misc/form.js',
      'file_name' => 'form.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/themes/zurb-foundation/js/vendor/custom.modernizr.js' => array(
      'file_path' => 'sites/all/themes/zurb-foundation/js/vendor/custom.modernizr.js',
      'file_name' => 'custom.modernizr.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/themes/zurb-foundation/js/foundation.min.js' => array(
      'file_path' => 'sites/all/themes/zurb-foundation/js/foundation.min.js',
      'file_name' => 'foundation.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/themes/pillar/js/vendor/custom.modernizr.js' => array(
      'file_path' => 'sites/all/themes/pillar/js/vendor/custom.modernizr.js',
      'file_name' => 'custom.modernizr.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/themes/pillar/js/foundation.min.js' => array(
      'file_path' => 'sites/all/themes/pillar/js/foundation.min.js',
      'file_name' => 'foundation.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_Buqaql9iBkg5cf0MUFfUw31KnX2x7b9tFZ2kd3V0ZFU.js' => array(
      'file_path' => 'public://languages/de_Buqaql9iBkg5cf0MUFfUw31KnX2x7b9tFZ2kd3V0ZFU.js',
      'file_name' => 'de_Buqaql9iBkg5cf0MUFfUw31KnX2x7b9tFZ2kd3V0ZFU.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/themes/zurb-foundation/js/foundation/foundation.interchange.js' => array(
      'file_path' => 'sites/all/themes/zurb-foundation/js/foundation/foundation.interchange.js',
      'file_name' => 'foundation.interchange.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'public://languages/de_d0ywvlZ81J3EiS2Moc-ZYyLeOByvpxsABv7-6v2Y_0I.js' => array(
      'file_path' => 'public://languages/de_d0ywvlZ81J3EiS2Moc-ZYyLeOByvpxsABv7-6v2Y_0I.js',
      'file_name' => 'de_d0ywvlZ81J3EiS2Moc-ZYyLeOByvpxsABv7-6v2Y_0I.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
  );
  $export['minify_captured_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minify_html';
  $strongarm->value = 1;
  $export['minify_html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minify_js';
  $strongarm->value = 0;
  $export['minify_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array(
    'devel_themer' => 1398255113,
    'dashboard' => 1398255930,
    'overlay' => 1398256226,
    'jammer' => 1398256424,
    'metatag' => 1398257556,
    'metatag_dc' => 1398257556,
    'metatag_opengraph' => 1398263238,
    'metatag_views' => 1398257556,
    'rdf' => 1398263315,
    'media' => 1398268772,
    'mediafield' => 1398268772,
    'media_wysiwyg' => 1398294338,
    'ckeditor_media' => 1398289320,
    'ckeditor' => 1398293240,
    'admin_menu_toolbar' => 1398286370,
    'rules_admin' => 1398284989,
    'admin_menu' => 1398286370,
    'admin_devel' => 1398286370,
    'navbar' => 1398287544,
    'responsive_preview' => 1398288105,
    'wysiwyg' => 1398288207,
    'elfinder' => 1398291358,
    'media_internet' => 1398294338,
    'media_wysiwyg_view_mode' => 1398294980,
    'bulk_media_upload' => 1398296180,
    'insert_video' => 1398299631,
    'insert' => 1398299637,
    'profile2' => 1398305975,
    'efork_customconfigs' => 1398304746,
    'profile2_page' => 1398305968,
    'modernizr' => 1398308747,
  );
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '0';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 1;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_pattern';
  $strongarm->value = 'file/[file:name]';
  $export['pathauto_file_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rename_admin_path';
  $strongarm->value = 1;
  $export['rename_admin_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rename_admin_path_value';
  $strongarm->value = 'backend';
  $export['rename_admin_path_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rename_user_path';
  $strongarm->value = 1;
  $export['rename_user_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rename_user_path_value';
  $strongarm->value = 'member';
  $export['rename_user_path_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'zurb_foundation';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notification_threshold';
  $strongarm->value = 'security';
  $export['update_notification_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'tsc@e-fork.de',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_default_timezone';
  $strongarm->value = '0';
  $export['user_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = 1;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_body';
  $strongarm->value = '[user:name],

Eine Anfrage zur Löschung Ihres Benutzerkontos auf [site:name] wurde gestellt.

Sie können Ihr Konto auf [site:url-brief] jetzt durch Klick auf den folgenden Link löschen oder diesen alternativ in Ihren Browser kopieren:

[user:cancel-url]

HINWEIS: Die Löschung Ihres Benutzerkontos kann nicht rückgängig gemacht werden und ist endgültig.

Der Link ist einen Tag lang gültig und läuft automatisch aus, falls Sie ihn nicht verwenden.

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_cancel_confirm_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_subject';
  $strongarm->value = 'Antrag auf Löschung von Benutzerkonto [user:name] auf [site:name]';
  $export['user_mail_cancel_confirm_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_body';
  $strongarm->value = '[user:name],

eine Anfrage zum Zurücksetzen des Passworts für Ihr Benutzerkonto auf [site:name] wurde gestellt.

Sie können sich jetzt mit einem Klick auf folgenden Link anmelden oder diesen alternativ in Ihren Browser kopieren:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und leitet Sie zu einer Seite, auf der Sie ein neues Passwort festlegen können. Er ist einen Tag lang gültig und läuft automatisch aus, falls Sie ihn nicht verwenden.

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_password_reset_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_subject';
  $strongarm->value = 'Neue Login-Daten für Benutzerkonto [user:name] auf [site:name]';
  $export['user_mail_password_reset_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = '[user:name],

Ein Administrator der Website [site:name] hat für Sie ein Benutzerkonto angelegt. Sie können sich jetzt mit einem Klick auf den folgenden Link anmelden oder diesen alternativ in Ihren Browser kopieren:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und leitet Sie zu einer Seite, auf der Sie ein neues Passwort vergeben können.

Nachdem Sie Ihr Passwort festgelegt haben, können Sie sich zukünftig auf [site:login-url] mit den folgenden Zugangsdaten anmelden:

Benutzername: [user:name]
Passwort: Ihr Passwort

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'Ein Administrator hat für Sie auf [site:name] ein Benutzerkonto angelegt';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = '[user:name],

vielen Dank für die Registrierung auf [site:name]. Sie können sich jetzt mit einem Klick auf den folgenden Link anmelden oder diesen alternativ in Ihren Browser kopieren:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und leitet Sie auf eine Seite, auf der Sie Ihr Passwort festlegen können.

Nachdem Sie Ihr Passwort festgelegt haben, können Sie sich zukünftig mit folgenden Zugangsdaten bei [site:login-url] anmelden:

Benutzername: [user:name]
Passwort: Ihr Passwort

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'Benutzerkontendetails für [user:name] auf [site:name]';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = '[user:name],

vielen Dank für die Registrierung auf [site:name]. Ihr Antrag für ein Benutzerkonto wird aktuell geprüft. Sobald eine Freigabe erfolgt ist, erhalten Sie eine weitere E-Mail mit Informationen zum Login, Setzen Ihres Passwortes sowie weitere Details.

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_register_pending_approval_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = 'Benutzerkontendetails für [user:name] auf [site:name] (Genehmigung durch einen Administrator steht aus)';
  $export['user_mail_register_pending_approval_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_body';
  $strongarm->value = '[user:name],

Ihr Benutzerkonto auf [site:name] wurde aktiviert.

Sie können sich jetzt mit einem Klick auf folgenden Link anmelden oder diesen alternativ in Ihren Browser kopieren:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und leitet Sie zu einer Seite, auf der Sie ein neues Passwort festlegen können.

Nachdem Sie Ihr Passwort festgelegt haben, können Sie sich zukünftig auf [site:login-url] mit den folgenden Zugangsdaten anmelden:

Benutzername: [user:name]
Passwort: Ihr Passwort

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_status_activated_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 1;
  $export['user_mail_status_activated_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_subject';
  $strongarm->value = 'Benutzerkontendetails für [user:name] auf [site:name] (genehmigt)';
  $export['user_mail_status_activated_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_body';
  $strongarm->value = '[user:name],

Ihr Benutzerkonto auf [site:name] wurde gesperrt.

--  [site:name]-Team';
  $export['user_mail_status_blocked_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_notify';
  $strongarm->value = 0;
  $export['user_mail_status_blocked_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_subject';
  $strongarm->value = 'Details für Benutzerkonto [user:name] auf [site:name] (gesperrt)';
  $export['user_mail_status_blocked_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_body';
  $strongarm->value = '[user:name],

Ihr Benutzerkonto auf [site:name] wurde gelöscht.

--  [site:name]-Team';
  $export['user_mail_status_canceled_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_notify';
  $strongarm->value = 0;
  $export['user_mail_status_canceled_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_subject';
  $strongarm->value = 'Details für Benutzerkonto [user:name] auf [site:name] (gelöscht)';
  $export['user_mail_status_canceled_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 1;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'http://gpm.e-fork.virtual/sites/all/modules/workbench/images/profile_default.png';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  return $export;
}
