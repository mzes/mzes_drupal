core = 7.x
api = 2


; === Contrib projects with official releases ========================================================================

;;;;;;
; Site Building
;;;;;;

projects[context][version] = 3.0-beta2
projects[context][subdir] = contrib

;projects[ctools][download][type] = module
;projects[ctools][download][type] = "git"
;projects[ctools][download][url] = "http://git.drupal.org/project/ctools.git"
;projects[ctools][download][branch] = 7.x-1.x
projects[ctools][version] = 1.x-dev
projects[ctools][subdir] = contrib

projects[diff][version] = 2.0
projects[diff][subdir] = contrib

; Allows to take full control over how content is displayed using a drag and drop interface. Add custom view modes
projects[ds][version] = 1.4
projects[ds][subdir] = contrib

;projects[entity][download][type] = module
;projects[entity][download][type] = "git"
;projects[entity][download][url] = "http://git.drupal.org/project/entity.git"
;projects[entity][download][branch] = 7.x-1.x
projects[entity][version] = 1.0-rc1
projects[entity][subdir] = contrib

projects[entitycache][version] = 1.1
projects[entitycache][subdir] = contrib

;projects[features][download][type] = module
;projects[features][download][type] = "git"
;projects[features][download][url] = "http://git.drupal.org/project/features.git"
;projects[features][download][branch] = 7.x-1.x
projects[features][version] = 1.x-dev
projects[features][subdir] = contrib

;projects[panels][download][type] = module
;projects[panels][download][type] = "git"
;projects[panels][download][url] = "http://git.drupal.org/project/panels.git"
;projects[panels][download][branch] = 7.x-3.x
projects[panels][version] = 3.x-dev
projects[panels][subdir] = contrib

; Enables to register any piece of build on your installation and manage the display through Field UI.
projects[rel][version] = 1.x-dev
projects[rel][subdir] = contrib

projects[strongarm][version] = 2.0-beta4
projects[strongarm][subdir] = contrib

;projects[views][download][type] = module
;projects[views][download][type] = "git"
;projects[views][download][url] = "http://git.drupal.org/project/views.git"
;projects[views][download][branch] = 7.x-3.x
projects[views][version] = 3.x-dev
projects[views][subdir] = contrib

;;;;;;
; Essential
;;;;;;

; A field module to hold postal addresses, implementing a subset of the xNAL standard.
projects[addressfield][version] = 1.0-beta2
projects[addressfield][subdir] = contrib

; Creates AddThis button as a block, to be used in themes and to node links.
projects[addthis][version] = 2.1-beta1
projects[addthis][subdir] = contrib

; Menu for easier administration of Drupal
projects[admin_menu][version] = 3.x-dev
projects[admin_menu][subdir] = contrib

projects[advanced_help][version] = 1.0
projects[advanced_help][subdir] = contrib

; Automatic generation of node titles according to rules (can use fields data)
projects[auto_nodetitle][version] = 1.0
projects[auto_nodetitle][subdir] = "contrib"

; Allows users manage and display lists of scholarly publications
projects[biblio][version] = 1.0-rc3
projects[biblio][subdir] = contrib

; Automatically creates a main book page for content type selected in BookMadeSimple settings. 
; This is a shortcut to create a node and click on update book outline.
projects[BookMadeSimple][version] = 3.3
projects[BookMadeSimple][subdir] = contrib

; Views plugin to display views containing dates as Calendars.
projects[calendar][version] = 3.x-dev
projects[calendar][subdir] = contrib

; Currently the best light-box module
projects[colorbox][version] = 1.2
projects[colorbox][subdir] = contrib

; Notifications for comments
projects[comment_notify][version] = 1.0
projects[comment_notify][subdir] = contrib

; Allows themes to add conditional stylesheets - i.e. for IE
projects[conditional_styles][version] = 2.0
projects[conditional_styles][subdir] = contrib

; Allows you to manage sets of dependencies between fields
projects[conditional_fields][version] = 3.x-dev
projects[conditional_fields][subdir] = "contrib"

; An admin tool based on CTools Page Manager module for creating custom admin pages
projects[context_admin][version] = 1.1
projects[context_admin][subdir] = contrib

