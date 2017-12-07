<?php
/**
 * @file
 * census.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function census_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_certification|node|census|form';
  $field_group->group_name = 'group_certification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Survey Certification',
    'weight' => '4',
    'children' => array(
      0 => 'field_survey_name_of_certifier',
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
        'classes' => 'group-certification field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_certification|node|census|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Survey Certification');

  return $field_groups;
}
