<?php
/**
 * @file
 * entreuprenuership_and_business_development_program_details.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function entreuprenuership_and_business_development_program_details_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_enptr_business_table|node|program_entrepreneurship|default';
  $field_group->group_name = 'group_enptr_business_table';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Business Table',
    'weight' => '4',
    'children' => array(
      0 => 'field_program_entpr_businesses',
      1 => 'group_entpr_business_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Business Table',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-enptr-business-table field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_enptr_business_table|node|program_entrepreneurship|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_entpr_business_header|node|program_entrepreneurship|default';
  $field_group->group_name = 'group_entpr_business_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_enptr_business_table';
  $field_group->data = array(
    'label' => '',
    'weight' => '11',
    'children' => array(
      0 => 'field_program_entpr_header_type',
      1 => 'field_program_entpr_header_sales',
      2 => 'field_program_entpr_header_serve',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-entpr-business-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_entpr_business_header|node|program_entrepreneurship|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_entpr_business_header|node|program_entrepreneurship|form';
  $field_group->group_name = 'group_entpr_business_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_entpr_impacts';
  $field_group->data = array(
    'label' => '',
    'weight' => '11',
    'children' => array(
      0 => 'field_program_entpr_header_type',
      1 => 'field_program_entpr_header_sales',
      2 => 'field_program_entpr_header_serve',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-entpr-business-header field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_entpr_business_header|node|program_entrepreneurship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_entpr_impacts|node|program_entrepreneurship|default';
  $field_group->group_name = 'group_entpr_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Impacts',
    'weight' => '2',
    'children' => array(
      0 => 'field_program_entpr_new',
      1 => 'field_program_entpr_jobs_ft',
      2 => 'field_program_entpr_jobs_pt',
      3 => 'field_program_entpr_certs',
      4 => 'field_program_entpr_new_dollars',
      5 => 'field_program_entpr_sales',
      6 => 'field_program_entpr_new_jobs',
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
        'classes' => 'group-entpr-impacts field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_entpr_impacts|node|program_entrepreneurship|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_entpr_impacts|node|program_entrepreneurship|form';
  $field_group->group_name = 'group_entpr_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Impacts',
    'weight' => '4',
    'children' => array(
      0 => 'field_program_entpr_new',
      1 => 'field_program_entpr_jobs_ft',
      2 => 'field_program_entpr_jobs_pt',
      3 => 'field_program_entpr_certs',
      4 => 'field_program_entpr_new_dollars',
      5 => 'field_program_entpr_sales',
      6 => 'field_program_entpr_new_jobs',
      7 => 'field_program_entpr_businesses',
      8 => 'group_entpr_stage',
      9 => 'group_entpr_business_header',
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
        'classes' => 'group-entpr-impacts field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_entpr_impacts|node|program_entrepreneurship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_entpr_overseer|node|program_entrepreneurship|default';
  $field_group->group_name = 'group_entpr_overseer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Person Who Oversees Entrepreneurship Programs',
    'weight' => '0',
    'children' => array(
      0 => 'field_entpr_overseer_name',
      1 => 'field_entpr_overseer_email',
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
        'classes' => 'group-entpr-overseer field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_entpr_overseer|node|program_entrepreneurship|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_entpr_overseer|node|program_entrepreneurship|form';
  $field_group->group_name = 'group_entpr_overseer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Person Who Oversees Entrepreneurship Programs',
    'weight' => '2',
    'children' => array(
      0 => 'field_entpr_overseer_name',
      1 => 'field_entpr_overseer_email',
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
        'classes' => 'group-entpr-overseer field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_entpr_overseer|node|program_entrepreneurship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_entpr_stage|node|program_entrepreneurship|default';
  $field_group->group_name = 'group_entpr_stage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Business Stage',
    'weight' => '3',
    'children' => array(
      0 => 'field_program_entpr_stage_0_2',
      1 => 'field_program_entpr_stage_3_5',
      2 => 'field_program_entpr_stage_5_10',
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
        'classes' => 'group-entpr-stage field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_entpr_stage|node|program_entrepreneurship|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_entpr_stage|node|program_entrepreneurship|form';
  $field_group->group_name = 'group_entpr_stage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_entpr_impacts';
  $field_group->data = array(
    'label' => 'Business Stage',
    'weight' => '13',
    'children' => array(
      0 => 'field_program_entpr_stage_0_2',
      1 => 'field_program_entpr_stage_3_5',
      2 => 'field_program_entpr_stage_5_10',
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
        'classes' => 'group-entpr-stage field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_entpr_stage|node|program_entrepreneurship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_entrp_staff|node|program_entrepreneurship|default';
  $field_group->group_name = 'group_entrp_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How many staff are engaged in these entrepreneurship activities?',
    'weight' => '1',
    'children' => array(
      0 => 'field_program_entpr_staff_entpr',
      1 => 'field_program_entpr_staff_other',
      2 => 'field_program_entpr_staff_aff',
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
        'classes' => 'group-entrp-staff field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_entrp_staff|node|program_entrepreneurship|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_entrp_staff|node|program_entrepreneurship|form';
  $field_group->group_name = 'group_entrp_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_entrepreneurship';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How many staff are engaged in these entrepreneurship activities?',
    'weight' => '3',
    'children' => array(
      0 => 'field_program_entpr_staff_entpr',
      1 => 'field_program_entpr_staff_other',
      2 => 'field_program_entpr_staff_aff',
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
        'classes' => 'group-entrp-staff field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_entrp_staff|node|program_entrepreneurship|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Business Stage');
  t('Business Table');
  t('How many staff are engaged in these entrepreneurship activities?');
  t('Person Who Oversees Entrepreneurship Programs');
  t('Program Impacts');

  return $field_groups;
}
