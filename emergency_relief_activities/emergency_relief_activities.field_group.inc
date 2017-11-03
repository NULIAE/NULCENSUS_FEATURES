<?php
/**
 * @file
 * emergency_relief_activities.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function emergency_relief_activities_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_civic_row|node|emergency_relief_activities|default';
  $field_group->group_name = 'group_era_civic_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '37',
    'children' => array(
      0 => 'field_relief_civic_desc',
      1 => 'field_relief_civic_fund_nul',
      2 => 'field_relief_civic_fund_other',
      3 => 'field_relief_civic_fund_uway',
      4 => 'field_relief_civic_impact',
      5 => 'field_relief_civic_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civic Engagement',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-civic-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_civic_row|node|emergency_relief_activities|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_civic_row|node|emergency_relief_activities|form';
  $field_group->group_name = 'group_era_civic_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '42',
    'children' => array(
      0 => 'field_relief_civic_desc',
      1 => 'field_relief_civic_fund_nul',
      2 => 'field_relief_civic_fund_other',
      3 => 'field_relief_civic_fund_uway',
      4 => 'field_relief_civic_impact',
      5 => 'field_relief_civic_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Civic Engagement',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-civic-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_civic_row|node|emergency_relief_activities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_education_row|node|emergency_relief_activities|default';
  $field_group->group_name = 'group_era_education_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'Education',
    'weight' => '34',
    'children' => array(
      0 => 'field_relief_ed_desc',
      1 => 'field_relief_ed_fund_nul',
      2 => 'field_relief_ed_fund_other',
      3 => 'field_relief_ed_fund_uway',
      4 => 'field_relief_ed_impact',
      5 => 'field_relief_ed_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Education',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-education-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_education_row|node|emergency_relief_activities|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_education_row|node|emergency_relief_activities|form';
  $field_group->group_name = 'group_era_education_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'Education',
    'weight' => '39',
    'children' => array(
      0 => 'field_relief_ed_desc',
      1 => 'field_relief_ed_fund_nul',
      2 => 'field_relief_ed_fund_other',
      3 => 'field_relief_ed_fund_uway',
      4 => 'field_relief_ed_impact',
      5 => 'field_relief_ed_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Education',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-education-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_education_row|node|emergency_relief_activities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_employment_row|node|emergency_relief_activities|default';
  $field_group->group_name = 'group_era_employment_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'Employment Empowerment',
    'weight' => '35',
    'children' => array(
      0 => 'field_relief_employ_desc',
      1 => 'field_relief_employ_fund_nul',
      2 => 'field_relief_employ_fund_uway',
      3 => 'field_relief_employ_fund_other',
      4 => 'field_relief_employ_impact',
      5 => 'field_relief_employ_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Employment Empowerment',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-employment-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_employment_row|node|emergency_relief_activities|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_employment_row|node|emergency_relief_activities|form';
  $field_group->group_name = 'group_era_employment_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'Employment Empowerment',
    'weight' => '40',
    'children' => array(
      0 => 'field_relief_employ_desc',
      1 => 'field_relief_employ_fund_nul',
      2 => 'field_relief_employ_fund_uway',
      3 => 'field_relief_employ_fund_other',
      4 => 'field_relief_employ_impact',
      5 => 'field_relief_employ_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Employment Empowerment',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-employment-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_employment_row|node|emergency_relief_activities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_header|node|emergency_relief_activities|default';
  $field_group->group_name = 'group_era_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'ERA Header',
    'weight' => '33',
    'children' => array(
      0 => 'field_era_describe',
      1 => 'field_era_funding_source_nul',
      2 => 'field_era_funding_source_other',
      3 => 'field_era_funding_source_u_way',
      4 => 'field_era_number_served',
      5 => 'field_era_societal_impact',
      6 => 'field_era_program_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ERA Header',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_header|node|emergency_relief_activities|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_header|node|emergency_relief_activities|form';
  $field_group->group_name = 'group_era_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'ERA Header',
    'weight' => '38',
    'children' => array(
      0 => 'field_era_describe',
      1 => 'field_era_funding_source_nul',
      2 => 'field_era_funding_source_other',
      3 => 'field_era_funding_source_u_way',
      4 => 'field_era_number_served',
      5 => 'field_era_societal_impact',
      6 => 'field_era_program_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ERA Header',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_header|node|emergency_relief_activities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_health_row|node|emergency_relief_activities|default';
  $field_group->group_name = 'group_era_health_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'Health',
    'weight' => '36',
    'children' => array(
      0 => 'field_relief_health_desc',
      1 => 'field_relief_health_fund_nul',
      2 => 'field_relief_health_fund_other',
      3 => 'field_relief_health_fund_uway',
      4 => 'field_relief_health_impact',
      5 => 'field_relief_health_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Health',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-health-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_health_row|node|emergency_relief_activities|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_health_row|node|emergency_relief_activities|form';
  $field_group->group_name = 'group_era_health_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'Health',
    'weight' => '41',
    'children' => array(
      0 => 'field_relief_health_desc',
      1 => 'field_relief_health_fund_nul',
      2 => 'field_relief_health_fund_other',
      3 => 'field_relief_health_fund_uway',
      4 => 'field_relief_health_impact',
      5 => 'field_relief_health_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Health',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-health-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_health_row|node|emergency_relief_activities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_racial_row|node|emergency_relief_activities|default';
  $field_group->group_name = 'group_era_racial_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'Racial Justice',
    'weight' => '38',
    'children' => array(
      0 => 'field_relief_justice_desc',
      1 => 'field_relief_justice_fund_other',
      2 => 'field_relief_justice_fund_nul',
      3 => 'field_relief_justice_fund_uway',
      4 => 'field_relief_justice_impact',
      5 => 'field_relief_justice_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Racial Justice',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-racial-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_racial_row|node|emergency_relief_activities|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_racial_row|node|emergency_relief_activities|form';
  $field_group->group_name = 'group_era_racial_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era_table';
  $field_group->data = array(
    'label' => 'Racial Justice',
    'weight' => '43',
    'children' => array(
      0 => 'field_relief_justice_desc',
      1 => 'field_relief_justice_fund_other',
      2 => 'field_relief_justice_fund_nul',
      3 => 'field_relief_justice_fund_uway',
      4 => 'field_relief_justice_impact',
      5 => 'field_relief_justice_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Racial Justice',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-racial-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_racial_row|node|emergency_relief_activities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_table|node|emergency_relief_activities|default';
  $field_group->group_name = 'group_era_table';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ERA Table',
    'weight' => '0',
    'children' => array(
      0 => 'field_era_help',
      1 => 'group_era_education_row',
      2 => 'group_era_employment_row',
      3 => 'group_era_health_row',
      4 => 'group_era_civic_row',
      5 => 'group_era_racial_row',
      6 => 'group_era_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ERA Table',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-table field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_table|node|emergency_relief_activities|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_table|node|emergency_relief_activities|form';
  $field_group->group_name = 'group_era_table';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'emergency_relief_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ERA Table',
    'weight' => '1',
    'children' => array(
      0 => 'field_era_help',
      1 => 'group_era_education_row',
      2 => 'group_era_employment_row',
      3 => 'group_era_health_row',
      4 => 'group_era_civic_row',
      5 => 'group_era_racial_row',
      6 => 'group_era_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ERA Table',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-table field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_table|node|emergency_relief_activities|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Civic Engagement');
  t('ERA Header');
  t('ERA Table');
  t('Education');
  t('Employment Empowerment');
  t('Health');
  t('Racial Justice');

  return $field_groups;
}
