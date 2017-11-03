<?php
/**
 * @file
 * volunteers_members.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function volunteers_members_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_age|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux';
  $field_group->data = array(
    'label' => 'AGE GROUPINGS: How many members in the following age groups?',
    'weight' => '2',
    'children' => array(
      0 => 'field_aux_16_20',
      1 => 'field_aux_21_30',
      2 => 'field_aux_31_40',
      3 => 'field_aux_41_65',
      4 => 'field_aux_66_81',
      5 => 'field_aux_82_and_above',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'AGE GROUPINGS: How many members in the following age groups?',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_age|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_age|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux';
  $field_group->data = array(
    'label' => 'AGE GROUPINGS: How many members in the following age groups?',
    'weight' => '5',
    'children' => array(
      0 => 'field_aux_16_20',
      1 => 'field_aux_21_30',
      2 => 'field_aux_31_40',
      3 => 'field_aux_41_65',
      4 => 'field_aux_66_81',
      5 => 'field_aux_82_and_above',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'AGE GROUPINGS: How many members in the following age groups?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_age|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_african|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_ethnicity_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '6',
    'children' => array(
      0 => 'field_aux_african_american',
      1 => 'field_aux_african_male',
      2 => 'field_aux_african_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-ethnicity-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_african|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_african|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_ethnicity_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '9',
    'children' => array(
      0 => 'field_aux_african_american',
      1 => 'field_aux_african_male',
      2 => 'field_aux_african_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-ethnicity-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_african|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_asian|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_ethnicity_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '4',
    'children' => array(
      0 => 'field_aux_asian_american',
      1 => 'field_aux_asian_male',
      2 => 'field_aux_asian_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-ethnicity-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_asian|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_asian|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_ethnicity_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '7',
    'children' => array(
      0 => 'field_aux_asian_american',
      1 => 'field_aux_asian_male',
      2 => 'field_aux_asian_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-ethnicity-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_asian|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_header|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_ethnicity_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Ethnicity',
    'weight' => '1',
    'children' => array(
      0 => 'field_aux_header_male',
      1 => 'field_aux_header_female',
      2 => 'field_aux_header_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Ethnicity',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-ethnicity-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_header|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_header|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_ethnicity_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Ethnicity',
    'weight' => '4',
    'children' => array(
      0 => 'field_aux_header_male',
      1 => 'field_aux_header_female',
      2 => 'field_aux_header_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Ethnicity',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-ethnicity-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_header|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_hispanic|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_ethnicity_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '3',
    'children' => array(
      0 => 'field_aux_hispanic_latino',
      1 => 'field_aux_hispanic_male',
      2 => 'field_aux_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-ethnicity-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_hispanic|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_hispanic|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_ethnicity_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '6',
    'children' => array(
      0 => 'field_aux_hispanic_latino',
      1 => 'field_aux_hispanic_male',
      2 => 'field_aux_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-ethnicity-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_hispanic|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_native|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_ethnicity_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '5',
    'children' => array(
      0 => 'field_aux_native_american',
      1 => 'field_aux_native_male',
      2 => 'field_aux_native_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-ethnicity-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_native|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_native|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_ethnicity_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '8',
    'children' => array(
      0 => 'field_aux_native_american',
      1 => 'field_aux_native_male',
      2 => 'field_aux_native_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-ethnicity-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_native|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_other|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_ethnicity_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Other Heritage',
    'weight' => '7',
    'children' => array(
      0 => 'field_aux_other_heritage',
      1 => 'field_aux_other_male',
      2 => 'field_aux_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other Heritage',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-ethnicity-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_other|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_other|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_ethnicity_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Other Heritage',
    'weight' => '10',
    'children' => array(
      0 => 'field_aux_other_heritage',
      1 => 'field_aux_other_male',
      2 => 'field_aux_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other Heritage',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-ethnicity-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_other|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_total|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_ethnicity_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '8',
    'children' => array(
      0 => 'field_aux_female',
      1 => 'field_aux_male',
      2 => 'field_aux_members',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-ethnicity-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_total|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_total|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_ethnicity_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '11',
    'children' => array(
      0 => 'field_aux_female',
      1 => 'field_aux_male',
      2 => 'field_aux_members',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-ethnicity-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_total|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_white|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_ethnicity_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '2',
    'children' => array(
      0 => 'field_aux_white',
      1 => 'field_aux_white_male',
      2 => 'field_aux_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-ethnicity-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_white|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity_white|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_ethnicity_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux_ethnicity';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '5',
    'children' => array(
      0 => 'field_aux_white',
      1 => 'field_aux_white_male',
      2 => 'field_aux_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-ethnicity-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity_white|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_ethnicity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux';
  $field_group->data = array(
    'label' => 'Volunteer or Auxiliary Groups',
    'weight' => '1',
    'children' => array(
      0 => 'field_other_volunteer_aux_groups',
      1 => 'group_aux_ethnicity_header',
      2 => 'group_aux_ethnicity_white',
      3 => 'group_aux_ethnicity_hispanic',
      4 => 'group_aux_ethnicity_asian',
      5 => 'group_aux_ethnicity_native',
      6 => 'group_aux_ethnicity_african',
      7 => 'group_aux_ethnicity_other',
      8 => 'group_aux_ethnicity_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Volunteer or Auxiliary Groups',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-ethnicity field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_ethnicity|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_ethnicity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux';
  $field_group->data = array(
    'label' => 'Volunteer or Auxiliary Groups',
    'weight' => '4',
    'children' => array(
      0 => 'field_other_volunteer_aux_groups',
      1 => 'group_aux_ethnicity_header',
      2 => 'group_aux_ethnicity_white',
      3 => 'group_aux_ethnicity_hispanic',
      4 => 'group_aux_ethnicity_asian',
      5 => 'group_aux_ethnicity_native',
      6 => 'group_aux_ethnicity_african',
      7 => 'group_aux_ethnicity_other',
      8 => 'group_aux_ethnicity_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Volunteer or Auxiliary Groups',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-ethnicity field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_ethnicity|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux|node|volunteers_members|default';
  $field_group->group_name = 'group_aux';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volunteer or Auxiliary Groups',
    'weight' => '2',
    'children' => array(
      0 => 'group_aux_age',
      1 => 'group_aux_ethnicity',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Volunteer or Auxiliary Groups',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux|node|volunteers_members|form';
  $field_group->group_name = 'group_aux';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volunteer or Auxiliary Groups',
    'weight' => '3',
    'children' => array(
      0 => 'group_aux_age',
      1 => 'group_aux_ethnicity',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Volunteer or Auxiliary Groups',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_aftican|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_aftican';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'African',
    'weight' => '7',
    'children' => array(
      0 => 'field_guild_african_american',
      1 => 'field_guild_african_male',
      2 => 'field_guild_african_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-aftican field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_aftican|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_aftican|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_aftican';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '7',
    'children' => array(
      0 => 'field_guild_african_american',
      1 => 'field_guild_african_male',
      2 => 'field_guild_african_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-aftican field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_aftican|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_age|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild';
  $field_group->data = array(
    'label' => 'AGE GROUPINGS: How many members in the following age groups? ',
    'weight' => '4',
    'children' => array(
      0 => 'field_guild_16_20',
      1 => 'field_guild_21_30',
      2 => 'field_guild_31_40',
      3 => 'field_guild_41_65',
      4 => 'field_guild_66_81',
      5 => 'field_guild_82_and_above',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'AGE GROUPINGS: How many members in the following age groups? ',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_age|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_age|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild';
  $field_group->data = array(
    'label' => ' AGE GROUPINGS: How many members in the following age groups? ',
    'weight' => '10',
    'children' => array(
      0 => 'field_guild_16_20',
      1 => 'field_guild_21_30',
      2 => 'field_guild_31_40',
      3 => 'field_guild_41_65',
      4 => 'field_guild_66_81',
      5 => 'field_guild_82_and_above',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' AGE GROUPINGS: How many members in the following age groups? ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_age|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_asian|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Asian',
    'weight' => '5',
    'children' => array(
      0 => 'field_guild_asian_american',
      1 => 'field_guild_asian_male',
      2 => 'field_guild_asian_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_asian|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_asian|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '5',
    'children' => array(
      0 => 'field_guild_asian_american',
      1 => 'field_guild_asian_male',
      2 => 'field_guild_asian_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_asian|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_ethnicity_header|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_ethnicity_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Ethnicity',
    'weight' => '2',
    'children' => array(
      0 => 'field_guild_header_male',
      1 => 'field_guild_header_female',
      2 => 'field_guild_header_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Ethnicity',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-ethnicity-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_ethnicity_header|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_ethnicity_header|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_ethnicity_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Ethnicity',
    'weight' => '2',
    'children' => array(
      0 => 'field_guild_header_male',
      1 => 'field_guild_header_female',
      2 => 'field_guild_header_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Ethnicity',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-ethnicity-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_ethnicity_header|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_ethnicity|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_ethnicity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild';
  $field_group->data = array(
    'label' => 'Guild',
    'weight' => '2',
    'children' => array(
      0 => 'field_is_there_a_guild_',
      1 => 'group_guild_white',
      2 => 'group_guild_hispanic',
      3 => 'group_guild_asian',
      4 => 'group_guild_native',
      5 => 'group_guild_aftican',
      6 => 'group_guild_other',
      7 => 'group_guild_total',
      8 => 'group_guild_ethnicity_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Guild',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-ethnicity field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_ethnicity|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_ethnicity|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_ethnicity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild';
  $field_group->data = array(
    'label' => 'Guild',
    'weight' => '2',
    'children' => array(
      0 => 'field_is_there_a_guild_',
      1 => 'group_guild_white',
      2 => 'group_guild_hispanic',
      3 => 'group_guild_asian',
      4 => 'group_guild_native',
      5 => 'group_guild_aftican',
      6 => 'group_guild_other',
      7 => 'group_guild_total',
      8 => 'group_guild_ethnicity_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Guild',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-ethnicity field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_ethnicity|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_hispanic|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Hispanic',
    'weight' => '4',
    'children' => array(
      0 => 'field_guild_hispanic_latino',
      1 => 'field_guild_hispanic_male',
      2 => 'field_guild_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_hispanic|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_hispanic|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '4',
    'children' => array(
      0 => 'field_guild_hispanic_latino',
      1 => 'field_guild_hispanic_male',
      2 => 'field_guild_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_hispanic|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_native|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Native',
    'weight' => '6',
    'children' => array(
      0 => 'field_guild_native_american',
      1 => 'field_guild_native_male',
      2 => 'field_guild_native_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_native|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_native|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '6',
    'children' => array(
      0 => 'field_guild_native_american',
      1 => 'field_guild_native_male',
      2 => 'field_guild_native_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_native|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_other|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Other Heritage',
    'weight' => '8',
    'children' => array(
      0 => 'field_guild_other_heritage',
      1 => 'field_guild_other_male',
      2 => 'field_guild_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other Heritage',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_other|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_other|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Other Heritage',
    'weight' => '8',
    'children' => array(
      0 => 'field_guild_other_heritage',
      1 => 'field_guild_other_male',
      2 => 'field_guild_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other Heritage',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_other|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_total|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '9',
    'children' => array(
      0 => 'field_guild_female',
      1 => 'field_guild_male',
      2 => 'field_guild_members',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_total|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_total|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '9',
    'children' => array(
      0 => 'field_guild_female',
      1 => 'field_guild_male',
      2 => 'field_guild_members',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_total|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_white|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '3',
    'children' => array(
      0 => 'field_guild_white',
      1 => 'field_guild_white_male',
      2 => 'field_guild_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_white|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_white|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild_ethnicity';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '3',
    'children' => array(
      0 => 'field_guild_white',
      1 => 'field_guild_white_male',
      2 => 'field_guild_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_white|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild|node|volunteers_members|default';
  $field_group->group_name = 'group_guild';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Guild',
    'weight' => '0',
    'children' => array(
      0 => 'group_guild_ethnicity',
      1 => 'group_guild_age',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Guild',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild|node|volunteers_members|form';
  $field_group->group_name = 'group_guild';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Guild',
    'weight' => '1',
    'children' => array(
      0 => 'group_guild_ethnicity',
      1 => 'group_guild_age',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Guild',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_age|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc';
  $field_group->data = array(
    'label' => 'AGE GROUPINGS: How many members in the following age groups?',
    'weight' => '3',
    'children' => array(
      0 => 'field_ypc_82_and_above',
      1 => 'field_ypc_66_81',
      2 => 'field_ypc_41_65',
      3 => 'field_ypc_31_40',
      4 => 'field_ypc_21_30',
      5 => 'field_ypc_16_20',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'AGE GROUPINGS: How many members in the following age groups?',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_age|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_age|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc';
  $field_group->data = array(
    'label' => 'AGE GROUPINGS: How many members in the following age groups?',
    'weight' => '4',
    'children' => array(
      0 => 'field_ypc_82_and_above',
      1 => 'field_ypc_66_81',
      2 => 'field_ypc_41_65',
      3 => 'field_ypc_31_40',
      4 => 'field_ypc_21_30',
      5 => 'field_ypc_16_20',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'AGE GROUPINGS: How many members in the following age groups?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_age|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethinicity|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_ethinicity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc';
  $field_group->data = array(
    'label' => 'Young Professionals Chapter',
    'weight' => '2',
    'children' => array(
      0 => 'field_is_there_a_ypc',
      1 => 'group_ypc_ethnicity_header',
      2 => 'group_ypc_ethnicity_white',
      3 => 'group_ypc_ethnicity_hispanic',
      4 => 'group_ypc_ethnicity_asian',
      5 => 'group_ypc_ethnicity_native',
      6 => 'group_ypc_ethnicity_african',
      7 => 'group_ypc_ethnicity_other',
      8 => 'group_ypc_ethnicity_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Young Professionals Chapter',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-ethinicity field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethinicity|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethinicity|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_ethinicity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc';
  $field_group->data = array(
    'label' => 'Young Professionals Chapter',
    'weight' => '2',
    'children' => array(
      0 => 'field_is_there_a_ypc',
      1 => 'group_ypc_ethnicity_header',
      2 => 'group_ypc_ethnicity_white',
      3 => 'group_ypc_ethnicity_hispanic',
      4 => 'group_ypc_ethnicity_asian',
      5 => 'group_ypc_ethnicity_native',
      6 => 'group_ypc_ethnicity_african',
      7 => 'group_ypc_ethnicity_other',
      8 => 'group_ypc_ethnicity_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Young Professionals Chapter',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-ethinicity field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethinicity|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_african|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_ethnicity_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '7',
    'children' => array(
      0 => 'field_ypc_african_american',
      1 => 'field_ypc_african_male',
      2 => 'field_ypc_african_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-ethnicity-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_african|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_african|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_ethnicity_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '7',
    'children' => array(
      0 => 'field_ypc_african_american',
      1 => 'field_ypc_african_male',
      2 => 'field_ypc_african_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-ethnicity-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_african|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_asian|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_ethnicity_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '5',
    'children' => array(
      0 => 'field_ypc_asian_american',
      1 => 'field_ypc_asian_male',
      2 => 'field_ypc_asian_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-ethnicity-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_asian|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_asian|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_ethnicity_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '5',
    'children' => array(
      0 => 'field_ypc_asian_american',
      1 => 'field_ypc_asian_male',
      2 => 'field_ypc_asian_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-ethnicity-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_asian|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_header|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_ethnicity_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Ethnicity',
    'weight' => '2',
    'children' => array(
      0 => 'field_ypc_header_male',
      1 => 'field_ypc_header_female',
      2 => 'field_ypc_header_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Ethnicity',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-ethnicity-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_header|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_header|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_ethnicity_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Ethnicity',
    'weight' => '2',
    'children' => array(
      0 => 'field_ypc_header_male',
      1 => 'field_ypc_header_female',
      2 => 'field_ypc_header_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Ethnicity',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-ethnicity-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_header|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_hispanic|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_ethnicity_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '4',
    'children' => array(
      0 => 'field_ypc_hispanic_latino',
      1 => 'field_ypc_hispanic_male',
      2 => 'field_ypc_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-ethnicity-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_hispanic|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_hispanic|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_ethnicity_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '4',
    'children' => array(
      0 => 'field_ypc_hispanic_latino',
      1 => 'field_ypc_hispanic_male',
      2 => 'field_ypc_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-ethnicity-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_hispanic|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_native|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_ethnicity_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '6',
    'children' => array(
      0 => 'field_ypc_native_american',
      1 => 'field_ypc_native_male',
      2 => 'field_ypc_native_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-ethnicity-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_native|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_native|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_ethnicity_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '6',
    'children' => array(
      0 => 'field_ypc_native_american',
      1 => 'field_ypc_native_male',
      2 => 'field_ypc_native_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-ethnicity-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_native|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_other|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_ethnicity_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Other Heritage',
    'weight' => '8',
    'children' => array(
      0 => 'field_ypc_other_heritage',
      1 => 'field_ypc_other_male',
      2 => 'field_ypc_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other Heritage',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-ethnicity-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_other|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_other|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_ethnicity_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Other Heritage',
    'weight' => '8',
    'children' => array(
      0 => 'field_ypc_other_heritage',
      1 => 'field_ypc_other_male',
      2 => 'field_ypc_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other Heritage',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-ethnicity-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_other|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_total|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_ethnicity_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '9',
    'children' => array(
      0 => 'field_ypc_members',
      1 => 'field_ypc_male',
      2 => 'field_ypc_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-ethnicity-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_total|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_total|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_ethnicity_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '9',
    'children' => array(
      0 => 'field_ypc_members',
      1 => 'field_ypc_male',
      2 => 'field_ypc_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-ethnicity-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_total|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_white|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_ethnicity_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '3',
    'children' => array(
      0 => 'field_ypc_white',
      1 => 'field_ypc_white_male',
      2 => 'field_ypc_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-ethnicity-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_white|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_ethnicity_white|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_ethnicity_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc_ethinicity';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '3',
    'children' => array(
      0 => 'field_ypc_white',
      1 => 'field_ypc_white_male',
      2 => 'field_ypc_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-ethnicity-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_ethnicity_white|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Young Professionals Chapter',
    'weight' => '1',
    'children' => array(
      0 => 'group_ypc_age',
      1 => 'group_ypc_ethinicity',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Young Professionals Chapter',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Young Professionals Chapter',
    'weight' => '2',
    'children' => array(
      0 => 'group_ypc_age',
      1 => 'group_ypc_ethinicity',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Young Professionals Chapter',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc|node|volunteers_members|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t(' AGE GROUPINGS: How many members in the following age groups? ');
  t('AGE GROUPINGS: How many members in the following age groups?');
  t('AGE GROUPINGS: How many members in the following age groups? ');
  t('African');
  t('African American');
  t('Asian');
  t('Asian American');
  t('Ethnicity');
  t('Guild');
  t('Hispanic');
  t('Hispanic/Latino');
  t('Native');
  t('Native American');
  t('Other Heritage');
  t('Total');
  t('Volunteer or Auxiliary Groups');
  t('White');
  t('Young Professionals Chapter');

  return $field_groups;
}
