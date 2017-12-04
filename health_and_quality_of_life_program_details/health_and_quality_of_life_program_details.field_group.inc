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
  $field_group->identifier = 'group_health_services_header|paragraphs_item|health_services|form';
  $field_group->group_name = 'group_health_services_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'health_services';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_health_services';
  $field_group->data = array(
    'label' => 'Health Header',
    'weight' => '10',
    'children' => array(
      0 => 'field_health_service_header',
      1 => 'field_health_people_header',
      2 => 'field_health_hours_header',
      3 => 'field_health_dollars_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Health Header',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-health-services-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_health_services_header|paragraphs_item|health_services|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_health_services_row|paragraphs_item|health_services|form';
  $field_group->group_name = 'group_health_services_row';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'health_services';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_health_services';
  $field_group->data = array(
    'label' => 'Health Row',
    'weight' => '11',
    'children' => array(
      0 => 'field_health_service_provided',
      1 => 'field_health_people_served',
      2 => 'field_health_hours',
      3 => 'field_health_dollars',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Health Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-health-services-row field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_health_services_row|paragraphs_item|health_services|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_health_services|paragraphs_item|health_services|form';
  $field_group->group_name = 'group_health_services';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'health_services';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Health Services Table',
    'weight' => '0',
    'children' => array(
      0 => 'group_health_services_header',
      1 => 'group_health_services_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Health Services Table',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-health-services field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_health_services|paragraphs_item|health_services|form'] = $field_group;

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
  t('Health Header');
  t('Health Row');
  t('Health Services Table');
  t('Program Impacts');

  return $field_groups;
}
