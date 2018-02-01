<?php
/**
 * @file
 * programs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function programs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_header|paragraphs_item|funding_source|default';
  $field_group->group_name = 'group_funding_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'funding_source';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_funding_table';
  $field_group->data = array(
    'label' => '',
    'weight' => '9',
    'children' => array(
      0 => 'field_funding_source_label',
      1 => 'field_funding_funding_type_label',
      2 => 'field_funding_source_type_label',
      3 => 'field_funding_amount_label',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-funding-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_funding_header|paragraphs_item|funding_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_header|paragraphs_item|funding_source|form';
  $field_group->group_name = 'group_funding_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'funding_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_funding_table';
  $field_group->data = array(
    'label' => ' ',
    'weight' => '9',
    'children' => array(
      0 => 'field_funding_source_label',
      1 => 'field_funding_funding_type_label',
      2 => 'field_funding_source_type_label',
      3 => 'field_funding_amount_label',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-funding-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_funding_header|paragraphs_item|funding_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_row|paragraphs_item|funding_source|default';
  $field_group->group_name = 'group_funding_row';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'funding_source';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_funding_table';
  $field_group->data = array(
    'label' => '',
    'weight' => '10',
    'children' => array(
      0 => 'field_funding_funding_source',
      1 => 'field_funding_source_type',
      2 => 'field_funding_funding_type',
      3 => 'field_funding_amount',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-funding-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_funding_row|paragraphs_item|funding_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_row|paragraphs_item|funding_source|form';
  $field_group->group_name = 'group_funding_row';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'funding_source';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_funding_table';
  $field_group->data = array(
    'label' => ' ',
    'weight' => '11',
    'children' => array(
      0 => 'field_funding_funding_source',
      1 => 'field_funding_source_type',
      2 => 'field_funding_funding_type',
      3 => 'field_funding_amount',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-funding-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_funding_row|paragraphs_item|funding_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_table|paragraphs_item|funding_source|default';
  $field_group->group_name = 'group_funding_table';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'funding_source';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funding',
    'weight' => '0',
    'children' => array(
      0 => 'group_funding_header',
      1 => 'group_funding_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Funding',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-funding-table field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_funding_table|paragraphs_item|funding_source|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_table|paragraphs_item|funding_source|form';
  $field_group->group_name = 'group_funding_table';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'funding_source';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funding',
    'weight' => '0',
    'children' => array(
      0 => 'group_funding_header',
      1 => 'group_funding_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Funding',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-funding-table field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_funding_table|paragraphs_item|funding_source|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_demographics|node|programs|form';
  $field_group->group_name = 'group_program_demographics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Demographics',
    'weight' => '6',
    'children' => array(
      0 => 'field_program_percent_black',
      1 => 'field_program_percent_white',
      2 => 'field_program_percent_asian',
      3 => 'field_program_percent_native',
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
        'classes' => 'group-program-demographics field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_demographics|node|programs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_ethnicity|node|programs|form';
  $field_group->group_name = 'group_program_ethnicity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ethnicity',
    'weight' => '7',
    'children' => array(
      0 => 'field_program_percent_hispanic',
      1 => 'field_program_percent_non_hispan',
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
        'classes' => 'group-program-ethnicity field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_ethnicity|node|programs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_gender|node|programs|form';
  $field_group->group_name = 'group_program_gender';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gender',
    'weight' => '8',
    'children' => array(
      0 => 'field_program_percent_male',
      1 => 'field_program_percent_female',
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
        'classes' => 'group-program-gender field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_gender|node|programs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_service_header|paragraphs_item|program_services|default';
  $field_group->group_name = 'group_program_service_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'program_services';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_program_service_table';
  $field_group->data = array(
    'label' => 'Services Header',
    'weight' => '5',
    'children' => array(
      0 => 'field_education_dollars_header',
      1 => 'field_education_hours_header',
      2 => 'field_education_people_header',
      3 => 'field_education_service_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Services Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-program-service-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_program_service_header|paragraphs_item|program_services|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_service_header|paragraphs_item|program_services|form';
  $field_group->group_name = 'group_program_service_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'program_services';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_program_service_table';
  $field_group->data = array(
    'label' => 'Services Header',
    'weight' => '14',
    'children' => array(
      0 => 'field_education_dollars_header',
      1 => 'field_education_hours_header',
      2 => 'field_education_people_header',
      3 => 'field_education_service_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Services Header',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-program-service-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_program_service_header|paragraphs_item|program_services|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_service_row|paragraphs_item|program_services|default';
  $field_group->group_name = 'group_program_service_row';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'program_services';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_program_service_table';
  $field_group->data = array(
    'label' => 'Services Row',
    'weight' => '6',
    'children' => array(
      0 => 'field_program_service_served',
      1 => 'field_program_service_hours',
      2 => 'field_program_service_dollars',
      3 => 'field_program_service_provided',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Services Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-program-service-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_program_service_row|paragraphs_item|program_services|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_service_row|paragraphs_item|program_services|form';
  $field_group->group_name = 'group_program_service_row';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'program_services';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_program_service_table';
  $field_group->data = array(
    'label' => 'Services Row',
    'weight' => '15',
    'children' => array(
      0 => 'field_program_service_served',
      1 => 'field_program_service_hours',
      2 => 'field_program_service_dollars',
      3 => 'field_program_service_provided',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Services Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-program-service-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_program_service_row|paragraphs_item|program_services|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_service_table|paragraphs_item|program_services|default';
  $field_group->group_name = 'group_program_service_table';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'program_services';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Services Table',
    'weight' => '0',
    'children' => array(
      0 => 'group_program_service_header',
      1 => 'group_program_service_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Services Table',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-program-service-table field-group-div nuTable',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_program_service_table|paragraphs_item|program_services|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_service_table|paragraphs_item|program_services|form';
  $field_group->group_name = 'group_program_service_table';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'program_services';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Services Table',
    'weight' => '14',
    'children' => array(
      0 => 'group_program_service_header',
      1 => 'group_program_service_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Services Table',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-program-service-table field-group-div nulTable',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_program_service_table|paragraphs_item|program_services|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t(' ');
  t('Demographics');
  t('Ethnicity');
  t('Funding');
  t('Gender');
  t('Services Header');
  t('Services Row');
  t('Services Table');

  return $field_groups;
}
