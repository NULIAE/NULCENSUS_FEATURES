<?php
/**
 * @file
 * censusfeature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function censusfeature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_african|node|census|default';
  $field_group->group_name = 'group_advocacy_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '214',
    'children' => array(
      0 => 'field_advocacy_african_am_male',
      1 => 'field_advocacy_african_am_female',
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
        'classes' => 'group-advocacy-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_african|node|census|form';
  $field_group->group_name = 'group_advocacy_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '437',
    'children' => array(
      0 => 'field_advocacy_african_am_male',
      1 => 'field_advocacy_african_am_female',
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
        'classes' => 'group-advocacy-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_asian|node|census|default';
  $field_group->group_name = 'group_advocacy_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '212',
    'children' => array(
      0 => 'field_advocacy_asian_am_male',
      1 => 'field_advocacy_asian_am_female',
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
        'classes' => 'group-advocacy-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_asian|node|census|form';
  $field_group->group_name = 'group_advocacy_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '435',
    'children' => array(
      0 => 'field_advocacy_asian_am_male',
      1 => 'field_advocacy_asian_am_female',
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
        'classes' => 'group-advocacy-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_hispanic|node|census|default';
  $field_group->group_name = 'group_advocacy_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '211',
    'children' => array(
      0 => 'field_advocacy_hispanic_male',
      1 => 'field_advocacy_hispanic_female',
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
        'classes' => 'group-advocacy-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_hispanic|node|census|form';
  $field_group->group_name = 'group_advocacy_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '434',
    'children' => array(
      0 => 'field_advocacy_hispanic_male',
      1 => 'field_advocacy_hispanic_female',
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
        'classes' => 'group-advocacy-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_info|node|census|default';
  $field_group->group_name = 'group_advocacy_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy';
  $field_group->data = array(
    'label' => 'Advocacy Efforts Information',
    'weight' => '140',
    'children' => array(
      0 => 'group_advocacy_race',
      1 => 'group_advocacy_white',
      2 => 'group_advocacy_hispanic',
      3 => 'group_advocacy_asian',
      4 => 'group_advocacy_native',
      5 => 'group_advocacy_african',
      6 => 'group_advocacy_other',
      7 => 'group_advocacy_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Advocacy Efforts Information',
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
  $field_groups['group_advocacy_info|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_info|node|census|form';
  $field_group->group_name = 'group_advocacy_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy';
  $field_group->data = array(
    'label' => 'Advocacy Efforts Information',
    'weight' => '434',
    'children' => array(
      0 => 'group_advocacy_race',
      1 => 'group_advocacy_white',
      2 => 'group_advocacy_hispanic',
      3 => 'group_advocacy_asian',
      4 => 'group_advocacy_native',
      5 => 'group_advocacy_african',
      6 => 'group_advocacy_other',
      7 => 'group_advocacy_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Advocacy Efforts Information',
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
  $field_groups['group_advocacy_info|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_native|node|census|default';
  $field_group->group_name = 'group_advocacy_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '213',
    'children' => array(
      0 => 'field_advocacy_native_am_male',
      1 => 'field_advocacy_native_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-african field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_native|node|census|form';
  $field_group->group_name = 'group_advocacy_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '436',
    'children' => array(
      0 => 'field_advocacy_native_am_male',
      1 => 'field_advocacy_native_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advocacy-african field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advocacy_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_other|node|census|default';
  $field_group->group_name = 'group_advocacy_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '215',
    'children' => array(
      0 => 'field_advocacy_other_male',
      1 => 'field_advocacy_other_female',
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
        'classes' => 'group-advocacy-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_other|node|census|form';
  $field_group->group_name = 'group_advocacy_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '438',
    'children' => array(
      0 => 'field_advocacy_other_male',
      1 => 'field_advocacy_other_female',
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
        'classes' => 'group-advocacy-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_race|node|census|default';
  $field_group->group_name = 'group_advocacy_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '209',
    'children' => array(
      0 => 'field_advocacy_male',
      1 => 'field_advocacy_female',
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
  $field_groups['group_advocacy_race|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_race|node|census|form';
  $field_group->group_name = 'group_advocacy_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '432',
    'children' => array(
      0 => 'field_advocacy_male',
      1 => 'field_advocacy_female',
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
  $field_groups['group_advocacy_race|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_societal_impact|node|census|default';
  $field_group->group_name = 'group_advocacy_societal_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '216',
    'children' => array(
      0 => 'field_advocacy_societal_impact',
      1 => 'field_advocacy_spacer',
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
        'classes' => 'group-advocacy-societal-impact field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_societal_impact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_societal_impact|node|census|form';
  $field_group->group_name = 'group_advocacy_societal_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '439',
    'children' => array(
      0 => 'field_advocacy_societal_impact',
      1 => 'field_advocacy_spacer',
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
        'classes' => 'group-advocacy-societal-impact field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_societal_impact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_white|node|census|default';
  $field_group->group_name = 'group_advocacy_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '210',
    'children' => array(
      0 => 'field_advocacy_white_male',
      1 => 'field_advocacy_white_female',
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
        'classes' => 'group-advocacy-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy_white|node|census|form';
  $field_group->group_name = 'group_advocacy_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_advocacy_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '433',
    'children' => array(
      0 => 'field_advocacy_white_male',
      1 => 'field_advocacy_white_female',
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
        'classes' => 'group-advocacy-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy|node|census|default';
  $field_group->group_name = 'group_advocacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Advocacy',
    'weight' => '145',
    'children' => array(
      0 => 'field_advocacy_efforts',
      1 => 'field_advocacy_description',
      2 => 'field_advoacy_research',
      3 => 'group_advocacy_info',
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
        'classes' => 'group-advocacy field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advocacy|node|census|form';
  $field_group->group_name = 'group_advocacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Advocacy',
    'weight' => '290',
    'children' => array(
      0 => 'field_advocacy_efforts',
      1 => 'field_advocacy_description',
      2 => 'field_advoacy_research',
      3 => 'group_advocacy_info',
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
        'classes' => 'group-advocacy field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advocacy|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_african|node|census|default';
  $field_group->group_name = 'group_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '346',
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
        'classes' => 'group-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_african|node|census|form';
  $field_group->group_name = 'group_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '333',
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
        'classes' => 'group-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_asian|node|census|default';
  $field_group->group_name = 'group_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '344',
    'children' => array(
      0 => 'field_board_asian_total',
      1 => 'field_board_asian_males',
      2 => 'field_board_asian_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_asian|node|census|form';
  $field_group->group_name = 'group_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '331',
    'children' => array(
      0 => 'field_board_asian_total',
      1 => 'field_board_asian_males',
      2 => 'field_board_asian_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomposition|node|census|default';
  $field_group->group_name = 'group_boardcomposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_employees_board';
  $field_group->data = array(
    'label' => 'What is the racial/gender composition of your board?',
    'weight' => '122',
    'children' => array(
      0 => 'group_white',
      1 => 'group_hispanic',
      2 => 'group_asian',
      3 => 'group_native',
      4 => 'group_african',
      5 => 'group_other',
      6 => 'group_totalboard',
      7 => 'group_boardcomptableheader',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What is the racial/gender composition of your board?',
      'instance_settings' => array(
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
  $field_groups['group_boardcomposition|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomposition|node|census|form';
  $field_group->group_name = 'group_boardcomposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_employees_board';
  $field_group->data = array(
    'label' => 'What is the racial/gender composition of your board?',
    'weight' => '125',
    'children' => array(
      0 => 'group_white',
      1 => 'group_hispanic',
      2 => 'group_asian',
      3 => 'group_native',
      4 => 'group_african',
      5 => 'group_other',
      6 => 'group_totalboard',
      7 => 'group_boardcomptableheader',
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
  $field_groups['group_boardcomposition|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomposition|node|census|full';
  $field_group->group_name = 'group_boardcomposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What is the racial/gender composition of your board?',
    'weight' => '125',
    'children' => array(
      0 => 'group_white',
      1 => 'group_boardcomptableheader',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What is the racial/gender composition of your board?',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-boardcomposition field-group-div nulTable',
        'description' => 'Please Indicate number of each gender and total below:',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomposition|node|census|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomptableheader|node|census|default';
  $field_group->group_name = 'group_boardcomptableheader';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '341',
    'children' => array(
      0 => 'field_boardcompfieldheadings',
      1 => 'field_total',
      2 => 'field_public_contact_female',
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
  $field_groups['group_boardcomptableheader|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomptableheader|node|census|form';
  $field_group->group_name = 'group_boardcomptableheader';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '328',
    'children' => array(
      0 => 'field_boardcompfieldheadings',
      1 => 'field_female',
      2 => 'field_total',
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
  $field_groups['group_boardcomptableheader|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomptableheader|node|census|full';
  $field_group->group_name = 'group_boardcomptableheader';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '126',
    'children' => array(
      0 => 'field_boardcompfieldheadings',
      1 => 'field_female',
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
  $field_groups['group_boardcomptableheader|node|census|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_crja|node|census|default';
  $field_group->group_name = 'group_ce_crja';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Civil Rights and Racial Justice Activities',
    'weight' => '140',
    'children' => array(
      0 => 'field_crja',
      1 => 'group_crja_info',
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
        'classes' => 'group-ce-crja field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ce_crja|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_crja|node|census|form';
  $field_group->group_name = 'group_ce_crja';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Civil Rights and Racial Justice Activities',
    'weight' => '287',
    'children' => array(
      0 => 'field_crja',
      1 => 'group_crja_info',
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
        'classes' => 'group-ce-crja field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ce_crja|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_african|node|census|default';
  $field_group->group_name = 'group_ce_voter_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '286',
    'children' => array(
      0 => 'field_voter_african_amer_male',
      1 => 'field_voter_african_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_african|node|census|form';
  $field_group->group_name = 'group_ce_voter_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '300',
    'children' => array(
      0 => 'field_voter_african_amer_male',
      1 => 'field_voter_african_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_asian|node|census|default';
  $field_group->group_name = 'group_ce_voter_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '284',
    'children' => array(
      0 => 'field_voter_asian_amer_male',
      1 => 'field_voter_asian_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_asian|node|census|form';
  $field_group->group_name = 'group_ce_voter_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '296',
    'children' => array(
      0 => 'field_voter_asian_amer_male',
      1 => 'field_voter_asian_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_gr|node|census|default';
  $field_group->group_name = 'group_ce_voter_gr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter';
  $field_group->data = array(
    'label' => 'Voter Registration Information',
    'weight' => '141',
    'children' => array(
      0 => 'group_ce_voter_race',
      1 => 'group_ce_voter_white',
      2 => 'group_ce_voter_hispanic',
      3 => 'group_ce_voter_asian',
      4 => 'group_ce_voter_african',
      5 => 'group_ce_voter_native',
      6 => 'group_ce_voter_other',
      7 => 'group_ce_voter_registered',
      8 => 'group_ce_voter_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ce-voter-gr field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_gr|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_gr|node|census|form';
  $field_group->group_name = 'group_ce_voter_gr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter';
  $field_group->data = array(
    'label' => 'Voter Registration Information',
    'weight' => '289',
    'children' => array(
      0 => 'group_ce_voter_race',
      1 => 'group_ce_voter_white',
      2 => 'group_ce_voter_hispanic',
      3 => 'group_ce_voter_asian',
      4 => 'group_ce_voter_african',
      5 => 'group_ce_voter_native',
      6 => 'group_ce_voter_other',
      7 => 'group_ce_voter_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-gr field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_gr|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_hispanic|node|census|default';
  $field_group->group_name = 'group_ce_voter_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '283',
    'children' => array(
      0 => 'field_voter_hispanic_male',
      1 => 'field_voter_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_hispanic|node|census|form';
  $field_group->group_name = 'group_ce_voter_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '297',
    'children' => array(
      0 => 'field_voter_hispanic_male',
      1 => 'field_voter_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_impact|node|census|default';
  $field_group->group_name = 'group_ce_voter_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '288',
    'children' => array(
      0 => 'field_voter__societal_impact',
      1 => 'field_spacer4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total Number Served or Registered (Male and Female)',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ce-voter-impact field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_impact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_impact|node|census|form';
  $field_group->group_name = 'group_ce_voter_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '302',
    'children' => array(
      0 => 'field_voter__societal_impact',
      1 => 'field_spacer4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total Number Served or Registered (Male and Female)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-impact field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_impact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_native|node|census|default';
  $field_group->group_name = 'group_ce_voter_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '285',
    'children' => array(
      0 => 'field_voter_native_amer_male',
      1 => 'field_voter_native_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_native|node|census|form';
  $field_group->group_name = 'group_ce_voter_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '299',
    'children' => array(
      0 => 'field_voter_native_amer_male',
      1 => 'field_voter_native_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_other|node|census|default';
  $field_group->group_name = 'group_ce_voter_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '287',
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
        'classes' => 'group-ce-voter-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_other|node|census|form';
  $field_group->group_name = 'group_ce_voter_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '301',
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
        'classes' => 'group-ce-voter-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_race|node|census|default';
  $field_group->group_name = 'group_ce_voter_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '281',
    'children' => array(
      0 => 'field_male',
      1 => 'field_female_ce_voter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-race field-group-div nulTableHeader nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_race|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_race|node|census|form';
  $field_group->group_name = 'group_ce_voter_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '295',
    'children' => array(
      0 => 'field_male',
      1 => 'field_female_ce_voter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-race field-group-div nulTableHeader nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_race|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_registered|node|census|default';
  $field_group->group_name = 'group_ce_voter_registered';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Voters Registered',
    'weight' => '280',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voters Registered',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-registered field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_registered|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_white|node|census|default';
  $field_group->group_name = 'group_ce_voter_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '282',
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
        'classes' => 'group-ce-voter-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_white|node|census|form';
  $field_group->group_name = 'group_ce_voter_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '298',
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
        'classes' => 'group-ce-voter-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter|node|census|default';
  $field_group->group_name = 'group_ce_voter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Voter Registration',
    'weight' => '141',
    'children' => array(
      0 => 'field_voter_registration',
      1 => 'group_ce_voter_gr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter field-group-div ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter|node|census|form';
  $field_group->group_name = 'group_ce_voter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Voter Registration',
    'weight' => '286',
    'children' => array(
      0 => 'field_voter_registration',
      1 => 'field_ce_voter_help',
      2 => 'group_ce_voter_gr',
      3 => 'group_co',
      4 => 'group_cf_group',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter field-group-div ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce|node|census|default';
  $field_group->group_name = 'group_ce';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '137',
    'children' => array(
      0 => 'group_ce_voter',
      1 => 'group_co',
      2 => 'group_cf_group',
      3 => 'group_ce_crja',
      4 => 'group_pb',
      5 => 'group_advocacy',
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
        'classes' => 'group-ce field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ce|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce|node|census|form';
  $field_group->group_name = 'group_ce';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '140',
    'children' => array(
      0 => 'group_ce_voter',
      1 => 'group_ce_crja',
      2 => 'group_pb',
      3 => 'group_advocacy',
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
        'classes' => 'group-ce field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ce|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_african|node|census|default';
  $field_group->group_name = 'group_cf_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '370',
    'children' => array(
      0 => 'field_forums_african_am_male',
      1 => 'field_forums_african_am_female',
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
        'classes' => 'group-cf-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_african|node|census|form';
  $field_group->group_name = 'group_cf_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '357',
    'children' => array(
      0 => 'field_forums_african_am_male',
      1 => 'field_forums_african_am_female',
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
        'classes' => 'group-cf-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_asian|node|census|default';
  $field_group->group_name = 'group_cf_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '368',
    'children' => array(
      0 => 'field_forums_asian_am_male',
      1 => 'field_forums_asian_am_female',
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
        'classes' => 'group-cf-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_asian|node|census|form';
  $field_group->group_name = 'group_cf_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '356',
    'children' => array(
      0 => 'field_forums_asian_am_male',
      1 => 'field_forums_asian_am_female',
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
        'classes' => 'group-cf-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_group|node|census|default';
  $field_group->group_name = 'group_cf_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Community Forums',
    'weight' => '142',
    'children' => array(
      0 => 'field_community_forums',
      1 => 'group_cf_info',
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
        'classes' => 'group-cf-group field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_group|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_group|node|census|form';
  $field_group->group_name = 'group_cf_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter';
  $field_group->data = array(
    'label' => 'Community Forums',
    'weight' => '291',
    'children' => array(
      0 => 'field_community_forums',
      1 => 'group_cf_info',
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
        'classes' => 'group-cf-group field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_group|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_header|node|census|default';
  $field_group->group_name = 'group_cf_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '365',
    'children' => array(
      0 => 'field_cf_male',
      1 => 'field_cf_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cf-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cf_header|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_header|node|census|form';
  $field_group->group_name = 'group_cf_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '352',
    'children' => array(
      0 => 'field_cf_male',
      1 => 'field_cf_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cf-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cf_header|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_hispanic|node|census|default';
  $field_group->group_name = 'group_cf_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '367',
    'children' => array(
      0 => 'field_forums_hispanic_male',
      1 => 'field_forums_hispanic_female',
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
        'classes' => 'group-cf-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_hispanic|node|census|form';
  $field_group->group_name = 'group_cf_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '354',
    'children' => array(
      0 => 'field_forums_hispanic_male',
      1 => 'field_forums_hispanic_female',
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
        'classes' => 'group-cf-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_info|node|census|default';
  $field_group->group_name = 'group_cf_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cf_group';
  $field_group->data = array(
    'label' => 'Community Forums Information',
    'weight' => '146',
    'children' => array(
      0 => 'group_cf_white',
      1 => 'group_cf_hispanic',
      2 => 'group_cf_asian',
      3 => 'group_cf_native',
      4 => 'group_cf_african',
      5 => 'group_cf_other',
      6 => 'group_cf_total',
      7 => 'group_cf_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Forums Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cf-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cf_info|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_info|node|census|form';
  $field_group->group_name = 'group_cf_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cf_group';
  $field_group->data = array(
    'label' => 'Community Forums Information',
    'weight' => '357',
    'children' => array(
      0 => 'group_cf_white',
      1 => 'group_cf_hispanic',
      2 => 'group_cf_asian',
      3 => 'group_cf_native',
      4 => 'group_cf_african',
      5 => 'group_cf_other',
      6 => 'group_cf_total',
      7 => 'group_cf_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Forums Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cf-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cf_info|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_native|node|census|default';
  $field_group->group_name = 'group_cf_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '369',
    'children' => array(
      0 => 'field_forums_native_am_male',
      1 => 'field_forums_native_am_female',
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
        'classes' => 'group-cf-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_native|node|census|form';
  $field_group->group_name = 'group_cf_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '355',
    'children' => array(
      0 => 'field_forums_native_am_male',
      1 => 'field_forums_native_am_female',
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
        'classes' => 'group-cf-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_other|node|census|default';
  $field_group->group_name = 'group_cf_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '371',
    'children' => array(
      0 => 'field_forums_other_male',
      1 => 'field_forums_other_female',
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
        'classes' => 'group-cf-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_other|node|census|form';
  $field_group->group_name = 'group_cf_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '358',
    'children' => array(
      0 => 'field_forums_other_male',
      1 => 'field_forums_other_female',
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
        'classes' => 'group-cf-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_total|node|census|default';
  $field_group->group_name = 'group_cf_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '372',
    'children' => array(
      0 => 'field_forums_societal_impact',
      1 => 'field_spacer6',
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
        'classes' => 'group-cf-total field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_total|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_total|node|census|form';
  $field_group->group_name = 'group_cf_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '360',
    'children' => array(
      0 => 'field_forums_societal_impact',
      1 => 'field_spacer6',
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
        'classes' => 'group-cf-total field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_total|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_white|node|census|default';
  $field_group->group_name = 'group_cf_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '366',
    'children' => array(
      0 => 'field_forums_white_male',
      1 => 'field_forums_white_female',
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
        'classes' => 'group-cf-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cf_white|node|census|form';
  $field_group->group_name = 'group_cf_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cf_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '353',
    'children' => array(
      0 => 'field_forums_white_male',
      1 => 'field_forums_white_female',
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
        'classes' => 'group-cf-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cf_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_african|node|census|default';
  $field_group->group_name = 'group_co_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '148',
    'children' => array(
      0 => 'field_comm_org_african_am_male',
      1 => 'field_comm_org_african_am_female',
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
        'classes' => 'group-co-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_african|node|census|form';
  $field_group->group_name = 'group_co_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '146',
    'children' => array(
      0 => 'field_comm_org_african_am_male',
      1 => 'field_comm_org_african_am_female',
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
        'classes' => 'group-co-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_asian|node|census|default';
  $field_group->group_name = 'group_co_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '147',
    'children' => array(
      0 => 'field_comm_org_asian_amer_male',
      1 => 'field_comm_org_asian_amer_female',
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
        'classes' => 'group-co-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_asian|node|census|form';
  $field_group->group_name = 'group_co_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '145',
    'children' => array(
      0 => 'field_comm_org_asian_amer_male',
      1 => 'field_comm_org_asian_amer_female',
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
        'classes' => 'group-co-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_header|node|census|default';
  $field_group->group_name = 'group_co_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '143',
    'children' => array(
      0 => 'field_co_male',
      1 => 'field_co_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-co-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_co_header|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_header|node|census|form';
  $field_group->group_name = 'group_co_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '141',
    'children' => array(
      0 => 'field_co_male',
      1 => 'field_co_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-co-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_co_header|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_hispanic|node|census|default';
  $field_group->group_name = 'group_co_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '145',
    'children' => array(
      0 => 'field_comm_org_hispanic_male',
      1 => 'field_comm_org_hispanic_female',
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
        'classes' => 'group-co-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_hispanic|node|census|form';
  $field_group->group_name = 'group_co_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '143',
    'children' => array(
      0 => 'field_comm_org_hispanic_male',
      1 => 'field_comm_org_hispanic_female',
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
        'classes' => 'group-co-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_info|node|census|default';
  $field_group->group_name = 'group_co_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_co';
  $field_group->data = array(
    'label' => 'Community Organization Information',
    'weight' => '142',
    'children' => array(
      0 => 'group_co_header',
      1 => 'group_co_white',
      2 => 'group_co_hispanic',
      3 => 'group_co_asian',
      4 => 'group_co_native',
      5 => 'group_co_african',
      6 => 'group_co_other',
      7 => 'group_co_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Organization Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-co-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_co_info|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_info|node|census|form';
  $field_group->group_name = 'group_co_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_co';
  $field_group->data = array(
    'label' => 'Community Organization Information',
    'weight' => '140',
    'children' => array(
      0 => 'group_co_header',
      1 => 'group_co_white',
      2 => 'group_co_hispanic',
      3 => 'group_co_asian',
      4 => 'group_co_native',
      5 => 'group_co_african',
      6 => 'group_co_other',
      7 => 'group_co_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Community Organization Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-co-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_co_info|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_native|node|census|default';
  $field_group->group_name = 'group_co_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '146',
    'children' => array(
      0 => 'field_comm_org_native_female',
      1 => 'field_comm_org_native_male',
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
        'classes' => 'group-co-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_native|node|census|form';
  $field_group->group_name = 'group_co_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '144',
    'children' => array(
      0 => 'field_comm_org_native_female',
      1 => 'field_comm_org_native_male',
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
        'classes' => 'group-co-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_other|node|census|default';
  $field_group->group_name = 'group_co_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '149',
    'children' => array(
      0 => 'field_comm_org_other_male',
      1 => 'field_comm_org_other_female',
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
        'classes' => 'group-co-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_other|node|census|form';
  $field_group->group_name = 'group_co_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '147',
    'children' => array(
      0 => 'field_comm_org_other_male',
      1 => 'field_comm_org_other_female',
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
        'classes' => 'group-co-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_total|node|census|default';
  $field_group->group_name = 'group_co_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => '          Total Number Served or Registered (Male and Female)',
    'weight' => '150',
    'children' => array(
      0 => 'field_comm_org_societal_impact',
      1 => 'field_spacer5',
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
        'classes' => 'group-co-total field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_total|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_total|node|census|form';
  $field_group->group_name = 'group_co_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => '          Total Number Served or Registered (Male and Female)',
    'weight' => '148',
    'children' => array(
      0 => 'field_comm_org_societal_impact',
      1 => 'field_spacer5',
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
        'classes' => 'group-co-total field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_total|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_white|node|census|default';
  $field_group->group_name = 'group_co_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '144',
    'children' => array(
      0 => 'field_comm_org_white_male',
      1 => 'field_comm_org_white_female',
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
        'classes' => 'group-co-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_white|node|census|form';
  $field_group->group_name = 'group_co_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_co_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '142',
    'children' => array(
      0 => 'field_comm_org_white_male',
      1 => 'field_comm_org_white_female',
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
        'classes' => 'group-co-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|census|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Direct Contact, Public Contact and Indirect Contact Data',
    'weight' => '158',
    'children' => array(
      0 => 'group_direct_contact',
      1 => 'group_public_contact',
      2 => 'group_indirect_contact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Direct Contact, Public Contact and Indirect Contact Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contact field-group-div',
        'description' => 'Please Report as unduplicated (count the individual only once).
Please estimate the demographic data if not recorded.',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|census|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Direct Contact, Public Contact and Indirect Contact Data',
    'weight' => '144',
    'children' => array(
      0 => 'field_direct_contact_help',
      1 => 'field_help_indirect_contact',
      2 => 'field_public_contact_help',
      3 => 'group_direct_contact',
      4 => 'group_public_contact',
      5 => 'group_indirect_contact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Direct Contact, Public Contact and Indirect Contact Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contact field-group-div',
        'description' => 'Please Report as unduplicated (count the individual only once).
Please estimate the demographic data if not recorded.',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co|node|census|default';
  $field_group->group_name = 'group_co';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Community Organizations',
    'weight' => '143',
    'children' => array(
      0 => 'field_community_organizations',
      1 => 'group_co_info',
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
        'classes' => 'group-co field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co|node|census|form';
  $field_group->group_name = 'group_co';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter';
  $field_group->data = array(
    'label' => 'Community Organizations',
    'weight' => '290',
    'children' => array(
      0 => 'field_community_organizations',
      1 => 'group_co_info',
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
        'classes' => 'group-co field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_co|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_african|node|census|default';
  $field_group->group_name = 'group_crja_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '149',
    'children' => array(
      0 => 'field_crja_african_am_male',
      1 => 'field_crja_african_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-african field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_african|node|census|form';
  $field_group->group_name = 'group_crja_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '148',
    'children' => array(
      0 => 'field_crja_african_am_male',
      1 => 'field_crja_african_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-african field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_asian|node|census|default';
  $field_group->group_name = 'group_crja_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '147',
    'children' => array(
      0 => 'field_crja_asian_am_male',
      1 => 'field_crja_asian_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-asian field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_asian|node|census|form';
  $field_group->group_name = 'group_crja_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '146',
    'children' => array(
      0 => 'field_crja_asian_am_male',
      1 => 'field_crja_asian_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-asian field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_header|node|census|default';
  $field_group->group_name = 'group_crja_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '143',
    'children' => array(
      0 => 'field_crja_male',
      1 => 'field_crja_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_header|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_header|node|census|form';
  $field_group->group_name = 'group_crja_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '143',
    'children' => array(
      0 => 'field_crja_male',
      1 => 'field_crja_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_header|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_hispanic|node|census|default';
  $field_group->group_name = 'group_crja_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '146',
    'children' => array(
      0 => 'field_crja_hispanic_male',
      1 => 'field_crja_hispanic_female',
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
        'classes' => 'group-crja-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_crja_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_hispanic|node|census|form';
  $field_group->group_name = 'group_crja_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '145',
    'children' => array(
      0 => 'field_crja_hispanic_male',
      1 => 'field_crja_hispanic_female',
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
        'classes' => 'group-crja-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_crja_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_info|node|census|default';
  $field_group->group_name = 'group_crja_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_crja';
  $field_group->data = array(
    'label' => 'Civil Rights and Racial Justice Activities Information',
    'weight' => '140',
    'children' => array(
      0 => 'group_crja_header',
      1 => 'group_crja_white',
      2 => 'group_crja_hispanic',
      3 => 'group_crja_asian',
      4 => 'group_crja_native',
      5 => 'group_crja_african',
      6 => 'group_crja_other',
      7 => 'group_crja_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civil Rights and Racial Justice Activities Information',
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
  $field_groups['group_crja_info|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_info|node|census|form';
  $field_group->group_name = 'group_crja_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_crja';
  $field_group->data = array(
    'label' => 'Civil Rights and Racial Justice Activities Information',
    'weight' => '142',
    'children' => array(
      0 => 'group_crja_header',
      1 => 'group_crja_white',
      2 => 'group_crja_hispanic',
      3 => 'group_crja_asian',
      4 => 'group_crja_native',
      5 => 'group_crja_african',
      6 => 'group_crja_other',
      7 => 'group_crja_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civil Rights and Racial Justice Activities Information',
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
  $field_groups['group_crja_info|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_native|node|census|default';
  $field_group->group_name = 'group_crja_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '148',
    'children' => array(
      0 => 'field_crja_native_am_male',
      1 => 'field_crja_native_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-native field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_native|node|census|form';
  $field_group->group_name = 'group_crja_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '147',
    'children' => array(
      0 => 'field_crja_native_am_male',
      1 => 'field_crja_native_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-crja-native field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_crja_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_other|node|census|default';
  $field_group->group_name = 'group_crja_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '150',
    'children' => array(
      0 => 'field_crja_other_male',
      1 => 'field_crja_other_female',
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
        'classes' => 'group-crja-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_crja_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_other|node|census|form';
  $field_group->group_name = 'group_crja_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '149',
    'children' => array(
      0 => 'field_crja_other_male',
      1 => 'field_crja_other_female',
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
        'classes' => 'group-crja-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_crja_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_societal_impact|node|census|default';
  $field_group->group_name = 'group_crja_societal_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '151',
    'children' => array(
      0 => 'field_crja_societal_impact',
      1 => 'field_crja_spacer',
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
        'classes' => 'group-crja-societal-impact field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_crja_societal_impact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_societal_impact|node|census|form';
  $field_group->group_name = 'group_crja_societal_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '150',
    'children' => array(
      0 => 'field_crja_societal_impact',
      1 => 'field_crja_spacer',
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
        'classes' => 'group-crja-societal-impact field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_crja_societal_impact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_white|node|census|default';
  $field_group->group_name = 'group_crja_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '145',
    'children' => array(
      0 => 'field_crja_white_male',
      1 => 'field_crja_white_female',
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
        'classes' => 'group-crja-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_crja_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crja_white|node|census|form';
  $field_group->group_name = 'group_crja_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_crja_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '144',
    'children' => array(
      0 => 'field_crja_white_male',
      1 => 'field_crja_white_female',
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
        'classes' => 'group-crja-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_crja_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_african|node|census|default';
  $field_group->group_name = 'group_direct_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '218',
    'children' => array(
      0 => 'field_direct_african_am_male',
      1 => 'field_direct_african_am_female',
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
  $field_groups['group_direct_contact_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_african|node|census|form';
  $field_group->group_name = 'group_direct_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '259',
    'children' => array(
      0 => 'field_direct_african_am_male',
      1 => 'field_direct_african_am_female',
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
  $field_groups['group_direct_contact_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_asian|node|census|default';
  $field_group->group_name = 'group_direct_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '216',
    'children' => array(
      0 => 'field_direct_asian_am_male',
      1 => 'field_direct_asian_am_female',
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
  $field_groups['group_direct_contact_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_asian|node|census|form';
  $field_group->group_name = 'group_direct_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '257',
    'children' => array(
      0 => 'field_direct_asian_am_male',
      1 => 'field_direct_asian_am_female',
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
  $field_groups['group_direct_contact_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_latino|node|census|default';
  $field_group->group_name = 'group_direct_contact_latino';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '215',
    'children' => array(
      0 => 'field_direct_hispanic_male',
      1 => 'field_direct_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-latino field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_latino|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_latino|node|census|form';
  $field_group->group_name = 'group_direct_contact_latino';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '256',
    'children' => array(
      0 => 'field_direct_hispanic_male',
      1 => 'field_direct_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-latino field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_latino|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_native|node|census|default';
  $field_group->group_name = 'group_direct_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '217',
    'children' => array(
      0 => 'field_direct_native_am_male',
      1 => 'field_direct_native_am_female',
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
  $field_groups['group_direct_contact_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_native|node|census|form';
  $field_group->group_name = 'group_direct_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '258',
    'children' => array(
      0 => 'field_direct_native_am_male',
      1 => 'field_direct_native_am_female',
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
  $field_groups['group_direct_contact_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_other|node|census|default';
  $field_group->group_name = 'group_direct_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '219',
    'children' => array(
      0 => 'field_direct_other_male',
      1 => 'field_direct_other_female',
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
  $field_groups['group_direct_contact_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_other|node|census|form';
  $field_group->group_name = 'group_direct_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '260',
    'children' => array(
      0 => 'field_direct_other_male',
      1 => 'field_direct_other_female',
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
  $field_groups['group_direct_contact_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_race|node|census|default';
  $field_group->group_name = 'group_direct_contact_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '213',
    'children' => array(
      0 => 'field_female',
      1 => 'field_public_contact_males',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_race|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_race|node|census|form';
  $field_group->group_name = 'group_direct_contact_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '254',
    'children' => array(
      0 => 'field_direct_contact_males',
      1 => 'field_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_race|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_totals|node|census|default';
  $field_group->group_name = 'group_direct_contact_totals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '220',
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
        'classes' => 'group-direct-contact-totals field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_totals|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_totals|node|census|form';
  $field_group->group_name = 'group_direct_contact_totals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '261',
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
        'classes' => 'group-direct-contact-totals field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_totals|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_white|node|census|default';
  $field_group->group_name = 'group_direct_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '214',
    'children' => array(
      0 => 'field_direct_white_male',
      1 => 'field_direct_white_female',
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
  $field_groups['group_direct_contact_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_white|node|census|form';
  $field_group->group_name = 'group_direct_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '255',
    'children' => array(
      0 => 'field_direct_white_male',
      1 => 'field_direct_white_female',
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
  $field_groups['group_direct_contact_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact|node|census|default';
  $field_group->group_name = 'group_direct_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'A. Direct Contact (i.e counseling, day care, intensive education programs and legal services)',
    'weight' => '210',
    'children' => array(
      0 => 'group_direct_contact_race',
      1 => 'group_direct_contact_totals',
      2 => 'group_direct_contact_white',
      3 => 'group_direct_contact_latino',
      4 => 'group_direct_contact_other',
      5 => 'group_direct_contact_native',
      6 => 'group_direct_contact_asian',
      7 => 'group_direct_contact_african',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. Direct Contact (i.e counseling, day care, intensive education programs and legal services)',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-direct-contact field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact|node|census|form';
  $field_group->group_name = 'group_direct_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'A. Direct Contact (i.e counseling, day care, intensive education programs and legal services)',
    'weight' => '353',
    'children' => array(
      0 => 'group_direct_contact_race',
      1 => 'group_direct_contact_totals',
      2 => 'group_direct_contact_white',
      3 => 'group_direct_contact_latino',
      4 => 'group_direct_contact_other',
      5 => 'group_direct_contact_native',
      6 => 'group_direct_contact_asian',
      7 => 'group_direct_contact_african',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. Direct Contact (i.e counseling, day care, intensive education programs and legal services)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employees_board|node|census|default';
  $field_group->group_name = 'group_employees_board';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Employees and Board Members',
    'weight' => '116',
    'children' => array(
      0 => 'field_part_time_employees',
      1 => 'field_average_employee_salary',
      2 => 'field_employee_health_beneits',
      3 => 'field_employee_life_insurance',
      4 => 'field_satellite_offices',
      5 => 'field_number_of_satellite_office',
      6 => 'group_boardcomposition',
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
  $field_groups['group_employees_board|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employees_board|node|census|form';
  $field_group->group_name = 'group_employees_board';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Employees and Board Members',
    'weight' => '116',
    'children' => array(
      0 => 'field_full_time_employees',
      1 => 'field_part_time_employees',
      2 => 'field_average_employee_salary',
      3 => 'field_employee_health_beneits',
      4 => 'field_employee_life_insurance',
      5 => 'field_satellite_offices',
      6 => 'field_number_of_satellite_office',
      7 => 'field_board_help',
      8 => 'group_boardcomposition',
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
  $field_groups['group_employees_board|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_ce|node|census|default';
  $field_group->group_name = 'group_era_ce';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '241',
    'children' => array(
      0 => 'field_relief_civic_desc',
      1 => 'field_relief_civic_fund_nul',
      2 => 'field_relief_civic_fund_uway',
      3 => 'field_relief_civic_fund_other',
      4 => 'field_relief_civic_served',
      5 => 'field_relief_civic_impact',
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
        'classes' => 'group-era-ce field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_ce|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_ce|node|census|form';
  $field_group->group_name = 'group_era_ce';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '343',
    'children' => array(
      0 => 'field_relief_civic_desc',
      1 => 'field_relief_civic_fund_nul',
      2 => 'field_relief_civic_fund_uway',
      3 => 'field_relief_civic_fund_other',
      4 => 'field_relief_civic_served',
      5 => 'field_relief_civic_impact',
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
        'classes' => 'group-era-ce field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_ce|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_education|node|census|default';
  $field_group->group_name = 'group_era_education';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Education',
    'weight' => '238',
    'children' => array(
      0 => 'field_relief_ed_desc',
      1 => 'field_relief_ed_fund_nul',
      2 => 'field_relief_ed_fund_uway',
      3 => 'field_relief_ed_fund_other',
      4 => 'field_relief_ed_impact',
      5 => 'field_relief_ed_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-era-education field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_education|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_education|node|census|form';
  $field_group->group_name = 'group_era_education';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Education',
    'weight' => '340',
    'children' => array(
      0 => 'field_relief_ed_desc',
      1 => 'field_relief_ed_fund_nul',
      2 => 'field_relief_ed_fund_uway',
      3 => 'field_relief_ed_fund_other',
      4 => 'field_relief_ed_impact',
      5 => 'field_relief_ed_served',
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
        'classes' => 'group-era-education field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_education|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_employment|node|census|default';
  $field_group->group_name = 'group_era_employment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Employment Empowerment',
    'weight' => '239',
    'children' => array(
      0 => 'field_relief_employ_desc',
      1 => 'field_relief_employ_fund_nul',
      2 => 'field_relief_employ_fund_uway',
      3 => 'field_relief_employ_fund_other',
      4 => 'field_relief_employ_served',
      5 => 'field_relief_employ_impact',
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
        'classes' => 'group-era-employment field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_employment|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_employment|node|census|form';
  $field_group->group_name = 'group_era_employment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Employment Empowerment',
    'weight' => '341',
    'children' => array(
      0 => 'field_relief_employ_desc',
      1 => 'field_relief_employ_fund_nul',
      2 => 'field_relief_employ_fund_uway',
      3 => 'field_relief_employ_fund_other',
      4 => 'field_relief_employ_served',
      5 => 'field_relief_employ_impact',
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
        'classes' => 'group-era-employment field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_employment|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_header|node|census|default';
  $field_group->group_name = 'group_era_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Program',
    'weight' => '237',
    'children' => array(
      0 => 'field_era_describe',
      1 => 'field_era_funding_source_nul',
      2 => 'field_era_funding_source_u_way',
      3 => 'field_era_funding_source_other',
      4 => 'field_era_number_served',
      5 => 'field_era_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Program',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-era-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_era_header|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_health|node|census|default';
  $field_group->group_name = 'group_era_health';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Health',
    'weight' => '240',
    'children' => array(
      0 => 'field_relief_health_desc',
      1 => 'field_relief_health_fund_nul',
      2 => 'field_relief_health_fund_uway',
      3 => 'field_relief_health_fund_other',
      4 => 'field_relief_health_served',
      5 => 'field_relief_health_impact',
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
        'classes' => 'group-era-health field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_health|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_health|node|census|form';
  $field_group->group_name = 'group_era_health';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Health',
    'weight' => '342',
    'children' => array(
      0 => 'field_relief_health_desc',
      1 => 'field_relief_health_fund_nul',
      2 => 'field_relief_health_fund_uway',
      3 => 'field_relief_health_fund_other',
      4 => 'field_relief_health_served',
      5 => 'field_relief_health_impact',
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
        'classes' => 'group-era-health field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_health|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_program_1|node|census|form';
  $field_group->group_name = 'group_era_program_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Program',
    'weight' => '339',
    'children' => array(
      0 => 'field_era_describe',
      1 => 'field_era_funding_source_nul',
      2 => 'field_era_funding_source_u_way',
      3 => 'field_era_funding_source_other',
      4 => 'field_era_number_served',
      5 => 'field_era_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Program',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-program-1 field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_program_1|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_racial_justice|node|census|default';
  $field_group->group_name = 'group_era_racial_justice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Racial Justice',
    'weight' => '242',
    'children' => array(
      0 => 'field_relief_justice_desc',
      1 => 'field_relief_justice_fund_nul',
      2 => 'field_relief_justice_fund_uway',
      3 => 'field_relief_justice_fund_other',
      4 => 'field_relief_justice_served',
      5 => 'field_relief_justice_impact',
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
        'classes' => 'group-era-racial-justice field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_racial_justice|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_racial_justice|node|census|form';
  $field_group->group_name = 'group_era_racial_justice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Racial Justice',
    'weight' => '344',
    'children' => array(
      0 => 'field_relief_justice_desc',
      1 => 'field_relief_justice_fund_nul',
      2 => 'field_relief_justice_fund_uway',
      3 => 'field_relief_justice_fund_other',
      4 => 'field_relief_justice_served',
      5 => 'field_relief_justice_impact',
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
        'classes' => 'group-era-racial-justice field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_racial_justice|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era|node|census|default';
  $field_group->group_name = 'group_era';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Emergency Relief Activities',
    'weight' => '154',
    'children' => array(
      0 => 'group_era_header',
      1 => 'group_era_education',
      2 => 'group_era_employment',
      3 => 'group_era_health',
      4 => 'group_era_ce',
      5 => 'group_era_racial_justice',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Emergency Relief Activities',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-era field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era|node|census|form';
  $field_group->group_name = 'group_era';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Emergency Relief Activities',
    'weight' => '142',
    'children' => array(
      0 => 'group_era_education',
      1 => 'group_era_program_1',
      2 => 'group_era_employment',
      3 => 'group_era_health',
      4 => 'group_era_ce',
      5 => 'group_era_racial_justice',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Emergency Relief Activities',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hispanic|node|census|default';
  $field_group->group_name = 'group_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '343',
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
        'classes' => 'group-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hispanic|node|census|form';
  $field_group->group_name = 'group_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '330',
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
        'classes' => 'group-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indirect_contact|node|census|default';
  $field_group->group_name = 'group_indirect_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution))',
    'weight' => '212',
    'children' => array(
      0 => 'field_indirect_contact_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution))',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indirect-contact field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_indirect_contact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indirect_contact|node|census|form';
  $field_group->group_name = 'group_indirect_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution)',
    'weight' => '357',
    'children' => array(
      0 => 'field_indirect_contact_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indirect-contact field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_indirect_contact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_native|node|census|default';
  $field_group->group_name = 'group_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '345',
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
        'classes' => 'group-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_native|node|census|form';
  $field_group->group_name = 'group_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '332',
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
        'classes' => 'group-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|node|census|default';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '347',
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
        'classes' => 'group-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|node|census|form';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '334',
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
        'classes' => 'group-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_african|node|census|default';
  $field_group->group_name = 'group_pb_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '148',
    'children' => array(
      0 => 'field_police_african_am_male',
      1 => 'field_police_african_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb-african field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_african|node|census|form';
  $field_group->group_name = 'group_pb_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '165',
    'children' => array(
      0 => 'field_police_african_am_male',
      1 => 'field_police_african_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb-african field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_asian|node|census|default';
  $field_group->group_name = 'group_pb_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '146',
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
        'classes' => 'group-pb-asian field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_asian|node|census|form';
  $field_group->group_name = 'group_pb_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '163',
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
        'classes' => 'group-pb-asian field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_hispanic|node|census|default';
  $field_group->group_name = 'group_pb_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '145',
    'children' => array(
      0 => 'field_police_hispanic_male',
      1 => 'field_police_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb-hispanic field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_hispanic|node|census|form';
  $field_group->group_name = 'group_pb_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '162',
    'children' => array(
      0 => 'field_police_hispanic_male',
      1 => 'field_police_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb-hispanic field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_info|node|census|default';
  $field_group->group_name = 'group_pb_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pb';
  $field_group->data = array(
    'label' => 'Police Brutality Information',
    'weight' => '140',
    'children' => array(
      0 => 'group_pb_race',
      1 => 'group_pb_white',
      2 => 'group_pb_hispanic',
      3 => 'group_pb_asian',
      4 => 'group_pb_native',
      5 => 'group_pb_african',
      6 => 'group_pb_other',
      7 => 'group_pb_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Police Brutality Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_info|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_info|node|census|form';
  $field_group->group_name = 'group_pb_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pb';
  $field_group->data = array(
    'label' => 'Police Brutality Information',
    'weight' => '143',
    'children' => array(
      0 => 'group_pb_race',
      1 => 'group_pb_white',
      2 => 'group_pb_hispanic',
      3 => 'group_pb_asian',
      4 => 'group_pb_native',
      5 => 'group_pb_african',
      6 => 'group_pb_other',
      7 => 'group_pb_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Police Brutality Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb-info field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_info|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_native|node|census|default';
  $field_group->group_name = 'group_pb_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '147',
    'children' => array(
      0 => 'field_police_native_am_male',
      1 => 'field_police_native_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb-native field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_native|node|census|form';
  $field_group->group_name = 'group_pb_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '164',
    'children' => array(
      0 => 'field_police_native_am_male',
      1 => 'field_police_native_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb-native field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_other|node|census|default';
  $field_group->group_name = 'group_pb_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '149',
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
        'classes' => 'group-pb-other field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_other|node|census|form';
  $field_group->group_name = 'group_pb_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '166',
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
        'classes' => 'group-pb-other field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_race|node|census|default';
  $field_group->group_name = 'group_pb_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '143',
    'children' => array(
      0 => 'field_pb_male',
      1 => 'field_pb_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_race|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_race|node|census|form';
  $field_group->group_name = 'group_pb_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '160',
    'children' => array(
      0 => 'field_pb_male',
      1 => 'field_pb_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_race|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_societal_impact|node|census|default';
  $field_group->group_name = 'group_pb_societal_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '150',
    'children' => array(
      0 => 'field_police_societal_impact',
      1 => 'field_pb_spacer',
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
        'classes' => 'group-pb-societal-impact field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pb_societal_impact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_societal_impact|node|census|form';
  $field_group->group_name = 'group_pb_societal_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'Total Number Served or Registered (Male and Female)',
    'weight' => '167',
    'children' => array(
      0 => 'field_police_societal_impact',
      1 => 'field_pb_spacer',
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
        'classes' => 'group-pb-societal-impact field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pb_societal_impact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_white|node|census|default';
  $field_group->group_name = 'group_pb_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '144',
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
        'classes' => 'group-pb-white field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb_white|node|census|form';
  $field_group->group_name = 'group_pb_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pb_info';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '161',
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
        'classes' => 'group-pb-white field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb|node|census|default';
  $field_group->group_name = 'group_pb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Police Brutality',
    'weight' => '144',
    'children' => array(
      0 => 'field_police_brutality',
      1 => 'group_pb_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Police Brutality',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pb|node|census|form';
  $field_group->group_name = 'group_pb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Police Brutality',
    'weight' => '288',
    'children' => array(
      0 => 'field_police_brutality',
      1 => 'group_pb_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Police Brutality',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pb field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pb|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_african|node|census|default';
  $field_group->group_name = 'group_public_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '251',
    'children' => array(
      0 => 'field_public_african_am_male',
      1 => 'field_public_african_am_female',
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
        'classes' => 'group-public-contact-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_african|node|census|form';
  $field_group->group_name = 'group_public_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '260',
    'children' => array(
      0 => 'field_public_african_am_male',
      1 => 'field_public_african_am_female',
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
        'classes' => 'group-public-contact-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_asian|node|census|default';
  $field_group->group_name = 'group_public_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '252',
    'children' => array(
      0 => 'field_public_asian_am_male',
      1 => 'field_public_asian_am_female',
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
        'classes' => 'group-public-contact-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_asian|node|census|form';
  $field_group->group_name = 'group_public_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '258',
    'children' => array(
      0 => 'field_public_asian_am_male',
      1 => 'field_public_asian_am_female',
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
        'classes' => 'group-public-contact-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_header|node|census|default';
  $field_group->group_name = 'group_public_contact_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '248',
    'children' => array(
      0 => 'field_direct_contact_males',
      1 => 'field_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
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
  $field_groups['group_public_contact_header|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_header|node|census|form';
  $field_group->group_name = 'group_public_contact_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '255',
    'children' => array(
      0 => 'field_public_contact_female',
      1 => 'field_public_contact_males',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
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
  $field_groups['group_public_contact_header|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_hispanic|node|census|default';
  $field_group->group_name = 'group_public_contact_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '250',
    'children' => array(
      0 => 'field_public_hispanic_male',
      1 => 'field_public_hispanic_female',
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
        'classes' => 'group-public-contact-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_hispanic|node|census|form';
  $field_group->group_name = 'group_public_contact_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '257',
    'children' => array(
      0 => 'field_public_hispanic_male',
      1 => 'field_public_hispanic_female',
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
        'classes' => 'group-public-contact-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_native|node|census|default';
  $field_group->group_name = 'group_public_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '251',
    'children' => array(
      0 => 'field_public_native_am_male',
      1 => 'field_public_native_am_female',
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
        'classes' => 'group-public-contact-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_native|node|census|form';
  $field_group->group_name = 'group_public_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '259',
    'children' => array(
      0 => 'field_public_native_am_male',
      1 => 'field_public_native_am_female',
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
        'classes' => 'group-public-contact-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_other|node|census|default';
  $field_group->group_name = 'group_public_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '252',
    'children' => array(
      0 => 'field_public_other_male',
      1 => 'field_public_other_female',
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
        'classes' => 'group-public-contact-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_other|node|census|form';
  $field_group->group_name = 'group_public_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '261',
    'children' => array(
      0 => 'field_public_other_male',
      1 => 'field_public_other_female',
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
        'classes' => 'group-public-contact-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_total|node|census|default';
  $field_group->group_name = 'group_public_contact_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '253',
    'children' => array(
      0 => 'field_public_total_male',
      1 => 'field_public_total_female',
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
        'classes' => 'group-public-contact-total field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_total|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_total|node|census|form';
  $field_group->group_name = 'group_public_contact_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '262',
    'children' => array(
      0 => 'field_public_total_male',
      1 => 'field_public_total_female',
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
        'classes' => 'group-public-contact-total field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_total|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_white|node|census|default';
  $field_group->group_name = 'group_public_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '249',
    'children' => array(
      0 => 'field_public_white_male',
      1 => 'field_public_white_female',
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
        'classes' => 'group-public-contact-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_white|node|census|form';
  $field_group->group_name = 'group_public_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '256',
    'children' => array(
      0 => 'field_public_white_male',
      1 => 'field_public_white_female',
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
        'classes' => 'group-public-contact-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact|node|census|default';
  $field_group->group_name = 'group_public_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'B. Public Contact (i.e. workshops, presentations and training sessions)',
    'weight' => '211',
    'children' => array(
      0 => 'group_public_contact_header',
      1 => 'group_public_contact_white',
      2 => 'group_public_contact_hispanic',
      3 => 'group_public_contact_native',
      4 => 'group_public_contact_asian',
      5 => 'group_public_contact_african',
      6 => 'group_public_contact_other',
      7 => 'group_public_contact_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B. Public Contact (i.e. workshops, presentations and training sessions)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact|node|census|form';
  $field_group->group_name = 'group_public_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'B. Public Contact (i.e. workshops, presentations and training sessions)',
    'weight' => '355',
    'children' => array(
      0 => 'group_public_contact_header',
      1 => 'group_public_contact_white',
      2 => 'group_public_contact_hispanic',
      3 => 'group_public_contact_native',
      4 => 'group_public_contact_asian',
      5 => 'group_public_contact_african',
      6 => 'group_public_contact_other',
      7 => 'group_public_contact_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B. Public Contact (i.e. workshops, presentations and training sessions)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_totalboard|node|census|default';
  $field_group->group_name = 'group_totalboard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '348',
    'children' => array(
      0 => 'field_board_member_grand_total',
      1 => 'field_totalspacer',
      2 => 'field_totalspacer2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-totalboard field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_totalboard|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_totalboard|node|census|form';
  $field_group->group_name = 'group_totalboard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '335',
    'children' => array(
      0 => 'field_board_member_grand_total',
      1 => 'field_totalspacer',
      2 => 'field_totalspacer2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-totalboard field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_totalboard|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_white|node|census|default';
  $field_group->group_name = 'group_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '342',
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
        'classes' => 'group-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_white|node|census|form';
  $field_group->group_name = 'group_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '329',
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
        'classes' => 'group-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_white|node|census|full';
  $field_group->group_name = 'group_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '127',
    'children' => array(
      0 => 'field_board_white_males',
      1 => 'field_board_white_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_white|node|census|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('          Total Number Served or Registered (Male and Female)');
  t('A. Direct Contact (i.e counseling, day care, intensive education programs and legal services)');
  t('Advocacy');
  t('Advocacy Efforts Information');
  t('African American');
  t('Asian American');
  t('B. Public Contact (i.e. workshops, presentations and training sessions)');
  t('C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution)');
  t('C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution))');
  t('Civic Engagement');
  t('Civil Rights and Racial Justice Activities');
  t('Civil Rights and Racial Justice Activities Information');
  t('Community Forums');
  t('Community Forums Information');
  t('Community Organization Information');
  t('Community Organizations');
  t('Direct Contact, Public Contact and Indirect Contact Data');
  t('Education');
  t('Emergency Relief Activities');
  t('Employees and Board Members');
  t('Employment Empowerment');
  t('Health');
  t('Hispanic/Latino');
  t('Native American');
  t('Other');
  t('Police Brutality');
  t('Police Brutality Information');
  t('Program');
  t('Race');
  t('Racial Justice');
  t('Total');
  t('Total Number Served or Registered (Male and Female)');
  t('Voter Registration');
  t('Voter Registration Information');
  t('Voters Registered');
  t('What is the racial/gender composition of your board?');
  t('White');

  return $field_groups;
}
