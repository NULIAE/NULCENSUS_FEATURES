<?php
/**
 * @file
 * nulcensus_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nulcensus_features_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_african_am|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '107',
    'children' => array(
      0 => 'field_advocacy_african_am_male',
      1 => 'field_advocacy_african_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_african_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_asian_am|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '105',
    'children' => array(
      0 => 'field_advocacy_asian_am_female',
      1 => 'field_advocacy_asian_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_asian_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_hispanic|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '104',
    'children' => array(
      0 => 'field_advocacy_hispanic_female',
      1 => 'field_advocacy_hispanic_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_hispanic|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_impact|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '101',
    'children' => array(
      0 => 'field_advocacy_societal_impact',
      1 => 'field_advocacy_spacer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total Number Served or Registered (Male and Female)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-impact field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_impact|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_info|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy';
  $field_group->data = array(
    'label' => 'Advocacy Information',
    'weight' => '100',
    'children' => array(
      0 => 'group_advocacy_race',
      1 => 'group_advocacy_white',
      2 => 'group_advocacy_hispanic',
      3 => 'group_advocacy_asian_am',
      4 => 'group_advocacy_native_am',
      5 => 'group_advocacy_african_am',
      6 => 'group_advocacy_other',
      7 => 'group_advocacy_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Advocacy Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_info|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_native_am|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '106',
    'children' => array(
      0 => 'field_advocacy_native_am_female',
      1 => 'field_advocacy_native_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_native_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_other|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '108',
    'children' => array(
      0 => 'field_advocacy_other_female',
      1 => 'field_advocacy_other_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_other|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_race|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '102',
    'children' => array(
      0 => 'field_advocacy_female',
      1 => 'field_advocacy_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_race|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_white|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '103',
    'children' => array(
      0 => 'field_advocacy_white_female',
      1 => 'field_advocacy_white_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_white|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_sub';
  $field_group->data = array(
    'label' => 'Advocacy Efforts',
    'weight' => '108',
    'children' => array(
      0 => 'field_advocacy_efforts',
      1 => 'field_advoacy_research',
      2 => 'field_advocacy_description',
      3 => 'group_advocacy_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Advocacy Efforts',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_african_am|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '15',
    'children' => array(
      0 => 'field_board_african_amer_males',
      1 => 'field_board_african_amer_females',
      2 => 'field_board_african_amer_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_african_am|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_african_am|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '15',
    'children' => array(
      0 => 'field_board_african_amer_males',
      1 => 'field_board_african_amer_females',
      2 => 'field_board_african_amer_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_african_am|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_asian_am|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '13',
    'children' => array(
      0 => 'field_board_asian_males',
      1 => 'field_board_asian_females',
      2 => 'field_board_asian_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_asian_am|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_asian_am|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '13',
    'children' => array(
      0 => 'field_board_asian_males',
      1 => 'field_board_asian_females',
      2 => 'field_board_asian_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_asian_am|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_hispanic|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '12',
    'children' => array(
      0 => 'field_board_hispanic_males',
      1 => 'field_board_hispanic_females',
      2 => 'field_board_hispanic_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_hispanic|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_hispanic|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '12',
    'children' => array(
      0 => 'field_board_hispanic_males',
      1 => 'field_board_hispanic_females',
      2 => 'field_board_hispanic_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_hispanic|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_native_am|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '14',
    'children' => array(
      0 => 'field_board_native_males',
      1 => 'field_board_native_females',
      2 => 'field_board_native_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_native_am|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_native_am|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '14',
    'children' => array(
      0 => 'field_board_native_males',
      1 => 'field_board_native_females',
      2 => 'field_board_native_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_native_am|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_other|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '16',
    'children' => array(
      0 => 'field_board_other_males',
      1 => 'field_board_other_females',
      2 => 'field_board_other_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_other|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_other|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '16',
    'children' => array(
      0 => 'field_board_other_males',
      1 => 'field_board_other_females',
      2 => 'field_board_other_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_other|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_total|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '18',
    'children' => array(
      0 => 'field_board_member_grand_total',
      1 => 'field_board_spacer1',
      2 => 'field_board_spacer2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_total|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_total|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '17',
    'children' => array(
      0 => 'field_board_member_grand_total',
      1 => 'field_board_spacer1',
      2 => 'field_board_spacer2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_total|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_white|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '11',
    'children' => array(
      0 => 'field_board_white_males',
      1 => 'field_board_white_females',
      2 => 'field_board_white_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_white|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_white|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '11',
    'children' => array(
      0 => 'field_board_white_males',
      1 => 'field_board_white_females',
      2 => 'field_board_white_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_white|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomposition|node|employees_and_board_members|default';
  $field_group->group_name = 'group_boardcomposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_employees_board';
  $field_group->data = array(
    'label' => 'What is the racial/gender composition of your board?',
    'weight' => '11',
    'children' => array(
      0 => 'group_boardcomptableheader',
      1 => 'group_board_white',
      2 => 'group_board_hispanic',
      3 => 'group_board_asian_am',
      4 => 'group_board_native_am',
      5 => 'group_board_african_am',
      6 => 'group_board_other',
      7 => 'group_board_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What is the racial/gender composition of your board?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomposition field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomposition|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomposition|node|employees_and_board_members|form';
  $field_group->group_name = 'group_boardcomposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_employees_board';
  $field_group->data = array(
    'label' => 'What is the racial/gender composition of your board?',
    'weight' => '11',
    'children' => array(
      0 => 'group_boardcomptableheader',
      1 => 'group_board_white',
      2 => 'group_board_hispanic',
      3 => 'group_board_asian_am',
      4 => 'group_board_native_am',
      5 => 'group_board_african_am',
      6 => 'group_board_other',
      7 => 'group_board_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What is the racial/gender composition of your board?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomposition field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomposition|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomptableheader|node|employees_and_board_members|default';
  $field_group->group_name = 'group_boardcomptableheader';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '10',
    'children' => array(
      0 => 'field_board_male',
      1 => 'field_board_female',
      2 => 'field_board_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomptableheader field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomptableheader|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomptableheader|node|employees_and_board_members|form';
  $field_group->group_name = 'group_boardcomptableheader';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '10',
    'children' => array(
      0 => 'field_board_male',
      1 => 'field_board_female',
      2 => 'field_board_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomptableheader field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomptableheader|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce|node|civic_engagement|form';
  $field_group->group_name = 'group_ce';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '2',
    'children' => array(
      0 => 'group_voter_registration',
      1 => 'group_org',
      2 => 'group_forum',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civic Engagement',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_african_am|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '113',
    'children' => array(
      0 => 'field_crja_african_am_female',
      1 => 'field_crja_african_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_african_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_asian_am|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '111',
    'children' => array(
      0 => 'field_crja_asian_am_female',
      1 => 'field_crja_asian_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_asian_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_hispanic|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '110',
    'children' => array(
      0 => 'field_crja_hispanic_female',
      1 => 'field_crja_hispanic_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_hispanic|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_impact|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '107',
    'children' => array(
      0 => 'field_crja_spacer',
      1 => 'field_crja_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total Number Served or Registered (Male and Female)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-impact field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_impact|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_info|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja';
  $field_group->data = array(
    'label' => 'CRJA info',
    'weight' => '106',
    'children' => array(
      0 => 'group_crja_race',
      1 => 'group_crja_white',
      2 => 'group_crja_hispanic',
      3 => 'group_crja_asian_am',
      4 => 'group_crja_native_am',
      5 => 'group_crja_african_am',
      6 => 'group_crja_other',
      7 => 'group_crja_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'CRJA info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_info|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_native_am|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '112',
    'children' => array(
      0 => 'field_crja_native_am_female',
      1 => 'field_crja_native_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_native_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_other|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '114',
    'children' => array(
      0 => 'field_crja_other_female',
      1 => 'field_crja_other_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_other|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_race|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '108',
    'children' => array(
      0 => 'field_crja_female',
      1 => 'field_crja_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_race|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_sub|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_sub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Civil Rights and Racial Justice Activities SubGroup',
    'weight' => '3',
    'children' => array(
      0 => 'group_crja',
      1 => 'group_police',
      2 => 'group_advocacy',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civil Rights and Racial Justice Activities SubGroup',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-sub field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_sub|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_white|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '109',
    'children' => array(
      0 => 'field_crja_white_female',
      1 => 'field_crja_white_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_white|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja|node|civic_engagement|form';
  $field_group->group_name = 'group_crja';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_sub';
  $field_group->data = array(
    'label' => 'Civil Rights and Racial Justice Activities',
    'weight' => '106',
    'children' => array(
      0 => 'field_crja',
      1 => 'group_crja_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civil Rights and Racial Justice Activities',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employees_board|node|employees_and_board_members|default';
  $field_group->group_name = 'group_employees_board';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_full_time_employees',
      2 => 'field_part_time_employees',
      3 => 'field_average_employee_salary',
      4 => 'field_employee_health_beneits',
      5 => 'field_employee_life_insurance',
      6 => 'field_satellite_offices',
      7 => 'field_number_of_satellite_office',
      8 => 'field_board_help',
      9 => 'group_boardcomposition',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-employees-board field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_employees_board|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employees_board|node|employees_and_board_members|form';
  $field_group->group_name = 'group_employees_board';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_full_time_employees',
      2 => 'field_part_time_employees',
      3 => 'field_average_employee_salary',
      4 => 'field_employee_health_beneits',
      5 => 'field_employee_life_insurance',
      6 => 'field_satellite_offices',
      7 => 'field_number_of_satellite_office',
      8 => 'field_board_help',
      9 => 'title',
      10 => 'group_boardcomposition',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-employees-board field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_employees_board|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum_african_am|node|civic_engagement|form';
  $field_group->group_name = 'group_forum_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '109',
    'children' => array(
      0 => 'field_forums_african_am_female',
      1 => 'field_forums_african_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forum-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forum_african_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum_asian_am|node|civic_engagement|form';
  $field_group->group_name = 'group_forum_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '107',
    'children' => array(
      0 => 'field_forums_asian_am_female',
      1 => 'field_forums_asian_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forum-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forum_asian_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum_hispanic|node|civic_engagement|form';
  $field_group->group_name = 'group_forum_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '106',
    'children' => array(
      0 => 'field_forums_hispanic_female',
      1 => 'field_forums_hispanic_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forum-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forum_hispanic|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum_impact|node|civic_engagement|form';
  $field_group->group_name = 'group_forum_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '103',
    'children' => array(
      0 => 'field_forums_societal_impact',
      1 => 'field_forums_spacer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total Number Served or Registered (Male and Female)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forum-impact field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forum_impact|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum_info|node|civic_engagement|form';
  $field_group->group_name = 'group_forum_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_forum';
  $field_group->data = array(
    'label' => 'Community Forums Info',
    'weight' => '102',
    'children' => array(
      0 => 'group_forum_race',
      1 => 'group_forum_white',
      2 => 'group_forum_hispanic',
      3 => 'group_forum_asian_am',
      4 => 'group_forum_native_am',
      5 => 'group_forum_african_am',
      6 => 'group_forum_other',
      7 => 'group_forum_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Forums Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forum-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forum_info|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum_native_am|node|civic_engagement|form';
  $field_group->group_name = 'group_forum_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '108',
    'children' => array(
      0 => 'field_forums_native_am_female',
      1 => 'field_forums_native_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forum-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forum_native_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum_other|node|civic_engagement|form';
  $field_group->group_name = 'group_forum_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '110',
    'children' => array(
      0 => 'field_forums_other_female',
      1 => 'field_forums_other_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forum-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forum_other|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum_race|node|civic_engagement|form';
  $field_group->group_name = 'group_forum_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '104',
    'children' => array(
      0 => 'field_cf_female',
      1 => 'field_cf_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forum-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forum_race|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum_white|node|civic_engagement|form';
  $field_group->group_name = 'group_forum_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '105',
    'children' => array(
      0 => 'field_forums_white_female',
      1 => 'field_forums_white_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forum-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forum_white|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum|node|civic_engagement|form';
  $field_group->group_name = 'group_forum';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Community Forums',
    'weight' => '5',
    'children' => array(
      0 => 'field_community_forums',
      1 => 'group_forum_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Forums',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-forum field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forum|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_african_am|node|civic_engagement|form';
  $field_group->group_name = 'group_org_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '111',
    'children' => array(
      0 => 'field_comm_org_african_am_female',
      1 => 'field_comm_org_african_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_org_african_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_asian_am|node|civic_engagement|form';
  $field_group->group_name = 'group_org_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '109',
    'children' => array(
      0 => 'field_comm_org_asian_amer_female',
      1 => 'field_comm_org_asian_amer_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_org_asian_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_hispanic|node|civic_engagement|form';
  $field_group->group_name = 'group_org_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '108',
    'children' => array(
      0 => 'field_comm_org_hispanic_female',
      1 => 'field_comm_org_hispanic_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_org_hispanic|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_impcat|node|civic_engagement|form';
  $field_group->group_name = 'group_org_impcat';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '105',
    'children' => array(
      0 => 'field_comm_org_societal_impact',
      1 => 'field_org_spacer_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total Number Served or Registered (Male and Female)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org-impcat field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_org_impcat|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_info|node|civic_engagement|form';
  $field_group->group_name = 'group_org_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org';
  $field_group->data = array(
    'label' => 'Community Organizations Info',
    'weight' => '104',
    'children' => array(
      0 => 'group_org_race',
      1 => 'group_org_white',
      2 => 'group_org_hispanic',
      3 => 'group_org_asian_am',
      4 => 'group_org_native_am',
      5 => 'group_org_african_am',
      6 => 'group_org_other',
      7 => 'group_org_impcat',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Organizations Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_org_info|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_native_am|node|civic_engagement|form';
  $field_group->group_name = 'group_org_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '110',
    'children' => array(
      0 => 'field_comm_org_native_female',
      1 => 'field_comm_org_native_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_org_native_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_other|node|civic_engagement|form';
  $field_group->group_name = 'group_org_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '112',
    'children' => array(
      0 => 'field_comm_org_other_female',
      1 => 'field_comm_org_other_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_org_other|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_race|node|civic_engagement|form';
  $field_group->group_name = 'group_org_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '106',
    'children' => array(
      0 => 'field_co_female',
      1 => 'field_co_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_org_race|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_white|node|civic_engagement|form';
  $field_group->group_name = 'group_org_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '107',
    'children' => array(
      0 => 'field_comm_org_white_female',
      1 => 'field_comm_org_white_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_org_white|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org|node|civic_engagement|form';
  $field_group->group_name = 'group_org';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Community Organizations',
    'weight' => '4',
    'children' => array(
      0 => 'field_community_organizations',
      1 => 'group_org_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Organizations',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-org field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_org|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_african_am|node|civic_engagement|form';
  $field_group->group_name = 'group_police_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '114',
    'children' => array(
      0 => 'field_police_african_am_female',
      1 => 'field_police_african_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-police-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_police_african_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_asian_am|node|civic_engagement|form';
  $field_group->group_name = 'group_police_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '113',
    'children' => array(
      0 => 'field_police_asian_am_male',
      1 => 'field_police_asian_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-police-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_police_asian_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_hispanic|node|civic_engagement|form';
  $field_group->group_name = 'group_police_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '112',
    'children' => array(
      0 => 'field_police_hispanic_female',
      1 => 'field_police_hispanic_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-police-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_police_hispanic|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_impact|node|civic_engagement|form';
  $field_group->group_name = 'group_police_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '109',
    'children' => array(
      0 => 'field_pb_spacer',
      1 => 'field_police_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total Number Served or Registered (Male and Female)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-police-impact field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_police_impact|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_info|node|civic_engagement|form';
  $field_group->group_name = 'group_police_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police';
  $field_group->data = array(
    'label' => 'Police Brutality Info',
    'weight' => '108',
    'children' => array(
      0 => 'group_police_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Police Brutality Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-police-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_police_info|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_native_am|node|civic_engagement|form';
  $field_group->group_name = 'group_police_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '115',
    'children' => array(
      0 => 'field_police_native_am_female',
      1 => 'field_police_native_am_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-police-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_police_native_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_other|node|civic_engagement|form';
  $field_group->group_name = 'group_police_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '116',
    'children' => array(
      0 => 'field_police_other_male',
      1 => 'field_police_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-police-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_police_other|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_race|node|civic_engagement|form';
  $field_group->group_name = 'group_police_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '110',
    'children' => array(
      0 => 'field_pb_female',
      1 => 'field_pb_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-police-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_police_race|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_white|node|civic_engagement|form';
  $field_group->group_name = 'group_police_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '111',
    'children' => array(
      0 => 'field_police_white_male',
      1 => 'field_police_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-police-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_police_white|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police|node|civic_engagement|form';
  $field_group->group_name = 'group_police';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_sub';
  $field_group->data = array(
    'label' => 'Police Brutality',
    'weight' => '107',
    'children' => array(
      0 => 'field_police_brutality',
      1 => 'group_police_race',
      2 => 'group_police_white',
      3 => 'group_police_hispanic',
      4 => 'group_police_asian_am',
      5 => 'group_police_native_am',
      6 => 'group_police_african_am',
      7 => 'group_police_other',
      8 => 'group_police_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Police Brutality',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-police field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_police|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_african|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_african';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '10',
    'children' => array(
      0 => 'field_service_area_african_am',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_african|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_african|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_african';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '24',
    'children' => array(
      0 => 'field_service_area_1_african_am',
      1 => 'field_service_area_african_am',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_african|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_asian|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_asian';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '8',
    'children' => array(
      0 => 'field_service_area_asian_am',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_asian|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_asian|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_asian';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '22',
    'children' => array(
      0 => 'field_service_area_1_asian_am',
      1 => 'field_service_area_asian_am',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_asian|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_cc|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_cc';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'City/County',
    'weight' => '2',
    'children' => array(
      0 => 'field_service_area_city_county',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-cc field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_cc|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_cc|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_cc';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'City/County',
    'weight' => '17',
    'children' => array(
      0 => 'field_service_area_1_city_county',
      1 => 'field_service_area_city_county',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-cc field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_cc|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_group|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service Area',
    'weight' => '0',
    'children' => array(
      0 => 'group_sa_white',
      1 => 'group_sa_hispanic',
      2 => 'group_sa_asian',
      3 => 'group_sa_native',
      4 => 'group_sa_african',
      5 => 'group_sa_other',
      6 => 'group_sa_header',
      7 => 'group_sa_name',
      8 => 'group_sa_cc',
      9 => 'group_sa_pop',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Service Area',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sa-group field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sa_group|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_group|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service Area',
    'weight' => '3',
    'children' => array(
      0 => 'group_sa_white',
      1 => 'group_sa_hispanic',
      2 => 'group_sa_asian',
      3 => 'group_sa_native',
      4 => 'group_sa_african',
      5 => 'group_sa_other',
      6 => 'group_sa_header',
      7 => 'group_sa_name',
      8 => 'group_sa_cc',
      9 => 'group_sa_pop',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Service Area',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sa-group field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sa_group|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_header|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '5',
    'children' => array(
      0 => 'field_composition_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sa-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sa_header|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_header|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '19',
    'children' => array(
      0 => 'field_composition_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sa-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sa_header|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_hispanic|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_hispanic';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '7',
    'children' => array(
      0 => 'field_service_area_hispanic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_hispanic|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_hispanic|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_hispanic';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '21',
    'children' => array(
      0 => 'field_service_area_1_hispanic',
      1 => 'field_service_area_hispanic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_hispanic|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_native|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_native';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '9',
    'children' => array(
      0 => 'field_service_area_native_am',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_native|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_native|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_native';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '23',
    'children' => array(
      0 => 'field_service_area_1_native_am',
      1 => 'field_service_area_native_am',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_native|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_other|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_other';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '11',
    'children' => array(
      0 => 'field_service_area_other',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_other|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_other|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_other';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '25',
    'children' => array(
      0 => 'field_service_area_1_other',
      1 => 'field_service_area_other',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_other|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_pop|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_pop';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Population',
    'weight' => '3',
    'children' => array(
      0 => 'field_service_area_population',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-pop field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_pop|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_pop|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_pop';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Population',
    'weight' => '18',
    'children' => array(
      0 => 'field_service_area_1_population',
      1 => 'field_service_area_population',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-pop field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_pop|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_white|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_white';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '6',
    'children' => array(
      0 => 'field_service_area_white',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_white|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_white|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_white';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '20',
    'children' => array(
      0 => 'field_service_area_1_white',
      1 => 'field_service_area_white',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sa-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_white|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_african_am|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '159',
    'children' => array(
      0 => 'field_voter_african_amer_female',
      1 => 'field_voter_african_amer_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_african_am|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_african_am|node|civic_engagement|form';
  $field_group->group_name = 'group_voter_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '118',
    'children' => array(
      0 => 'field_voter_african_amer_female',
      1 => 'field_voter_african_amer_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_african_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_asian_am|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '157',
    'children' => array(
      0 => 'field_voter_asian_amer_female',
      1 => 'field_voter_asian_amer_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_asian_am|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_asian_am|node|civic_engagement|form';
  $field_group->group_name = 'group_voter_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '116',
    'children' => array(
      0 => 'field_voter_asian_amer_female',
      1 => 'field_voter_asian_amer_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_asian_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_hispanic|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '156',
    'children' => array(
      0 => 'field_voter_hispanic_female',
      1 => 'field_voter_hispanic_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_hispanic|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_hispanic|node|civic_engagement|form';
  $field_group->group_name = 'group_voter_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '115',
    'children' => array(
      0 => 'field_voter_hispanic_female',
      1 => 'field_voter_hispanic_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_hispanic|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_impact|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '153',
    'children' => array(
      0 => 'field_voter_spacer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total Number Served or Registered (Male and Female)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-impact field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_impact|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_impact|node|civic_engagement|form';
  $field_group->group_name = 'group_voter_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '112',
    'children' => array(
      0 => 'field_voter_spacer',
      1 => 'field_voter_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total Number Served or Registered (Male and Female)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-impact field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_impact|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_info|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_registration';
  $field_group->data = array(
    'label' => 'Voter Registration Info',
    'weight' => '120',
    'children' => array(
      0 => 'group_voter_race',
      1 => 'group_voter_white',
      2 => 'group_voter_hispanic',
      3 => 'group_voter_asian_am',
      4 => 'group_voter_native_am',
      5 => 'group_voter_african_am',
      6 => 'group_voter_other',
      7 => 'group_voter_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_info|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_info|node|civic_engagement|form';
  $field_group->group_name = 'group_voter_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_voter_registration';
  $field_group->data = array(
    'label' => 'Voter Registration Info',
    'weight' => '111',
    'children' => array(
      0 => 'group_voter_race',
      1 => 'group_voter_white',
      2 => 'group_voter_hispanic',
      3 => 'group_voter_asian_am',
      4 => 'group_voter_native_am',
      5 => 'group_voter_african_am',
      6 => 'group_voter_other',
      7 => 'group_voter_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_info|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_native_am|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '158',
    'children' => array(
      0 => 'field_voter_native_amer_female',
      1 => 'field_voter_native_amer_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_native_am|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_native_am|node|civic_engagement|form';
  $field_group->group_name = 'group_voter_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '117',
    'children' => array(
      0 => 'field_voter_native_amer_female',
      1 => 'field_voter_native_amer_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_native_am|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_other|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '160',
    'children' => array(
      0 => 'field_voter_other_male',
      1 => 'field_voter_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_other|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_other|node|civic_engagement|form';
  $field_group->group_name = 'group_voter_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '119',
    'children' => array(
      0 => 'field_voter_other_male',
      1 => 'field_voter_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_other|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_race|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '154',
    'children' => array(
      0 => 'field_voter_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_race|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_race|node|civic_engagement|form';
  $field_group->group_name = 'group_voter_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '113',
    'children' => array(
      0 => 'field_female_ce_voter',
      1 => 'field_voter_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_race|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_registration|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Voter Registration',
    'weight' => '85',
    'children' => array(
      0 => 'field_voter_registration',
      1 => 'group_voter_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-registration field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_registration|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_registration|node|civic_engagement|form';
  $field_group->group_name = 'group_voter_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Voter Registration',
    'weight' => '3',
    'children' => array(
      0 => 'field_ce_voter_help',
      1 => 'field_voter_registration',
      2 => 'group_voter_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-registration field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_registration|node|civic_engagement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_white|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '155',
    'children' => array(
      0 => 'field_voter_white_male',
      1 => 'field_voter_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_white|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voter_white|node|civic_engagement|form';
  $field_group->group_name = 'group_voter_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '114',
    'children' => array(
      0 => 'field_voter_white_male',
      1 => 'field_voter_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-voter-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voter_white|node|civic_engagement|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advocacy Efforts');
  t('Advocacy Information');
  t('African American');
  t('Asian American');
  t('CRJA info');
  t('City/County');
  t('Civic Engagement');
  t('Civil Rights and Racial Justice Activities');
  t('Civil Rights and Racial Justice Activities SubGroup');
  t('Community Forums');
  t('Community Forums Info');
  t('Community Organizations');
  t('Community Organizations Info');
  t('Hispanic/Latino');
  t('Native American');
  t('Other');
  t('Police Brutality');
  t('Police Brutality Info');
  t('Population');
  t('Race');
  t('Service Area');
  t('Total');
  t('Total Number Served or Registered (Male and Female)');
  t('Voter Registration');
  t('Voter Registration Info');
  t('What is the racial/gender composition of your board?');
  t('White');

  return $field_groups;
}
