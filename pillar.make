; pillar make file for local development
core = "7.x"
api = "2"

projects[drupal][version] = "7.x"
; include the d.o. profile base
includes[] = "drupal-org.make"


; +++++ Patches +++++

; Patch to allow install profile enabling to enable dependencies correctly.
projects[drupal][patch][1093420] = "http://drupal.org/files/1093420-22.patch"

; Solve 'msie' of undefined Error against jQuery > 1.7
projects[admin_menu][patch][1961178] = "https://drupal.org/files/issues/admin_menu-ie6detect-1961178-2.patch"


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
libraries[jquery.imagesloaded][download][url] = "https://github.com/desandro/imagesloaded/archive/master.zip"

; mediaelement
libraries[mediaelement][directory_name] = "mediaelement"
libraries[mediaelement][type] = "library"
libraries[mediaelement][destination] = "libraries"
libraries[mediaelement][download][type] = "get"
libraries[mediaelement][download][url] = "http://github.com/johndyer/mediaelement/zipball/master"

