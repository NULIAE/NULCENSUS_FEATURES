<?php
/**
 * @file
 * censusfeature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function censusfeature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_african|node|census|default';
  $field_group->group_name = 'group_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '346',
    'children' => array(
      0 => 'field_board_african_amer_males',
      1 => 'field_board_african_amer_females',
      2 => 'field_board_african_amer_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_african|node|census|form';
  $field_group->group_name = 'group_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '333',
    'children' => array(
      0 => 'field_board_african_amer_males',
      1 => 'field_board_african_amer_females',
      2 => 'field_board_african_amer_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_asian|node|census|default';
  $field_group->group_name = 'group_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '344',
    'children' => array(
      0 => 'field_board_asian_total',
      1 => 'field_board_asian_males',
      2 => 'field_board_asian_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_asian|node|census|form';
  $field_group->group_name = 'group_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '331',
    'children' => array(
      0 => 'field_board_asian_total',
      1 => 'field_board_asian_males',
      2 => 'field_board_asian_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomposition|node|census|default';
  $field_group->group_name = 'group_boardcomposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What is the racial/gender composition of your board?',
    'weight' => '122',
    'children' => array(
      0 => 'group_white',
      1 => 'group_hispanic',
      2 => 'group_asian',
      3 => 'group_native',
      4 => 'group_african',
      5 => 'group_other',
      6 => 'group_totalboard',
      7 => 'group_boardcomptableheader',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What is the racial/gender composition of your board?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomposition field-group-div nulTable',
        'description' => 'Please Indicate number of each gender and total below:',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomposition|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomposition|node|census|form';
  $field_group->group_name = 'group_boardcomposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What is the racial/gender composition of your board?',
    'weight' => '123',
    'children' => array(
      0 => 'group_white',
      1 => 'group_hispanic',
      2 => 'group_asian',
      3 => 'group_native',
      4 => 'group_african',
      5 => 'group_other',
      6 => 'group_totalboard',
      7 => 'group_boardcomptableheader',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What is the racial/gender composition of your board?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomposition field-group-div nulTable',
        'description' => 'Please Indicate number of each gender and total below:',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomposition|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomposition|node|census|full';
  $field_group->group_name = 'group_boardcomposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What is the racial/gender composition of your board?',
    'weight' => '125',
    'children' => array(
      0 => 'group_white',
      1 => 'group_boardcomptableheader',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What is the racial/gender composition of your board?',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-boardcomposition field-group-div nulTable',
        'description' => 'Please Indicate number of each gender and total below:',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomposition|node|census|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomptableheader|node|census|default';
  $field_group->group_name = 'group_boardcomptableheader';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '341',
    'children' => array(
      0 => 'field_boardcompfieldheadings',
      1 => 'field_total',
      2 => 'field_public_contact_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomptableheader field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomptableheader|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomptableheader|node|census|form';
  $field_group->group_name = 'group_boardcomptableheader';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '328',
    'children' => array(
      0 => 'field_boardcompfieldheadings',
      1 => 'field_female',
      2 => 'field_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomptableheader field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomptableheader|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomptableheader|node|census|full';
  $field_group->group_name = 'group_boardcomptableheader';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '126',
    'children' => array(
      0 => 'field_boardcompfieldheadings',
      1 => 'field_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomptableheader field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomptableheader|node|census|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_african|node|census|default';
  $field_group->group_name = 'group_ce_voter_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '286',
    'children' => array(
      0 => 'field_voter_african_amer_male',
      1 => 'field_voter_african_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_african|node|census|form';
  $field_group->group_name = 'group_ce_voter_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '299',
    'children' => array(
      0 => 'field_voter_african_amer_male',
      1 => 'field_voter_african_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_asian|node|census|default';
  $field_group->group_name = 'group_ce_voter_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '284',
    'children' => array(
      0 => 'field_voter_asian_amer_male',
      1 => 'field_voter_asian_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_asian|node|census|form';
  $field_group->group_name = 'group_ce_voter_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '295',
    'children' => array(
      0 => 'field_voter_asian_amer_male',
      1 => 'field_voter_asian_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_gr|node|census|default';
  $field_group->group_name = 'group_ce_voter_gr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter';
  $field_group->data = array(
    'label' => 'Voter Registration Information',
    'weight' => '140',
    'children' => array(
      0 => 'group_ce_voter_race',
      1 => 'group_ce_voter_white',
      2 => 'group_ce_voter_hispanic',
      3 => 'group_ce_voter_asian',
      4 => 'group_ce_voter_african',
      5 => 'group_ce_voter_native',
      6 => 'group_ce_voter_other',
      7 => 'group_ce_voter_registered',
      8 => 'group_ce_voter_number',
      9 => 'group_ce_voter_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-gr field-group-div nulTable',
        'description' => 'Voter Registration Information including Societal Impact, Number Served or Registered, and racial and gender breakdown',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_gr|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_gr|node|census|form';
  $field_group->group_name = 'group_ce_voter_gr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter';
  $field_group->data = array(
    'label' => 'Voter Registration Information',
    'weight' => '288',
    'children' => array(
      0 => 'group_ce_voter_race',
      1 => 'group_ce_voter_white',
      2 => 'group_ce_voter_hispanic',
      3 => 'group_ce_voter_asian',
      4 => 'group_ce_voter_african',
      5 => 'group_ce_voter_native',
      6 => 'group_ce_voter_other',
      7 => 'group_ce_voter_registered',
      8 => 'group_ce_voter_number',
      9 => 'group_ce_voter_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-gr field-group-div nulTable',
        'description' => 'Voter Registration Information including Societal Impact, Number Served or Registered, and racial and gender breakdown',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_gr|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_hispanic|node|census|default';
  $field_group->group_name = 'group_ce_voter_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '283',
    'children' => array(
      0 => 'field_voter_hispanic_male',
      1 => 'field_voter_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_hispanic|node|census|form';
  $field_group->group_name = 'group_ce_voter_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '296',
    'children' => array(
      0 => 'field_voter_hispanic_male',
      1 => 'field_voter_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_impact|node|census|default';
  $field_group->group_name = 'group_ce_voter_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Societal Impact',
    'weight' => '278',
    'children' => array(
      0 => 'field_voter__societal_impact',
      1 => 'field_spacer4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Societal Impact',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-impact field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_impact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_impact|node|census|form';
  $field_group->group_name = 'group_ce_voter_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Societal Impact',
    'weight' => '291',
    'children' => array(
      0 => 'field_voter__societal_impact',
      1 => 'field_spacer4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Societal Impact',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-impact field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_impact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_native|node|census|default';
  $field_group->group_name = 'group_ce_voter_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '285',
    'children' => array(
      0 => 'field_voter_native_amer_male',
      1 => 'field_voter_native_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_native|node|census|form';
  $field_group->group_name = 'group_ce_voter_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '298',
    'children' => array(
      0 => 'field_voter_native_amer_male',
      1 => 'field_voter_native_amer_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_number|node|census|default';
  $field_group->group_name = 'group_ce_voter_number';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Number Served or Registered',
    'weight' => '279',
    'children' => array(
      0 => 'field_gender',
      1 => 'field_test_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Number Served or Registered',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-number field-group-div nulTableRow nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_number|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_number|node|census|form';
  $field_group->group_name = 'group_ce_voter_number';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Number Served or Registered',
    'weight' => '292',
    'children' => array(
      0 => 'field_gender',
      1 => 'field_test_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Number Served or Registered',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-number field-group-div nulTableRow nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_number|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_other|node|census|default';
  $field_group->group_name = 'group_ce_voter_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '287',
    'children' => array(
      0 => 'field_voter_other_male',
      1 => 'field_voter_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_other|node|census|form';
  $field_group->group_name = 'group_ce_voter_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '300',
    'children' => array(
      0 => 'field_voter_other_male',
      1 => 'field_voter_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_race|node|census|default';
  $field_group->group_name = 'group_ce_voter_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '281',
    'children' => array(
      0 => 'field_male',
      1 => 'field_female_ce_voter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-race field-group-div nulTableHeader nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_race|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_race|node|census|form';
  $field_group->group_name = 'group_ce_voter_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '294',
    'children' => array(
      0 => 'field_male',
      1 => 'field_female_ce_voter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-race field-group-div nulTableHeader nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_race|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_registered|node|census|default';
  $field_group->group_name = 'group_ce_voter_registered';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Voters Registered',
    'weight' => '280',
    'children' => array(
      0 => 'field_voter_unduplicated',
      1 => 'field_voter_duplicates',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voters Registered',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-registered field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_registered|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_registered|node|census|form';
  $field_group->group_name = 'group_ce_voter_registered';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'Voters Registered',
    'weight' => '293',
    'children' => array(
      0 => 'field_voter_unduplicated',
      1 => 'field_voter_duplicates',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voters Registered',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-registered field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_registered|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_white|node|census|default';
  $field_group->group_name = 'group_ce_voter_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '282',
    'children' => array(
      0 => 'field_voter_white_male',
      1 => 'field_voter_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter_white|node|census|form';
  $field_group->group_name = 'group_ce_voter_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce_voter_gr';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '297',
    'children' => array(
      0 => 'field_voter_white_male',
      1 => 'field_voter_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter|node|census|default';
  $field_group->group_name = 'group_ce_voter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Voter Registration',
    'weight' => '138',
    'children' => array(
      0 => 'field_voter_registration',
      1 => 'group_ce_voter_gr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter field-group-div ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce_voter|node|census|form';
  $field_group->group_name = 'group_ce_voter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Voter Registration',
    'weight' => '286',
    'children' => array(
      0 => 'field_voter_registration',
      1 => 'group_ce_voter_gr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voter Registration',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ce-voter field-group-div ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ce_voter|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ce|node|census|form';
  $field_group->group_name = 'group_ce';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '140',
    'children' => array(
      0 => 'group_ce_voter',
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
        'classes' => 'group-ce field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ce|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|census|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Direct Contact, Public Contact and Indirect Contact Data',
    'weight' => '231',
    'children' => array(
      0 => 'group_direct_contact',
      1 => 'group_public_contact',
      2 => 'group_indirect_contact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Direct Contact, Public Contact and Indirect Contact Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contact field-group-div',
        'description' => 'Please Report as unduplicated (count the individual only once).
Please estimate the demographic data if not recorded.',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|census|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Direct Contact, Public Contact and Indirect Contact Data',
    'weight' => '223',
    'children' => array(
      0 => 'group_direct_contact',
      1 => 'group_public_contact',
      2 => 'group_indirect_contact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Direct Contact, Public Contact and Indirect Contact Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contact field-group-div',
        'description' => 'Please Report as unduplicated (count the individual only once).
Please estimate the demographic data if not recorded.',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_african|node|census|default';
  $field_group->group_name = 'group_direct_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '218',
    'children' => array(
      0 => 'field_direct_african_am_male',
      1 => 'field_direct_african_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_african|node|census|form';
  $field_group->group_name = 'group_direct_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '259',
    'children' => array(
      0 => 'field_direct_african_am_male',
      1 => 'field_direct_african_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-african field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_asian|node|census|default';
  $field_group->group_name = 'group_direct_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '216',
    'children' => array(
      0 => 'field_direct_asian_am_male',
      1 => 'field_direct_asian_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_asian|node|census|form';
  $field_group->group_name = 'group_direct_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '257',
    'children' => array(
      0 => 'field_direct_asian_am_male',
      1 => 'field_direct_asian_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-asian field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_latino|node|census|default';
  $field_group->group_name = 'group_direct_contact_latino';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '215',
    'children' => array(
      0 => 'field_direct_hispanic_male',
      1 => 'field_direct_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-latino field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_latino|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_latino|node|census|form';
  $field_group->group_name = 'group_direct_contact_latino';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '256',
    'children' => array(
      0 => 'field_direct_hispanic_male',
      1 => 'field_direct_hispanic_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-latino field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_latino|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_native|node|census|default';
  $field_group->group_name = 'group_direct_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '217',
    'children' => array(
      0 => 'field_direct_native_am_male',
      1 => 'field_direct_native_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_native|node|census|form';
  $field_group->group_name = 'group_direct_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '258',
    'children' => array(
      0 => 'field_direct_native_am_male',
      1 => 'field_direct_native_am_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_other|node|census|default';
  $field_group->group_name = 'group_direct_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '219',
    'children' => array(
      0 => 'field_direct_other_male',
      1 => 'field_direct_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_other|node|census|form';
  $field_group->group_name = 'group_direct_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '260',
    'children' => array(
      0 => 'field_direct_other_male',
      1 => 'field_direct_other_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_race|node|census|default';
  $field_group->group_name = 'group_direct_contact_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '213',
    'children' => array(
      0 => 'field_female',
      1 => 'field_public_contact_males',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_race|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_race|node|census|form';
  $field_group->group_name = 'group_direct_contact_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '254',
    'children' => array(
      0 => 'field_direct_contact_males',
      1 => 'field_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-race field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_race|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_totals|node|census|default';
  $field_group->group_name = 'group_direct_contact_totals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '220',
    'children' => array(
      0 => 'field_direct_total_female',
      1 => 'field_direct_total_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-totals field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_totals|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_totals|node|census|form';
  $field_group->group_name = 'group_direct_contact_totals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '261',
    'children' => array(
      0 => 'field_direct_total_female',
      1 => 'field_direct_total_male',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-totals field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_totals|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_white|node|census|default';
  $field_group->group_name = 'group_direct_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '214',
    'children' => array(
      0 => 'field_direct_white_male',
      1 => 'field_direct_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact_white|node|census|form';
  $field_group->group_name = 'group_direct_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_direct_contact';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '255',
    'children' => array(
      0 => 'field_direct_white_male',
      1 => 'field_direct_white_female',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact|node|census|default';
  $field_group->group_name = 'group_direct_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'A. Direct Contact (i.e counseling, day care, intensive education programs and legal services)',
    'weight' => '210',
    'children' => array(
      0 => 'group_direct_contact_race',
      1 => 'group_direct_contact_totals',
      2 => 'group_direct_contact_white',
      3 => 'group_direct_contact_latino',
      4 => 'group_direct_contact_other',
      5 => 'group_direct_contact_native',
      6 => 'group_direct_contact_asian',
      7 => 'group_direct_contact_african',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. Direct Contact (i.e counseling, day care, intensive education programs and legal services)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact field-group-div nulTable',
        'description' => 'These Clients generally receive extensive and/or long-term services in small groups or one-on-one. Examples include...',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direct_contact|node|census|form';
  $field_group->group_name = 'group_direct_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'A. Direct Contact (i.e counseling, day care, intensive education programs and legal services)',
    'weight' => '253',
    'children' => array(
      0 => 'group_direct_contact_race',
      1 => 'group_direct_contact_totals',
      2 => 'group_direct_contact_white',
      3 => 'group_direct_contact_latino',
      4 => 'group_direct_contact_other',
      5 => 'group_direct_contact_native',
      6 => 'group_direct_contact_asian',
      7 => 'group_direct_contact_african',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. Direct Contact (i.e counseling, day care, intensive education programs and legal services)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-direct-contact field-group-div nulTable',
        'description' => 'These Clients generally receive extensive and/or long-term services in small groups or one-on-one. Examples include...',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_direct_contact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_ce|node|census|default';
  $field_group->group_name = 'group_era_ce';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '241',
    'children' => array(
      0 => 'field_relief_civic_desc',
      1 => 'field_relief_civic_fund_nul',
      2 => 'field_relief_civic_fund_uway',
      3 => 'field_relief_civic_fund_other',
      4 => 'field_relief_civic_served',
      5 => 'field_relief_civic_impact',
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
        'classes' => 'group-era-ce field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_ce|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_ce|node|census|form';
  $field_group->group_name = 'group_era_ce';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Civic Engagement',
    'weight' => '343',
    'children' => array(
      0 => 'field_relief_civic_desc',
      1 => 'field_relief_civic_fund_nul',
      2 => 'field_relief_civic_fund_uway',
      3 => 'field_relief_civic_fund_other',
      4 => 'field_relief_civic_served',
      5 => 'field_relief_civic_impact',
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
        'classes' => 'group-era-ce field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_ce|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_education|node|census|default';
  $field_group->group_name = 'group_era_education';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Education',
    'weight' => '238',
    'children' => array(
      0 => 'field_relief_ed_desc',
      1 => 'field_relief_ed_fund_nul',
      2 => 'field_relief_ed_fund_uway',
      3 => 'field_relief_ed_fund_other',
      4 => 'field_relief_ed_impact',
      5 => 'field_relief_ed_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-era-education field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_education|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_education|node|census|form';
  $field_group->group_name = 'group_era_education';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Education',
    'weight' => '340',
    'children' => array(
      0 => 'field_relief_ed_desc',
      1 => 'field_relief_ed_fund_nul',
      2 => 'field_relief_ed_fund_uway',
      3 => 'field_relief_ed_fund_other',
      4 => 'field_relief_ed_impact',
      5 => 'field_relief_ed_served',
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
        'classes' => 'group-era-education field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_education|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_employment|node|census|default';
  $field_group->group_name = 'group_era_employment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Employment Empowerment',
    'weight' => '239',
    'children' => array(
      0 => 'field_relief_employ_desc',
      1 => 'field_relief_employ_fund_nul',
      2 => 'field_relief_employ_fund_uway',
      3 => 'field_relief_employ_fund_other',
      4 => 'field_relief_employ_served',
      5 => 'field_relief_employ_impact',
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
        'classes' => 'group-era-employment field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_employment|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_employment|node|census|form';
  $field_group->group_name = 'group_era_employment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Employment Empowerment',
    'weight' => '341',
    'children' => array(
      0 => 'field_relief_employ_desc',
      1 => 'field_relief_employ_fund_nul',
      2 => 'field_relief_employ_fund_uway',
      3 => 'field_relief_employ_fund_other',
      4 => 'field_relief_employ_served',
      5 => 'field_relief_employ_impact',
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
        'classes' => 'group-era-employment field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_employment|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_header|node|census|default';
  $field_group->group_name = 'group_era_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Program',
    'weight' => '237',
    'children' => array(
      0 => 'field_era_describe',
      1 => 'field_era_funding_source_nul',
      2 => 'field_era_funding_source_u_way',
      3 => 'field_era_funding_source_other',
      4 => 'field_era_number_served',
      5 => 'field_era_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Program',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-era-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_era_header|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_health|node|census|default';
  $field_group->group_name = 'group_era_health';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Health',
    'weight' => '240',
    'children' => array(
      0 => 'field_relief_health_desc',
      1 => 'field_relief_health_fund_nul',
      2 => 'field_relief_health_fund_uway',
      3 => 'field_relief_health_fund_other',
      4 => 'field_relief_health_served',
      5 => 'field_relief_health_impact',
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
        'classes' => 'group-era-health field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_health|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_health|node|census|form';
  $field_group->group_name = 'group_era_health';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Health',
    'weight' => '342',
    'children' => array(
      0 => 'field_relief_health_desc',
      1 => 'field_relief_health_fund_nul',
      2 => 'field_relief_health_fund_uway',
      3 => 'field_relief_health_fund_other',
      4 => 'field_relief_health_served',
      5 => 'field_relief_health_impact',
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
        'classes' => 'group-era-health field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_health|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_program_1|node|census|form';
  $field_group->group_name = 'group_era_program_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Program',
    'weight' => '339',
    'children' => array(
      0 => 'field_era_describe',
      1 => 'field_era_funding_source_nul',
      2 => 'field_era_funding_source_u_way',
      3 => 'field_era_funding_source_other',
      4 => 'field_era_number_served',
      5 => 'field_era_societal_impact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Program',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era-program-1 field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era_program_1|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_racial_justice|node|census|default';
  $field_group->group_name = 'group_era_racial_justice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Racial Justice',
    'weight' => '242',
    'children' => array(
      0 => 'field_relief_justice_desc',
      1 => 'field_relief_justice_fund_nul',
      2 => 'field_relief_justice_fund_uway',
      3 => 'field_relief_justice_fund_other',
      4 => 'field_relief_justice_served',
      5 => 'field_relief_justice_impact',
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
        'classes' => 'group-era-racial-justice field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_racial_justice|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era_racial_justice|node|census|form';
  $field_group->group_name = 'group_era_racial_justice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_era';
  $field_group->data = array(
    'label' => 'Racial Justice',
    'weight' => '344',
    'children' => array(
      0 => 'field_relief_justice_desc',
      1 => 'field_relief_justice_fund_nul',
      2 => 'field_relief_justice_fund_uway',
      3 => 'field_relief_justice_fund_other',
      4 => 'field_relief_justice_served',
      5 => 'field_relief_justice_impact',
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
        'classes' => 'group-era-racial-justice field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_era_racial_justice|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era|node|census|default';
  $field_group->group_name = 'group_era';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Emergency Relief Activities',
    'weight' => '222',
    'children' => array(
      0 => 'group_era_header',
      1 => 'group_era_education',
      2 => 'group_era_employment',
      3 => 'group_era_health',
      4 => 'group_era_ce',
      5 => 'group_era_racial_justice',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Emergency Relief Activities',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era field-group-div nulTable',
        'description' => 'Please describe the programs provided to the displaced...',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_era|node|census|form';
  $field_group->group_name = 'group_era';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Emergency Relief Activities',
    'weight' => '221',
    'children' => array(
      0 => 'group_era_education',
      1 => 'group_era_program_1',
      2 => 'group_era_employment',
      3 => 'group_era_health',
      4 => 'group_era_ce',
      5 => 'group_era_racial_justice',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Emergency Relief Activities',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-era field-group-div nulTable',
        'description' => 'Please describe the programs provided to the displaced...',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_era|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hispanic|node|census|default';
  $field_group->group_name = 'group_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '343',
    'children' => array(
      0 => 'field_board_hispanic_males',
      1 => 'field_board_hispanic_females',
      2 => 'field_board_hispanic_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hispanic|node|census|form';
  $field_group->group_name = 'group_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '330',
    'children' => array(
      0 => 'field_board_hispanic_males',
      1 => 'field_board_hispanic_females',
      2 => 'field_board_hispanic_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hispanic/Latino',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indirect_contact|node|census|default';
  $field_group->group_name = 'group_indirect_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution))',
    'weight' => '212',
    'children' => array(
      0 => 'field_indirect_contact_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution))',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indirect-contact field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_indirect_contact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indirect_contact|node|census|form';
  $field_group->group_name = 'group_indirect_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution))',
    'weight' => '255',
    'children' => array(
      0 => 'field_indirect_contact_served',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution))',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-indirect-contact field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_indirect_contact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_native|node|census|default';
  $field_group->group_name = 'group_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '345',
    'children' => array(
      0 => 'field_board_native_males',
      1 => 'field_board_native_females',
      2 => 'field_board_native_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_native|node|census|form';
  $field_group->group_name = 'group_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '332',
    'children' => array(
      0 => 'field_board_native_males',
      1 => 'field_board_native_females',
      2 => 'field_board_native_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-native field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|node|census|default';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '347',
    'children' => array(
      0 => 'field_board_other_males',
      1 => 'field_board_other_females',
      2 => 'field_board_other_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|node|census|form';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '334',
    'children' => array(
      0 => 'field_board_other_males',
      1 => 'field_board_other_females',
      2 => 'field_board_other_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_african|node|census|default';
  $field_group->group_name = 'group_public_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '251',
    'children' => array(
      0 => 'field_public_african_am_male',
      1 => 'field_public_african_am_female',
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
        'classes' => 'group-public-contact-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_african|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_african|node|census|form';
  $field_group->group_name = 'group_public_contact_african';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '260',
    'children' => array(
      0 => 'field_public_african_am_male',
      1 => 'field_public_african_am_female',
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
        'classes' => 'group-public-contact-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_african|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_asian|node|census|default';
  $field_group->group_name = 'group_public_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '252',
    'children' => array(
      0 => 'field_public_asian_am_male',
      1 => 'field_public_asian_am_female',
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
        'classes' => 'group-public-contact-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_asian|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_asian|node|census|form';
  $field_group->group_name = 'group_public_contact_asian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '258',
    'children' => array(
      0 => 'field_public_asian_am_male',
      1 => 'field_public_asian_am_female',
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
        'classes' => 'group-public-contact-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_asian|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_header|node|census|default';
  $field_group->group_name = 'group_public_contact_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '248',
    'children' => array(
      0 => 'field_direct_contact_males',
      1 => 'field_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_header|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_header|node|census|form';
  $field_group->group_name = 'group_public_contact_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '255',
    'children' => array(
      0 => 'field_public_contact_female',
      1 => 'field_public_contact_males',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact_header|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_hispanic|node|census|default';
  $field_group->group_name = 'group_public_contact_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '250',
    'children' => array(
      0 => 'field_public_hispanic_male',
      1 => 'field_public_hispanic_female',
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
        'classes' => 'group-public-contact-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_hispanic|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_hispanic|node|census|form';
  $field_group->group_name = 'group_public_contact_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '257',
    'children' => array(
      0 => 'field_public_hispanic_male',
      1 => 'field_public_hispanic_female',
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
        'classes' => 'group-public-contact-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_hispanic|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_native|node|census|default';
  $field_group->group_name = 'group_public_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '251',
    'children' => array(
      0 => 'field_public_native_am_male',
      1 => 'field_public_native_am_female',
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
        'classes' => 'group-public-contact-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_native|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_native|node|census|form';
  $field_group->group_name = 'group_public_contact_native';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '259',
    'children' => array(
      0 => 'field_public_native_am_male',
      1 => 'field_public_native_am_female',
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
        'classes' => 'group-public-contact-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_native|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_other|node|census|default';
  $field_group->group_name = 'group_public_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '252',
    'children' => array(
      0 => 'field_public_other_male',
      1 => 'field_public_other_female',
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
        'classes' => 'group-public-contact-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_other|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_other|node|census|form';
  $field_group->group_name = 'group_public_contact_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '261',
    'children' => array(
      0 => 'field_public_other_male',
      1 => 'field_public_other_female',
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
        'classes' => 'group-public-contact-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_other|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_total|node|census|default';
  $field_group->group_name = 'group_public_contact_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '253',
    'children' => array(
      0 => 'field_public_total_male',
      1 => 'field_public_total_female',
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
        'classes' => 'group-public-contact-total field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_total|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_total|node|census|form';
  $field_group->group_name = 'group_public_contact_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '262',
    'children' => array(
      0 => 'field_public_total_male',
      1 => 'field_public_total_female',
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
        'classes' => 'group-public-contact-total field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_total|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_white|node|census|default';
  $field_group->group_name = 'group_public_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '249',
    'children' => array(
      0 => 'field_public_white_male',
      1 => 'field_public_white_female',
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
        'classes' => 'group-public-contact-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact_white|node|census|form';
  $field_group->group_name = 'group_public_contact_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_public_contact';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '256',
    'children' => array(
      0 => 'field_public_white_male',
      1 => 'field_public_white_female',
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
        'classes' => 'group-public-contact-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_public_contact_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact|node|census|default';
  $field_group->group_name = 'group_public_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'B. Public Contact (i.e. workshops, presentations and training sessions)',
    'weight' => '211',
    'children' => array(
      0 => 'group_public_contact_header',
      1 => 'group_public_contact_white',
      2 => 'group_public_contact_hispanic',
      3 => 'group_public_contact_native',
      4 => 'group_public_contact_asian',
      5 => 'group_public_contact_african',
      6 => 'group_public_contact_other',
      7 => 'group_public_contact_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B. Public Contact (i.e. workshops, presentations and training sessions)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_contact|node|census|form';
  $field_group->group_name = 'group_public_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'B. Public Contact (i.e. workshops, presentations and training sessions)',
    'weight' => '254',
    'children' => array(
      0 => 'group_public_contact_header',
      1 => 'group_public_contact_white',
      2 => 'group_public_contact_hispanic',
      3 => 'group_public_contact_native',
      4 => 'group_public_contact_asian',
      5 => 'group_public_contact_african',
      6 => 'group_public_contact_other',
      7 => 'group_public_contact_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B. Public Contact (i.e. workshops, presentations and training sessions)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-public-contact field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_public_contact|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_totalboard|node|census|default';
  $field_group->group_name = 'group_totalboard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '348',
    'children' => array(
      0 => 'field_board_member_grand_total',
      1 => 'field_totalspacer',
      2 => 'field_totalspacer2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-totalboard field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_totalboard|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_totalboard|node|census|form';
  $field_group->group_name = 'group_totalboard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '335',
    'children' => array(
      0 => 'field_board_member_grand_total',
      1 => 'field_totalspacer',
      2 => 'field_totalspacer2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-totalboard field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_totalboard|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_white|node|census|default';
  $field_group->group_name = 'group_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '342',
    'children' => array(
      0 => 'field_board_white_males',
      1 => 'field_board_white_females',
      2 => 'field_board_white_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_white|node|census|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_white|node|census|form';
  $field_group->group_name = 'group_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '329',
    'children' => array(
      0 => 'field_board_white_males',
      1 => 'field_board_white_females',
      2 => 'field_board_white_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_white|node|census|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_white|node|census|full';
  $field_group->group_name = 'group_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '127',
    'children' => array(
      0 => 'field_board_white_males',
      1 => 'field_board_white_females',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'White',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_white|node|census|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('A. Direct Contact (i.e counseling, day care, intensive education programs and legal services)');
  t('African American');
  t('Asian American');
  t('B. Public Contact (i.e. workshops, presentations and training sessions)');
  t('C. Indirect Contact (i.e. telephone hotlines, telephone referral services and literature distribution))');
  t('Civic Engagement');
  t('Direct Contact, Public Contact and Indirect Contact Data');
  t('Education');
  t('Emergency Relief Activities');
  t('Employment Empowerment');
  t('Health');
  t('Hispanic/Latino');
  t('Native American');
  t('Number Served or Registered');
  t('Other');
  t('Program');
  t('Race');
  t('Racial Justice');
  t('Societal Impact');
  t('Total');
  t('Voter Registration');
  t('Voter Registration Information');
  t('Voters Registered');
  t('What is the racial/gender composition of your board?');
  t('White');

  return $field_groups;
}
