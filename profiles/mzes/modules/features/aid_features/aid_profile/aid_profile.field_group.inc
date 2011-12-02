<?php
/**
 * @file
 * aid_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aid_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_associated|node|profile|form';
  $field_group->group_name = 'group_profile_associated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_supplemental';
  $field_group->data = array(
    'label' => 'Associated Content',
    'weight' => '62',
    'children' => array(
      0 => 'field_profile_related_nodes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_associated|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_classification|node|profile|form';
  $field_group->group_name = 'group_profile_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_supplemental';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '57',
    'children' => array(
      0 => 'field_profile_department',
      1 => 'field_profile_expertise',
      2 => 'field_profile_media_expertise',
      3 => 'field_profile_research_areas',
      4 => 'field_profile_research_programs',
      5 => 'field_profile_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_classification|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_contact|node|profile|form';
  $field_group->group_name = 'group_profile_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_supplemental';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '53',
    'children' => array(
      0 => 'field_profile_contact_note',
      1 => 'field_profile_email',
      2 => 'field_profile_fax',
      3 => 'field_profile_phone',
      4 => 'field_profile_postal_address',
      5 => 'field_profile_visitor_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_contact|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_links|node|profile|form';
  $field_group->group_name = 'group_profile_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_supplemental';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '61',
    'children' => array(
      0 => 'field_profile_social_media',
      1 => 'field_profile_urls',
      2 => 'field_profile_website',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_links|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_personal|node|profile|form';
  $field_group->group_name = 'group_profile_personal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_supplemental';
  $field_group->data = array(
    'label' => 'Personal Info',
    'weight' => '54',
    'children' => array(
      0 => 'field_profile_affiliations',
      1 => 'field_profile_awards',
      2 => 'field_profile_biography',
      3 => 'field_profile_cv',
      4 => 'field_profile_cv_attachment',
      5 => 'field_profile_memberships',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_personal|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_research|node|profile|form';
  $field_group->group_name = 'group_profile_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_supplemental';
  $field_group->data = array(
    'label' => 'Research Info',
    'weight' => '55',
    'children' => array(
      0 => 'field_profile_research',
      1 => 'field_profile_research_interests',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_research|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_staff|node|profile|form';
  $field_group->group_name = 'group_profile_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_supplemental';
  $field_group->data = array(
    'label' => 'Staff Info',
    'weight' => '56',
    'children' => array(
      0 => 'field_profile_staff',
      1 => 'field_profile_staff_status',
      2 => 'field_profile_title_job',
      3 => 'field_profile_gender',
      4 => 'field_profile_internal_email',
      5 => 'field_profile_staff_external',
      6 => 'field_profile_staff_position',
      7 => 'field_profile_staff_rec_no',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_staff|node|profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_supplemental|node|profile|form';
  $field_group->group_name = 'group_profile_supplemental';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supplemental Info',
    'weight' => '15',
    'children' => array(
      0 => 'group_profile_contact',
      1 => 'group_profile_personal',
      2 => 'group_profile_research',
      3 => 'group_profile_staff',
      4 => 'group_profile_classification',
      5 => 'group_profile_links',
      6 => 'group_profile_associated',
      7 => 'group_profile_admin_meta',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_profile_supplemental|node|profile|form'] = $field_group;

  return $export;
}
