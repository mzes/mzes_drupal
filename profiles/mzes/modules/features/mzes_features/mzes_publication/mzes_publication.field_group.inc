<?php
/**
 * @file
 * mzes_publication.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mzes_publication_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biblio_admin_meta|node|biblio|form';
  $field_group->group_name = 'group_biblio_admin_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_biblio_supplemental';
  $field_group->data = array(
    'label' => 'Admin Metadata',
    'weight' => '91',
    'children' => array(
      0 => 'group_biblio_library_meta',
      1 => 'group_biblio_other_meta',
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
  $export['group_biblio_admin_meta|node|biblio|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biblio_library_meta|node|biblio|form';
  $field_group->group_name = 'group_biblio_library_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_biblio_admin_meta';
  $field_group->data = array(
    'label' => 'Library Metadata',
    'weight' => '83',
    'children' => array(
      0 => 'field_biblio_call_no_other',
      1 => 'field_biblio_note',
      2 => 'field_biblio_unibib_copy',
      3 => 'field_biblio_unibib_transfer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_biblio_library_meta|node|biblio|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biblio_other_meta|node|biblio|form';
  $field_group->group_name = 'group_biblio_other_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_biblio_admin_meta';
  $field_group->data = array(
    'label' => 'Other Metadata',
    'weight' => '84',
    'children' => array(
      0 => 'field_biblio_mzes_lang',
      1 => 'field_biblio_mzes_rel_lehrst',
      2 => 'field_biblio_mzes_review',
      3 => 'field_biblio_mzes_series',
      4 => 'field_biblio_price',
      5 => 'field_biblio_mzes_pub_type',
      6 => 'field_biblio_mzes_pub_date_exp',
      7 => 'field_biblio_mzes_pub_date_cmt',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_biblio_other_meta|node|biblio|form'] = $field_group;

  return $export;
}
