<?php
/**
 * @file
 * contact_data.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function contact_data_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_african|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_direct_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '9',
    'children' => array(
      0 => 'field_direct_african_am_female',
      1 => 'field_direct_african_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_african|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_african|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_direct_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '37',
    'children' => array(
      0 => 'field_direct_african_am_female',
      1 => 'field_direct_african_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_african|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_asian|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_direct_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '7',
    'children' => array(
      0 => 'field_direct_asian_am_female',
      1 => 'field_direct_asian_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_asian|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_asian|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_direct_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '35',
    'children' => array(
      0 => 'field_direct_asian_am_female',
      1 => 'field_direct_asian_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_asian|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_group|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_direct_contact_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. Direct Contact (i.e. counseling, day care, intensive education programs and legal services)',
    'weight' => '0',
    'children' => array(
      0 => 'field_direct_contact_help',
      1 => 'group_direct_contact_header',
      2 => 'group_direct_contact_white',
      3 => 'group_direct_contact_hispanic',
      4 => 'group_direct_contact_asian',
      5 => 'group_direct_contact_native',
      6 => 'group_direct_contact_african',
      7 => 'group_direct_contact_other',
      8 => 'group_direct_contact_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. Direct Contact (i.e. counseling, day care, intensive education programs and legal services)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-group field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_group|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_group|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_direct_contact_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. Direct Contact (i.e. counseling, day care, intensive education programs and legal services)',
    'weight' => '1',
    'children' => array(
      0 => 'field_direct_contact_help',
      1 => 'group_direct_contact_header',
      2 => 'group_direct_contact_white',
      3 => 'group_direct_contact_hispanic',
      4 => 'group_direct_contact_asian',
      5 => 'group_direct_contact_native',
      6 => 'group_direct_contact_african',
      7 => 'group_direct_contact_other',
      8 => 'group_direct_contact_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. Direct Contact (i.e. counseling, day care, intensive education programs and legal services)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-group field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_group|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_header|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_direct_contact_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => ' ',
    'weight' => '4',
    'children' => array(
      0 => 'field_direct_contact_males',
      1 => 'field_public_contact_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' ',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-direct-contact-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_header|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_header|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_direct_contact_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => ' ',
    'weight' => '32',
    'children' => array(
      0 => 'field_direct_contact_males',
      1 => 'field_direct_contact_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_header|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_hispanic|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_direct_contact_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '6',
    'children' => array(
      0 => 'field_direct_hispanic_female',
      1 => 'field_direct_hispanic_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_hispanic|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_hispanic|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_direct_contact_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '34',
    'children' => array(
      0 => 'field_direct_hispanic_female',
      1 => 'field_direct_hispanic_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_hispanic|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_native|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_direct_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '8',
    'children' => array(
      0 => 'field_direct_native_am_female',
      1 => 'field_direct_native_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_native|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_native|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_direct_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '36',
    'children' => array(
      0 => 'field_direct_native_am_female',
      1 => 'field_direct_native_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_native|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_other|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_direct_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '10',
    'children' => array(
      0 => 'field_direct_other_female',
      1 => 'field_direct_other_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_other|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_other|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_direct_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '38',
    'children' => array(
      0 => 'field_direct_other_female',
      1 => 'field_direct_other_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_other|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_total|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_direct_contact_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '11',
    'children' => array(
      0 => 'field_direct_total_female',
      1 => 'field_direct_total_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_total|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_total|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_direct_contact_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '39',
    'children' => array(
      0 => 'field_direct_total_female',
      1 => 'field_direct_total_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_total|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_white|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_direct_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '5',
    'children' => array(
      0 => 'field_direct_white_female',
      1 => 'field_direct_white_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_white|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_white|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_direct_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact_group';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '33',
    'children' => array(
      0 => 'field_direct_white_female',
      1 => 'field_direct_white_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_white|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indirect_contact_group|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_indirect_contact_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => ' C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution) ',
    'weight' => '2',
    'children' => array(
      0 => 'field_help_indirect_contact',
      1 => 'group_indirect_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution) ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indirect-contact-group field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_indirect_contact_group|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indirect_contact_group|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_indirect_contact_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => ' C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution) ',
    'weight' => '5',
    'children' => array(
      0 => 'field_help_indirect_contact',
      1 => 'group_indirect_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution) ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indirect-contact-group field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_indirect_contact_group|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indirect_served|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_indirect_served';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_indirect_contact_group';
  $field_group->data = array(
    'label' => 'Number Served',
    'weight' => '5',
    'children' => array(
      0 => 'field_indirect_contact_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Number Served',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indirect-served field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_indirect_served|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indirect_served|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_indirect_served';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indirect_contact_group';
  $field_group->data = array(
    'label' => 'Number Served',
    'weight' => '5',
    'children' => array(
      0 => 'field_indirect_contact_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Number Served',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indirect-served field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_indirect_served|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_african|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_public_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '51',
    'children' => array(
      0 => 'field_public_african_am_male',
      1 => 'field_public_african_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_african|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_african|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_public_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '25',
    'children' => array(
      0 => 'field_public_african_am_male',
      1 => 'field_public_african_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_african|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_asian|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_public_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '49',
    'children' => array(
      0 => 'field_public_asian_am_male',
      1 => 'field_public_asian_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_asian|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_asian|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_public_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '23',
    'children' => array(
      0 => 'field_public_asian_am_male',
      1 => 'field_public_asian_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_asian|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_group|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_public_contact_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => ' B. Public Contact (i.e. workshops, presentations and training sessions) ',
    'weight' => '1',
    'children' => array(
      0 => 'field_public_contact_help',
      1 => 'group_public_contact_header',
      2 => 'group_public_contact_white',
      3 => 'group_public_contact_hispanic',
      4 => 'group_public_contact_asian',
      5 => 'group_public_contact_native',
      6 => 'group_public_contact_african',
      7 => 'group_public_contact_other',
      8 => 'group_public_contact_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' B. Public Contact (i.e. workshops, presentations and training sessions) ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-group field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_group|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_group|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_public_contact_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => ' B. Public Contact (i.e. workshops, presentations and training sessions) ',
    'weight' => '2',
    'children' => array(
      0 => 'field_public_contact_help',
      1 => 'group_public_contact_header',
      2 => 'group_public_contact_white',
      3 => 'group_public_contact_hispanic',
      4 => 'group_public_contact_asian',
      5 => 'group_public_contact_native',
      6 => 'group_public_contact_african',
      7 => 'group_public_contact_other',
      8 => 'group_public_contact_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' B. Public Contact (i.e. workshops, presentations and training sessions) ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-group field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_group|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_header|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_public_contact_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => ' ',
    'weight' => '45',
    'children' => array(
      0 => 'field_public_contact_males',
      1 => 'field_direct_contact_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' ',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-public-contact-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_header|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_header|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_public_contact_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => ' ',
    'weight' => '20',
    'children' => array(
      0 => 'field_public_contact_female',
      1 => 'field_public_contact_males',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_header|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_hispanic|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_public_contact_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '48',
    'children' => array(
      0 => 'field_public_hispanic_male',
      1 => 'field_public_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_hispanic|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_hispanic|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_public_contact_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '22',
    'children' => array(
      0 => 'field_public_hispanic_male',
      1 => 'field_public_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_hispanic|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_native|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_public_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '50',
    'children' => array(
      0 => 'field_public_native_am_male',
      1 => 'field_public_native_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_native|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_native|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_public_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '24',
    'children' => array(
      0 => 'field_public_native_am_male',
      1 => 'field_public_native_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_native|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_other|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_public_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '52',
    'children' => array(
      0 => 'field_public_other_male',
      1 => 'field_public_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_other|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_other|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_public_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '26',
    'children' => array(
      0 => 'field_public_other_male',
      1 => 'field_public_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_other|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_total|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_public_contact_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '53',
    'children' => array(
      0 => 'field_public_total_male',
      1 => 'field_public_total_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_total|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_total|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_public_contact_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '27',
    'children' => array(
      0 => 'field_public_total_male',
      1 => 'field_public_total_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_total|node|contact_data_direct_indirect_pub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_white|node|contact_data_direct_indirect_pub|default';
  $field_group->group_name = 'group_public_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '47',
    'children' => array(
      0 => 'field_public_white_male',
      1 => 'field_public_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_white|node|contact_data_direct_indirect_pub|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_white|node|contact_data_direct_indirect_pub|form';
  $field_group->group_name = 'group_public_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_data_direct_indirect_pub';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact_group';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '21',
    'children' => array(
      0 => 'field_public_white_male',
      1 => 'field_public_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_white|node|contact_data_direct_indirect_pub|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t(' ');
  t(' B. Public Contact (i.e. workshops, presentations and training sessions) ');
  t(' C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution) ');
  t('A. Direct Contact (i.e. counseling, day care, intensive education programs and legal services)');
  t('African American');
  t('Asian American');
  t('Hispanic/Latino');
  t('Native American');
  t('Number Served');
  t('Other');
  t('Total');
  t('White');

  return $field_groups;
}
