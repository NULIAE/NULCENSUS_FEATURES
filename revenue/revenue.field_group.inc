<?php
/**
 * @file
 * revenue.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function revenue_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venture_header|paragraphs_item|budget_ventures|default';
  $field_group->group_name = 'group_venture_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'budget_ventures';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_venture_table';
  $field_group->data = array(
    'label' => 'Venture Header',
    'weight' => '2',
    'children' => array(
      0 => 'field_venture_type_header',
      1 => 'field_venture_budgeted_header',
      2 => 'field_venture_earned_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Venture Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-venture-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_venture_header|paragraphs_item|budget_ventures|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venture_header|paragraphs_item|budget_ventures|form';
  $field_group->group_name = 'group_venture_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'budget_ventures';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_venture_table';
  $field_group->data = array(
    'label' => 'Venture Header',
    'weight' => '4',
    'children' => array(
      0 => 'field_venture_type_header',
      1 => 'field_venture_budgeted_header',
      2 => 'field_venture_earned_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Venture Header',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-venture-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_venture_header|paragraphs_item|budget_ventures|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venture_table|paragraphs_item|budget_ventures|default';
  $field_group->group_name = 'group_venture_table';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'budget_ventures';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Affiliate Social Entrepreneurship Ventures and/or Income Generating Activities',
    'weight' => '0',
    'children' => array(
      0 => 'group_venture',
      1 => 'group_venture_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Affiliate Social Entrepreneurship Ventures and/or Income Generating Activities',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-venture-table field-group-div nulTable',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_venture_table|paragraphs_item|budget_ventures|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venture_table|paragraphs_item|budget_ventures|form';
  $field_group->group_name = 'group_venture_table';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'budget_ventures';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Affiliate Social Entrepreneurship Ventures and/or Income Generating Activities',
    'weight' => '0',
    'children' => array(
      0 => 'group_venture',
      1 => 'group_venture_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Affiliate Social Entrepreneurship Ventures and/or Income Generating Activities',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-venture-table field-group-div nulTable',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_venture_table|paragraphs_item|budget_ventures|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venture|paragraphs_item|budget_ventures|default';
  $field_group->group_name = 'group_venture';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'budget_ventures';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_venture_table';
  $field_group->data = array(
    'label' => 'Venture Row',
    'weight' => '3',
    'children' => array(
      0 => 'field_budget_venture_earned',
      1 => 'field_budget_venture_budgeted',
      2 => 'field_type_of_venture',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Venture Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-venture field-group-div nulTableRow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_venture|paragraphs_item|budget_ventures|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venture|paragraphs_item|budget_ventures|form';
  $field_group->group_name = 'group_venture';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'budget_ventures';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_venture_table';
  $field_group->data = array(
    'label' => 'Venture Row',
    'weight' => '5',
    'children' => array(
      0 => 'field_budget_venture_earned',
      1 => 'field_budget_venture_budgeted',
      2 => 'field_budget_venture_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Venture Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-venture field-group-div nulTableRow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_venture|paragraphs_item|budget_ventures|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Affiliate Social Entrepreneurship Ventures and/or Income Generating Activities');
  t('Venture Header');
  t('Venture Row');

  return $field_groups;
}
