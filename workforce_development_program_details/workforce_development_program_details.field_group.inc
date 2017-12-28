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
      2 => 'field_program_work_avg_salary',
      3 => 'field_program_work_salary',
      4 => 'field_program_work_hourly',
      5 => 'field_program_work_welfare',
      6 => 'field_program_work_welfare_place',
      7 => 'field_program_work_welfare_salar',
      8 => 'field_program_work_credentials',
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
    'weight' => '3',
    'children' => array(
      0 => 'field_program_work_placed',
      1 => 'field_program_work_retained',
      2 => 'field_program_work_avg_salary',
      3 => 'field_program_work_salary',
      4 => 'field_program_work_hourly',
      5 => 'field_program_work_welfare',
      6 => 'field_program_work_welfare_place',
      7 => 'field_program_work_welfare_salar',
      8 => 'field_program_work_credentials',
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
  $field_group->identifier = 'group_program_work_subsidiary|node|program_workforce|default';
  $field_group->group_name = 'group_program_work_subsidiary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subsidiary Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_program_work_subsidiary',
      1 => 'field_program_work_sub_profit',
      2 => 'field_program_work_sub_ownership',
      3 => 'field_program_work_aff_profit',
      4 => 'group_work_subsidiary_purpose',
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
        'classes' => 'group-program-work-subsidiary field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_work_subsidiary|node|program_workforce|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_work_subsidiary|node|program_workforce|form';
  $field_group->group_name = 'group_program_work_subsidiary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subsidiary Information',
    'weight' => '5',
    'children' => array(
      0 => 'field_program_work_subsidiary',
      1 => 'field_program_work_sub_profit',
      2 => 'field_program_work_sub_ownership',
      3 => 'field_program_work_aff_profit',
      4 => 'group_work_subsidiary_purpose',
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
        'classes' => 'group-program-work-subsidiary field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_work_subsidiary|node|program_workforce|form'] = $field_group;

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
    'weight' => '7',
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
    'weight' => '0',
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
  $field_group->identifier = 'group_work_subsidiary_purpose|node|program_workforce|default';
  $field_group->group_name = 'group_work_subsidiary_purpose';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_program_work_subsidiary';
  $field_group->data = array(
    'label' => 'Purpose of the subsidiary',
    'weight' => '24',
    'children' => array(
      0 => 'field_program_work_sub_housing',
      1 => 'field_program_work_sub_health',
      2 => 'field_program_work_sub_business',
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
        'classes' => 'group-work-subsidiary-purpose field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_work_subsidiary_purpose|node|program_workforce|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work_subsidiary_purpose|node|program_workforce|form';
  $field_group->group_name = 'group_work_subsidiary_purpose';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_program_work_subsidiary';
  $field_group->data = array(
    'label' => 'Purpose of the subsidiary',
    'weight' => '24',
    'children' => array(
      0 => 'field_program_work_sub_housing',
      1 => 'field_program_work_sub_health',
      2 => 'field_program_work_sub_business',
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
        'classes' => 'group-work-subsidiary-purpose field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_work_subsidiary_purpose|node|program_workforce|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Person Who Oversees Workforce Programs');
  t('Program Impacts');
  t('Purpose of the subsidiary');
  t('Subsidiary Information');
  t('WIA/WIOA Services');

  return $field_groups;
}
