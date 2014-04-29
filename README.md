Pillar
======
Drupal 7 Profile/Distribution for fast projectcreation. This profile was developed by (https://www.e-fork.de "e-fork") and (https://www.devtim.de "devtim"). It gives easy start assistance for the most drupal website-projects. The most needed modules are already configured so the installation gives some optimized behauvior for editors, admins and also includes SEO via metatags. It also uses the Media (7.x-2.0-alpha3+79-dev) module for filemanagent, and the mediaelent.js for HTML5-Video support for older browsers. Backend-theme is adminimal, frontend-theme is ZURB Foundation V5 to give the best experience for responsive behauvior.

Quick install and usage
=======================
To use pillar from scratch create a new project directory, copy paste just the "pillar.make" file in it and execute following command:
```batchfile
drush make pillar.make
```
Now the whole Drupal 7, all modules, themes and the install profile pillar will be downloaded to your directory. After that visit your new site (for example on "localhost") and install your website. As default the pillar installprofile is selected. 

@note: if you want to change the installprofile to standard, update the parameter in the url from pillar to standard.

Now update your modules and your translationfiles (tranlation over UI).
```batchfile
drush up
```
Now you are ready to install a new subtheme from foundation with following command:
```batchfile
drush fst [THEMENAME] [!OPTIONAL DESCRIPTION]
```
Finally clear your cache:
```batchfile
drush cc all
```
You are ready to develop your new website with the power of pillar ;)

Under the hood
==============
Following modules are installed and enabled as default

