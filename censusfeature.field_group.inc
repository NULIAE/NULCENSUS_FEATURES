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
  $field_group->identifier = 'group_ce_voter_race|node|census|form';
  $field_group->group_name = 'group_ce_voter_race';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'census';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ce';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '287',
    'children' => array(
      0 => 'field_male',
      1 => 'field_female_ce_voter',
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
        'classes' => 'group-ce-voter-race field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ce_voter_race|node|census|form'] = $field_group;

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
      1 => 'field_voter_unduplicated',
      2 => 'field_voter_duplicates',
      3 => 'field_voter__societal_impact',
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
        'classes' => 'group-ce-voter field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'weight' => '138',
    'children' => array(
      0 => 'group_ce_voter',
      1 => 'group_ce_voter_race',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('African American');
  t('Asian American');
  t('Civic Engagement');
  t('Hispanic/Latino');
  t('Native American');
  t('Other');
  t('Race');
  t('Total');
  t('Voter Registration');
  t('What is the racial/gender composition of your board?');
  t('White');

  return $field_groups;
}
