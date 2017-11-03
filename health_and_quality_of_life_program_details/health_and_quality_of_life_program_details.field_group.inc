<?php
/**
 * @file
 * health_and_quality_of_life_program_details.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function health_and_quality_of_life_program_details_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_health_impacts|node|program_health|form';
  $field_group->group_name = 'group_program_health_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_health';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Impacts',
    'weight' => '4',
    'children' => array(
      0 => 'field_program_health_participant',
      1 => 'field_program_health_enrolled',
      2 => 'field_program_health_assisted',
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
        'classes' => 'group-program-health-impacts field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_health_impacts|node|program_health|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Program Impacts');

  return $field_groups;
}