| Paket                       | Name                                                     | Version               |
| --------------------------- | -------------------------------------------------------- | --------------------- |
| Administration              | Administration Development tools (admin_devel)           | 7.x-3.0-rc4           | 
| Administration              | Administration menu (admin_menu)                         | 7.x-3.0-rc4           | 
| Administration              | Administration menu Toolbar style (admin_menu_toolbar)   | 7.x-3.0-rc4           | 
| Administration              | Menu Admin per Menu (menu_admin_per_menu)                | 7.x-1.0               | 
| Administration              | Module filter (module_filter)                            | 7.x-2.0-alpha2        | 
| Administration              | Rename Admin Paths (rename_admin_paths)                  | 7.x-2.1               | 
| Chaos tool suite            | Chaos tools (ctools)                                     | 7.x-1.4               | 
| Core                        | Block (block)                                            | 7.27+38-dev           | 
| Core                        | Color (color)                                            | 7.27+38-dev           | 
| Core                        | Contextual links (contextual)                            | 7.27+38-dev           | 
| Core                        | Database logging (dblog)                                 | 7.27+38-dev           | 
| Core                        | Field (field)                                            | 7.27+38-dev           | 
| Core                        | Field SQL storage (field_sql_storage)                    | 7.27+38-dev           | 
| Core                        | Field UI (field_ui)                                      | 7.27+38-dev           | 
| Core                        | File (file)                                              | 7.27+38-dev           | 
| Core                        | Filter (filter)                                          | 7.27+38-dev           | 
| Core                        | Image (image)                                            | 7.27+38-dev           | 
| Core                        | List (list)                                              | 7.27+38-dev           | 
| Core                        | Locale (locale)                                          | 7.27+38-dev           | 
| Core                        | Menu (menu)                                              | 7.27+38-dev           | 
| Core                        | Node (node)                                              | 7.27+38-dev           | 
| Core                        | Number (number)                                          | 7.27+38-dev           | 
| Core                        | Options (options)                                        | 7.27+38-dev           | 
| Core                        | Path (path)                                              | 7.27+38-dev           | 
| Core                        | System (system)                                          | 7.27+38-dev           | 
| Core                        | Taxonomy (taxonomy)                                      | 7.27+38-dev           | 
| Core                        | Text (text)                                              | 7.27+38-dev           | 
| Core                        | Update manager (update)                                  | 7.27+38-dev           | 
| Core                        | User (user)                                              | 7.27+38-dev           | 
| Date/Time                   | Date (date)                                              | 7.x-2.7               | 
| Date/Time                   | Date API (date_api)                                      | 7.x-2.7               | 
| Features                    | Features (features)                                      | 7.x-2.0               | 
| Features                    | Features Roles Permissions (features_roles_permissions)  | 7.x-1.0               | 
| Features                    | Features Translations (features_translations)            | 7.x-1.0-beta4         | 
| Fields                      | Fences (fences)                                          | 7.x-1.0               | 
| Fields                      | File Field Sources (filefield_sources)                   | 7.x-1.9               | 
| Fields                      | FileField Sources Plupload (filefield_sources_plupload)  | 7.x-1.1               | 
| Fields                      | Link (link)                                              | 7.x-1.2               | 
| Image                       | Manual Crop (manualcrop)                                 | 7.x-1.4               | 
| Jammer                      | Content Form Jammer (jammer)                             | 7.x-1.3               | 
| Media                       | File entity (file_entity)                                | 7.x-2.0-alpha3        | 
| Media                       | Media (media)                                            | 7.x-2.0-alpha3+79-dev | 
| Media                       | Media Bulk Upload (media_bulk_upload)                    | 7.x-2.0-alpha3+79-dev | 
| Media                       | Media Field (mediafield)                                 | 7.x-2.0-alpha3+79-dev | 
| Media                       | Media Internet Sources (media_internet)                  | 7.x-2.0-alpha3+79-dev | 
| Media                       | Media WYSIWYG (media_wysiwyg)                            | 7.x-2.0-alpha3+79-dev | 
| Media                       | Plupload integration module (plupload)                   | 7.x-1.6               | 
| Multilingual                | Localization update (l10n_update)                        | 7.x-1.0               | 
| Other                       | Backup and Migrate (backup_migrate)                      | 7.x-2.8               |  
| Other                       | Backup and Migrate Files (backup_migrate_files)          | 7.x-1.x-dev           | 
| Other                       | Entity API (entity)                                      | 7.x-1.5               | 
| Other                       | Entity tokens (entity_token)                             | 7.x-1.5               | 
| Other                       | Field formatter settings API (field_formatter_settings)  | 7.x-1.1               | 
| Other                       | Libraries (libraries)                                    | 7.x-2.2               | 
| Other                       | Linkit (linkit)                                          | 7.x-3.1               | 
| Other                       | Linkit Target (linkit_target)                            | 7.x-3.x-dev           | 
| Other                       | MediaElement.js (mediaelement)                           | 7.x-1.2               | 
| Other                       | Multiple forms (multiform)                               | 7.x-1.0               | 
| Other                       | Pathauto (pathauto)                                      | 7.x-1.2               | 
| Other                       | Rabbit Hole (rabbit_hole)                                | 7.x-2.22              | 
| Other                       | Rabbit Hole nodes (rh_node)                              | 7.x-2.22              | 
| Other                       | simplehtmldom API (simplehtmldom)                        | 7.x-2.1               | 
| Other                       | Simplified menu administration (simplified_menu_admin)   | 7.x-1.0-beta2         | 
| Other                       | Strongarm (strongarm)                                    | 7.x-2.0               | 
| Other                       | Token (token)                                            | 7.x-1.5               | 
| Other                       | ZURB: Interchange (zurb_interchange)                     | 7.x-1.0-beta3+0-dev   | 
| Path management             | Global Redirect (globalredirect)                         | 7.x-1.5               | 
| Performance and scalability | Minify (minify)                                          | 7.x-1.1               | 
| Pillar                      | Pillar - Berechtigungen (pillar_berechtigungen)          | 7.x-1.0               | 
| Pillar                      | Pillar - Bildstile (pillar_bildstile)                    | 7.x-1.0               | 
| Pillar                      | Pillar - Linkit Profil (pillar_linkit_profil)            | 7.x-1.0               | 
| Pillar                      | Pillar - Nutzer/Rollen (pillar_nutzer_rollen)            | 7.x-1.0               | 
| Pillar                      | Pillar - Sprache/Übersetzung (pillar_sprache_bersetzung) | 7.x-1.0               | 
| Pillar                      | Pillar - Strongarm (pillar_strongarm)                    | 7.x-1.0               | 
| Pillar                      | Pillar - Textformate (pillar_textformate)                | 7.x-1.0               | 
| Pillar                      | Pillar Custom Configs (pillar_customconfigs)             |                       | 
| Rules                       | Rules (rules)                                            | 7.x-2.6               | 
| Rules                       | Rules UI (rules_admin)                                   | 7.x-2.6               | 
| SEO                         | Metatag (metatag)                                        | 7.x-1.0-beta9         | 
| SEO                         | Metatag: Dublin Core (metatag_dc)                        | 7.x-1.0-beta9         | 
| SEO                         | Metatag: Open Graph (metatag_opengraph)                  | 7.x-1.0-beta9         | 
| SEO                         | Metatag: Views (metatag_views)                           | 7.x-1.0-beta9         | 
| Spam control                | Honeypot (honeypot)                                      | 7.x-1.16              | 
| User interface              | jQuery Update (jquery_update)                            | 7.x-2.4               | 
| User interface              | Wysiwyg (wysiwyg)                                        | 7.x-2.2+33-dev        | 
| Views                       | Views (views)                                            | 7.x-3.7               | 
| Views                       | Views UI (views_ui)                                      | 7.x-3.7               | 
| Workbench                   | Workbench (workbench)                                    | 7.x-1.2               | 
 
 
