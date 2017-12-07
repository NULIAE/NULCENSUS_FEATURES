<?php
/**
 * @file
 * volunteers_members.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function volunteers_members_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_age|node|volunteers_members|default';
  $field_group->group_name = 'group_aux_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_aux';
  $field_group->data = array(
    'label' => 'AGE GROUPINGS: How many members in the following age groups?',
    'weight' => '10',
    'children' => array(
      0 => 'field_aux_16_20',
      1 => 'field_aux_21_30',
      2 => 'field_aux_31_40',
      3 => 'field_aux_41_65',
      4 => 'field_aux_66_81',
      5 => 'field_aux_82_and_above',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'AGE GROUPINGS: How many members in the following age groups?',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_age|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux_age|node|volunteers_members|form';
  $field_group->group_name = 'group_aux_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_aux';
  $field_group->data = array(
    'label' => 'AGE GROUPINGS: How many members in the following age groups?',
    'weight' => '14',
    'children' => array(
      0 => 'field_aux_16_20',
      1 => 'field_aux_21_30',
      2 => 'field_aux_31_40',
      3 => 'field_aux_41_65',
      4 => 'field_aux_66_81',
      5 => 'field_aux_82_and_above',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'AGE GROUPINGS: How many members in the following age groups?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux_age|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux|node|volunteers_members|default';
  $field_group->group_name = 'group_aux';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volunteer or Auxiliary Groups',
    'weight' => '2',
    'children' => array(
      0 => 'field_other_volunteer_aux_groups',
      1 => 'field_aux_african_american',
      2 => 'field_aux_asian_american',
      3 => 'field_aux_female',
      4 => 'field_aux_hispanic_latino',
      5 => 'field_aux_male',
      6 => 'field_aux_members',
      7 => 'field_aux_native_american',
      8 => 'field_aux_other_heritage',
      9 => 'field_aux_white',
      10 => 'group_aux_age',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Volunteer or Auxiliary Groups',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aux field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aux|node|volunteers_members|form';
  $field_group->group_name = 'group_aux';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volunteer or Auxiliary Groups',
    'weight' => '3',
    'children' => array(
      0 => 'field_other_volunteer_aux_groups',
      1 => 'field_aux_african_american',
      2 => 'field_aux_asian_american',
      3 => 'field_aux_female',
      4 => 'field_aux_hispanic_latino',
      5 => 'field_aux_male',
      6 => 'field_aux_members',
      7 => 'field_aux_native_american',
      8 => 'field_aux_other_heritage',
      9 => 'field_aux_white',
      10 => 'group_aux_age',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Volunteer or Auxiliary Groups',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aux field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aux|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_age|node|volunteers_members|default';
  $field_group->group_name = 'group_guild_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_guild';
  $field_group->data = array(
    'label' => 'AGE GROUPINGS: How many members in the following age groups? ',
    'weight' => '11',
    'children' => array(
      0 => 'field_guild_16_20',
      1 => 'field_guild_21_30',
      2 => 'field_guild_31_40',
      3 => 'field_guild_41_65',
      4 => 'field_guild_66_81',
      5 => 'field_guild_82_and_above',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'AGE GROUPINGS: How many members in the following age groups? ',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_age|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild_age|node|volunteers_members|form';
  $field_group->group_name = 'group_guild_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_guild';
  $field_group->data = array(
    'label' => ' AGE GROUPINGS: How many members in the following age groups? ',
    'weight' => '11',
    'children' => array(
      0 => 'field_guild_16_20',
      1 => 'field_guild_21_30',
      2 => 'field_guild_31_40',
      3 => 'field_guild_41_65',
      4 => 'field_guild_66_81',
      5 => 'field_guild_82_and_above',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' AGE GROUPINGS: How many members in the following age groups? ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild_age|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild|node|volunteers_members|default';
  $field_group->group_name = 'group_guild';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Guild',
    'weight' => '0',
    'children' => array(
      0 => 'field_is_there_a_guild_',
      1 => 'field_guild_african_american',
      2 => 'field_guild_asian_american',
      3 => 'field_guild_female',
      4 => 'field_guild_hispanic_latino',
      5 => 'field_guild_male',
      6 => 'field_guild_members',
      7 => 'field_guild_native_american',
      8 => 'field_guild_other_heritage',
      9 => 'field_guild_white',
      10 => 'group_guild_age',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Guild',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-guild field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guild|node|volunteers_members|form';
  $field_group->group_name = 'group_guild';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Guild',
    'weight' => '1',
    'children' => array(
      0 => 'field_is_there_a_guild_',
      1 => 'field_guild_african_american',
      2 => 'field_guild_asian_american',
      3 => 'field_guild_female',
      4 => 'field_guild_hispanic_latino',
      5 => 'field_guild_male',
      6 => 'field_guild_members',
      7 => 'field_guild_native_american',
      8 => 'field_guild_other_heritage',
      9 => 'field_guild_white',
      10 => 'group_guild_age',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Guild',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-guild field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_guild|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_age|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ypc';
  $field_group->data = array(
    'label' => 'AGE GROUPINGS: How many members in the following age groups?',
    'weight' => '11',
    'children' => array(
      0 => 'field_ypc_82_and_above',
      1 => 'field_ypc_66_81',
      2 => 'field_ypc_41_65',
      3 => 'field_ypc_31_40',
      4 => 'field_ypc_21_30',
      5 => 'field_ypc_16_20',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'AGE GROUPINGS: How many members in the following age groups?',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_age|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc_age|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc_age';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ypc';
  $field_group->data = array(
    'label' => 'AGE GROUPINGS: How many members in the following age groups?',
    'weight' => '21',
    'children' => array(
      0 => 'field_ypc_82_and_above',
      1 => 'field_ypc_66_81',
      2 => 'field_ypc_41_65',
      3 => 'field_ypc_31_40',
      4 => 'field_ypc_21_30',
      5 => 'field_ypc_16_20',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'AGE GROUPINGS: How many members in the following age groups?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc-age field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc_age|node|volunteers_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc|node|volunteers_members|default';
  $field_group->group_name = 'group_ypc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Young Professionals Chapter',
    'weight' => '1',
    'children' => array(
      0 => 'field_is_there_a_ypc',
      1 => 'field_ypc_white',
      2 => 'field_ypc_other_heritage',
      3 => 'field_ypc_native_american',
      4 => 'field_ypc_members',
      5 => 'field_ypc_male',
      6 => 'field_ypc_hispanic_latino',
      7 => 'field_ypc_female',
      8 => 'field_ypc_asian_american',
      9 => 'field_ypc_african_american',
      10 => 'group_ypc_age',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Young Professionals Chapter',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-ypc field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc|node|volunteers_members|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ypc|node|volunteers_members|form';
  $field_group->group_name = 'group_ypc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Young Professionals Chapter',
    'weight' => '2',
    'children' => array(
      0 => 'field_is_there_a_ypc',
      1 => 'field_ypc_white',
      2 => 'field_ypc_other_heritage',
      3 => 'field_ypc_native_american',
      4 => 'field_ypc_members',
      5 => 'field_ypc_male',
      6 => 'field_ypc_hispanic_latino',
      7 => 'field_ypc_female',
      8 => 'field_ypc_asian_american',
      9 => 'field_ypc_african_american',
      10 => 'group_ypc_age',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Young Professionals Chapter',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ypc field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ypc|node|volunteers_members|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t(' AGE GROUPINGS: How many members in the following age groups? ');
  t('AGE GROUPINGS: How many members in the following age groups?');
  t('AGE GROUPINGS: How many members in the following age groups? ');
  t('Guild');
  t('Volunteer or Auxiliary Groups');
  t('Young Professionals Chapter');

  return $field_groups;
}
