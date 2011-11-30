<?php
/**
 * @file
 * mzes_profile.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function mzes_profile_field_default_fields() {
  $fields = array();

  // Exported field: 'node-profile-field_profile_gender'
  $fields['node-profile-field_profile_gender'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_gender',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Female',
          1 => 'Male',
        ),
        'allowed_values_function' => '',
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
      ),
      'translatable' => '1',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '43',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '43',
        ),
        'profile_panel_detail' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '42',
        ),
        'profile_reference' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '40',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_gender',
      'label' => 'Gender',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_internal_email'
  $fields['node-profile-field_profile_internal_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_internal_email',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
      ),
      'translatable' => '1',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '37',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '37',
        ),
        'profile_panel_detail' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
        'profile_reference' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_internal_email',
      'label' => 'Internal Mailing List',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '36',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_staff_external'
  $fields['node-profile-field_profile_staff_external'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_staff_external',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
      ),
      'translatable' => '1',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '36',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '36',
        ),
        'profile_panel_detail' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
        'profile_reference' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_staff_external',
      'label' => 'External Staff',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_staff_position'
  $fields['node-profile-field_profile_staff_position'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_staff_position',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Project Collaborator',
          2 => 'Project Director',
          3 => 'Infrastructure',
          4 => 'Secretary',
          5 => 'Executive Board',
          6 => 'Research Fellow',
          7 => 'Visiting Fellow',
          8 => 'Scholar',
          9 => 'Ph.D. Student',
          10 => 'Visiting Scholar',
          11 => 'Professor of Mannheim University',
          12 => 'Emeritus',
          20 => 'Administrative Officer',
          30 => 'Library Commission',
        ),
        'allowed_values_function' => '',
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '35',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '35',
        ),
        'profile_panel_detail' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'profile_reference' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_staff_position',
      'label' => 'Position',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'node-profile-field_profile_staff_rec_no'
  $fields['node-profile-field_profile_staff_rec_no'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profile_staff_rec_no',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_permissions' => array(
          'create' => 'create',
          'edit' => 'edit',
          'edit own' => 'edit own',
          'view' => 'view',
          'view own' => 'view own',
        ),
        'max_length' => '30',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '40',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '40',
        ),
        'profile_panel_detail' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '40',
        ),
        'profile_reference' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profile_staff_rec_no',
      'label' => 'Staff Record No.',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '30',
        ),
        'type' => 'text_textfield',
        'weight' => '30',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('External Staff');
  t('Gender');
  t('Internal Mailing List');
  t('Position');
  t('Staff Record No.');

  return $fields;
}
