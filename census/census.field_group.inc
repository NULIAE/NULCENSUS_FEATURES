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
      1 => 'field_survey_contact_first_name',
      2 => 'field_survey_contact_last_name',
      3 => 'field_survey_phone_number',
      4 => 'field_survey_email_address',
      5 => 'field_survey_best_time_to_call',
      6 => 'field_survey_time_zone',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|census|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_date_established',
      1 => 'field_president_ceo_first_name',
      2 => 'field_president_ceo_middle_name',
      3 => 'field_president_ceo_last_name',
      4 => 'field_number_of_years_as_ceo',
      5 => 'field_number_of_years_of_service',
      6 => 'field_address_line_1',
      7 => 'field_address_line_2',
      8 => 'field_city',
      9 => 'field_state_province',
      10 => 'field_zip_code',
      11 => 'field_telephone',
      12 => 'field_fax',
      13 => 'field_cellular_number',
      14 => 'field_email_address',
      15 => 'field_photo',
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
        'classes' => 'group-contact-info field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact_info|node|census|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Information');
  t('Survey Certification');

  return $field_groups;
}
