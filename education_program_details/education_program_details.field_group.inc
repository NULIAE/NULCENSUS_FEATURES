<?php
/**
 * @file
 * education_program_details.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function education_program_details_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_advocacy|node|program_education|default';
  $field_group->group_name = 'group_ed_advocacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advocacy',
    'weight' => '7',
    'children' => array(
      0 => 'field_program_ed_advocacy',
      1 => 'field_program_ed_adv_partners',
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
        'classes' => 'group-ed-advocacy field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_advocacy|node|program_education|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_advocacy|node|program_education|form';
  $field_group->group_name = 'group_ed_advocacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advocacy',
    'weight' => '7',
    'children' => array(
      0 => 'field_program_ed_advocacy',
      1 => 'field_program_ed_adv_partners',
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
        'classes' => 'group-ed-advocacy field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_advocacy|node|program_education|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_charter|node|program_education|default';
  $field_group->group_name = 'group_ed_charter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Charter Schools',
    'weight' => '6',
    'children' => array(
      0 => 'field_program_ed_charter_school',
      1 => 'field_program_ed_charter_mngmt',
      2 => 'field_program_ed_charter_board',
      3 => 'field_program_ed_charter_service',
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
        'classes' => 'group-ed-charter field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_charter|node|program_education|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_charter|node|program_education|form';
  $field_group->group_name = 'group_ed_charter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Charter Schools',
    'weight' => '6',
    'children' => array(
      0 => 'field_program_ed_charter_school',
      1 => 'field_program_ed_charter_mngmt',
      2 => 'field_program_ed_charter_board',
      3 => 'field_program_ed_charter_service',
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
        'classes' => 'group-ed-charter field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_charter|node|program_education|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_foster|node|program_education|default';
  $field_group->group_name = 'group_ed_foster';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Foster Care',
    'weight' => '9',
    'children' => array(
      0 => 'field_program_ed_foster',
      1 => 'field_program_ed_foster_total',
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
        'classes' => 'group-ed-foster field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_foster|node|program_education|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_foster|node|program_education|form';
  $field_group->group_name = 'group_ed_foster';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Foster Care',
    'weight' => '9',
    'children' => array(
      0 => 'field_program_ed_foster',
      1 => 'field_program_ed_foster_total',
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
        'classes' => 'group-ed-foster field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_foster|node|program_education|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_homeless|node|program_education|default';
  $field_group->group_name = 'group_ed_homeless';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Homeless Youth',
    'weight' => '3',
    'children' => array(
      0 => 'field_program_ed_homeless_youth',
      1 => 'field_program_ed_title1',
      2 => 'field_program_ed_school_building',
      3 => 'field_program_ed_school_day',
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
        'classes' => 'group-ed-homeless field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_homeless|node|program_education|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_homeless|node|program_education|form';
  $field_group->group_name = 'group_ed_homeless';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Homeless Youth',
    'weight' => '3',
    'children' => array(
      0 => 'field_program_ed_homeless_youth',
      1 => 'field_program_ed_title1',
      2 => 'field_program_ed_school_building',
      3 => 'field_program_ed_school_day',
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
        'classes' => 'group-ed-homeless field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_homeless|node|program_education|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_impacts|node|program_education|default';
  $field_group->group_name = 'group_ed_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ed_programs';
  $field_group->data = array(
    'label' => 'Program Impacts',
    'weight' => '23',
    'children' => array(
      0 => 'field_program_ed_promoted',
      1 => 'field_program_ed_graduated',
      2 => 'field_program_ed_college_app',
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
        'classes' => 'group-ed-impacts field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_impacts|node|program_education|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_impacts|node|program_education|form';
  $field_group->group_name = 'group_ed_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ed_programs';
  $field_group->data = array(
    'label' => 'Program Impacts',
    'weight' => '9',
    'children' => array(
      0 => 'field_program_ed_promoted',
      1 => 'field_program_ed_graduated',
      2 => 'field_program_ed_college_app',
      3 => 'field_program_ed_total_participa',
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
        'classes' => 'group-ed-impacts field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_impacts|node|program_education|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_mentoring|node|program_education|default';
  $field_group->group_name = 'group_ed_mentoring';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mentoring',
    'weight' => '4',
    'children' => array(
      0 => 'field_program_ed_mentoring',
      1 => 'field_program_ed_mentors_annual',
      2 => 'field_program_ed_mentor_funding',
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
        'classes' => 'group-ed-mentoring field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_mentoring|node|program_education|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_mentoring|node|program_education|form';
  $field_group->group_name = 'group_ed_mentoring';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mentoring',
    'weight' => '4',
    'children' => array(
      0 => 'field_program_ed_mentoring',
      1 => 'field_program_ed_mentors_annual',
      2 => 'field_program_ed_mentor_funding',
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
        'classes' => 'group-ed-mentoring field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_mentoring|node|program_education|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_overseer|node|program_education|default';
  $field_group->group_name = 'group_ed_overseer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Person Who Oversees Education Programs',
    'weight' => '1',
    'children' => array(
      0 => 'field_ed_overseer_name',
      1 => 'field_ed_overseer_email',
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
        'classes' => 'group-ed-overseer field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_overseer|node|program_education|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_overseer|node|program_education|form';
  $field_group->group_name = 'group_ed_overseer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Person Who Oversees Education Programs',
    'weight' => '2',
    'children' => array(
      0 => 'field_ed_overseer_name',
      1 => 'field_ed_overseer_email',
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
        'classes' => 'group-ed-overseer field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_overseer|node|program_education|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_programs|node|program_education|default';
  $field_group->group_name = 'group_ed_programs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Education Programs (Middle School, High School)',
    'weight' => '8',
    'children' => array(
      0 => 'field_program_ed_model',
      1 => 'group_ed_impacts',
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
        'classes' => 'group-ed-programs field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_programs|node|program_education|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_programs|node|program_education|form';
  $field_group->group_name = 'group_ed_programs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Education Programs (Middle School, High School)',
    'weight' => '8',
    'children' => array(
      0 => 'field_program_ed_model',
      1 => 'group_ed_impacts',
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
        'classes' => 'group-ed-programs field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_programs|node|program_education|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_scholarship|node|program_education|default';
  $field_group->group_name = 'group_ed_scholarship';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scholarship',
    'weight' => '5',
    'children' => array(
      0 => 'field_program_ed_scholar_total',
      1 => 'field_program_ed_scholar_avg',
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
        'classes' => 'group-ed-scholarship field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_scholarship|node|program_education|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ed_scholarship|node|program_education|form';
  $field_group->group_name = 'group_ed_scholarship';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_education';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scholarship',
    'weight' => '5',
    'children' => array(
      0 => 'field_program_ed_scholar_total',
      1 => 'field_program_ed_scholar_avg',
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
        'classes' => 'group-ed-scholarship field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ed_scholarship|node|program_education|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advocacy');
  t('Charter Schools');
  t('Education Programs (Middle School, High School)');
  t('Foster Care');
  t('Homeless Youth');
  t('Mentoring');
  t('Person Who Oversees Education Programs');
  t('Program Impacts');
  t('Scholarship');

  return $field_groups;
}