; Date API that can be used by other modules.
projects[date][version] = 2.x-dev
projects[date][subdir] = contrib

; Defines simple email field type.
projects[email][version] = 1.0
projects[email][subdir] = contrib

; Group fields (WIP with numerous bugs in stable releases)
projects[field_group][version] = 1.x-dev
projects[field_group][subdir] = contrib

; Allows site administrators to set field-level permissions to edit or view CCK fields in any node
projects[field_permissions][version] = 1.0-beta1
projects[field_permissions][subdir] = contrib

; Allows you to use token customizable aliases for your uploaded files, giving you the ability to keep your file system organized as per usual while providing clean looking paths
projects[file_aliases][version] = 1.0-beta1
projects[file_aliases][subdir] = contrib

; Allows you to automatically sort and rename your uploaded files using token based replacement patterns
projects[filefield_paths][version] = 1.0-beta1
projects[filefield_paths][subdir] = contrib

; Flag has numerous patches in issue queue! Apply them once the module is needed.
projects[flag][version] = 2.0-beta6
projects[flag][subdir] = contrib

; Searches for an alias of the current URL and 301 redirects if found. Stops duplicate content arising when path
projects[globalredirect][version] = 1.3
projects[globalredirect][subdir] = contrib

; Drupal internationalization suite
projects[i18n][version] = 1.1
projects[i18n][subdir] = contrib

; Translate views using i18n module (WIP)
projects[i18nviews][version] = 3.x-dev
projects[i18nviews][subdir] = contrib

; Helps you fix translations on your site as you see the issues.
projects[l10n_client][version] = 1.0
projects[l10n_client][subdir] = "contrib"

; Automatically download and update your translations fetching them from localize.drupal.org
projects[l10n_update][version] = 1.0-beta2
projects[l10n_update][subdir] = "contrib"

; Bulk setting the language of multiple nodes or users
projects[languageassign][version] = 1.x-dev
projects[languageassign][subdir] = "contrib"

; Provides icons for language links
projects[languageicons][version] = 1.x-dev
projects[languageicons][subdir] = "contrib"

; Common theme library functionality.
projects[libraries][version] = 1.0
projects[libraries][subdir] = contrib

; Defines simple link field types.
projects[link][version] = 1.0
projects[link][subdir] = contrib

; Pprovides an extensible framework for managing files and multimedia assets
projects[media][version] = 1.0-rc2
projects[media][subdir] = contrib

; Brings the MediaElement.js html5 player plugin to Drupal
projects[mediaelement][version] = 1.1
projects[mediaelement][subdir] = contrib

; Enhancement module for the Media module with a focus on UX improvements
projects[media_browser_plus][version] = 1.x-dev
projects[media_browser_plus][subdir] = contrib

; Offers Flickr Photoset capabilities to the Embedded Media Field module
projects[media_flickr][version] = 1.x-dev
projects[media_flickr][subdir] = contrib

; Uses the Media module to provide a rich media gallery.
projects[media_gallery][version] = 1.0-beta7
projects[media_gallery][subdir] = contrib

; Provides support for the YouTube video provider for Embedded Media Field.
projects[media_youtube][version] = 1.x-dev
projects[media_youtube][subdir] = contrib

; API module which lets you put several forms into one <form>. Note: no dev release; dev branch far ahead!
projects[multiform][version] = 1.0-beta2
projects[multiform][subdir] = contrib

; Allows you to specify content type(s) as being a block. Users can edit blocks without visiting block config.
projects[nodeblock][version] = 1.2
projects[nodeblock][subdir] = contrib

; Node Connect expands the node reference (of the references project) auto-complete field by adding a add new content and edit current content button
projects[nodeconnect][version] = 1.x-dev
projects[nodeconnect][subdir] = contrib

; Allows users to collect nodes in an arbitrarily ordered list
projects[nodequeue][version] = 2.0-beta1
projects[nodequeue][subdir] = contrib

; Provides a better mechanism to specify select list, checkbox, and radio button options
projects[options_element][version] = 1.4
projects[options_element][subdir] = contrib

; Enhanced control over the page title (in the &lt;head> tag).
projects[page_title][version] = 2.5
projects[page_title][subdir] = "contrib"

