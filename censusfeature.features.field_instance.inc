<?php
/**
 * @file
 * censusfeature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function censusfeature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-census-body'.
  $field_instances['node-census-body'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-census-field_a_salaries_wages'.
  $field_instances['node-census-field_a_salaries_wages'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 30,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_a_salaries_wages',
    'label' => 'A. Salaries/Wages',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-census-field_address_line_1'.
  $field_instances['node-census-field_address_line_1'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address_line_1',
    'label' => 'Address Line 1',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-census-field_address_line_2'.
  $field_instances['node-census-field_address_line_2'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address_line_2',
    'label' => 'Address Line 2',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-census-field_advoacy_research'.
  $field_instances['node-census-field_advoacy_research'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 188,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 267,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advoacy_research',
    'label' => 'Advoacy Research',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 204,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_african_am_female'.
  $field_instances['node-census-field_advocacy_african_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 184,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 261,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_african_am_female',
    'label' => 'Advocacy Efforts African American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 200,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_african_am_male'.
  $field_instances['node-census-field_advocacy_african_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 183,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 259,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_african_am_male',
    'label' => 'Advocacy Efforts African American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 199,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_asian_am_female'.
  $field_instances['node-census-field_advocacy_asian_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 180,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 254,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_asian_am_female',
    'label' => 'Advocacy Efforts Asian American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 196,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_asian_am_male'.
  $field_instances['node-census-field_advocacy_asian_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 179,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 253,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_asian_am_male',
    'label' => 'Advocacy Efforts Asian American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 195,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_description'.
  $field_instances['node-census-field_advocacy_description'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 187,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 265,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_description',
    'label' => 'Advocacy Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 203,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_duplicates'.
  $field_instances['node-census-field_advocacy_duplicates'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 193,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 308,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_duplicates',
    'label' => 'Advocacy Efforts Duplicate',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 189,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_efforts'.
  $field_instances['node-census-field_advocacy_efforts'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 174,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 242,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_efforts',
    'label' => 'Advocacy Efforts',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 187,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_hispanic_female'.
  $field_instances['node-census-field_advocacy_hispanic_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 178,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 251,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_hispanic_female',
    'label' => 'Advocacy Efforts Hispanic/Latino Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 194,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_hispanic_male'.
  $field_instances['node-census-field_advocacy_hispanic_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 177,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 250,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_hispanic_male',
    'label' => 'Advocacy Efforts Hispanic/Latino Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 193,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_native_am_female'.
  $field_instances['node-census-field_advocacy_native_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 182,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 257,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_native_am_female',
    'label' => 'Advocacy Efforts Native American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 198,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_native_am_male'.
  $field_instances['node-census-field_advocacy_native_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 181,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 256,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_native_am_male',
    'label' => 'Advocacy Efforts Native American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 197,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_other_female'.
  $field_instances['node-census-field_advocacy_other_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 186,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 264,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_other_female',
    'label' => 'Advocacy Efforts Other Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 202,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_other_male'.
  $field_instances['node-census-field_advocacy_other_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 185,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 262,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_other_male',
    'label' => 'Advocacy Efforts Other Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 201,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_societal_impact'.
  $field_instances['node-census-field_advocacy_societal_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 194,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 309,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_societal_impact',
    'label' => 'Advocacy Efforts Societal Impact',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 190,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_unduplicated'.
  $field_instances['node-census-field_advocacy_unduplicated'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 192,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 307,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_unduplicated',
    'label' => 'Advocacy Efforts Unduplicate',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 188,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_white_female'.
  $field_instances['node-census-field_advocacy_white_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 176,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 245,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_white_female',
    'label' => 'Advocacy Efforts White Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 192,
    ),
  );

  // Exported field_instance: 'node-census-field_advocacy_white_male'.
  $field_instances['node-census-field_advocacy_white_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 175,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 243,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_advocacy_white_male',
    'label' => 'Advocacy Efforts White Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 191,
    ),
  );

  // Exported field_instance: 'node-census-field_affiliate_website_address'.
  $field_instances['node-census-field_affiliate_website_address'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_affiliate_website_address',
    'label' => 'If so, what is your affiliate\'s website address?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_16_20'.
  $field_instances['node-census-field_aux_16_20'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 93,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 93,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_16_20',
    'label' => '# of Auxillary Group age 16-20',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 102,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_21_30'.
  $field_instances['node-census-field_aux_21_30'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 94,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 94,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_21_30',
    'label' => '# of Auxillary Group age 21-30',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 103,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_31_40'.
  $field_instances['node-census-field_aux_31_40'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 95,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 95,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_31_40',
    'label' => '# of Auxillary Group age 31-40',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 104,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_41_65'.
  $field_instances['node-census-field_aux_41_65'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 96,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 96,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_41_65',
    'label' => '# of Auxillary Group age 41-65',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 105,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_66_81'.
  $field_instances['node-census-field_aux_66_81'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 97,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 97,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_66_81',
    'label' => '# of Auxillary Group age 66-81',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 106,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_82_and_above'.
  $field_instances['node-census-field_aux_82_and_above'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 98,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 98,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_82_and_above',
    'label' => '# of Auxillary Group age 82 and above',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 107,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_african_american'.
  $field_instances['node-census-field_aux_african_american'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 91,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 91,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_african_american',
    'label' => '# of Auxillary Group African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 100,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_asian_american'.
  $field_instances['node-census-field_aux_asian_american'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 89,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 89,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_asian_american',
    'label' => '# of Auxillary Group Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 98,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_female'.
  $field_instances['node-census-field_aux_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 86,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 86,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_female',
    'label' => '# of Auxillary Group Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 95,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_hispanic_latino'.
  $field_instances['node-census-field_aux_hispanic_latino'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 88,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 88,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_hispanic_latino',
    'label' => '# of Auxillary Group Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 97,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_male'.
  $field_instances['node-census-field_aux_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 85,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 85,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_male',
    'label' => '# of Auxillary Group Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 94,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_members'.
  $field_instances['node-census-field_aux_members'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 84,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 84,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_members',
    'label' => '# of Auxillary Group Members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 93,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_native_american'.
  $field_instances['node-census-field_aux_native_american'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 90,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 90,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_native_american',
    'label' => '# of Auxillary Group Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 99,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_other_heritage'.
  $field_instances['node-census-field_aux_other_heritage'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 92,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 92,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_other_heritage',
    'label' => '# of Auxillary Group Other Heritage',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'node-census-field_aux_white'.
  $field_instances['node-census-field_aux_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 87,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 87,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aux_white',
    'label' => '# of Auxillary Group White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 96,
    ),
  );

  // Exported field_instance: 'node-census-field_average_employee_salary'.
  $field_instances['node-census-field_average_employee_salary'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 117,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 120,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_average_employee_salary',
    'label' => 'What is the average salary for employees?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 118,
    ),
  );

  // Exported field_instance: 'node-census-field_b_fringe_benefits'.
  $field_instances['node-census-field_b_fringe_benefits'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_b_fringe_benefits',
    'label' => 'B. Fringe Benefits',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-census-field_board_african_amer_females'.
  $field_instances['node-census-field_board_african_amer_females'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 139,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 140,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_african_amer_females',
    'label' => 'African American female board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 137,
    ),
  );

  // Exported field_instance: 'node-census-field_board_african_amer_males'.
  $field_instances['node-census-field_board_african_amer_males'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 138,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 139,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_african_amer_males',
    'label' => 'African American male board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 136,
    ),
  );

  // Exported field_instance: 'node-census-field_board_african_amer_total'.
  $field_instances['node-census-field_board_african_amer_total'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 140,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 141,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_african_amer_total',
    'label' => 'African American total board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 138,
    ),
  );

  // Exported field_instance: 'node-census-field_board_asian_females'.
  $field_instances['node-census-field_board_asian_females'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 135,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 136,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_asian_females',
    'label' => 'Asian American female board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 131,
    ),
  );

  // Exported field_instance: 'node-census-field_board_asian_males'.
  $field_instances['node-census-field_board_asian_males'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 134,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 135,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_asian_males',
    'label' => 'Asian American male board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 130,
    ),
  );

  // Exported field_instance: 'node-census-field_board_asian_total'.
  $field_instances['node-census-field_board_asian_total'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 136,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 133,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_asian_total',
    'label' => 'Asian American total board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'node-census-field_board_help'.
  $field_instances['node-census-field_board_help'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 285,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_help',
    'label' => 'Board Help',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 123,
    ),
  );

  // Exported field_instance: 'node-census-field_board_hispanic_females'.
  $field_instances['node-census-field_board_hispanic_females'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 129,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 131,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_hispanic_females',
    'label' => 'Hispanic/Latino female board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 128,
    ),
  );

  // Exported field_instance: 'node-census-field_board_hispanic_males'.
  $field_instances['node-census-field_board_hispanic_males'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 128,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 130,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_hispanic_males',
    'label' => 'Hispanic/Latino male board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 127,
    ),
  );

  // Exported field_instance: 'node-census-field_board_hispanic_total'.
  $field_instances['node-census-field_board_hispanic_total'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 130,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 132,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_hispanic_total',
    'label' => 'Hispanic/Latino total board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 129,
    ),
  );

  // Exported field_instance: 'node-census-field_board_member_grand_total'.
  $field_instances['node-census-field_board_member_grand_total'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 313,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 145,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_member_grand_total',
    'label' => 'Total number of board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 318,
    ),
  );

  // Exported field_instance: 'node-census-field_board_native_females'.
  $field_instances['node-census-field_board_native_females'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 134,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 137,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_native_females',
    'label' => 'Native American female board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 312,
    ),
  );

  // Exported field_instance: 'node-census-field_board_native_males'.
  $field_instances['node-census-field_board_native_males'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 133,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 134,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_native_males',
    'label' => 'Native American male board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 311,
    ),
  );

  // Exported field_instance: 'node-census-field_board_native_total'.
  $field_instances['node-census-field_board_native_total'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 135,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 138,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_native_total',
    'label' => 'Native American total board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 313,
    ),
  );

  // Exported field_instance: 'node-census-field_board_other_females'.
  $field_instances['node-census-field_board_other_females'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 142,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 143,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_other_females',
    'label' => 'Other female board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 314,
    ),
  );

  // Exported field_instance: 'node-census-field_board_other_males'.
  $field_instances['node-census-field_board_other_males'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 141,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 142,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_other_males',
    'label' => 'Other male board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 313,
    ),
  );

  // Exported field_instance: 'node-census-field_board_other_total'.
  $field_instances['node-census-field_board_other_total'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 143,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 144,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_other_total',
    'label' => 'Other total board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 315,
    ),
  );

  // Exported field_instance: 'node-census-field_board_white_females'.
  $field_instances['node-census-field_board_white_females'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 124,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 339,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_white_females',
    'label' => 'White female board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 125,
    ),
  );

  // Exported field_instance: 'node-census-field_board_white_males'.
  $field_instances['node-census-field_board_white_males'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 123,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 338,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_white_males',
    'label' => 'White male board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 124,
    ),
  );

  // Exported field_instance: 'node-census-field_board_white_total'.
  $field_instances['node-census-field_board_white_total'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 125,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 129,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_board_white_total',
    'label' => 'Total white board members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 126,
    ),
  );

  // Exported field_instance: 'node-census-field_boardcompfieldheadings'.
  $field_instances['node-census-field_boardcompfieldheadings'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 330,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 333,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_boardcompfieldheadings',
    'label' => 'Male',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 322,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_corporations'.
  $field_instances['node-census-field_budget_corporations'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 125,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 147,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_corporations',
    'label' => 'Budget - Corporations',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 126,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_endowment_amount'.
  $field_instances['node-census-field_budget_endowment_amount'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 137,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 159,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_endowment_amount',
    'label' => 'If so, what is the present amount?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 138,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_federal'.
  $field_instances['node-census-field_budget_federal'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 130,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 152,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_federal',
    'label' => 'Budget - Federal',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 131,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_foundations'.
  $field_instances['node-census-field_budget_foundations'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 126,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 148,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_foundations',
    'label' => 'Budget - Foundations',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 127,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_has_endowment'.
  $field_instances['node-census-field_budget_has_endowment'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 136,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 158,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_has_endowment',
    'label' => 'Does the affiliate have an endowment?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 137,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_individual_membersh'.
  $field_instances['node-census-field_budget_individual_membersh'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 127,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 149,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_individual_membersh',
    'label' => 'Budget - Individual Membership',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 128,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_investment_earnings'.
  $field_instances['node-census-field_budget_investment_earnings'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Money market account, endowment',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 132,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 154,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_investment_earnings',
    'label' => 'Budget - Investment Earnings',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 133,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_nul_funding'.
  $field_instances['node-census-field_budget_nul_funding'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 133,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 155,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_nul_funding',
    'label' => 'Budget - NUL Funding',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 135,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_nul_funding_purpose'.
  $field_instances['node-census-field_budget_nul_funding_purpose'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Identify purpose(s) of funding',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 134,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 156,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_nul_funding_purpose',
    'label' => 'Purpose of NUL Funding',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 136,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_other'.
  $field_instances['node-census-field_budget_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 135,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 157,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_other',
    'label' => 'Budget - Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 134,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_special_events'.
  $field_instances['node-census-field_budget_special_events'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 128,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 150,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_special_events',
    'label' => 'Budget - Special Events',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 129,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_state_local'.
  $field_instances['node-census-field_budget_state_local'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 131,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 153,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_state_local',
    'label' => 'Budget - State / Local',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_total'.
  $field_instances['node-census-field_budget_total'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 124,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 146,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_total',
    'label' => 'What is the total budget of your affiliate?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 125,
    ),
  );

  // Exported field_instance: 'node-census-field_budget_united_way'.
  $field_instances['node-census-field_budget_united_way'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 129,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 151,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_budget_united_way',
    'label' => 'Budget - United Way',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 130,
    ),
  );

  // Exported field_instance: 'node-census-field_c_professional_fees'.
  $field_instances['node-census-field_c_professional_fees'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 33,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_c_professional_fees',
    'label' => 'C. Professional/Contract/Consulting Fees',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-census-field_capital_budget'.
  $field_instances['node-census-field_capital_budget'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 50,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_capital_budget',
    'label' => 'Does the affiliate have a capital budget?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-census-field_capital_budget_amount'.
  $field_instances['node-census-field_capital_budget_amount'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 51,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 51,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_capital_budget_amount',
    'label' => 'If so, how much?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-census-field_ce_voter_help'.
  $field_instances['node-census-field_ce_voter_help'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 287,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ce_voter_help',
    'label' => 'ce voter help',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 288,
    ),
  );

  // Exported field_instance: 'node-census-field_cellular_number'.
  $field_instances['node-census-field_cellular_number'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cellular_number',
    'label' => 'Cellular Number',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-census-field_cf_female'.
  $field_instances['node-census-field_cf_female'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 364,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cf_female',
    'label' => 'Female',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 414,
    ),
  );

  // Exported field_instance: 'node-census-field_cf_male'.
  $field_instances['node-census-field_cf_male'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 363,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cf_male',
    'label' => 'Male',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 413,
    ),
  );

  // Exported field_instance: 'node-census-field_city'.
  $field_instances['node-census-field_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_city',
    'label' => 'City',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-census-field_civic_engagement'.
  $field_instances['node-census-field_civic_engagement'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 55,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 55,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_civic_engagement',
    'label' => 'Civic Engagement',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-census-field_civil_rights'.
  $field_instances['node-census-field_civil_rights'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 56,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 56,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_civil_rights',
    'label' => 'Civil Rights',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-census-field_co_female'.
  $field_instances['node-census-field_co_female'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 145,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_co_female',
    'label' => 'female',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 143,
    ),
  );

  // Exported field_instance: 'node-census-field_co_male'.
  $field_instances['node-census-field_co_male'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 144,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_co_male',
    'label' => 'Male',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 142,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_african_am_female'.
  $field_instances['node-census-field_comm_org_african_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 158,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 189,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_african_am_female',
    'label' => '  Community Organization African American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 156,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_african_am_male'.
  $field_instances['node-census-field_comm_org_african_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 157,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 188,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_african_am_male',
    'label' => 'Community Organization African American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 155,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_asian_amer_female'.
  $field_instances['node-census-field_comm_org_asian_amer_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 155,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 185,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_asian_amer_female',
    'label' => 'Community Organization Asian American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 159,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_asian_amer_male'.
  $field_instances['node-census-field_comm_org_asian_amer_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 154,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 184,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_asian_amer_male',
    'label' => 'Community Organization Asian American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 158,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_hispanic_female'.
  $field_instances['node-census-field_comm_org_hispanic_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 149,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 183,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_hispanic_female',
    'label' => 'Community Organization Hispanic/Latino Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 412,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_hispanic_male'.
  $field_instances['node-census-field_comm_org_hispanic_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 148,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 182,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_hispanic_male',
    'label' => 'Community Organization Hispanic/Latino Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 411,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_native_female'.
  $field_instances['node-census-field_comm_org_native_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 152,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 186,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_native_female',
    'label' => 'Community Organization Native American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 157,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_native_male'.
  $field_instances['node-census-field_comm_org_native_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 151,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 187,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_native_male',
    'label' => '  Community Organization Native American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 156,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_other_female'.
  $field_instances['node-census-field_comm_org_other_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 161,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 191,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_other_female',
    'label' => 'Community Organization Other Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 158,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_other_male'.
  $field_instances['node-census-field_comm_org_other_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 160,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 190,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_other_male',
    'label' => 'Community Organization Other Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 157,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_societal_impact'.
  $field_instances['node-census-field_comm_org_societal_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 361,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 179,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_societal_impact',
    'label' => 'Community Organization Societal Impact',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 147,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_white_female'.
  $field_instances['node-census-field_comm_org_white_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 146,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 181,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_white_female',
    'label' => 'Community Organization White Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 145,
    ),
  );

  // Exported field_instance: 'node-census-field_comm_org_white_male'.
  $field_instances['node-census-field_comm_org_white_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 145,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 180,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_org_white_male',
    'label' => 'Community Organization White Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 144,
    ),
  );

  // Exported field_instance: 'node-census-field_community_forums'.
  $field_instances['node-census-field_community_forums'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 144,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 192,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_community_forums',
    'label' => 'Community Forums',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 356,
    ),
  );

  // Exported field_instance: 'node-census-field_community_organizations'.
  $field_instances['node-census-field_community_organizations'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 141,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 176,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_community_organizations',
    'label' => 'Community Organizations',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 139,
    ),
  );

  // Exported field_instance: 'node-census-field_crja'.
  $field_instances['node-census-field_crja'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 143,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 208,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja',
    'label' => 'Civil Rights & Justice Activities',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 155,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_african_am_female'.
  $field_instances['node-census-field_crja_african_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 153,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 218,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_african_am_female',
    'label' => 'Civil Rights & Justice Activities African American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 168,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_african_am_male'.
  $field_instances['node-census-field_crja_african_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 152,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 217,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_african_am_male',
    'label' => 'Civil Rights & Justice Activities African American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 167,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_asian_am_female'.
  $field_instances['node-census-field_crja_asian_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 149,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 214,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_asian_am_female',
    'label' => 'Civil Rights & Justice Activities Asian American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 164,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_asian_am_male'.
  $field_instances['node-census-field_crja_asian_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 148,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 213,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_asian_am_male',
    'label' => 'Civil Rights & Justice Activities Asian American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 163,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_duplicates'.
  $field_instances['node-census-field_crja_duplicates'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 157,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 222,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_duplicates',
    'label' => 'Civil Rights & Justice Activities Duplicate',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 157,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_hispanic_female'.
  $field_instances['node-census-field_crja_hispanic_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 147,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 212,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_hispanic_female',
    'label' => 'Civil Rights & Justice Activities Hispanic/Latino Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 162,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_hispanic_male'.
  $field_instances['node-census-field_crja_hispanic_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 146,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 211,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_hispanic_male',
    'label' => 'Civil Rights & Justice Activities Hispanic/Latino Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 161,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_native_am_female'.
  $field_instances['node-census-field_crja_native_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 151,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 216,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_native_am_female',
    'label' => 'Civil Rights & Justice Activities Native American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 166,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_native_am_male'.
  $field_instances['node-census-field_crja_native_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 150,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 215,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_native_am_male',
    'label' => 'Civil Rights & Justice Activities Native American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 165,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_other_female'.
  $field_instances['node-census-field_crja_other_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 155,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 220,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_other_female',
    'label' => 'Civil Rights & Justice Activities Other Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 170,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_other_male'.
  $field_instances['node-census-field_crja_other_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 154,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 219,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_other_male',
    'label' => 'Civil Rights & Justice Activities Other Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 169,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_societal_impact'.
  $field_instances['node-census-field_crja_societal_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 158,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 223,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_societal_impact',
    'label' => 'Civil Rights & Justice Activities Societal Impact',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 158,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_unduplicated'.
  $field_instances['node-census-field_crja_unduplicated'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 156,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 221,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_unduplicated',
    'label' => 'Civil Rights & Justice Activities Unduplicate',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 156,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_white_female'.
  $field_instances['node-census-field_crja_white_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 145,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 210,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_white_female',
    'label' => 'Civil Rights & Justice Activities White Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 160,
    ),
  );

  // Exported field_instance: 'node-census-field_crja_white_male'.
  $field_instances['node-census-field_crja_white_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 144,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 209,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_crja_white_male',
    'label' => 'Civil Rights & Justice Activities White Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 159,
    ),
  );

  // Exported field_instance: 'node-census-field_d_travel'.
  $field_instances['node-census-field_d_travel'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 34,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_d_travel',
    'label' => 'D. Travel',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-census-field_date_established'.
  $field_instances['node-census-field_date_established'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Year only',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_established',
    'label' => 'Date Established',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_african_am_female'.
  $field_instances['node-census-field_direct_african_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 238,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 324,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_african_am_female',
    'label' => 'Direct Contact African American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 254,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_african_am_male'.
  $field_instances['node-census-field_direct_african_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 237,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 323,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_african_am_male',
    'label' => 'Direct Contact African American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 253,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_asian_am_female'.
  $field_instances['node-census-field_direct_asian_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 218,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 318,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_asian_am_female',
    'label' => 'Direct Contact Asian American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 256,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_asian_am_male'.
  $field_instances['node-census-field_direct_asian_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 217,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 317,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_asian_am_male',
    'label' => 'Direct Contact Asian American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 255,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_contact_help'.
  $field_instances['node-census-field_direct_contact_help'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 288,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_contact_help',
    'label' => 'direct contact help',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 352,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_contact_males'.
  $field_instances['node-census-field_direct_contact_males'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 249,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 363,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_contact_males',
    'label' => 'Males',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 284,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_hispanic_female'.
  $field_instances['node-census-field_direct_hispanic_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 231,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 315,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_hispanic_female',
    'label' => 'Direct Contact Hispanic/Latino Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 254,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_hispanic_male'.
  $field_instances['node-census-field_direct_hispanic_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 230,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 313,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_hispanic_male',
    'label' => 'Direct Contact Hispanic/Latino Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 253,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_native_am_female'.
  $field_instances['node-census-field_direct_native_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 236,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 321,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_native_am_female',
    'label' => 'Direct Contact Native American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 258,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_native_am_male'.
  $field_instances['node-census-field_direct_native_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 235,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 320,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_native_am_male',
    'label' => 'Direct Contact Native American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 257,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_other_female'.
  $field_instances['node-census-field_direct_other_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 241,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 329,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_other_female',
    'label' => 'Direct Contact Other Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 257,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_other_male'.
  $field_instances['node-census-field_direct_other_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 240,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 328,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_other_male',
    'label' => 'Direct Contact Other Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 256,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_total_female'.
  $field_instances['node-census-field_direct_total_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 243,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 326,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_total_female',
    'label' => 'Total Direct Contact Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 259,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_total_male'.
  $field_instances['node-census-field_direct_total_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 242,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 331,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_total_male',
    'label' => 'Total Direct Contact Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 258,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_white_female'.
  $field_instances['node-census-field_direct_white_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 229,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 312,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_white_female',
    'label' => 'Direct Contact White Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 257,
    ),
  );

  // Exported field_instance: 'node-census-field_direct_white_male'.
  $field_instances['node-census-field_direct_white_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 228,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 310,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_white_male',
    'label' => 'Direct Contact White Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 256,
    ),
  );

  // Exported field_instance: 'node-census-field_e_postage_freight'.
  $field_instances['node-census-field_e_postage_freight'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 35,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_e_postage_freight',
    'label' => 'E. Postage/Freight',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-census-field_economic_empowerment'.
  $field_instances['node-census-field_economic_empowerment'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 52,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_economic_empowerment',
    'label' => 'Economic Empowerment',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-census-field_education'.
  $field_instances['node-census-field_education'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 54,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 54,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_education',
    'label' => 'Education',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-census-field_email_address'.
  $field_instances['node-census-field_email_address'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_address',
    'label' => 'Email address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-census-field_employee_health_beneits'.
  $field_instances['node-census-field_employee_health_beneits'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 118,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 121,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_employee_health_beneits',
    'label' => 'Does your affiliate provide health benefits to its employees?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 119,
    ),
  );

  // Exported field_instance: 'node-census-field_employee_life_insurance'.
  $field_instances['node-census-field_employee_life_insurance'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 119,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 122,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_employee_life_insurance',
    'label' => 'Does your affiliate provide life insurance to its employees?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 120,
    ),
  );

  // Exported field_instance: 'node-census-field_era_describe'.
  $field_instances['node-census-field_era_describe'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 389,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_era_describe',
    'label' => 'Describe the Programs',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 336,
    ),
  );

  // Exported field_instance: 'node-census-field_era_funding_source_nul'.
  $field_instances['node-census-field_era_funding_source_nul'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 390,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_era_funding_source_nul',
    'label' => 'Funding Source: NUL',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 337,
    ),
  );

  // Exported field_instance: 'node-census-field_era_funding_source_other'.
  $field_instances['node-census-field_era_funding_source_other'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 392,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_era_funding_source_other',
    'label' => 'Funding Source: Other',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 339,
    ),
  );

  // Exported field_instance: 'node-census-field_era_funding_source_u_way'.
  $field_instances['node-census-field_era_funding_source_u_way'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 391,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_era_funding_source_u_way',
    'label' => 'Funding Source: U Way',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 338,
    ),
  );

  // Exported field_instance: 'node-census-field_era_help'.
  $field_instances['node-census-field_era_help'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 286,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_era_help',
    'label' => 'era help',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 205,
    ),
  );

  // Exported field_instance: 'node-census-field_era_number_served'.
  $field_instances['node-census-field_era_number_served'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 393,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_era_number_served',
    'label' => 'Number Served',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 340,
    ),
  );

  // Exported field_instance: 'node-census-field_era_societal_impact'.
  $field_instances['node-census-field_era_societal_impact'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 394,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_era_societal_impact',
    'label' => 'Societal Impact',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 341,
    ),
  );

  // Exported field_instance: 'node-census-field_f_insurance'.
  $field_instances['node-census-field_f_insurance'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_f_insurance',
    'label' => 'F. Insurance',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-census-field_fax'.
  $field_instances['node-census-field_fax'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fax',
    'label' => 'Fax',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-census-field_female'.
  $field_instances['node-census-field_female'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 258,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 334,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_female',
    'label' => 'Female',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 323,
    ),
  );

  // Exported field_instance: 'node-census-field_female_ce_voter'.
  $field_instances['node-census-field_female_ce_voter'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 311,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 341,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_female_ce_voter',
    'label' => 'female_ce_voter',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 141,
    ),
  );

  // Exported field_instance: 'node-census-field_females'.
  $field_instances['node-census-field_females'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 250,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 364,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_females',
    'label' => 'Females',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 285,
    ),
  );

  // Exported field_instance: 'node-census-field_first_name'.
  $field_instances['node-census-field_first_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Must be at least 5 characters',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_first_name',
    'label' => 'Affiliate Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_african_am_female'.
  $field_instances['node-census-field_forums_african_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 153,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 205,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_african_am_female',
    'label' => 'Community Forums African American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 357,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_african_am_male'.
  $field_instances['node-census-field_forums_african_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 152,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 204,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_african_am_male',
    'label' => 'Community Forums African American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 356,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_asian_am_female'.
  $field_instances['node-census-field_forums_asian_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 149,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 201,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_asian_am_female',
    'label' => 'Community Forums Asian American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 358,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_asian_am_male'.
  $field_instances['node-census-field_forums_asian_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 148,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 200,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_asian_am_male',
    'label' => 'Community Forums Asian American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 357,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_hispanic_female'.
  $field_instances['node-census-field_forums_hispanic_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 147,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 199,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_hispanic_female',
    'label' => 'Community Forums Hispanic/Latino Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 356,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_hispanic_male'.
  $field_instances['node-census-field_forums_hispanic_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 146,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 198,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_hispanic_male',
    'label' => 'Community Forums Hispanic/Latino Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 355,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_native_am_female'.
  $field_instances['node-census-field_forums_native_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 151,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 203,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_native_am_female',
    'label' => 'Community Forums Native American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 150,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_native_am_male'.
  $field_instances['node-census-field_forums_native_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 150,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 202,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_native_am_male',
    'label' => 'Community Forums Native American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 149,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_other_female'.
  $field_instances['node-census-field_forums_other_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 155,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 207,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_other_female',
    'label' => 'Community Forums Other Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 154,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_other_male'.
  $field_instances['node-census-field_forums_other_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 154,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 206,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_other_male',
    'label' => 'Community Forums Other Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 153,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_societal_impact'.
  $field_instances['node-census-field_forums_societal_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 359,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 195,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_societal_impact',
    'label' => 'Community Forums Societal Impact',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 416,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_white_female'.
  $field_instances['node-census-field_forums_white_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 145,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 197,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_white_female',
    'label' => 'Community Forums White Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 350,
    ),
  );

  // Exported field_instance: 'node-census-field_forums_white_male'.
  $field_instances['node-census-field_forums_white_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 144,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 196,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_forums_white_male',
    'label' => 'Community Forums White Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 349,
    ),
  );

  // Exported field_instance: 'node-census-field_full_time_employees'.
  $field_instances['node-census-field_full_time_employees'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 115,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 117,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_full_time_employees',
    'label' => 'How many full time employees do you have in your office?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'node-census-field_g_interest_payments'.
  $field_instances['node-census-field_g_interest_payments'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_g_interest_payments',
    'label' => 'G. Interest Payments',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-census-field_gender'.
  $field_instances['node-census-field_gender'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 292,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 339,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gender',
    'label' => 'UnDuplicate',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 263,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_16_20'.
  $field_instances['node-census-field_guild_16_20'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 102,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 102,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_16_20',
    'label' => '# of Guild age 16-20',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_21_30'.
  $field_instances['node-census-field_guild_21_30'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 103,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 103,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_21_30',
    'label' => '# of Guild age 21-30',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 71,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_31_40'.
  $field_instances['node-census-field_guild_31_40'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 104,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 104,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_31_40',
    'label' => '# of Guild age 31-40',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 72,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_41_65'.
  $field_instances['node-census-field_guild_41_65'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 105,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 105,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_41_65',
    'label' => '# of Guild age 41-65',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 73,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_66_81'.
  $field_instances['node-census-field_guild_66_81'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 106,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 106,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_66_81',
    'label' => '# of Guild age 66-81',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 74,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_82_and_above'.
  $field_instances['node-census-field_guild_82_and_above'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 107,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 107,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_82_and_above',
    'label' => '# of Guild age 82 and above',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 75,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_african_american'.
  $field_instances['node-census-field_guild_african_american'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 65,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 65,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_african_american',
    'label' => '# of Guild African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_asian_american'.
  $field_instances['node-census-field_guild_asian_american'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 63,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 63,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_asian_american',
    'label' => '# of Guild Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_female'.
  $field_instances['node-census-field_guild_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 61,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 61,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_female',
    'label' => '# of Guild Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_hispanic_latino'.
  $field_instances['node-census-field_guild_hispanic_latino'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 62,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 62,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_hispanic_latino',
    'label' => '# of Guild Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_male'.
  $field_instances['node-census-field_guild_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 100,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 100,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_male',
    'label' => '# of Guild Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_members'.
  $field_instances['node-census-field_guild_members'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 60,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 60,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_members',
    'label' => '# of Members in guild',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_native_american'.
  $field_instances['node-census-field_guild_native_american'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 64,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 64,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_native_american',
    'label' => '# of Guild Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_other_heritage'.
  $field_instances['node-census-field_guild_other_heritage'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 66,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 66,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_other_heritage',
    'label' => '# of Guild Other Heritage',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'node-census-field_guild_white'.
  $field_instances['node-census-field_guild_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 101,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 101,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guild_white',
    'label' => '# of Guild White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'node-census-field_h_dues_subscription_regist'.
  $field_instances['node-census-field_h_dues_subscription_regist'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 38,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_h_dues_subscription_regist',
    'label' => 'H. Dues/Subscription/Registration',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-census-field_has_ad_marketing_campaign'.
  $field_instances['node-census-field_has_ad_marketing_campaign'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_has_ad_marketing_campaign',
    'label' => 'Does affiliate have an advertising or marketing campaign?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-census-field_health'.
  $field_instances['node-census-field_health'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 53,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 53,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_health',
    'label' => 'Health',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'node-census-field_help_indirect_contact'.
  $field_instances['node-census-field_help_indirect_contact'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 339,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_help_indirect_contact',
    'label' => 'help indirect contact',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 356,
    ),
  );

  // Exported field_instance: 'node-census-field_i_depreciation'.
  $field_instances['node-census-field_i_depreciation'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 39,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_i_depreciation',
    'label' => 'I. Depreciation',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-census-field_indirect_contact_served'.
  $field_instances['node-census-field_indirect_contact_served'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 254,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 358,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_indirect_contact_served',
    'label' => 'Indirect Contact Number Served',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 256,
    ),
  );

  // Exported field_instance: 'node-census-field_is_there_a_guild_'.
  $field_instances['node-census-field_is_there_a_guild_'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 59,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 59,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_is_there_a_guild_',
    'label' => 'Is there a Guild?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-census-field_is_there_a_ypc'.
  $field_instances['node-census-field_is_there_a_ypc'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 67,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 67,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_is_there_a_ypc',
    'label' => 'Is there a Young Professionals Chapter?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 76,
    ),
  );

  // Exported field_instance: 'node-census-field_is_website_linked_to_nul'.
  $field_instances['node-census-field_is_website_linked_to_nul'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_is_website_linked_to_nul',
    'label' => 'Is website linked to NUL website?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-census-field_j_taxes_including_property'.
  $field_instances['node-census-field_j_taxes_including_property'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 40,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_j_taxes_including_property',
    'label' => 'J. Taxes (including property taxes)',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-census-field_k_utilities'.
  $field_instances['node-census-field_k_utilities'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 41,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_k_utilities',
    'label' => 'K. Utilities (telephone, gas, electric)',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-census-field_l_equipment_space_rental'.
  $field_instances['node-census-field_l_equipment_space_rental'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 42,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_l_equipment_space_rental',
    'label' => 'L. Equipment/space rental',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-census-field_m_goods_and_services'.
  $field_instances['node-census-field_m_goods_and_services'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_m_goods_and_services',
    'label' => 'M. Goods and Services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-census-field_maintains_website'.
  $field_instances['node-census-field_maintains_website'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_maintains_website',
    'label' => 'Does the affiliate maintain a website?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-census-field_male'.
  $field_instances['node-census-field_male'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 310,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 340,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_male',
    'label' => 'Male',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 140,
    ),
  );

  // Exported field_instance: 'node-census-field_market_value_of_property'.
  $field_instances['node-census-field_market_value_of_property'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 49,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_market_value_of_property',
    'label' => 'If the affiliate owns its facilities, what is the current market value of the property?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-census-field_marketing_kit_or_pamphlet'.
  $field_instances['node-census-field_marketing_kit_or_pamphlet'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marketing_kit_or_pamphlet',
    'label' => 'Does affiliate do a marketing kit and/or pamphlet?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-census-field_method_of_ad_marketing'.
  $field_instances['node-census-field_method_of_ad_marketing'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_method_of_ad_marketing',
    'label' => 'What is the method of advertising or marketing?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-census-field_monthly_website_hits'.
  $field_instances['node-census-field_monthly_website_hits'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_monthly_website_hits',
    'label' => 'How many hits does your website receive monthly?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-census-field_n_rent_mortgage_payments'.
  $field_instances['node-census-field_n_rent_mortgage_payments'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 44,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_n_rent_mortgage_payments',
    'label' => 'N. Rent/mortgage payments',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-census-field_newsletter'.
  $field_instances['node-census-field_newsletter'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_newsletter',
    'label' => 'Does the affiliate produce a monthly/quarterly newsletter?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-census-field_number_of_satellite_office'.
  $field_instances['node-census-field_number_of_satellite_office'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 121,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 128,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_number_of_satellite_office',
    'label' => 'If so, how many satellite offices does your affiliate have?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 122,
    ),
  );

  // Exported field_instance: 'node-census-field_number_of_years_as_ceo'.
  $field_instances['node-census-field_number_of_years_as_ceo'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_number_of_years_as_ceo',
    'label' => 'Number of Years as CEO',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-census-field_number_of_years_of_service'.
  $field_instances['node-census-field_number_of_years_of_service'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_number_of_years_of_service',
    'label' => 'Number of Years of Service in Movement',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-census-field_number_properties_owned'.
  $field_instances['node-census-field_number_properties_owned'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 47,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_number_properties_owned',
    'label' => 'Own',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-census-field_number_properties_rented'.
  $field_instances['node-census-field_number_properties_rented'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 48,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_number_properties_rented',
    'label' => 'Rent',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-census-field_o_other'.
  $field_instances['node-census-field_o_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 45,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_o_other',
    'label' => 'O. Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-census-field_other_amount'.
  $field_instances['node-census-field_other_amount'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 57,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 57,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_amount',
    'label' => 'Other amount',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-census-field_other_description'.
  $field_instances['node-census-field_other_description'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 58,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 58,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_description',
    'label' => 'Other description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-census-field_other_volunteer_aux_groups'.
  $field_instances['node-census-field_other_volunteer_aux_groups'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 83,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 83,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_volunteer_aux_groups',
    'label' => 'Are there any other volunteer or auxiliary groups?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 92,
    ),
  );

  // Exported field_instance: 'node-census-field_own_or_rent'.
  $field_instances['node-census-field_own_or_rent'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_own_or_rent',
    'label' => 'Does the affiliate own or rent?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-census-field_part_time_employees'.
  $field_instances['node-census-field_part_time_employees'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 116,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 118,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_part_time_employees',
    'label' => 'How many part time employees do you have in your office?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 117,
    ),
  );

  // Exported field_instance: 'node-census-field_photo'.
  $field_instances['node-census-field_photo'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photo',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-census-field_police_african_am_female'.
  $field_instances['node-census-field_police_african_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 171,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 237,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_african_am_female',
    'label' => 'Police Brutality African American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 184,
    ),
  );

  // Exported field_instance: 'node-census-field_police_african_am_male'.
  $field_instances['node-census-field_police_african_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 170,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 236,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_african_am_male',
    'label' => 'Police Brutality African American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 183,
    ),
  );

  // Exported field_instance: 'node-census-field_police_asian_am_female'.
  $field_instances['node-census-field_police_asian_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 167,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 232,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_asian_am_female',
    'label' => 'Police Brutality Asian American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 180,
    ),
  );

  // Exported field_instance: 'node-census-field_police_asian_am_male'.
  $field_instances['node-census-field_police_asian_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 166,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 231,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_asian_am_male',
    'label' => 'Police Brutality Asian American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 179,
    ),
  );

  // Exported field_instance: 'node-census-field_police_brutality'.
  $field_instances['node-census-field_police_brutality'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 159,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 224,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_brutality',
    'label' => 'Police Brutality',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 171,
    ),
  );

  // Exported field_instance: 'node-census-field_police_duplicates'.
  $field_instances['node-census-field_police_duplicates'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 161,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 226,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_duplicates',
    'label' => 'Police Brutality Duplicate',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 173,
    ),
  );

  // Exported field_instance: 'node-census-field_police_hispanic_female'.
  $field_instances['node-census-field_police_hispanic_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 165,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 230,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_hispanic_female',
    'label' => 'Police Brutality Hispanic/Latino Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 178,
    ),
  );

  // Exported field_instance: 'node-census-field_police_hispanic_male'.
  $field_instances['node-census-field_police_hispanic_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 164,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 229,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_hispanic_male',
    'label' => 'Police Brutality Hispanic/Latino Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 177,
    ),
  );

  // Exported field_instance: 'node-census-field_police_native_am_female'.
  $field_instances['node-census-field_police_native_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 169,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 235,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_native_am_female',
    'label' => 'Police Brutality Native American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 182,
    ),
  );

  // Exported field_instance: 'node-census-field_police_native_am_male'.
  $field_instances['node-census-field_police_native_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 168,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 233,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_native_am_male',
    'label' => 'Police Brutality Native American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 181,
    ),
  );

  // Exported field_instance: 'node-census-field_police_other_female'.
  $field_instances['node-census-field_police_other_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 173,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 240,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_other_female',
    'label' => 'Police Brutality Other Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 186,
    ),
  );

  // Exported field_instance: 'node-census-field_police_other_male'.
  $field_instances['node-census-field_police_other_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 172,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 239,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_other_male',
    'label' => 'Police Brutality Other Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 185,
    ),
  );

  // Exported field_instance: 'node-census-field_police_societal_impact'.
  $field_instances['node-census-field_police_societal_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 191,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 305,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_societal_impact',
    'label' => 'Police Brutality Societal Impact',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 174,
    ),
  );

  // Exported field_instance: 'node-census-field_police_unduplicated'.
  $field_instances['node-census-field_police_unduplicated'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 160,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 225,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_unduplicated',
    'label' => 'Police Brutality Unduplicate',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 172,
    ),
  );

  // Exported field_instance: 'node-census-field_police_white_female'.
  $field_instances['node-census-field_police_white_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 163,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 228,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_white_female',
    'label' => 'Police Brutality White Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 176,
    ),
  );

  // Exported field_instance: 'node-census-field_police_white_male'.
  $field_instances['node-census-field_police_white_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 162,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 227,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_police_white_male',
    'label' => 'Police Brutality White Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 175,
    ),
  );

  // Exported field_instance: 'node-census-field_president_ceo_first_name'.
  $field_instances['node-census-field_president_ceo_first_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_president_ceo_first_name',
    'label' => 'President/CEO First Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-census-field_president_ceo_last_name'.
  $field_instances['node-census-field_president_ceo_last_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_president_ceo_last_name',
    'label' => 'President/CEO Last Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-census-field_president_ceo_middle_name'.
  $field_instances['node-census-field_president_ceo_middle_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_president_ceo_middle_name',
    'label' => 'President/CEO Middle Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-census-field_produces_a_radio_show'.
  $field_instances['node-census-field_produces_a_radio_show'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_produces_a_radio_show',
    'label' => 'Does affiliate produce a radio show?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-census-field_produces_annual_report'.
  $field_instances['node-census-field_produces_annual_report'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_produces_annual_report',
    'label' => 'Does the affiliate produces an annual report?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-census-field_produces_tv_or_cable_show'.
  $field_instances['node-census-field_produces_tv_or_cable_show'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_produces_tv_or_cable_show',
    'label' => 'Does affiliate produce a regular TV or cable show?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-census-field_public_african_am_female'.
  $field_instances['node-census-field_public_african_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 251,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 354,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_african_am_female',
    'label' => 'Public Contact African American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 270,
    ),
  );

  // Exported field_instance: 'node-census-field_public_african_am_male'.
  $field_instances['node-census-field_public_african_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 250,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 353,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_african_am_male',
    'label' => 'Public Contact African American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 269,
    ),
  );

  // Exported field_instance: 'node-census-field_public_asian_am_female'.
  $field_instances['node-census-field_public_asian_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 250,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 349,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_asian_am_female',
    'label' => 'Public Contact Asian American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 266,
    ),
  );

  // Exported field_instance: 'node-census-field_public_asian_am_male'.
  $field_instances['node-census-field_public_asian_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 249,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 348,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_asian_am_male',
    'label' => 'Public Contact Asian American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 265,
    ),
  );

  // Exported field_instance: 'node-census-field_public_contact_female'.
  $field_instances['node-census-field_public_contact_female'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 331,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 365,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_contact_female',
    'label' => 'Female',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 327,
    ),
  );

  // Exported field_instance: 'node-census-field_public_contact_help'.
  $field_instances['node-census-field_public_contact_help'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 340,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_contact_help',
    'label' => 'public contact help',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 354,
    ),
  );

  // Exported field_instance: 'node-census-field_public_contact_males'.
  $field_instances['node-census-field_public_contact_males'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 257,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 366,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_contact_males',
    'label' => 'Males',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 326,
    ),
  );

  // Exported field_instance: 'node-census-field_public_hispanic_female'.
  $field_instances['node-census-field_public_hispanic_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 256,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 347,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_hispanic_female',
    'label' => 'Public Contact Hispanic/Latio Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 264,
    ),
  );

  // Exported field_instance: 'node-census-field_public_hispanic_male'.
  $field_instances['node-census-field_public_hispanic_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 255,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 346,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_hispanic_male',
    'label' => 'Public Contact Hispanic/Latio Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 263,
    ),
  );

  // Exported field_instance: 'node-census-field_public_native_am_female'.
  $field_instances['node-census-field_public_native_am_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 249,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 352,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_native_am_female',
    'label' => 'Public Contact Native American Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 261,
    ),
  );

  // Exported field_instance: 'node-census-field_public_native_am_male'.
  $field_instances['node-census-field_public_native_am_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 248,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 350,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_native_am_male',
    'label' => 'Public Contact Native American Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 260,
    ),
  );

  // Exported field_instance: 'node-census-field_public_other_female'.
  $field_instances['node-census-field_public_other_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 252,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 356,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_other_female',
    'label' => 'Public Contact Other Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 263,
    ),
  );

  // Exported field_instance: 'node-census-field_public_other_male'.
  $field_instances['node-census-field_public_other_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 251,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 355,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_other_male',
    'label' => 'Public Contact Other Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 262,
    ),
  );

  // Exported field_instance: 'node-census-field_public_total_female'.
  $field_instances['node-census-field_public_total_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 256,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 361,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_total_female',
    'label' => 'Total Public Contact Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 258,
    ),
  );

  // Exported field_instance: 'node-census-field_public_total_male'.
  $field_instances['node-census-field_public_total_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 255,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 360,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_total_male',
    'label' => 'Total Public Contact Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 257,
    ),
  );

  // Exported field_instance: 'node-census-field_public_white_female'.
  $field_instances['node-census-field_public_white_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 342,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 345,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_white_female',
    'label' => 'Public Contact White Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 262,
    ),
  );

  // Exported field_instance: 'node-census-field_public_white_male'.
  $field_instances['node-census-field_public_white_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 341,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 344,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_white_male',
    'label' => 'Public Contact White Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 261,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_civic_desc'.
  $field_instances['node-census-field_relief_civic_desc'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 234,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 291,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_civic_desc',
    'label' => 'Relief Civic Engagement Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 230,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_civic_fund_nul'.
  $field_instances['node-census-field_relief_civic_fund_nul'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 235,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 292,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_civic_fund_nul',
    'label' => 'Relief Civic Engagement Funding NUL',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 231,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_civic_fund_other'.
  $field_instances['node-census-field_relief_civic_fund_other'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 237,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 294,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_civic_fund_other',
    'label' => 'Relief Civic Engagement Funding Other',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 233,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_civic_fund_uway'.
  $field_instances['node-census-field_relief_civic_fund_uway'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 236,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 293,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_civic_fund_uway',
    'label' => 'Relief Civic Engagement Funding U Way',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 232,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_civic_impact'.
  $field_instances['node-census-field_relief_civic_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 239,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 296,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_civic_impact',
    'label' => 'Relief Civic Engagement Societal Impact',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 235,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_civic_served'.
  $field_instances['node-census-field_relief_civic_served'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 238,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 295,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_civic_served',
    'label' => 'Relief Civic Engagement Number Served',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 234,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_ed_desc'.
  $field_instances['node-census-field_relief_ed_desc'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 233,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 269,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_ed_desc',
    'label' => 'Relief Education Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 345,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_ed_fund_nul'.
  $field_instances['node-census-field_relief_ed_fund_nul'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 234,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 271,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_ed_fund_nul',
    'label' => 'Relief Education Funding NUL',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 346,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_ed_fund_other'.
  $field_instances['node-census-field_relief_ed_fund_other'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 236,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 274,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_ed_fund_other',
    'label' => 'Relief Education Funding Other',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 348,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_ed_fund_uway'.
  $field_instances['node-census-field_relief_ed_fund_uway'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 235,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 272,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_ed_fund_uway',
    'label' => 'Relief Education Funding U Way',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 347,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_ed_impact'.
  $field_instances['node-census-field_relief_ed_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 237,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 276,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_ed_impact',
    'label' => 'Relief Education Societal Impact',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 350,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_ed_served'.
  $field_instances['node-census-field_relief_ed_served'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 238,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 278,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_ed_served',
    'label' => 'Relief Education Number Served',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 349,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_employ_desc'.
  $field_instances['node-census-field_relief_employ_desc'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 240,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 279,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_employ_desc',
    'label' => 'Relief Employment Empowerment Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 223,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_employ_fund_nul'.
  $field_instances['node-census-field_relief_employ_fund_nul'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 241,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 280,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_employ_fund_nul',
    'label' => 'Relief Employment Empowerment Funding NUL',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 224,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_employ_fund_other'.
  $field_instances['node-census-field_relief_employ_fund_other'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 243,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 282,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_employ_fund_other',
    'label' => 'Relief Employment Empowerment Funding Other',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 226,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_employ_fund_uway'.
  $field_instances['node-census-field_relief_employ_fund_uway'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 242,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 281,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_employ_fund_uway',
    'label' => 'Relief Employment Empowerment Funding U Way',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 225,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_employ_impact'.
  $field_instances['node-census-field_relief_employ_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 245,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 284,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_employ_impact',
    'label' => 'Relief Employment Empowerment Societal Impact',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 228,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_employ_served'.
  $field_instances['node-census-field_relief_employ_served'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 244,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 283,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_employ_served',
    'label' => 'Relief Employment Empowerment Number Served',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 227,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_health_desc'.
  $field_instances['node-census-field_relief_health_desc'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 246,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 285,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_health_desc',
    'label' => 'Relief Health Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 223,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_health_fund_nul'.
  $field_instances['node-census-field_relief_health_fund_nul'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 247,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 286,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_health_fund_nul',
    'label' => 'Relief Health Funding NUL',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 224,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_health_fund_other'.
  $field_instances['node-census-field_relief_health_fund_other'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 249,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 288,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_health_fund_other',
    'label' => 'Relief Health Funding Other',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 226,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_health_fund_uway'.
  $field_instances['node-census-field_relief_health_fund_uway'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 248,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 287,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_health_fund_uway',
    'label' => 'Relief Health Funding U Way',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 225,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_health_impact'.
  $field_instances['node-census-field_relief_health_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 251,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 290,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_health_impact',
    'label' => 'Relief Health Societal Impact',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 228,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_health_served'.
  $field_instances['node-census-field_relief_health_served'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 250,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 289,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_health_served',
    'label' => 'Relief Health Number Served',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 227,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_justice_desc'.
  $field_instances['node-census-field_relief_justice_desc'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 240,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 297,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_justice_desc',
    'label' => 'Relief Racial Justice Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 237,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_justice_fund_nul'.
  $field_instances['node-census-field_relief_justice_fund_nul'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 241,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 298,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_justice_fund_nul',
    'label' => 'Relief Racial Justice Funding NUL',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 238,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_justice_fund_other'.
  $field_instances['node-census-field_relief_justice_fund_other'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 243,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 300,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_justice_fund_other',
    'label' => 'Relief Racial Justice Funding Other',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 240,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_justice_fund_uway'.
  $field_instances['node-census-field_relief_justice_fund_uway'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 242,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 299,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_justice_fund_uway',
    'label' => 'Relief Racial Justice Funding U Way',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 239,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_justice_impact'.
  $field_instances['node-census-field_relief_justice_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 245,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 302,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_justice_impact',
    'label' => 'Relief Racial Justice Societal Impact',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 242,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_justice_served'.
  $field_instances['node-census-field_relief_justice_served'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 244,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 301,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_justice_served',
    'label' => 'Relief Racial Justice Number Served',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 241,
    ),
  );

  // Exported field_instance: 'node-census-field_relief_other_activities'.
  $field_instances['node-census-field_relief_other_activities'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 190,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 304,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relief_other_activities',
    'label' => 'Are there any other activities the affiliate is engaged in that are not reflected above? If so, please describe below: ',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 207,
    ),
  );

  // Exported field_instance: 'node-census-field_satellite_offices'.
  $field_instances['node-census-field_satellite_offices'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 120,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 124,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_satellite_offices',
    'label' => 'Does your affiliate have satellite offices?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 121,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_10_african_am'.
  $field_instances['node-census-field_service_area_10_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 319,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_10_african_am',
    'label' => 'Service Area 10 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 327,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_10_asian_am'.
  $field_instances['node-census-field_service_area_10_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 291,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_10_asian_am',
    'label' => 'Service Area 10 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 301,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_10_city'.
  $field_instances['node-census-field_service_area_10_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 234,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 438,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_10_city',
    'label' => 'Service Area 10 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 247,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_10_hispanic'.
  $field_instances['node-census-field_service_area_10_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 273,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 400,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_10_hispanic',
    'label' => 'Service Area 10 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 288,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_10_name'.
  $field_instances['node-census-field_service_area_10_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 221,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 446,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_10_name',
    'label' => 'Service Area 10 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 234,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_10_native_am'.
  $field_instances['node-census-field_service_area_10_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 306,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_10_native_am',
    'label' => 'Service Area 10 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 314,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_10_other'.
  $field_instances['node-census-field_service_area_10_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 332,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_10_other',
    'label' => 'Service Area 10 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 340,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_10_population'.
  $field_instances['node-census-field_service_area_10_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 247,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 387,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_10_population',
    'label' => 'Service Area 10 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 260,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_10_white'.
  $field_instances['node-census-field_service_area_10_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 260,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 374,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_10_white',
    'label' => 'Service Area 10 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 275,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_11_african_am'.
  $field_instances['node-census-field_service_area_11_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 320,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_11_african_am',
    'label' => 'Service Area 11 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 328,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_11_asian_am'.
  $field_instances['node-census-field_service_area_11_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 293,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_11_asian_am',
    'label' => 'Service Area 11 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 302,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_11_city'.
  $field_instances['node-census-field_service_area_11_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 235,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 439,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_11_city',
    'label' => 'Service Area 11 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 248,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_11_hispanic'.
  $field_instances['node-census-field_service_area_11_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 274,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 399,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_11_hispanic',
    'label' => 'Service Area 11 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 289,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_11_name'.
  $field_instances['node-census-field_service_area_11_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 222,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 445,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_11_name',
    'label' => 'Service Area 11 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 235,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_11_native_am'.
  $field_instances['node-census-field_service_area_11_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 307,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_11_native_am',
    'label' => 'Service Area 11 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 315,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_11_other'.
  $field_instances['node-census-field_service_area_11_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 333,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_11_other',
    'label' => 'Service Area 11 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 341,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_11_population'.
  $field_instances['node-census-field_service_area_11_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 248,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 386,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_11_population',
    'label' => 'Service Area 11 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 261,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_11_white'.
  $field_instances['node-census-field_service_area_11_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 261,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 373,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_11_white',
    'label' => 'Service Area 11 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 276,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_12_african_am'.
  $field_instances['node-census-field_service_area_12_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 321,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_12_african_am',
    'label' => 'Service Area 12 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 329,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_12_asian_am'.
  $field_instances['node-census-field_service_area_12_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 295,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_12_asian_am',
    'label' => 'Service Area 12 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 303,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_12_city'.
  $field_instances['node-census-field_service_area_12_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 236,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 442,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_12_city',
    'label' => 'Service Area 12 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 249,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_12_hispanic'.
  $field_instances['node-census-field_service_area_12_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 275,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 393,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_12_hispanic',
    'label' => 'Service Area 12 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 290,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_12_name'.
  $field_instances['node-census-field_service_area_12_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 223,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 449,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_12_name',
    'label' => 'Service Area 12 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 236,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_12_native_am'.
  $field_instances['node-census-field_service_area_12_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 308,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_12_native_am',
    'label' => 'Service Area 12 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 316,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_12_other'.
  $field_instances['node-census-field_service_area_12_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 334,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_12_other',
    'label' => 'Service Area 12 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 342,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_12_population'.
  $field_instances['node-census-field_service_area_12_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 249,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 385,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_12_population',
    'label' => 'Service Area 12 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 262,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_12_white'.
  $field_instances['node-census-field_service_area_12_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 262,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 388,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_12_white',
    'label' => 'Service Area 12 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 277,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_13_african_am'.
  $field_instances['node-census-field_service_area_13_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 322,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_13_african_am',
    'label' => 'Service Area 13 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 330,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_13_asian_am'.
  $field_instances['node-census-field_service_area_13_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 296,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_13_asian_am',
    'label' => 'Service Area 13 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 304,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_13_city'.
  $field_instances['node-census-field_service_area_13_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 237,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 441,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_13_city',
    'label' => 'Service Area 13 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 250,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_13_hispanic'.
  $field_instances['node-census-field_service_area_13_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 276,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 392,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_13_hispanic',
    'label' => 'Service Area 13 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 291,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_13_name'.
  $field_instances['node-census-field_service_area_13_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 224,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 450,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_13_name',
    'label' => 'Service Area 13 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 237,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_13_native_am'.
  $field_instances['node-census-field_service_area_13_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 309,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_13_native_am',
    'label' => 'Service Area 13 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 317,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_13_other'.
  $field_instances['node-census-field_service_area_13_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 335,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_13_other',
    'label' => 'Service Area 13 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 343,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_13_population'.
  $field_instances['node-census-field_service_area_13_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 250,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 378,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_13_population',
    'label' => 'Service Area 13 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 265,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_13_white'.
  $field_instances['node-census-field_service_area_13_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 263,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 389,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_13_white',
    'label' => 'Service Area 13 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 278,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_14_african_am'.
  $field_instances['node-census-field_service_area_14_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 323,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_14_african_am',
    'label' => 'Service Area 14 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 331,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_14_asian_am'.
  $field_instances['node-census-field_service_area_14_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 297,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_14_asian_am',
    'label' => 'Service Area 14 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 305,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_14_city'.
  $field_instances['node-census-field_service_area_14_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 238,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 440,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_14_city',
    'label' => 'Service Area 14 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 251,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_14_hispanic'.
  $field_instances['node-census-field_service_area_14_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 278,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 391,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_14_hispanic',
    'label' => 'Service Area 14 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 292,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_14_name'.
  $field_instances['node-census-field_service_area_14_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 225,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 453,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_14_name',
    'label' => 'Service Area 14 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 238,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_14_native_am'.
  $field_instances['node-census-field_service_area_14_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 310,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_14_native_am',
    'label' => 'Service Area 14 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 318,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_14_other'.
  $field_instances['node-census-field_service_area_14_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 336,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_14_other',
    'label' => 'Service Area 14 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 344,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_14_population'.
  $field_instances['node-census-field_service_area_14_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 251,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 377,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_14_population',
    'label' => 'Service Area 14 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 266,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_14_white'.
  $field_instances['node-census-field_service_area_14_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 264,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 404,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_14_white',
    'label' => 'Service Area 14 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 279,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_15_african_am'.
  $field_instances['node-census-field_service_area_15_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 324,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_15_african_am',
    'label' => 'Service Area 15 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 332,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_15_asian_am'.
  $field_instances['node-census-field_service_area_15_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 298,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_15_asian_am',
    'label' => 'Service Area 15 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 306,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_15_city'.
  $field_instances['node-census-field_service_area_15_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 239,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 411,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_15_city',
    'label' => 'Service Area 15 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 252,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_15_hispanic'.
  $field_instances['node-census-field_service_area_15_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 279,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 390,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_15_hispanic',
    'label' => 'Service Area 15 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 293,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_15_name'.
  $field_instances['node-census-field_service_area_15_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 226,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 452,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_15_name',
    'label' => 'Service Area 15 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 239,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_15_native_am'.
  $field_instances['node-census-field_service_area_15_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 311,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_15_native_am',
    'label' => 'Service Area 15 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 319,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_15_other'.
  $field_instances['node-census-field_service_area_15_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 337,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_15_other',
    'label' => 'Service Area 15 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 345,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_15_population'.
  $field_instances['node-census-field_service_area_15_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 252,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 370,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_15_population',
    'label' => 'Service Area 15 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 267,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_15_white'.
  $field_instances['node-census-field_service_area_15_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 265,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 403,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_15_white',
    'label' => 'Service Area 15 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 280,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_1_african_am'.
  $field_instances['node-census-field_service_area_1_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 211,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 412,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_1_african_am',
    'label' => 'Service Area 1 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 216,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_1_asian_am'.
  $field_instances['node-census-field_service_area_1_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 200,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 423,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_1_asian_am',
    'label' => 'Service Area 1 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 214,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_1_city_county'.
  $field_instances['node-census-field_service_area_1_city_county'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 196,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 454,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_1_city_county',
    'label' => 'Service Area 1 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 210,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_1_hispanic'.
  $field_instances['node-census-field_service_area_1_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 199,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 424,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_1_hispanic',
    'label' => 'Service Area 1 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 213,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_1_name'.
  $field_instances['node-census-field_service_area_1_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 202,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 428,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_1_name',
    'label' => 'Service Area 1 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 209,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_1_native_am'.
  $field_instances['node-census-field_service_area_1_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 201,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 427,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_1_native_am',
    'label' => 'Service Area 1 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 215,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_1_other'.
  $field_instances['node-census-field_service_area_1_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 203,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 431,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_1_other',
    'label' => 'Service Area 1 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 217,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_1_population'.
  $field_instances['node-census-field_service_area_1_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 197,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 426,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_1_population',
    'label' => 'Service Area 1 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 211,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_1_white'.
  $field_instances['node-census-field_service_area_1_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 198,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 425,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_1_white',
    'label' => 'Service Area 1 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 212,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_2_african_am'.
  $field_instances['node-census-field_service_area_2_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 212,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 416,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_2_african_am',
    'label' => 'Service Area 2 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 225,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_2_asian_am'.
  $field_instances['node-census-field_service_area_2_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 209,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 414,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_2_asian_am',
    'label' => 'Service Area 2 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 223,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_2_city'.
  $field_instances['node-census-field_service_area_2_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 205,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 429,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_2_city',
    'label' => 'Service Area 2 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 219,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_2_hispanic'.
  $field_instances['node-census-field_service_area_2_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 207,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 421,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_2_hispanic',
    'label' => 'Service Area 2 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 222,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_2_name'.
  $field_instances['node-census-field_service_area_2_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 204,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 430,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_2_name',
    'label' => 'Service Area 2 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 218,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_2_native_am'.
  $field_instances['node-census-field_service_area_2_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 210,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 413,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_2_native_am',
    'label' => 'Service Area 2 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 224,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_2_other'.
  $field_instances['node-census-field_service_area_2_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 213,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 417,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_2_other',
    'label' => 'Service Area 2 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 226,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_2_population'.
  $field_instances['node-census-field_service_area_2_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 208,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 415,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_2_population',
    'label' => 'Service Area 2 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 220,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_2_white'.
  $field_instances['node-census-field_service_area_2_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 206,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 422,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_2_white',
    'label' => 'Service Area 2 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 221,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_3_african_ame'.
  $field_instances['node-census-field_service_area_3_african_ame'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 312,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_3_african_ame',
    'label' => 'Service Area 3 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 320,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_3_asian_am'.
  $field_instances['node-census-field_service_area_3_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 280,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 394,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_3_asian_am',
    'label' => 'Service Area 3 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 294,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_3_city'.
  $field_instances['node-census-field_service_area_3_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 227,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 451,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_3_city',
    'label' => 'Service Area 3 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 240,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_3_hispanic'.
  $field_instances['node-census-field_service_area_3_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 266,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 402,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_3_hispanic',
    'label' => 'Service Area 3 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 281,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_3_name'.
  $field_instances['node-census-field_service_area_3_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 214,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 420,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_3_name',
    'label' => 'Service Area 3 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 227,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_3_native_am'.
  $field_instances['node-census-field_service_area_3_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 299,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_3_native_am',
    'label' => 'Service Area 3 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 307,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_3_other'.
  $field_instances['node-census-field_service_area_3_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 325,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_3_other',
    'label' => 'Service Area 3 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 333,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_3_population'.
  $field_instances['node-census-field_service_area_3_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 240,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 410,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_3_population',
    'label' => 'Service Area 3 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 253,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_3_white'.
  $field_instances['node-census-field_service_area_3_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 253,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 369,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_3_white',
    'label' => 'Service Area 3 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 268,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_4_african_am'.
  $field_instances['node-census-field_service_area_4_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 313,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_4_african_am',
    'label' => 'Service Area 4 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 321,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_4_asian_am'.
  $field_instances['node-census-field_service_area_4_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 281,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 395,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_4_asian_am',
    'label' => 'Service Area 4 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 295,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_4_city'.
  $field_instances['node-census-field_service_area_4_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 228,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 444,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_4_city',
    'label' => 'Service Area 4 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 241,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_4_hispanic'.
  $field_instances['node-census-field_service_area_4_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 267,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 401,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_4_hispanic',
    'label' => 'Service Area 4 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 282,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_4_name'.
  $field_instances['node-census-field_service_area_4_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 215,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 419,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_4_name',
    'label' => 'Service Area 4 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 228,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_4_native_am'.
  $field_instances['node-census-field_service_area_4_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 300,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_4_native_am',
    'label' => 'Service Area 4 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 308,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_4_other'.
  $field_instances['node-census-field_service_area_4_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 326,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_4_other',
    'label' => 'Service Area 4 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 334,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_4_population'.
  $field_instances['node-census-field_service_area_4_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 241,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 382,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_4_population',
    'label' => 'Service Area 4 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 254,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_4_white'.
  $field_instances['node-census-field_service_area_4_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 254,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 368,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_4_white',
    'label' => 'Service Area 4 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 269,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_5_african_am'.
  $field_instances['node-census-field_service_area_5_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 314,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_5_african_am',
    'label' => 'Service Area 5 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 322,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_5_asian_am'.
  $field_instances['node-census-field_service_area_5_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 282,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 398,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_5_asian_am',
    'label' => 'Service Area 5 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 296,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_5_city'.
  $field_instances['node-census-field_service_area_5_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 229,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 443,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_5_city',
    'label' => 'Service Area 5 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 242,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_5_hispanic'.
  $field_instances['node-census-field_service_area_5_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 268,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 405,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_5_hispanic',
    'label' => 'Service Area 5 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 283,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_5_name'.
  $field_instances['node-census-field_service_area_5_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 216,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 418,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_5_name',
    'label' => 'Service Area 5 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 229,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_5_native_am'.
  $field_instances['node-census-field_service_area_5_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 301,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_5_native_am',
    'label' => 'Service Area 5 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 309,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_5_other'.
  $field_instances['node-census-field_service_area_5_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 327,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_5_other',
    'label' => 'Service Area 5 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 335,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_5_population'.
  $field_instances['node-census-field_service_area_5_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 242,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 381,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_5_population',
    'label' => 'Service Area 5 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 255,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_5_white'.
  $field_instances['node-census-field_service_area_5_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 255,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 367,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_5_white',
    'label' => 'Service Area 5 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 270,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_6_african_am'.
  $field_instances['node-census-field_service_area_6_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 315,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_6_african_am',
    'label' => 'Service Area 6 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 323,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_6_asian_am'.
  $field_instances['node-census-field_service_area_6_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 283,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 397,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_6_asian_am',
    'label' => 'Service Area 6 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 297,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_6_city'.
  $field_instances['node-census-field_service_area_6_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 230,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 437,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_6_city',
    'label' => 'Service Area 6 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 243,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_6_hispanic'.
  $field_instances['node-census-field_service_area_6_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 269,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 406,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_6_hispanic',
    'label' => 'Service Area 6 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 284,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_6_name'.
  $field_instances['node-census-field_service_area_6_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 217,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 432,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_6_name',
    'label' => 'Service Area 6 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 230,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_6_native_am'.
  $field_instances['node-census-field_service_area_6_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 302,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_6_native_am',
    'label' => 'Service Area 6 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 310,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_6_other'.
  $field_instances['node-census-field_service_area_6_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 328,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_6_other',
    'label' => 'Service Area 6 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 336,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_6_population'.
  $field_instances['node-census-field_service_area_6_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 243,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 380,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_6_population',
    'label' => 'Service Area 6 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 256,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_6_white'.
  $field_instances['node-census-field_service_area_6_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 256,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 371,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_6_white',
    'label' => 'Service Area 6 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 271,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_7_african_am'.
  $field_instances['node-census-field_service_area_7_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 316,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_7_african_am',
    'label' => 'Service Area 7 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 324,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_7_asian_ameri'.
  $field_instances['node-census-field_service_area_7_asian_ameri'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 284,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 396,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_7_asian_ameri',
    'label' => 'Service Area 7 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 298,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_7_city'.
  $field_instances['node-census-field_service_area_7_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 231,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 436,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_7_city',
    'label' => 'Service Area 7 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 244,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_7_hispanic'.
  $field_instances['node-census-field_service_area_7_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 270,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 409,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_7_hispanic',
    'label' => 'Service Area 7 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 285,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_7_name'.
  $field_instances['node-census-field_service_area_7_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 218,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 433,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_7_name',
    'label' => 'Service Area 7 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 231,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_7_native_am'.
  $field_instances['node-census-field_service_area_7_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 303,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_7_native_am',
    'label' => 'Service Area 7 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 311,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_7_other'.
  $field_instances['node-census-field_service_area_7_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 329,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_7_other',
    'label' => 'Service Area 7 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 337,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_7_population'.
  $field_instances['node-census-field_service_area_7_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 244,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 379,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_7_population',
    'label' => 'Service Area 7 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 257,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_7_white'.
  $field_instances['node-census-field_service_area_7_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 257,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 372,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_7_white',
    'label' => 'Service Area 7 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 272,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_8_african_am'.
  $field_instances['node-census-field_service_area_8_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 317,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_8_african_am',
    'label' => 'Service Area 8 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 325,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_8_asian_am'.
  $field_instances['node-census-field_service_area_8_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 289,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_8_asian_am',
    'label' => 'Service Area 8 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 299,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_8_city'.
  $field_instances['node-census-field_service_area_8_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 232,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 435,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_8_city',
    'label' => 'Service Area 8 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 245,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_8_hispanic'.
  $field_instances['node-census-field_service_area_8_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 271,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 408,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_8_hispanic',
    'label' => 'Service Area 8 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 286,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_8_name'.
  $field_instances['node-census-field_service_area_8_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 219,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 448,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_8_name',
    'label' => 'Service Area 8 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 232,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_8_native_am'.
  $field_instances['node-census-field_service_area_8_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 304,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_8_native_am',
    'label' => 'Service Area 8 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 312,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_8_other'.
  $field_instances['node-census-field_service_area_8_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 330,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_8_other',
    'label' => 'Service Area 8 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 338,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_8_population'.
  $field_instances['node-census-field_service_area_8_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 245,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 383,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_8_population',
    'label' => 'Service Area 8 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 258,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_8_white'.
  $field_instances['node-census-field_service_area_8_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 258,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 376,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_8_white',
    'label' => 'Service Area 8 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 273,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_9_african_am'.
  $field_instances['node-census-field_service_area_9_african_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 318,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_9_african_am',
    'label' => 'Service Area 9 African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 326,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_9_asian_am'.
  $field_instances['node-census-field_service_area_9_asian_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 290,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_9_asian_am',
    'label' => 'Service Area 9 Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 300,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_9_city'.
  $field_instances['node-census-field_service_area_9_city'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 233,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 434,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_9_city',
    'label' => 'Service Area 9 City/County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 246,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_9_hispanic'.
  $field_instances['node-census-field_service_area_9_hispanic'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 272,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 407,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_9_hispanic',
    'label' => 'Service Area 9 Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 287,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_9_name'.
  $field_instances['node-census-field_service_area_9_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 220,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 447,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_9_name',
    'label' => 'Service Area 9 Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 233,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_9_native_am'.
  $field_instances['node-census-field_service_area_9_native_am'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 305,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_9_native_am',
    'label' => 'Service Area 9 Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 313,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_9_other'.
  $field_instances['node-census-field_service_area_9_other'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 331,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_9_other',
    'label' => 'Service Area 9 Other',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 339,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_9_population'.
  $field_instances['node-census-field_service_area_9_population'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 246,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 384,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_9_population',
    'label' => 'Service Area 9 Population',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 259,
    ),
  );

  // Exported field_instance: 'node-census-field_service_area_9_white'.
  $field_instances['node-census-field_service_area_9_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 259,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 375,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_area_9_white',
    'label' => 'Service Area 9 White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 274,
    ),
  );

  // Exported field_instance: 'node-census-field_service_areas'.
  $field_instances['node-census-field_service_areas'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 338,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_areas',
    'label' => 'Service Areas',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'service_area' => 'service_area',
      ),
      'bundle_weights' => array(
        'service_area' => 2,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 346,
    ),
  );

  // Exported field_instance: 'node-census-field_spacer4'.
  $field_instances['node-census-field_spacer4'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 143,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 343,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spacer4',
    'label' => 'spacer4',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 286,
    ),
  );

  // Exported field_instance: 'node-census-field_spacer5'.
  $field_instances['node-census-field_spacer5'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 359,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spacer5',
    'label' => 'spacer5',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 146,
    ),
  );

  // Exported field_instance: 'node-census-field_spacer6'.
  $field_instances['node-census-field_spacer6'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 358,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spacer6',
    'label' => 'spacer6',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 415,
    ),
  );

  // Exported field_instance: 'node-census-field_state_of_black_report'.
  $field_instances['node-census-field_state_of_black_report'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_state_of_black_report',
    'label' => 'Does affiliate produce a "State of Black (Affiliate Name)" Report?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-census-field_state_province'.
  $field_instances['node-census-field_state_province'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_state_province',
    'label' => 'State/Province',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-census-field_survey_best_time_to_call'.
  $field_instances['node-census-field_survey_best_time_to_call'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 111,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 111,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_survey_best_time_to_call',
    'label' => 'Best Time to Call',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'node-census-field_survey_contact_first_name'.
  $field_instances['node-census-field_survey_contact_first_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 108,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 108,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_survey_contact_first_name',
    'label' => 'Survey Contact First Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 109,
    ),
  );

  // Exported field_instance: 'node-census-field_survey_contact_last_name'.
  $field_instances['node-census-field_survey_contact_last_name'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 109,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 109,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_survey_contact_last_name',
    'label' => 'Survey Contact Last Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'node-census-field_survey_email_address'.
  $field_instances['node-census-field_survey_email_address'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 113,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 113,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_survey_email_address',
    'label' => 'Email address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'node-census-field_survey_name_of_certifier'.
  $field_instances['node-census-field_survey_name_of_certifier'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information has been reviewed and certified as accurate by whom?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 114,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 115,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_survey_name_of_certifier',
    'label' => 'Name of certifier',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 115,
    ),
  );

  // Exported field_instance: 'node-census-field_survey_phone_number'.
  $field_instances['node-census-field_survey_phone_number'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 110,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 110,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_survey_phone_number',
    'label' => 'Phone Number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 111,
    ),
  );

  // Exported field_instance: 'node-census-field_survey_time_zone'.
  $field_instances['node-census-field_survey_time_zone'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 112,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 112,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_survey_time_zone',
    'label' => 'Time Zone',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 113,
    ),
  );

  // Exported field_instance: 'node-census-field_telephone'.
  $field_instances['node-census-field_telephone'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_telephone',
    'label' => 'Telephone',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-census-field_test_1'.
  $field_instances['node-census-field_test_1'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 294,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 342,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_test_1',
    'label' => 'Duplicate',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 264,
    ),
  );

  // Exported field_instance: 'node-census-field_total'.
  $field_instances['node-census-field_total'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 332,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 338,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_total',
    'label' => 'Total',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 324,
    ),
  );

  // Exported field_instance: 'node-census-field_total_expenditures'.
  $field_instances['node-census-field_total_expenditures'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_total_expenditures',
    'label' => 'What was the total expenditure by your affiliate for expenses (include salaries, rent/mortgage, equipment, etc.)?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-census-field_total_number_of_volunteers'.
  $field_instances['node-census-field_total_number_of_volunteers'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 99,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 99,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_total_number_of_volunteers',
    'label' => 'What is the total number of volunteers for your affiliate?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 108,
    ),
  );

  // Exported field_instance: 'node-census-field_totalspacer'.
  $field_instances['node-census-field_totalspacer'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 311,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 335,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_totalspacer',
    'label' => 'totalspacer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 316,
    ),
  );

  // Exported field_instance: 'node-census-field_totalspacer2'.
  $field_instances['node-census-field_totalspacer2'] = array(
    'bundle' => 'census',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_view',
        'weight' => 312,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 336,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_totalspacer2',
    'label' => 'totalspacer2',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 317,
    ),
  );

  // Exported field_instance: 'node-census-field_type_of_venture'.
  $field_instances['node-census-field_type_of_venture'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 341,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type_of_venture',
    'label' => 'Type of Venture',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 347,
    ),
  );

  // Exported field_instance: 'node-census-field_voter__societal_impact'.
  $field_instances['node-census-field_voter__societal_impact'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 144,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 163,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter__societal_impact',
    'label' => 'Total Number Served or Registered (Male and Female)',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 287,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_african_amer_female'.
  $field_instances['node-census-field_voter_african_amer_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 152,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 173,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_african_amer_female',
    'label' => 'Voter African American Female',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 148,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_african_amer_male'.
  $field_instances['node-census-field_voter_african_amer_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 151,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 172,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_african_amer_male',
    'label' => 'Voter African American Male',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 147,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_asian_amer_female'.
  $field_instances['node-census-field_voter_asian_amer_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 148,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 169,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_asian_amer_female',
    'label' => 'Voter Asian American Female',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 144,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_asian_amer_male'.
  $field_instances['node-census-field_voter_asian_amer_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 147,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 168,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_asian_amer_male',
    'label' => 'Voter Asian American Male',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 143,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_hispanic_female'.
  $field_instances['node-census-field_voter_hispanic_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 146,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 167,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_hispanic_female',
    'label' => 'Voter Hispanic/Latino Female',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 142,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_hispanic_male'.
  $field_instances['node-census-field_voter_hispanic_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 145,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 166,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_hispanic_male',
    'label' => 'Voter Hispanic/Latino Male',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 141,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_native_amer_female'.
  $field_instances['node-census-field_voter_native_amer_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 150,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 171,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_native_amer_female',
    'label' => '  Voter Native American Female',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 146,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_native_amer_male'.
  $field_instances['node-census-field_voter_native_amer_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 149,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 170,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_native_amer_male',
    'label' => 'Voter Native American male',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 145,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_other_female'.
  $field_instances['node-census-field_voter_other_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 289,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 175,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_other_female',
    'label' => 'Voter Other Female',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 150,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_other_male'.
  $field_instances['node-census-field_voter_other_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 288,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 174,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_other_male',
    'label' => 'Voter Other Male',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 149,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_registration'.
  $field_instances['node-census-field_voter_registration'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 139,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 160,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_registration',
    'label' => 'Voter Registration',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 287,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_white_female'.
  $field_instances['node-census-field_voter_white_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 144,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 165,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_white_female',
    'label' => 'Voter White Female',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 142,
    ),
  );

  // Exported field_instance: 'node-census-field_voter_white_male'.
  $field_instances['node-census-field_voter_white_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 143,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 164,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_voter_white_male',
    'label' => 'Voter White Male',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 141,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_16_20'.
  $field_instances['node-census-field_ypc_16_20'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 77,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 77,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_16_20',
    'label' => '# of Young Professionals Chapter age 16-20',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 86,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_21_30'.
  $field_instances['node-census-field_ypc_21_30'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 78,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 78,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_21_30',
    'label' => '# of Young Professionals Chapter age 21-30',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 87,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_31_40'.
  $field_instances['node-census-field_ypc_31_40'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 79,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 79,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_31_40',
    'label' => '# of Young Professionals Chapter age 31-40',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 88,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_41_65'.
  $field_instances['node-census-field_ypc_41_65'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 80,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 80,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_41_65',
    'label' => '# of Young Professionals Chapter age 41-65',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 89,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_66_81'.
  $field_instances['node-census-field_ypc_66_81'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 81,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 81,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_66_81',
    'label' => '# of Young Professionals Chapter age 66-81',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 90,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_82_and_above'.
  $field_instances['node-census-field_ypc_82_and_above'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 82,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 82,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_82_and_above',
    'label' => '# of Young Professionals Chapter age 82 and above',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 91,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_african_american'.
  $field_instances['node-census-field_ypc_african_american'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 74,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 74,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_african_american',
    'label' => '# of Young Professionals Chapter African American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 84,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_asian_american'.
  $field_instances['node-census-field_ypc_asian_american'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 73,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 73,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_asian_american',
    'label' => '# of Young Professionals Chapter Asian American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 82,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_female'.
  $field_instances['node-census-field_ypc_female'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 70,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 70,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_female',
    'label' => '# of Young Professionals Chapter Females',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 79,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_hispanic_latino'.
  $field_instances['node-census-field_ypc_hispanic_latino'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 72,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 72,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_hispanic_latino',
    'label' => '# of Young Professionals Chapter Hispanic/Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 81,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_male'.
  $field_instances['node-census-field_ypc_male'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 69,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 69,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_male',
    'label' => '# of Young Professionals Chapter Males',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 78,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_members'.
  $field_instances['node-census-field_ypc_members'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 68,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 68,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_members',
    'label' => '# of Young Professionals Chapter Members',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 77,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_native_american'.
  $field_instances['node-census-field_ypc_native_american'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 75,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 75,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_native_american',
    'label' => '# of Young Professionals Chapter Native American',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 83,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_other_heritage'.
  $field_instances['node-census-field_ypc_other_heritage'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 76,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 76,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_other_heritage',
    'label' => '# of Young Professionals Chapter Other Heritage',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 85,
    ),
  );

  // Exported field_instance: 'node-census-field_ypc_white'.
  $field_instances['node-census-field_ypc_white'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 71,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 71,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ypc_white',
    'label' => '# of Young Professionals Chapter Whites',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 80,
    ),
  );

  // Exported field_instance: 'node-census-field_zip_code'.
  $field_instances['node-census-field_zip_code'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zip_code',
    'label' => 'Zip Code',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('  Community Organization African American Females');
  t('  Community Organization Native American Males');
  t('  Voter Native American Female');
  t('# of Auxillary Group African American');
  t('# of Auxillary Group Asian American');
  t('# of Auxillary Group Females');
  t('# of Auxillary Group Hispanic/Latino');
  t('# of Auxillary Group Males');
  t('# of Auxillary Group Members');
  t('# of Auxillary Group Native American');
  t('# of Auxillary Group Other Heritage');
  t('# of Auxillary Group White');
  t('# of Auxillary Group age 16-20');
  t('# of Auxillary Group age 21-30');
  t('# of Auxillary Group age 31-40');
  t('# of Auxillary Group age 41-65');
  t('# of Auxillary Group age 66-81');
  t('# of Auxillary Group age 82 and above');
  t('# of Guild African American');
  t('# of Guild Asian American');
  t('# of Guild Females');
  t('# of Guild Hispanic/Latino');
  t('# of Guild Males');
  t('# of Guild Native American');
  t('# of Guild Other Heritage');
  t('# of Guild White');
  t('# of Guild age 16-20');
  t('# of Guild age 21-30');
  t('# of Guild age 31-40');
  t('# of Guild age 41-65');
  t('# of Guild age 66-81');
  t('# of Guild age 82 and above');
  t('# of Members in guild');
  t('# of Young Professionals Chapter African American');
  t('# of Young Professionals Chapter Asian American');
  t('# of Young Professionals Chapter Females');
  t('# of Young Professionals Chapter Hispanic/Latino');
  t('# of Young Professionals Chapter Males');
  t('# of Young Professionals Chapter Members');
  t('# of Young Professionals Chapter Native American');
  t('# of Young Professionals Chapter Other Heritage');
  t('# of Young Professionals Chapter Whites');
  t('# of Young Professionals Chapter age 16-20');
  t('# of Young Professionals Chapter age 21-30');
  t('# of Young Professionals Chapter age 31-40');
  t('# of Young Professionals Chapter age 41-65');
  t('# of Young Professionals Chapter age 66-81');
  t('# of Young Professionals Chapter age 82 and above');
  t('A. Salaries/Wages');
  t('Address Line 1');
  t('Address Line 2');
  t('Advoacy Research');
  t('Advocacy Description');
  t('Advocacy Efforts');
  t('Advocacy Efforts African American Females');
  t('Advocacy Efforts African American Males');
  t('Advocacy Efforts Asian American Females');
  t('Advocacy Efforts Asian American Males');
  t('Advocacy Efforts Duplicate');
  t('Advocacy Efforts Hispanic/Latino Females');
  t('Advocacy Efforts Hispanic/Latino Males');
  t('Advocacy Efforts Native American Females');
  t('Advocacy Efforts Native American Males');
  t('Advocacy Efforts Other Females');
  t('Advocacy Efforts Other Males');
  t('Advocacy Efforts Societal Impact');
  t('Advocacy Efforts Unduplicate');
  t('Advocacy Efforts White Females');
  t('Advocacy Efforts White Males');
  t('Affiliate Name');
  t('African American female board members');
  t('African American male board members');
  t('African American total board members');
  t('Are there any other activities the affiliate is engaged in that are not reflected above? If so, please describe below: ');
  t('Are there any other volunteer or auxiliary groups?');
  t('Asian American female board members');
  t('Asian American male board members');
  t('Asian American total board members');
  t('B. Fringe Benefits');
  t('Best Time to Call');
  t('Board Help');
  t('Body');
  t('Budget - Corporations');
  t('Budget - Federal');
  t('Budget - Foundations');
  t('Budget - Individual Membership');
  t('Budget - Investment Earnings');
  t('Budget - NUL Funding');
  t('Budget - Other');
  t('Budget - Special Events');
  t('Budget - State / Local');
  t('Budget - United Way');
  t('C. Professional/Contract/Consulting Fees');
  t('Cellular Number');
  t('City');
  t('Civic Engagement');
  t('Civil Rights');
  t('Civil Rights & Justice Activities');
  t('Civil Rights & Justice Activities African American Females');
  t('Civil Rights & Justice Activities African American Males');
  t('Civil Rights & Justice Activities Asian American Females');
  t('Civil Rights & Justice Activities Asian American Males');
  t('Civil Rights & Justice Activities Duplicate');
  t('Civil Rights & Justice Activities Hispanic/Latino Females');
  t('Civil Rights & Justice Activities Hispanic/Latino Males');
  t('Civil Rights & Justice Activities Native American Females');
  t('Civil Rights & Justice Activities Native American Males');
  t('Civil Rights & Justice Activities Other Females');
  t('Civil Rights & Justice Activities Other Males');
  t('Civil Rights & Justice Activities Societal Impact');
  t('Civil Rights & Justice Activities Unduplicate');
  t('Civil Rights & Justice Activities White Females');
  t('Civil Rights & Justice Activities White Males');
  t('Community Forums');
  t('Community Forums African American Females');
  t('Community Forums African American Males');
  t('Community Forums Asian American Females');
  t('Community Forums Asian American Males');
  t('Community Forums Hispanic/Latino Females');
  t('Community Forums Hispanic/Latino Males');
  t('Community Forums Native American Females');
  t('Community Forums Native American Males');
  t('Community Forums Other Females');
  t('Community Forums Other Males');
  t('Community Forums Societal Impact');
  t('Community Forums White Females');
  t('Community Forums White Males');
  t('Community Organization African American Males');
  t('Community Organization Asian American Females');
  t('Community Organization Asian American Males');
  t('Community Organization Hispanic/Latino Females');
  t('Community Organization Hispanic/Latino Males');
  t('Community Organization Native American Females');
  t('Community Organization Other Females');
  t('Community Organization Other Males');
  t('Community Organization Societal Impact');
  t('Community Organization White Females');
  t('Community Organization White Males');
  t('Community Organizations');
  t('D. Travel');
  t('Date Established');
  t('Describe the Programs');
  t('Direct Contact African American Females');
  t('Direct Contact African American Males');
  t('Direct Contact Asian American Females');
  t('Direct Contact Asian American Males');
  t('Direct Contact Hispanic/Latino Females');
  t('Direct Contact Hispanic/Latino Males');
  t('Direct Contact Native American Females');
  t('Direct Contact Native American Males');
  t('Direct Contact Other Females');
  t('Direct Contact Other Males');
  t('Direct Contact White Females');
  t('Direct Contact White Males');
  t('Does affiliate do a marketing kit and/or pamphlet?');
  t('Does affiliate have an advertising or marketing campaign?');
  t('Does affiliate produce a "State of Black (Affiliate Name)" Report?');
  t('Does affiliate produce a radio show?');
  t('Does affiliate produce a regular TV or cable show?');
  t('Does the affiliate have a capital budget?');
  t('Does the affiliate have an endowment?');
  t('Does the affiliate maintain a website?');
  t('Does the affiliate own or rent?');
  t('Does the affiliate produce a monthly/quarterly newsletter?');
  t('Does the affiliate produces an annual report?');
  t('Does your affiliate have satellite offices?');
  t('Does your affiliate provide health benefits to its employees?');
  t('Does your affiliate provide life insurance to its employees?');
  t('Duplicate');
  t('E. Postage/Freight');
  t('Economic Empowerment');
  t('Education');
  t('Email address');
  t('F. Insurance');
  t('Fax');
  t('Female');
  t('Females');
  t('Funding Source: NUL');
  t('Funding Source: Other');
  t('Funding Source: U Way');
  t('G. Interest Payments');
  t('H. Dues/Subscription/Registration');
  t('Health');
  t('Hispanic/Latino female board members');
  t('Hispanic/Latino male board members');
  t('Hispanic/Latino total board members');
  t('How many full time employees do you have in your office?');
  t('How many hits does your website receive monthly?');
  t('How many part time employees do you have in your office?');
  t('I. Depreciation');
  t('Identify purpose(s) of funding');
  t('If so, how many satellite offices does your affiliate have?');
  t('If so, how much?');
  t('If so, what is the present amount?');
  t('If so, what is your affiliate\'s website address?');
  t('If the affiliate owns its facilities, what is the current market value of the property?');
  t('Indirect Contact Number Served');
  t('Is there a Guild?');
  t('Is there a Young Professionals Chapter?');
  t('Is website linked to NUL website?');
  t('J. Taxes (including property taxes)');
  t('K. Utilities (telephone, gas, electric)');
  t('L. Equipment/space rental');
  t('M. Goods and Services');
  t('Male');
  t('Males');
  t('Money market account, endowment');
  t('Must be at least 5 characters');
  t('N. Rent/mortgage payments');
  t('Name of certifier');
  t('Native American female board members');
  t('Native American male board members');
  t('Native American total board members');
  t('Number Served');
  t('Number of Years as CEO');
  t('Number of Years of Service in Movement');
  t('O. Other');
  t('Other amount');
  t('Other description');
  t('Other female board members');
  t('Other male board members');
  t('Other total board members');
  t('Own');
  t('Phone Number');
  t('Photo');
  t('Police Brutality');
  t('Police Brutality African American Females');
  t('Police Brutality African American Males');
  t('Police Brutality Asian American Females');
  t('Police Brutality Asian American Males');
  t('Police Brutality Duplicate');
  t('Police Brutality Hispanic/Latino Females');
  t('Police Brutality Hispanic/Latino Males');
  t('Police Brutality Native American Females');
  t('Police Brutality Native American Males');
  t('Police Brutality Other Females');
  t('Police Brutality Other Males');
  t('Police Brutality Societal Impact');
  t('Police Brutality Unduplicate');
  t('Police Brutality White Females');
  t('Police Brutality White Males');
  t('President/CEO First Name');
  t('President/CEO Last Name');
  t('President/CEO Middle Name');
  t('Public Contact African American Females');
  t('Public Contact African American Males');
  t('Public Contact Asian American Females');
  t('Public Contact Asian American Males');
  t('Public Contact Hispanic/Latio Females');
  t('Public Contact Hispanic/Latio Males');
  t('Public Contact Native American Females');
  t('Public Contact Native American Males');
  t('Public Contact Other Females');
  t('Public Contact Other Males');
  t('Public Contact White Females');
  t('Public Contact White Males');
  t('Purpose of NUL Funding');
  t('Relief Civic Engagement Description');
  t('Relief Civic Engagement Funding NUL');
  t('Relief Civic Engagement Funding Other');
  t('Relief Civic Engagement Funding U Way');
  t('Relief Civic Engagement Number Served');
  t('Relief Civic Engagement Societal Impact');
  t('Relief Education Description');
  t('Relief Education Funding NUL');
  t('Relief Education Funding Other');
  t('Relief Education Funding U Way');
  t('Relief Education Number Served');
  t('Relief Education Societal Impact');
  t('Relief Employment Empowerment Description');
  t('Relief Employment Empowerment Funding NUL');
  t('Relief Employment Empowerment Funding Other');
  t('Relief Employment Empowerment Funding U Way');
  t('Relief Employment Empowerment Number Served');
  t('Relief Employment Empowerment Societal Impact');
  t('Relief Health Description');
  t('Relief Health Funding NUL');
  t('Relief Health Funding Other');
  t('Relief Health Funding U Way');
  t('Relief Health Number Served');
  t('Relief Health Societal Impact');
  t('Relief Racial Justice Description');
  t('Relief Racial Justice Funding NUL');
  t('Relief Racial Justice Funding Other');
  t('Relief Racial Justice Funding U Way');
  t('Relief Racial Justice Number Served');
  t('Relief Racial Justice Societal Impact');
  t('Rent');
  t('Service Area 1 African American');
  t('Service Area 1 Asian American');
  t('Service Area 1 City/County');
  t('Service Area 1 Hispanic/Latino');
  t('Service Area 1 Name');
  t('Service Area 1 Native American');
  t('Service Area 1 Other');
  t('Service Area 1 Population');
  t('Service Area 1 White');
  t('Service Area 10 African American');
  t('Service Area 10 Asian American');
  t('Service Area 10 City/County');
  t('Service Area 10 Hispanic/Latino');
  t('Service Area 10 Name');
  t('Service Area 10 Native American');
  t('Service Area 10 Other');
  t('Service Area 10 Population');
  t('Service Area 10 White');
  t('Service Area 11 African American');
  t('Service Area 11 Asian American');
  t('Service Area 11 City/County');
  t('Service Area 11 Hispanic/Latino');
  t('Service Area 11 Name');
  t('Service Area 11 Native American');
  t('Service Area 11 Other');
  t('Service Area 11 Population');
  t('Service Area 11 White');
  t('Service Area 12 African American');
  t('Service Area 12 Asian American');
  t('Service Area 12 City/County');
  t('Service Area 12 Hispanic/Latino');
  t('Service Area 12 Name');
  t('Service Area 12 Native American');
  t('Service Area 12 Other');
  t('Service Area 12 Population');
  t('Service Area 12 White');
  t('Service Area 13 African American');
  t('Service Area 13 Asian American');
  t('Service Area 13 City/County');
  t('Service Area 13 Hispanic/Latino');
  t('Service Area 13 Name');
  t('Service Area 13 Native American');
  t('Service Area 13 Other');
  t('Service Area 13 Population');
  t('Service Area 13 White');
  t('Service Area 14 African American');
  t('Service Area 14 Asian American');
  t('Service Area 14 City/County');
  t('Service Area 14 Hispanic/Latino');
  t('Service Area 14 Name');
  t('Service Area 14 Native American');
  t('Service Area 14 Other');
  t('Service Area 14 Population');
  t('Service Area 14 White');
  t('Service Area 15 African American');
  t('Service Area 15 Asian American');
  t('Service Area 15 City/County');
  t('Service Area 15 Hispanic/Latino');
  t('Service Area 15 Name');
  t('Service Area 15 Native American');
  t('Service Area 15 Other');
  t('Service Area 15 Population');
  t('Service Area 15 White');
  t('Service Area 2 African American');
  t('Service Area 2 Asian American');
  t('Service Area 2 City/County');
  t('Service Area 2 Hispanic/Latino');
  t('Service Area 2 Name');
  t('Service Area 2 Native American');
  t('Service Area 2 Other');
  t('Service Area 2 Population');
  t('Service Area 2 White');
  t('Service Area 3 African American');
  t('Service Area 3 Asian American');
  t('Service Area 3 City/County');
  t('Service Area 3 Hispanic/Latino');
  t('Service Area 3 Name');
  t('Service Area 3 Native American');
  t('Service Area 3 Other');
  t('Service Area 3 Population');
  t('Service Area 3 White');
  t('Service Area 4 African American');
  t('Service Area 4 Asian American');
  t('Service Area 4 City/County');
  t('Service Area 4 Hispanic/Latino');
  t('Service Area 4 Name');
  t('Service Area 4 Native American');
  t('Service Area 4 Other');
  t('Service Area 4 Population');
  t('Service Area 4 White');
  t('Service Area 5 African American');
  t('Service Area 5 Asian American');
  t('Service Area 5 City/County');
  t('Service Area 5 Hispanic/Latino');
  t('Service Area 5 Name');
  t('Service Area 5 Native American');
  t('Service Area 5 Other');
  t('Service Area 5 Population');
  t('Service Area 5 White');
  t('Service Area 6 African American');
  t('Service Area 6 Asian American');
  t('Service Area 6 City/County');
  t('Service Area 6 Hispanic/Latino');
  t('Service Area 6 Name');
  t('Service Area 6 Native American');
  t('Service Area 6 Other');
  t('Service Area 6 Population');
  t('Service Area 6 White');
  t('Service Area 7 African American');
  t('Service Area 7 Asian American');
  t('Service Area 7 City/County');
  t('Service Area 7 Hispanic/Latino');
  t('Service Area 7 Name');
  t('Service Area 7 Native American');
  t('Service Area 7 Other');
  t('Service Area 7 Population');
  t('Service Area 7 White');
  t('Service Area 8 African American');
  t('Service Area 8 Asian American');
  t('Service Area 8 City/County');
  t('Service Area 8 Hispanic/Latino');
  t('Service Area 8 Name');
  t('Service Area 8 Native American');
  t('Service Area 8 Other');
  t('Service Area 8 Population');
  t('Service Area 8 White');
  t('Service Area 9 African American');
  t('Service Area 9 Asian American');
  t('Service Area 9 City/County');
  t('Service Area 9 Hispanic/Latino');
  t('Service Area 9 Name');
  t('Service Area 9 Native American');
  t('Service Area 9 Other');
  t('Service Area 9 Population');
  t('Service Area 9 White');
  t('Service Areas');
  t('Societal Impact');
  t('State/Province');
  t('Survey Contact First Name');
  t('Survey Contact Last Name');
  t('Telephone');
  t('This information has been reviewed and certified as accurate by whom?');
  t('Time Zone');
  t('Total');
  t('Total Direct Contact Females');
  t('Total Direct Contact Males');
  t('Total Number Served or Registered (Male and Female)');
  t('Total Public Contact Females');
  t('Total Public Contact Males');
  t('Total number of board members');
  t('Total white board members');
  t('Type of Venture');
  t('UnDuplicate');
  t('Voter African American Female');
  t('Voter African American Male');
  t('Voter Asian American Female');
  t('Voter Asian American Male');
  t('Voter Hispanic/Latino Female');
  t('Voter Hispanic/Latino Male');
  t('Voter Native American male');
  t('Voter Other Female');
  t('Voter Other Male');
  t('Voter Registration');
  t('Voter White Female');
  t('Voter White Male');
  t('What is the average salary for employees?');
  t('What is the method of advertising or marketing?');
  t('What is the total budget of your affiliate?');
  t('What is the total number of volunteers for your affiliate?');
  t('What was the total expenditure by your affiliate for expenses (include salaries, rent/mortgage, equipment, etc.)?');
  t('White female board members');
  t('White male board members');
  t('Year only');
  t('Zip Code');
  t('ce voter help');
  t('direct contact help');
  t('era help');
  t('female');
  t('female_ce_voter');
  t('help indirect contact');
  t('public contact help');
  t('spacer4');
  t('spacer5');
  t('spacer6');
  t('totalspacer');
  t('totalspacer2');

  return $field_instances;
}
