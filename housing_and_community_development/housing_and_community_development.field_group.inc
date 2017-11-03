<?php
/**
 * @file
 * housing_and_community_development.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function housing_and_community_development_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_housing_comm_dev|node|program_housing|form';
  $field_group->group_name = 'group_program_housing_comm_dev';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_housing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Community Development',
    'weight' => '4',
    'children' => array(
      0 => 'field_program_housing_projects',
      1 => 'field_program_housing_value',
      2 => 'field_program_housing_affordable',
      3 => 'field_program_housing_facilities',
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
        'classes' => 'group-program-housing-comm-dev field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_housing_comm_dev|node|program_housing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_housing_foreclose|node|program_housing|form';
  $field_group->group_name = 'group_program_housing_foreclose';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_housing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Foreclosure Assistance',
    'weight' => '3',
    'children' => array(
      0 => 'field_program_housing_not4closed',
      1 => 'field_program_housing_month_late',
      2 => 'field_program_housing_alternate',
      3 => 'field_program_housing_have_kids',
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
        'classes' => 'group-program-housing-foreclose field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_housing_foreclose|node|program_housing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_housing_home|node|program_housing|form';
  $field_group->group_name = 'group_program_housing_home';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_housing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Home Purchased',
    'weight' => '2',
    'children' => array(
      0 => 'field_program_housing_attended',
      1 => 'field_program_housing_purchased',
      2 => 'field_program_housing_avg_price',
      3 => 'field_program_housing_fixed',
      4 => 'field_program_housing_adjustable',
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
        'classes' => 'group-program-housing-home field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_housing_home|node|program_housing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_housing_impacts|node|program_housing|form';
  $field_group->group_name = 'group_program_housing_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_housing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Impacts',
    'weight' => '1',
    'children' => array(
      0 => 'field_program_housing_improved',
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
        'classes' => 'group-program-housing-impacts field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_program_housing_impacts|node|program_housing|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Community Development');
  t('Foreclosure Assistance');
  t('Home Purchased');
  t('Program Impacts');

  return $field_groups;
}
