<?php
/**
 * @file
 * employees_and_board_members.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function employees_and_board_members_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_african_am|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '15',
    'children' => array(
      0 => 'field_board_african_am_males',
      1 => 'field_board_african_am_females',
      2 => 'field_board_african_am_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_african_am|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_african_am|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_african_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '15',
    'children' => array(
      0 => 'field_board_african_am_males',
      1 => 'field_board_african_am_females',
      2 => 'field_board_african_am_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'African American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-african-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_african_am|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_asian_am|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '13',
    'children' => array(
      0 => 'field_board_asian_am_males',
      1 => 'field_board_asian_am_females',
      2 => 'field_board_asian_am_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_asian_am|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_asian_am|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_asian_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '13',
    'children' => array(
      0 => 'field_board_asian_am_males',
      1 => 'field_board_asian_am_females',
      2 => 'field_board_asian_am_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Asian American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-asian-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_asian_am|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_hispanic|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '12',
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
        'classes' => 'group-board-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_hispanic|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_hispanic|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_hispanic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '12',
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
        'classes' => 'group-board-hispanic field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_hispanic|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_native_am|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '14',
    'children' => array(
      0 => 'field_board_native_am_males',
      1 => 'field_board_native_am_females',
      2 => 'field_board_native_am_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_native_am|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_native_am|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_native_am';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '14',
    'children' => array(
      0 => 'field_board_native_am_males',
      1 => 'field_board_native_am_females',
      2 => 'field_board_native_am_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Native American',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-native-am field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_native_am|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_other|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '16',
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
        'classes' => 'group-board-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_other|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_other|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '16',
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
        'classes' => 'group-board-other field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_other|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_total|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '18',
    'children' => array(
      0 => 'field_board_member_grand_total',
      1 => 'field_board_spacer1',
      2 => 'field_board_spacer2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_total|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_total|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '17',
    'children' => array(
      0 => 'field_board_member_grand_total',
      1 => 'field_board_spacer1',
      2 => 'field_board_spacer2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-board-total field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_total|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_white|node|employees_and_board_members|default';
  $field_group->group_name = 'group_board_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '11',
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
        'classes' => 'group-board-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_white|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_board_white|node|employees_and_board_members|form';
  $field_group->group_name = 'group_board_white';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '11',
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
        'classes' => 'group-board-white field-group-div nulTableRow',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_board_white|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomposition|node|employees_and_board_members|default';
  $field_group->group_name = 'group_boardcomposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_employees_board';
  $field_group->data = array(
    'label' => 'What is the racial/gender composition of your board?',
    'weight' => '11',
    'children' => array(
      0 => 'group_boardcomptableheader',
      1 => 'group_board_white',
      2 => 'group_board_hispanic',
      3 => 'group_board_asian_am',
      4 => 'group_board_native_am',
      5 => 'group_board_african_am',
      6 => 'group_board_other',
      7 => 'group_board_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What is the racial/gender composition of your board?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomposition field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomposition|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomposition|node|employees_and_board_members|form';
  $field_group->group_name = 'group_boardcomposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_employees_board';
  $field_group->data = array(
    'label' => 'What is the racial/gender composition of your board?',
    'weight' => '11',
    'children' => array(
      0 => 'group_boardcomptableheader',
      1 => 'group_board_white',
      2 => 'group_board_hispanic',
      3 => 'group_board_asian_am',
      4 => 'group_board_native_am',
      5 => 'group_board_african_am',
      6 => 'group_board_other',
      7 => 'group_board_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What is the racial/gender composition of your board?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-boardcomposition field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_boardcomposition|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomptableheader|node|employees_and_board_members|default';
  $field_group->group_name = 'group_boardcomptableheader';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '10',
    'children' => array(
      0 => 'field_board_male',
      1 => 'field_board_female',
      2 => 'field_board_total',
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
  $field_groups['group_boardcomptableheader|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boardcomptableheader|node|employees_and_board_members|form';
  $field_group->group_name = 'group_boardcomptableheader';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_boardcomposition';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '10',
    'children' => array(
      0 => 'field_board_male',
      1 => 'field_board_female',
      2 => 'field_board_total',
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
  $field_groups['group_boardcomptableheader|node|employees_and_board_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employees_board|node|employees_and_board_members|default';
  $field_group->group_name = 'group_employees_board';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_full_time_employees',
      1 => 'field_part_time_employees',
      2 => 'field_average_employee_salary',
      3 => 'field_employee_health_beneits',
      4 => 'field_employee_life_insurance',
      5 => 'field_satellite_offices',
      6 => 'field_number_of_satellite_office',
      7 => 'field_board_help',
      8 => 'group_boardcomposition',
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
        'classes' => 'group-employees-board field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_employees_board|node|employees_and_board_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employees_board|node|employees_and_board_members|form';
  $field_group->group_name = 'group_employees_board';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'employees_and_board_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_full_time_employees',
      1 => 'field_part_time_employees',
      2 => 'field_average_employee_salary',
      3 => 'field_employee_health_beneits',
      4 => 'field_employee_life_insurance',
      5 => 'field_satellite_offices',
      6 => 'field_number_of_satellite_office',
      7 => 'field_board_help',
      8 => 'group_boardcomposition',
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
        'classes' => 'group-employees-board field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_employees_board|node|employees_and_board_members|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('African American');
  t('Asian American');
  t('Hispanic/Latino');
  t('Native American');
  t('Other');
  t('Race');
  t('Total');
  t('What is the racial/gender composition of your board?');
  t('White');

  return $field_groups;
}
