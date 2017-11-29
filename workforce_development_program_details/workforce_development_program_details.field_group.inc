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
  $field_group->identifier = 'group_program_work_impacts|node|program_workforce|form';
  $field_group->group_name = 'group_program_work_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Impacts',
    'weight' => '1',
    'children' => array(
      0 => 'field_program_work_placed',
      1 => 'field_program_work_retained',
      2 => 'field_program_work_avg_salary',
      3 => 'field_program_work_salary',
      4 => 'field_program_work_hourly',
      5 => 'field_program_work_welfare',
      6 => 'field_program_work_welfare_place',
      7 => 'field_program_work_welfare_salar',
      8 => 'field_program_work_wia',
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
  $field_group->identifier = 'group_program_work_wia|node|program_workforce|form';
  $field_group->group_name = 'group_program_work_wia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_workforce';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'WIA/WIOA Services',
    'weight' => '11',
    'children' => array(
      0 => 'field_program_work_wia_deliverer',
      1 => 'field_program_work_wia_provider',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Program Impacts');
  t('WIA/WIOA Services');

  return $field_groups;
}