; Provides a mechanism for modules to automatically generate aliases for the content they manage.
projects[pathauto][version] = 1.0
projects[pathauto][subdir] = contrib

projects[plupload][version] = 1.0-beta3
projects[plupload][subdir] = contrib

; Provides the 'Node reference' and 'User reference' field types that were part of the CCK package in D6
projects[references][version] = 2.0-beta3
projects[references][subdir] = contrib

; Relation is an API module and storage model for both simple and the most complex relations between entities. Warning: beta3 requires ctools 7.x-1.x-dev (or RC2 should one get released). 7.x-1.0-rc1 doesn't work.
projects[relation][version] = 1.x-dev
projects[relation][subdir] = contrib

; Allows site administrators to define conditionally executed actions based on occurring events
projects[rules][version] = 2.0
projects[rules][subdir] = contrib

; Provides a framework for easily creating searches on any entity known to Drupal, using any kind of search engine
projects[search_api][version] = 1.0-rc1
projects[search_api][subdir] = "contrib"

; An add-on to the Search API which allows the indexing and searching of attachments using the Apache Tika library
projects[search_api_attachments][version] = 1.0
projects[search_api_attachments][subdir] = "contrib"

; Provides a Solr backend for the Search API module
projects[search_api_solr][version] = 1.0-rc1
projects[search_api_solr][subdir] = "contrib"

; Redirects required pages to a SSL version of the page. Some core bugs holding up stable release!
projects[securepages][version] = 1.x-dev
projects[securepages][subdir] = contrib

; Provides a quick and easy way to replace any text on the site
projects[stringoverrides][version] = 1.8
projects[stringoverrides][subdir] = contrib

; Provides an API available for use by other modules, e.g. media module. 
projects[styles][version] = 2.x-dev
projects[styles][subdir] = contrib

; Provides a shared API for replacement of textual placeholders with actual data.
projects[token][version] = 1.0-beta7
projects[token][subdir] = contrib

; Provides a table listing the site's nodes and showing what's been translated into each language. It also lets you assign priorities for translating nodes into the various languages.
projects[translation_overview][version] = 2.0-beta1
projects[translation_overview][subdir] = contrib

; Provides a central transliteration service to other Drupal modules, and sanitizes file names while uploading.
projects[transliteration][version] = 3.0
projects[transliteration][subdir] = contrib

; Provides a registry for meta-data about Drupal variables and some extended Variable API and administration interface
projects[variable][version] = 1.1
projects[variable][subdir] = contrib

; Augments Views by allowing bulk operations to be executed on the displayed rows. 
projects[views_bulk_operations][version] = 3.0-beta3
projects[views_bulk_operations][subdir] = contrib

; Can be used to create a slideshow of any content (not just images) that can appear in a View.
projects[views_slideshow][version] = 3.0
projects[views_slideshow][subdir] = "contrib"

; Build webforms.
projects[webform][version] = 3.13
projects[webform][subdir] = contrib

; Enables the use of wysiwyg editors
projects[wysiwyg][version] = 2.1
projects[wysiwyg][subdir] = contrib

; Creates a sitemap that conforms to the sitemaps.org specification
projects[xmlsitemap][version] = 2.0-beta3
projects[xmlsitemap][subdir] = contrib



;;;;;;
; Optional (inclusion in profile to be decided)
;;;;;;

; Interface to advanced search frame-work Apache Lucene/Solr
;projects[apachesolr][version] = 1.0-beta5
;projects[apachesolr][subdir] = "contrib"

; Make file attachments searchable using Apache Tika
;projects[apachesolr_attachments][version] = 1.x-dev
;projects[apachesolr_attachments][subdir] = "contrib"

; Add better input format support.
;projects[better_formats][version] = 1.x-dev
;projects[better_formats][subdir] = "contrib"

; CAPTCHA solution for web forms
;projects[captcha][version] = 1.0-alpha3
;projects[captcha][subdir] = contrib

; syncs the node reference between two node types which have a nodereference to each other, so double editing nodes is no more needed.
;projects[cnr][version] = 4.x-dev
;projects[cnr][subdir] = contrib

; Repository for advanced form elements 
;projects[elements][version] = 1.2
;projects[elements][subdir] = contrib

