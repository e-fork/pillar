; pillar make file for d.o. usage
core = "7.x"
api = "2"

; +++++ Modules +++++

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[menu_admin_per_menu][version] = "1.0"
projects[menu_admin_per_menu][subdir] = "contrib"

projects[module_filter][version] = "2.0-alpha2"
projects[module_filter][subdir] = "contrib"

projects[rename_admin_paths][version] = "2.1"
projects[rename_admin_paths][subdir] = "contrib"

projects[ctools][version] = "1.4"
projects[ctools][subdir] = "contrib"

projects[date][version] = "2.7"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.4"
projects[devel][subdir] = "contrib"

projects[profiler_builder][version] = "1.0"
projects[profiler_builder][subdir] = "contrib"

projects[efork_customconfigs][version] = "1"
projects[efork_customconfigs][subdir] = "contrib"

projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

projects[features_translations][version] = "1.0-beta4"
projects[features_translations][subdir] = "contrib"

projects[fences][version] = "1.0"
projects[fences][subdir] = "contrib"

projects[filefield_sources][version] = "1.9"
projects[filefield_sources][subdir] = "contrib"

projects[filefield_sources_plupload][version] = "1.1"
projects[filefield_sources_plupload][subdir] = "contrib"

projects[link][version] = "1.2"
projects[link][subdir] = "contrib"

projects[manualcrop][version] = "1.4"
projects[manualcrop][subdir] = "contrib"

projects[jammer][version] = "1.3"
projects[jammer][subdir] = "contrib"

projects[file_entity][version] = "2.0-alpha3"
projects[file_entity][subdir] = "contrib"

projects[media][version] = "2.x-dev"
projects[media][subdir] = "contrib"

projects[plupload][version] = "1.6"
projects[plupload][subdir] = "contrib"

projects[l10n_update][version] = "1.0"
projects[l10n_update][subdir] = "contrib"

projects[backup_migrate][version] = "2.8"
projects[backup_migrate][subdir] = "contrib"

projects[backup_migrate_files][version] = "1.x-dev"
projects[backup_migrate_files][subdir] = "contrib"

projects[entity][version] = "1.5"
projects[entity][subdir] = "contrib"

projects[field_formatter_settings][version] = "1.1"
projects[field_formatter_settings][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[linkit][version] = "3.1"
projects[linkit][subdir] = "contrib"

projects[linkit_target][version] = "3.x-dev"
projects[linkit_target][subdir] = "contrib"

projects[mediaelement][version] = "1.2"
projects[mediaelement][subdir] = "contrib"

projects[multiform][version] = "1.0"
projects[multiform][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[rabbit_hole][version] = "2.22"
projects[rabbit_hole][subdir] = "contrib"

projects[simplehtmldom][version] = "2.1"
projects[simplehtmldom][subdir] = "contrib"

projects[simplified_menu_admin][version] = "1.0-beta2"
projects[simplified_menu_admin][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[zurb_interchange][version] = "1.x-dev"
projects[zurb_interchange][subdir] = "contrib"

projects[globalredirect][version] = "1.5"
projects[globalredirect][subdir] = "contrib"

projects[minify][version] = "1.1"
projects[minify][subdir] = "contrib"

projects[pillar_berechtigungen][version] = "1.0"
projects[pillar_berechtigungen][subdir] = "contrib"

projects[pillar_bildstile][version] = "1.0"
projects[pillar_bildstile][subdir] = "contrib"

projects[pillar_linkit_profil][version] = "1.0"
projects[pillar_linkit_profil][subdir] = "contrib"

projects[pillar_nutzer_rollen][version] = "1.0"
projects[pillar_nutzer_rollen][subdir] = "contrib"

projects[pillar_sprache_bersetzung][version] = "1.0"
projects[pillar_sprache_bersetzung][subdir] = "contrib"

projects[pillar_strongarm][version] = "1.0"
projects[pillar_strongarm][subdir] = "contrib"

projects[pillar_textformate][version] = "1.0"
projects[pillar_textformate][subdir] = "contrib"

projects[rules][version] = "2.6"
projects[rules][subdir] = "contrib"

projects[metatag][version] = "1.0-beta9"
projects[metatag][subdir] = "contrib"

projects[honeypot][version] = "1.16"
projects[honeypot][subdir] = "contrib"

projects[jquery_update][version] = "2.4"
projects[jquery_update][subdir] = "contrib"

projects[wysiwyg][version] = "2.x-dev"
projects[wysiwyg][subdir] = "contrib"

projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

projects[workbench][version] = "1.2"
projects[workbench][subdir] = "contrib"

; +++++ Themes +++++

; adminimal_theme
projects[adminimal_theme][type] = "theme"
projects[adminimal_theme][version] = "1.4"
projects[adminimal_theme][subdir] = "contrib"

; zurb-foundation
projects[zurb-foundation][type] = "theme"
projects[zurb-foundation][version] = "5.x-dev"
projects[zurb-foundation][subdir] = "contrib"

; +++++ Libraries +++++

; CKeditor
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.1/ckeditor_3.6.6.1.tar.gz"

; Plupload
libraries[plupload][directory_name] = "plupload"
libraries[plupload][type] = "library"
libraries[plupload][destination] = "libraries"
libraries[plupload][patch][] = "http://drupal.org/files/plupload-1_5_6-rm_examples-1903850-5.patch"
libraries[plupload][download][type] = "file"
libraries[plupload][download][url] = "http://plupload.com/downloads/plupload_1_5_6.zip"

