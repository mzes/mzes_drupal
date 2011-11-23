<?php
/**
 * @file
 * aid_defaults.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function aid_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access biblio content
  $permissions['access biblio content'] = array(
    'name' => 'access biblio content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'biblio',
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access overlay
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access site in maintenance mode
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access statistics
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'statistics',
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'user',
  );

  // Exported permission: add media from remote sources
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer addthis
  $permissions['administer addthis'] = array(
    'name' => 'administer addthis',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'addthis',
  );

  // Exported permission: administer biblio
  $permissions['administer biblio'] = array(
    'name' => 'administer biblio',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'biblio',
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldgroups
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer media
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'media',
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer modules
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer statistics
  $permissions['administer statistics'] = array(
    'name' => 'administer statistics',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create biblio content
  $permissions['create biblio content'] = array(
    'name' => 'create biblio content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create featured_content content
  $permissions['create featured_content content'] = array(
    'name' => 'create featured_content content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create media_coverage content
  $permissions['create media_coverage content'] = array(
    'name' => 'create media_coverage content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create news_item content
  $permissions['create news_item content'] = array(
    'name' => 'create news_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create press_release content
  $permissions['create press_release content'] = array(
    'name' => 'create press_release content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create profile content
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create project content
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: customize shortcut links
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any biblio content
  $permissions['delete any biblio content'] = array(
    'name' => 'delete any biblio content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any featured_content content
  $permissions['delete any featured_content content'] = array(
    'name' => 'delete any featured_content content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any media_coverage content
  $permissions['delete any media_coverage content'] = array(
    'name' => 'delete any media_coverage content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any news_item content
  $permissions['delete any news_item content'] = array(
    'name' => 'delete any news_item content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any press_release content
  $permissions['delete any press_release content'] = array(
    'name' => 'delete any press_release content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any profile content
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any project content
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own biblio content
  $permissions['delete own biblio content'] = array(
    'name' => 'delete own biblio content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own featured_content content
  $permissions['delete own featured_content content'] = array(
    'name' => 'delete own featured_content content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own media_coverage content
  $permissions['delete own media_coverage content'] = array(
    'name' => 'delete own media_coverage content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own news_item content
  $permissions['delete own news_item content'] = array(
    'name' => 'delete own news_item content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own press_release content
  $permissions['delete own press_release content'] = array(
    'name' => 'delete own press_release content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own profile content
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own project content
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in data_collections
  $permissions['delete terms in data_collections'] = array(
    'name' => 'delete terms in data_collections',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in data_indicators
  $permissions['delete terms in data_indicators'] = array(
    'name' => 'delete terms in data_indicators',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in data_provenance
  $permissions['delete terms in data_provenance'] = array(
    'name' => 'delete terms in data_provenance',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in data_sources
  $permissions['delete terms in data_sources'] = array(
    'name' => 'delete terms in data_sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in data_types
  $permissions['delete terms in data_types'] = array(
    'name' => 'delete terms in data_types',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in event_categories
  $permissions['delete terms in event_categories'] = array(
    'name' => 'delete terms in event_categories',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in funding_sources
  $permissions['delete terms in funding_sources'] = array(
    'name' => 'delete terms in funding_sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in funding_types
  $permissions['delete terms in funding_types'] = array(
    'name' => 'delete terms in funding_types',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in geographic_units
  $permissions['delete terms in geographic_units'] = array(
    'name' => 'delete terms in geographic_units',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in geographical_areas
  $permissions['delete terms in geographical_areas'] = array(
    'name' => 'delete terms in geographical_areas',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in news_categories
  $permissions['delete terms in news_categories'] = array(
    'name' => 'delete terms in news_categories',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in org_structure
  $permissions['delete terms in org_structure'] = array(
    'name' => 'delete terms in org_structure',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in research_areas
  $permissions['delete terms in research_areas'] = array(
    'name' => 'delete terms in research_areas',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in research_fields
  $permissions['delete terms in research_fields'] = array(
    'name' => 'delete terms in research_fields',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in research_groups
  $permissions['delete terms in research_groups'] = array(
    'name' => 'delete terms in research_groups',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in research_programs
  $permissions['delete terms in research_programs'] = array(
    'name' => 'delete terms in research_programs',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in tags
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in topics
  $permissions['delete terms in topics'] = array(
    'name' => 'delete terms in topics',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: edit any biblio content
  $permissions['edit any biblio content'] = array(
    'name' => 'edit any biblio content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any featured_content content
  $permissions['edit any featured_content content'] = array(
    'name' => 'edit any featured_content content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any media_coverage content
  $permissions['edit any media_coverage content'] = array(
    'name' => 'edit any media_coverage content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any news_item content
  $permissions['edit any news_item content'] = array(
    'name' => 'edit any news_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any press_release content
  $permissions['edit any press_release content'] = array(
    'name' => 'edit any press_release content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any profile content
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any project content
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit biblio authors
  $permissions['edit biblio authors'] = array(
    'name' => 'edit biblio authors',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'biblio',
  );

  // Exported permission: edit by all biblio authors
  $permissions['edit by all biblio authors'] = array(
    'name' => 'edit by all biblio authors',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'biblio',
  );

  // Exported permission: edit media
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'media',
  );

  // Exported permission: edit own biblio content
  $permissions['edit own biblio content'] = array(
    'name' => 'edit own biblio content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own event content
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own featured_content content
  $permissions['edit own featured_content content'] = array(
    'name' => 'edit own featured_content content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own media_coverage content
  $permissions['edit own media_coverage content'] = array(
    'name' => 'edit own media_coverage content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own news_item content
  $permissions['edit own news_item content'] = array(
    'name' => 'edit own news_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own press_release content
  $permissions['edit own press_release content'] = array(
    'name' => 'edit own press_release content',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own profile content
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own project content
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in data_collections
  $permissions['edit terms in data_collections'] = array(
    'name' => 'edit terms in data_collections',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in data_indicators
  $permissions['edit terms in data_indicators'] = array(
    'name' => 'edit terms in data_indicators',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in data_provenance
  $permissions['edit terms in data_provenance'] = array(
    'name' => 'edit terms in data_provenance',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in data_sources
  $permissions['edit terms in data_sources'] = array(
    'name' => 'edit terms in data_sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in data_types
  $permissions['edit terms in data_types'] = array(
    'name' => 'edit terms in data_types',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in event_categories
  $permissions['edit terms in event_categories'] = array(
    'name' => 'edit terms in event_categories',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in funding_sources
  $permissions['edit terms in funding_sources'] = array(
    'name' => 'edit terms in funding_sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in funding_types
  $permissions['edit terms in funding_types'] = array(
    'name' => 'edit terms in funding_types',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in geographic_units
  $permissions['edit terms in geographic_units'] = array(
    'name' => 'edit terms in geographic_units',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in geographical_areas
  $permissions['edit terms in geographical_areas'] = array(
    'name' => 'edit terms in geographical_areas',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in news_categories
  $permissions['edit terms in news_categories'] = array(
    'name' => 'edit terms in news_categories',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in org_structure
  $permissions['edit terms in org_structure'] = array(
    'name' => 'edit terms in org_structure',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in research_areas
  $permissions['edit terms in research_areas'] = array(
    'name' => 'edit terms in research_areas',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in research_fields
  $permissions['edit terms in research_fields'] = array(
    'name' => 'edit terms in research_fields',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in research_groups
  $permissions['edit terms in research_groups'] = array(
    'name' => 'edit terms in research_groups',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in research_programs
  $permissions['edit terms in research_programs'] = array(
    'name' => 'edit terms in research_programs',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in tags
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in topics
  $permissions['edit terms in topics'] = array(
    'name' => 'edit terms in topics',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: flush caches
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: import from file
  $permissions['import from file'] = array(
    'name' => 'import from file',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'biblio',
  );

  // Exported permission: import media
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'editor',
      4 => 'staff',
      5 => 'web editor',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: show download links
  $permissions['show download links'] = array(
    'name' => 'show download links',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'biblio',
  );

  // Exported permission: show export links
  $permissions['show export links'] = array(
    'name' => 'show export links',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'biblio',
  );

  // Exported permission: show filter tab
  $permissions['show filter tab'] = array(
    'name' => 'show filter tab',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'biblio',
  );

  // Exported permission: show own download links
  $permissions['show own download links'] = array(
    'name' => 'show own download links',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'biblio',
  );

  // Exported permission: show sort links
  $permissions['show sort links'] = array(
    'name' => 'show sort links',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'biblio',
  );

  // Exported permission: skip comment approval
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: switch shortcut sets
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'search',
  );

  // Exported permission: use text format filtered_html
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: view addthis
  $permissions['view addthis'] = array(
    'name' => 'view addthis',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'addthis',
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'date',
  );

  // Exported permission: view full text
  $permissions['view full text'] = array(
    'name' => 'view full text',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'biblio',
  );

  // Exported permission: view media
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
      3 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view post access counter
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'web editor',
    ),
    'module' => 'statistics',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'web editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
