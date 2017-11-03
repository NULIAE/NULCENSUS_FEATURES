<?php
/**
 * @file
 * civic_engagement.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function civic_engagement_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_african_am|node|civic_engagement|default';
  $field_group->group_name = 'group_advocacy_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '91',
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
  $field_groups['group_advocacy_african_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '105',
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
  $field_group->identifier = 'group_advocacy_asian_am|node|civic_engagement|default';
  $field_group->group_name = 'group_advocacy_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '89',
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
  $field_groups['group_advocacy_asian_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '103',
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
  $field_group->identifier = 'group_advocacy_hispanic|node|civic_engagement|default';
  $field_group->group_name = 'group_advocacy_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '88',
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
  $field_groups['group_advocacy_hispanic|node|civic_engagement|default'] = $field_group;

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
    'weight' => '102',
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
  $field_group->identifier = 'group_advocacy_impact|node|civic_engagement|default';
  $field_group->group_name = 'group_advocacy_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '93',
    'children' => array(
      0 => 'field_advocacy_societal_impact',
      1 => 'field_advocacy_spacer',
      2 => 'field_advocacy_total',
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
  $field_groups['group_advocacy_impact|node|civic_engagement|default'] = $field_group;

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
    'weight' => '107',
    'children' => array(
      0 => 'field_advocacy_societal_impact',
      1 => 'field_advocacy_spacer',
      2 => 'field_advocacy_total',
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
  $field_group->identifier = 'group_advocacy_info|node|civic_engagement|default';
  $field_group->group_name = 'group_advocacy_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_sub';
  $field_group->data = array(
    'label' => 'Advocacy Efforts',
    'weight' => '13',
    'children' => array(
      0 => 'field_advocacy_efforts',
      1 => 'group_advocacy_race',
      2 => 'group_advocacy_white',
      3 => 'group_advocacy_hispanic',
      4 => 'group_advocacy_asian_am',
      5 => 'group_advocacy_native_am',
      6 => 'group_advocacy_african_am',
      7 => 'group_advocacy_other',
      8 => 'group_advocacy_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Advocacy Efforts',
      'instance_settings' => array(
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
  $field_groups['group_advocacy_info|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_info|node|civic_engagement|form';
  $field_group->group_name = 'group_advocacy_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_sub';
  $field_group->data = array(
    'label' => 'Advocacy',
    'weight' => '108',
    'children' => array(
      0 => 'field_advocacy_efforts',
      1 => 'group_advocacy_race',
      2 => 'group_advocacy_white',
      3 => 'group_advocacy_hispanic',
      4 => 'group_advocacy_asian_am',
      5 => 'group_advocacy_native_am',
      6 => 'group_advocacy_african_am',
      7 => 'group_advocacy_other',
      8 => 'group_advocacy_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Advocacy',
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
  $field_group->identifier = 'group_advocacy_native_am|node|civic_engagement|default';
  $field_group->group_name = 'group_advocacy_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '90',
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
  $field_groups['group_advocacy_native_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '104',
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
  $field_group->identifier = 'group_advocacy_other|node|civic_engagement|default';
  $field_group->group_name = 'group_advocacy_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '92',
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
  $field_groups['group_advocacy_other|node|civic_engagement|default'] = $field_group;

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
    'weight' => '106',
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
  $field_group->identifier = 'group_advocacy_race|node|civic_engagement|default';
  $field_group->group_name = 'group_advocacy_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '86',
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
  $field_groups['group_advocacy_race|node|civic_engagement|default'] = $field_group;

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
    'weight' => '100',
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
  $field_group->identifier = 'group_advocacy_white|node|civic_engagement|default';
  $field_group->group_name = 'group_advocacy_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '87',
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
  $field_groups['group_advocacy_white|node|civic_engagement|default'] = $field_group;

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
    'weight' => '101',
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
  $field_group->identifier = 'group_ce|node|civic_engagement|default';
  $field_group->group_name = 'group_ce';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '1',
    'children' => array(
      0 => 'group_org_info',
      1 => 'group_forum_info',
      2 => 'group_voter_info',
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
  $field_groups['group_ce|node|civic_engagement|default'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'group_org_info',
      1 => 'group_forum_info',
      2 => 'group_voter_info',
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
  $field_group->identifier = 'group_crja_african_am|node|civic_engagement|default';
  $field_group->group_name = 'group_crja_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '16',
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
  $field_groups['group_crja_african_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '111',
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
  $field_group->identifier = 'group_crja_asian_am|node|civic_engagement|default';
  $field_group->group_name = 'group_crja_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '14',
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
  $field_groups['group_crja_asian_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '109',
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
  $field_group->identifier = 'group_crja_hispanic|node|civic_engagement|default';
  $field_group->group_name = 'group_crja_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '13',
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
  $field_groups['group_crja_hispanic|node|civic_engagement|default'] = $field_group;

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
    'weight' => '108',
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
  $field_group->identifier = 'group_crja_impact|node|civic_engagement|default';
  $field_group->group_name = 'group_crja_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '18',
    'children' => array(
      0 => 'field_crja_spacer',
      1 => 'field_crja_societal_impact',
      2 => 'field_crja_total',
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
  $field_groups['group_crja_impact|node|civic_engagement|default'] = $field_group;

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
    'weight' => '113',
    'children' => array(
      0 => 'field_crja_spacer',
      1 => 'field_crja_societal_impact',
      2 => 'field_crja_total',
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
  $field_group->identifier = 'group_crja_info|node|civic_engagement|default';
  $field_group->group_name = 'group_crja_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_sub';
  $field_group->data = array(
    'label' => 'Civil Rights and Racial Justice Activities',
    'weight' => '11',
    'children' => array(
      0 => 'field_crja',
      1 => 'group_crja_race',
      2 => 'group_crja_white',
      3 => 'group_crja_hispanic',
      4 => 'group_crja_asian_am',
      5 => 'group_crja_native_am',
      6 => 'group_crja_african_am',
      7 => 'group_crja_other',
      8 => 'group_crja_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civil Rights and Racial Justice Activities',
      'instance_settings' => array(
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
  $field_groups['group_crja_info|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_info|node|civic_engagement|form';
  $field_group->group_name = 'group_crja_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_sub';
  $field_group->data = array(
    'label' => 'Civil Rights and Racial Justice Activities',
    'weight' => '106',
    'children' => array(
      0 => 'field_crja',
      1 => 'group_crja_race',
      2 => 'group_crja_white',
      3 => 'group_crja_hispanic',
      4 => 'group_crja_asian_am',
      5 => 'group_crja_native_am',
      6 => 'group_crja_african_am',
      7 => 'group_crja_other',
      8 => 'group_crja_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civil Rights and Racial Justice Activities',
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
  $field_group->identifier = 'group_crja_native_am|node|civic_engagement|default';
  $field_group->group_name = 'group_crja_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '15',
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
  $field_groups['group_crja_native_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '110',
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
  $field_group->identifier = 'group_crja_other|node|civic_engagement|default';
  $field_group->group_name = 'group_crja_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '17',
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
  $field_groups['group_crja_other|node|civic_engagement|default'] = $field_group;

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
    'weight' => '112',
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
  $field_group->identifier = 'group_crja_race|node|civic_engagement|default';
  $field_group->group_name = 'group_crja_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '11',
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
  $field_groups['group_crja_race|node|civic_engagement|default'] = $field_group;

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
    'weight' => '106',
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
  $field_group->identifier = 'group_crja_sub|node|civic_engagement|default';
  $field_group->group_name = 'group_crja_sub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Civil Rights and Racial Justice Activities',
    'weight' => '2',
    'children' => array(
      0 => 'field_advoacy_research',
      1 => 'field_advocacy_description',
      2 => 'group_advocacy_info',
      3 => 'group_crja_info',
      4 => 'group_police_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civil Rights and Racial Justice Activities',
      'instance_settings' => array(
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
  $field_groups['group_crja_sub|node|civic_engagement|default'] = $field_group;

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
    'label' => 'Civil Rights and Racial Justice Activities',
    'weight' => '2',
    'children' => array(
      0 => 'field_advoacy_research',
      1 => 'field_advocacy_description',
      2 => 'group_advocacy_info',
      3 => 'group_crja_info',
      4 => 'group_police_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civil Rights and Racial Justice Activities',
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
  $field_group->identifier = 'group_crja_white|node|civic_engagement|default';
  $field_group->group_name = 'group_crja_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '12',
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
  $field_groups['group_crja_white|node|civic_engagement|default'] = $field_group;

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
    'weight' => '107',
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
  $field_group->identifier = 'group_forum_african_am|node|civic_engagement|default';
  $field_group->group_name = 'group_forum_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '92',
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
  $field_groups['group_forum_african_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '107',
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
  $field_group->identifier = 'group_forum_asian_am|node|civic_engagement|default';
  $field_group->group_name = 'group_forum_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '90',
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
  $field_groups['group_forum_asian_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '105',
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
  $field_group->identifier = 'group_forum_hispanic|node|civic_engagement|default';
  $field_group->group_name = 'group_forum_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '89',
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
  $field_groups['group_forum_hispanic|node|civic_engagement|default'] = $field_group;

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
    'weight' => '104',
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
  $field_group->identifier = 'group_forum_impact|node|civic_engagement|default';
  $field_group->group_name = 'group_forum_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '94',
    'children' => array(
      0 => 'field_forums_societal_impact',
      1 => 'field_forums_spacer',
      2 => 'field_forums_total',
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
  $field_groups['group_forum_impact|node|civic_engagement|default'] = $field_group;

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
    'weight' => '109',
    'children' => array(
      0 => 'field_forums_societal_impact',
      1 => 'field_forums_spacer',
      2 => 'field_forums_total',
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
  $field_group->identifier = 'group_forum_info|node|civic_engagement|default';
  $field_group->group_name = 'group_forum_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Community Forums',
    'weight' => '24',
    'children' => array(
      0 => 'field_community_forums',
      1 => 'group_forum_race',
      2 => 'group_forum_white',
      3 => 'group_forum_hispanic',
      4 => 'group_forum_asian_am',
      5 => 'group_forum_native_am',
      6 => 'group_forum_african_am',
      7 => 'group_forum_other',
      8 => 'group_forum_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Forums',
      'instance_settings' => array(
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
  $field_groups['group_forum_info|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forum_info|node|civic_engagement|form';
  $field_group->group_name = 'group_forum_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Community Forums',
    'weight' => '113',
    'children' => array(
      0 => 'field_community_forums',
      1 => 'group_forum_race',
      2 => 'group_forum_white',
      3 => 'group_forum_hispanic',
      4 => 'group_forum_asian_am',
      5 => 'group_forum_native_am',
      6 => 'group_forum_african_am',
      7 => 'group_forum_other',
      8 => 'group_forum_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Forums',
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
  $field_group->identifier = 'group_forum_native_am|node|civic_engagement|default';
  $field_group->group_name = 'group_forum_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '91',
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
  $field_groups['group_forum_native_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '106',
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
  $field_group->identifier = 'group_forum_other|node|civic_engagement|default';
  $field_group->group_name = 'group_forum_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '93',
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
  $field_groups['group_forum_other|node|civic_engagement|default'] = $field_group;

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
    'weight' => '108',
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
  $field_group->identifier = 'group_forum_race|node|civic_engagement|default';
  $field_group->group_name = 'group_forum_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '87',
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
  $field_groups['group_forum_race|node|civic_engagement|default'] = $field_group;

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
    'weight' => '102',
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
  $field_group->identifier = 'group_forum_white|node|civic_engagement|default';
  $field_group->group_name = 'group_forum_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_forum_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '88',
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
  $field_groups['group_forum_white|node|civic_engagement|default'] = $field_group;

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
    'weight' => '103',
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
  $field_group->identifier = 'group_org_african_am|node|civic_engagement|default';
  $field_group->group_name = 'group_org_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '99',
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
  $field_groups['group_org_african_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '14',
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
  $field_group->identifier = 'group_org_asian_am|node|civic_engagement|default';
  $field_group->group_name = 'group_org_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '97',
    'children' => array(
      0 => 'field_comm_org_asian_am_male',
      1 => 'field_comm_org_asian_am_female',
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
  $field_groups['group_org_asian_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '12',
    'children' => array(
      0 => 'field_comm_org_asian_am_male',
      1 => 'field_comm_org_asian_am_female',
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
  $field_group->identifier = 'group_org_hispanic|node|civic_engagement|default';
  $field_group->group_name = 'group_org_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '96',
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
  $field_groups['group_org_hispanic|node|civic_engagement|default'] = $field_group;

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
    'weight' => '11',
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
  $field_group->identifier = 'group_org_impcat|node|civic_engagement|default';
  $field_group->group_name = 'group_org_impcat';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '101',
    'children' => array(
      0 => 'field_comm_org_societal_impact',
      1 => 'field_org_spacer_impact',
      2 => 'field_comm_org_total',
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
  $field_groups['group_org_impcat|node|civic_engagement|default'] = $field_group;

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
    'weight' => '16',
    'children' => array(
      0 => 'field_comm_org_societal_impact',
      1 => 'field_org_spacer_impact',
      2 => 'field_comm_org_total',
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
  $field_group->identifier = 'group_org_info|node|civic_engagement|default';
  $field_group->group_name = 'group_org_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Community Organizations',
    'weight' => '23',
    'children' => array(
      0 => 'field_community_organizations',
      1 => 'group_org_race',
      2 => 'group_org_white',
      3 => 'group_org_hispanic',
      4 => 'group_org_asian_am',
      5 => 'group_org_native_am',
      6 => 'group_org_african_am',
      7 => 'group_org_other',
      8 => 'group_org_impcat',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Organizations',
      'instance_settings' => array(
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
  $field_groups['group_org_info|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_info|node|civic_engagement|form';
  $field_group->group_name = 'group_org_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Community Organizations',
    'weight' => '112',
    'children' => array(
      0 => 'field_community_organizations',
      1 => 'group_org_race',
      2 => 'group_org_white',
      3 => 'group_org_hispanic',
      4 => 'group_org_asian_am',
      5 => 'group_org_native_am',
      6 => 'group_org_african_am',
      7 => 'group_org_other',
      8 => 'group_org_impcat',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Organizations',
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
  $field_group->identifier = 'group_org_native_am|node|civic_engagement|default';
  $field_group->group_name = 'group_org_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '98',
    'children' => array(
      0 => 'field_comm_org_native_am_male',
      1 => 'field_comm_org_native_am_female',
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
  $field_groups['group_org_native_am|node|civic_engagement|default'] = $field_group;

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
    'weight' => '13',
    'children' => array(
      0 => 'field_comm_org_native_am_male',
      1 => 'field_comm_org_native_am_female',
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
  $field_group->identifier = 'group_org_other|node|civic_engagement|default';
  $field_group->group_name = 'group_org_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '100',
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
  $field_groups['group_org_other|node|civic_engagement|default'] = $field_group;

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
    'weight' => '15',
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
  $field_group->identifier = 'group_org_race|node|civic_engagement|default';
  $field_group->group_name = 'group_org_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '94',
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
  $field_groups['group_org_race|node|civic_engagement|default'] = $field_group;

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
    'weight' => '9',
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
  $field_group->identifier = 'group_org_white|node|civic_engagement|default';
  $field_group->group_name = 'group_org_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_org_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '95',
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
  $field_groups['group_org_white|node|civic_engagement|default'] = $field_group;

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
    'weight' => '10',
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
  $field_group->identifier = 'group_police_african_am|node|civic_engagement|default';
  $field_group->group_name = 'group_police_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '105',
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
  $field_groups['group_police_african_am|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_african_am|node|civic_engagement|form';
  $field_group->group_name = 'group_police_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '112',
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
  $field_group->identifier = 'group_police_asian_am|node|civic_engagement|default';
  $field_group->group_name = 'group_police_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '103',
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
  $field_groups['group_police_asian_am|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_asian_am|node|civic_engagement|form';
  $field_group->group_name = 'group_police_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '111',
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
  $field_group->identifier = 'group_police_hispanic|node|civic_engagement|default';
  $field_group->group_name = 'group_police_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '102',
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
  $field_groups['group_police_hispanic|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_hispanic|node|civic_engagement|form';
  $field_group->group_name = 'group_police_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '110',
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
  $field_group->identifier = 'group_police_impact|node|civic_engagement|default';
  $field_group->group_name = 'group_police_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '107',
    'children' => array(
      0 => 'field_pb_spacer',
      1 => 'field_police_societal_impact',
      2 => 'field_police_total',
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
  $field_groups['group_police_impact|node|civic_engagement|default'] = $field_group;

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
    'weight' => '115',
    'children' => array(
      0 => 'field_pb_spacer',
      1 => 'field_police_societal_impact',
      2 => 'field_police_total',
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
  $field_group->identifier = 'group_police_info|node|civic_engagement|default';
  $field_group->group_name = 'group_police_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_sub';
  $field_group->data = array(
    'label' => 'Police Brutality',
    'weight' => '12',
    'children' => array(
      0 => 'field_police_brutality',
      1 => 'group_police_race',
      2 => 'group_police_white',
      3 => 'group_police_hispanic',
      4 => 'group_police_asian_am',
      5 => 'group_police_native_am',
      6 => 'group_police_african_am',
      7 => 'group_police_other',
      8 => 'group_police_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Police Brutality',
      'instance_settings' => array(
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
  $field_groups['group_police_info|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_info|node|civic_engagement|form';
  $field_group->group_name = 'group_police_info';
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
      8 => 'group_police_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Police Brutality',
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
  $field_group->identifier = 'group_police_native_am|node|civic_engagement|default';
  $field_group->group_name = 'group_police_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '104',
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
  $field_groups['group_police_native_am|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_native_am|node|civic_engagement|form';
  $field_group->group_name = 'group_police_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '113',
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
  $field_group->identifier = 'group_police_other|node|civic_engagement|default';
  $field_group->group_name = 'group_police_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '106',
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
  $field_groups['group_police_other|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_other|node|civic_engagement|form';
  $field_group->group_name = 'group_police_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '114',
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
  $field_group->identifier = 'group_police_race|node|civic_engagement|default';
  $field_group->group_name = 'group_police_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '100',
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
  $field_groups['group_police_race|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_race|node|civic_engagement|form';
  $field_group->group_name = 'group_police_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '108',
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
  $field_group->identifier = 'group_police_white|node|civic_engagement|default';
  $field_group->group_name = 'group_police_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '101',
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
  $field_groups['group_police_white|node|civic_engagement|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_police_white|node|civic_engagement|form';
  $field_group->group_name = 'group_police_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_police_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '109',
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
  $field_group->identifier = 'group_voter_african_am|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '27',
    'children' => array(
      0 => 'field_voter_african_am_male',
      1 => 'field_voter_african_am_female',
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
    'weight' => '117',
    'children' => array(
      0 => 'field_voter_african_am_male',
      1 => 'field_voter_african_am_female',
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
    'weight' => '25',
    'children' => array(
      0 => 'field_voter_asian_am_male',
      1 => 'field_voter_asian_am_female',
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
    'weight' => '115',
    'children' => array(
      0 => 'field_voter_asian_am_male',
      1 => 'field_voter_asian_am_female',
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
    'weight' => '24',
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
    'weight' => '114',
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
    'weight' => '29',
    'children' => array(
      0 => 'field_voter_spacer',
      1 => 'field_voter_societal_impact',
      2 => 'field_voter_total',
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
    'weight' => '119',
    'children' => array(
      0 => 'field_voter_spacer',
      1 => 'field_voter_societal_impact',
      2 => 'field_voter_total',
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
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Voter Registration',
    'weight' => '22',
    'children' => array(
      0 => 'field_ce_voter_help',
      1 => 'field_voter_registration',
      2 => 'group_voter_race',
      3 => 'group_voter_white',
      4 => 'group_voter_hispanic',
      5 => 'group_voter_asian_am',
      6 => 'group_voter_native_am',
      7 => 'group_voter_african_am',
      8 => 'group_voter_other',
      9 => 'group_voter_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration',
      'instance_settings' => array(
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
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Voter Registration',
    'weight' => '111',
    'children' => array(
      0 => 'field_ce_voter_help',
      1 => 'field_voter_registration',
      2 => 'group_voter_race',
      3 => 'group_voter_white',
      4 => 'group_voter_hispanic',
      5 => 'group_voter_asian_am',
      6 => 'group_voter_native_am',
      7 => 'group_voter_african_am',
      8 => 'group_voter_other',
      9 => 'group_voter_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration',
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
    'weight' => '26',
    'children' => array(
      0 => 'field_voter_native_am_male',
      1 => 'field_voter_native_am_female',
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
    'weight' => '116',
    'children' => array(
      0 => 'field_voter_native_am_male',
      1 => 'field_voter_native_am_female',
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
    'weight' => '28',
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
    'weight' => '118',
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
    'weight' => '22',
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
    'weight' => '112',
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
  $field_group->identifier = 'group_voter_white|node|civic_engagement|default';
  $field_group->group_name = 'group_voter_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'civic_engagement';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voter_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '23',
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
    'weight' => '113',
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
  t('Advocacy');
  t('Advocacy Efforts');
  t('African American');
  t('Asian American');
  t('Civic Engagement');
  t('Civil Rights and Racial Justice Activities');
  t('Community Forums');
  t('Community Organizations');
  t('Hispanic/Latino');
  t('Native American');
  t('Other');
  t('Police Brutality');
  t('Race');
  t('Total Number Served or Registered (Male and Female)');
  t('Voter Registration');
  t('White');

  return $field_groups;
}
