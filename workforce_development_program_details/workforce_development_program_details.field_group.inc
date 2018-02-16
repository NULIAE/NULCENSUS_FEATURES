<?php
/**
 * @file
 * workforce_development_program_details.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function workforce_development_program_details_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_work_impacts|node|program_workforce|default';
  $field_group->group_name = 'group_program_work_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Impacts',
    'weight' => '3',
    'children' => array(
      0 => 'field_program_work_placed',
      1 => 'field_program_work_retained',
      2 => 'field_program_work_welfare',
      3 => 'field_program_work_welfare_place',
      4 => 'field_program_work_credentials',
      5 => 'field_program_work_counseling',
      6 => 'field_program_work_participants',
      7 => 'field_program_work_total_partici',
      8 => 'group_workforce_salary',
      9 => 'group_workforce_salary_welfare',
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
        'classes' => 'group-program-work-impacts field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_work_impacts|node|program_workforce|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_work_impacts|node|program_workforce|form';
  $field_group->group_name = 'group_program_work_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Impacts',
    'weight' => '4',
    'children' => array(
      0 => 'field_program_work_placed',
      1 => 'field_program_work_retained',
      2 => 'field_program_work_welfare',
      3 => 'field_program_work_welfare_place',
      4 => 'field_program_work_credentials',
      5 => 'field_program_work_counseling',
      6 => 'field_program_work_participants',
      7 => 'field_program_work_total_partici',
      8 => 'group_workforce_salary',
      9 => 'group_workforce_salary_welfare',
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
        'classes' => 'group-program-work-impacts field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_work_impacts|node|program_workforce|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_work_wia|node|program_workforce|default';
  $field_group->group_name = 'group_program_work_wia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'WIA/WIOA Services',
    'weight' => '4',
    'children' => array(
      0 => 'field_program_work_wia',
      1 => 'field_program_work_wia_deliverer',
      2 => 'field_program_work_wia_provider',
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
        'classes' => 'group-program-work-wia field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_work_wia|node|program_workforce|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_work_wia|node|program_workforce|form';
  $field_group->group_name = 'group_program_work_wia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'WIA/WIOA Services',
    'weight' => '5',
    'children' => array(
      0 => 'field_program_work_wia',
      1 => 'field_program_work_wia_deliverer',
      2 => 'field_program_work_wia_provider',
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
        'classes' => 'group-program-work-wia field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_work_wia|node|program_workforce|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work_overseer|node|program_workforce|default';
  $field_group->group_name = 'group_work_overseer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Person Who Oversees Workforce Programs',
    'weight' => '1',
    'children' => array(
      0 => 'field_work_overseer_name',
      1 => 'field_work_overseer_email',
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
        'classes' => 'group-work-overseer field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_work_overseer|node|program_workforce|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work_overseer|node|program_workforce|form';
  $field_group->group_name = 'group_work_overseer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Person Who Oversees Workforce Programs',
    'weight' => '2',
    'children' => array(
      0 => 'field_work_overseer_name',
      1 => 'field_work_overseer_email',
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
        'classes' => 'group-work-overseer field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_work_overseer|node|program_workforce|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workforce_salary_welfare|node|program_workforce|default';
  $field_group->group_name = 'group_workforce_salary_welfare';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_program_work_impacts';
  $field_group->data = array(
    'label' => 'Income of welfare recipient placed in jobs',
    'weight' => '13',
    'children' => array(
      0 => 'field_program_work_welfare_hour',
      1 => 'field_program_work_welfare_salar',
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
        'classes' => 'group-workforce-salary-welfare field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_workforce_salary_welfare|node|program_workforce|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workforce_salary_welfare|node|program_workforce|form';
  $field_group->group_name = 'group_workforce_salary_welfare';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_program_work_impacts';
  $field_group->data = array(
    'label' => 'Income of welfare recipient placed in jobs',
    'weight' => '31',
    'children' => array(
      0 => 'field_program_work_welfare_hour',
      1 => 'field_program_work_welfare_salar',
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
        'classes' => 'group-workforce-salary-welfare field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_workforce_salary_welfare|node|program_workforce|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workforce_salary|node|program_workforce|default';
  $field_group->group_name = 'group_workforce_salary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_program_work_impacts';
  $field_group->data = array(
    'label' => 'Income of participants placed in jobs',
    'weight' => '10',
    'children' => array(
      0 => 'field_program_work_salary',
      1 => 'field_program_work_hourly',
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
        'classes' => 'group-workforce-salary field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_workforce_salary|node|program_workforce|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workforce_salary|node|program_workforce|form';
  $field_group->group_name = 'group_workforce_salary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_program_work_impacts';
  $field_group->data = array(
    'label' => 'Income of participants placed in jobs',
    'weight' => '28',
    'children' => array(
      0 => 'field_program_work_salary',
      1 => 'field_program_work_hourly',
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
        'classes' => 'group-workforce-salary field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_workforce_salary|node|program_workforce|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Income of participants placed in jobs');
  t('Income of welfare recipient placed in jobs');
  t('Person Who Oversees Workforce Programs');
  t('Program Impacts');
  t('WIA/WIOA Services');

  return $field_groups;
}