;projects[follow][version] = 1.x-dev
;projects[follow][subdir] = contrib

; Adds Google Analytics javascript tracking code to all your site's pages.
;projects[google_analytics][version] = 1.2
;projects[google_analytics][subdir] = contrib

; HTML Purifier is a standards-compliant HTML filter library
;projects[htmlpurifier][version] = 2.x-dev
;projects[htmlpurifier][subdir] = contrib

;projects[openidadmin][version] = 1.0
;projects[openidadmin][subdir] = contrib

;projects[recaptcha][version] = 1.7
;projects[recaptcha][subdir] = contrib

;projects[taxonomy_menu][version] = 1.2
;projects[taxonomy_menu][subdir] = "contrib"

;projects[twitter_pull][version] = 1.0-rc1
;projects[twitter_pull][subdir] = contrib

;projects[views_accordion][version] = 1.x-dev
;projects[views_accordion][subdir] = "contrib"



; === Developer contrib projects with official releases ==============================================================

projects[devel][version] = 1.2
projects[devel][subdir] = contrib


; === Contrib projects not enabled (included but not enabled by default) =============================================

;projects[coder][version] = 1.0-beta6
;projects[coder][subdir] = contrib

; === Patched projects ===============================================================================================

; Provides exports for custom blocks and spaces integration.
;projects[boxes][version] = 1.0-beta3
;projects[boxes][subdir] = contrib
;; options_form() invoked without argument
;; http://drupal.org/node/1133116
;projects[boxes][patch][] = "http://drupal.org/files/issues/options_form_called_without_arg-1133116-0_drushmake.patch"



; === Contrib projects without official releases =====================================================================

;projects[apachesolr_biblio][version] = 1.x-dev
;projects[apachesolr_biblio][subdir] = "contrib"
;projects[apachesolr_biblio][location] = "http://drupal.org/files/issues/apachesolr_biblio-D7.tar_.gz"

; Allows users to add meta tags, e.g. keywords or description. Fresh-start version of Nodewords module. No code yet.
;projects[metatags][version] = ??
;projects[metatags][subdir] = contrib


; === Custom modules =================================================================================================



; === Modules from other distributions ===============================================================================



; === Custom features ================================================================================================

; MZES Features
projects[mzes_features][type] = module
projects[mzes_features][download][type] = git
projects[mzes_features][download][url] = git@github.com:mzes/mzes_features.git
projects[mzes_features][download][branch] = dev
projects[mzes_features][subdir] = features


; === Features from other distributions ==============================================================================

; AID Features
projects[aid_features][type] = module
projects[aid_features][download][type] = git
projects[aid_features][download][url] = git@github.com:dwabnitz/aid_features.git
projects[aid_features][download][branch] = master
projects[aid_features][subdir] = features


; === Themes =========================================================================================================

projects[omega][version] = 3.0
projects[omega][subdir] = contrib
projects[omega][type] = "theme"

projects[tao][version] = 3.0-beta4
projects[tao][subdir] = contrib

projects[rubik][version] = 4.0-beta6
projects[rubik][subdir] = contrib
projects[rubik][type] = "theme"


; === Libraries ======================================================================================================

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.5.3/ckeditor_3.5.3.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

libraries[colorbox][download][type] = "file"
libraries[colorbox][download][url] = "http://colorpowered.com/colorbox/latest"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"

;libraries[htmlpurifier][download][type] = "get"
;libraries[htmlpurifier][download][url] = "http://htmlpurifier.org/releases/htmlpurifier-4.3.0-lite.tar.gz"
;libraries[htmlpurifier][directory_name] = "htmlpurifier"
;libraries[htmlpurifier][destination] = "libraries"

libraries[plupload][download][type] = "get"
libraries[plupload][download][url] = "https://github.com/downloads/moxiecode/plupload/plupload_1_5_1_1.zip"
libraries[plupload][directory_name] = "plupload"
libraries[plupload][destination] = "libraries"

libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta1.tar.gz
libraries[profiler][directory_name] = "profiler"
libraries[profiler][destination] = "libraries"

libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = http://malsup.com/jquery/cycle/release/jquery.cycle.zip?v2.99
libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][destination] = "libraries"
