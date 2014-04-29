; pillar make file for local development
core = "7.x"
api = "2"

projects[drupal][version] = "7.x"
; include the d.o. profile base
;includes[] = "drupal-org.make"

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

projects[pillar_customconfigs][version] = "1"
projects[pillar_customconfigs][type] = "module"
projects[pillar_customconfigs][download][type] = "git"
projects[pillar_customconfigs][subdir] = "contrib"
projects[pillar_customconfigs][download][url] = "git@github.com:devtim123/pillar_customconfigs.git"

projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

projects[features_translations][version] = "1.0-beta4"
projects[features_translations][subdir] = "contrib"

projects[features_roles_permissions][version] = "1.0"
projects[features_roles_permissions][subdir] = "contrib"

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
projects[pillar_berechtigungen][type] = "module"
projects[pillar_berechtigungen][download][type] = "git"
projects[pillar_berechtigungen][subdir] = "contrib"
projects[pillar_berechtigungen][download][url] = "git@github.com:devtim123/pillar_berechtigungen.git"

projects[pillar_bildstile][version] = "1.0"
projects[pillar_bildstile][type] = "module"
projects[pillar_bildstile][download][type] = "git"
projects[pillar_bildstile][subdir] = "contrib"
projects[pillar_bildstile][download][url] = "git@github.com:devtim123/pillar_bildstile.git"

projects[pillar_linkit_profil][version] = "1.0"
projects[pillar_linkit_profil][type] = "module"
projects[pillar_linkit_profil][download][type] = "git"
projects[pillar_linkit_profil][subdir] = "contrib"
projects[pillar_linkit_profil][download][url] = "git@github.com:devtim123/pillar_linkit_profil.git"

projects[pillar_nutzer_rollen][version] = "1.0"
projects[pillar_nutzer_rollen][type] = "module"
projects[pillar_nutzer_rollen][download][type] = "git"
projects[pillar_nutzer_rollen][subdir] = "contrib"
projects[pillar_nutzer_rollen][download][url] = "git@github.com:devtim123/pillar_nutzer_rollen.git"

projects[pillar_sprache_bersetzung][version] = "1.0"
projects[pillar_sprache_bersetzung][type] = "module"
projects[pillar_sprache_bersetzung][download][type] = "git"
projects[pillar_sprache_bersetzung][subdir] = "contrib"
projects[pillar_sprache_bersetzung][download][url] = "git@github.com:devtim123/pillar_sprache_bersetzung.git"

projects[pillar_strongarm][version] = "1.0"
projects[pillar_strongarm][type] = "module"
projects[pillar_strongarm][download][type] = "git"
projects[pillar_strongarm][subdir] = "contrib"
projects[pillar_strongarm][download][url] = "git@github.com:devtim123/pillar_strongarm.git"

projects[pillar_textformate][version] = "1.0"
projects[pillar_textformate][type] = "module"
projects[pillar_textformate][download][type] = "git"
projects[pillar_textformate][subdir] = "contrib"
projects[pillar_textformate][download][url] = "git@github.com:devtim123/pillar_textformate.git"

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

; +++++ Profiles +++++

; pillar
projects[pillar][type] = "profile"
projects[pillar][download][type] = "git"
projects[pillar][download][destination] = "profiles"
projects[pillar][download][url] = "git@github.com:devtim123/pillar.git"

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
libraries[plupload][patch][] = "http://drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-16.patch"
libraries[plupload][download][type] = "file"
libraries[plupload][download][url] = "http://github.com/moxiecode/plupload/archive/v1.5.8.zip"


; +++++ Patches +++++

; Patch to allow install profile enabling to enable dependencies correctly.
projects[drupal][patch][1093420] = "http://drupal.org/files/1093420-22.patch"

; Solve 'msie' of undefined Error against jQuery > 1.7
projects[admin_menu][patch][1961178] = "http://drupal.org/files/issues/admin_menu-ie6detect-1961178-2.patch"

;Fences Undefined Index (with installation profiles and features)
projects[fences][patch][1561244] = "http://drupal.org/files/undefined-index-1561244-7.patch"


; +++++ Libraries +++++

; s3-php5-curl
libraries[s3-php5-curl][directory_name] = "s3-php5-curl"
libraries[s3-php5-curl][type] = "library"
libraries[s3-php5-curl][destination] = "libraries"
libraries[s3-php5-curl][download][type] = "get"
libraries[s3-php5-curl][download][url] = "http://amazon-s3-php-class.googlecode.com/files/s3-php5-curl_0.4.0.tar.gz"

; simplehtmldom
libraries[simplehtmldom][directory_name] = "simplehtmldom"
libraries[simplehtmldom][type] = "library"
libraries[simplehtmldom][destination] = "libraries"
libraries[simplehtmldom][download][type] = "get"
libraries[simplehtmldom][download][url] = "http://downloads.sourceforge.net/project/simplehtmldom/simplehtmldom/1.5/simplehtmldom_1_5.zip?r=&ts=1398438581&use_mirror=sunet"

; jquery.imgareaselect
libraries[jquery.imgareaselect][directory_name] = "jquery.imgareaselect"
libraries[jquery.imgareaselect][type] = "library"
libraries[jquery.imgareaselect][destination] = "libraries"
libraries[jquery.imgareaselect][download][type] = "get"
libraries[jquery.imgareaselect][download][url] = "http://odyniec.net/projects/imgareaselect/jquery.imgareaselect-0.9.10.zip"

; jquery.imagesloaded
libraries[jquery.imagesloaded][directory_name] = "jquery.imagesloaded"
libraries[jquery.imagesloaded][type] = "library"
libraries[jquery.imagesloaded][destination] = "libraries"
libraries[jquery.imagesloaded][download][type] = "get"
libraries[jquery.imagesloaded][download][url] = "http://github.com/desandro/imagesloaded/archive/master.zip"

; mediaelement
libraries[mediaelement][directory_name] = "mediaelement"
libraries[mediaelement][type] = "library"
libraries[mediaelement][destination] = "libraries"
libraries[mediaelement][download][type] = "get"
libraries[mediaelement][download][url] = "http://github.com/johndyer/mediaelement/zipball/master"