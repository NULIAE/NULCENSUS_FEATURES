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
    'weight' => '3',
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
    'weight' => '2',
    'children' => array(
      0 => 'field_affiliate',
      1 => 'field_first_name',
      2 => 'field_date_established',
      3 => 'field_president_ceo_first_name',
      4 => 'field_president_ceo_middle_name',
      5 => 'field_president_ceo_last_name',
      6 => 'field_number_of_years_as_ceo',
      7 => 'field_number_of_years_of_service',
      8 => 'field_address_line_1',
      9 => 'field_address_line_2',
      10 => 'field_city',
      11 => 'field_state_province',
      12 => 'field_zip_code',
      13 => 'field_telephone',
      14 => 'field_fax',
      15 => 'field_cellular_number',
      16 => 'field_email_address',
      17 => 'field_photo',
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
