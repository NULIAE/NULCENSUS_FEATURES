<?php
/**
 * @file
 * service_areas.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function service_areas_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_african|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_african';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '10',
    'children' => array(
      0 => 'field_service_area_african_am',
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
        'classes' => 'group-sa-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_african|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_african|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_african';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'African American',
    'weight' => '24',
    'children' => array(
      0 => 'field_service_area_african_am',
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
        'classes' => 'group-sa-african field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_african|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_asian|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_asian';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '8',
    'children' => array(
      0 => 'field_service_area_asian_am',
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
        'classes' => 'group-sa-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_asian|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_asian|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_asian';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Asian American',
    'weight' => '22',
    'children' => array(
      0 => 'field_service_area_asian_am',
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
        'classes' => 'group-sa-asian field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_asian|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_cc|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_cc';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'City/County',
    'weight' => '2',
    'children' => array(
      0 => 'field_service_area_city_county',
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
        'classes' => 'group-sa-cc field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_cc|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_cc|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_cc';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'City/County',
    'weight' => '17',
    'children' => array(
      0 => 'field_service_area_city_county',
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
        'classes' => 'group-sa-cc field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_cc|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_group|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service Area',
    'weight' => '0',
    'children' => array(
      0 => 'group_sa_white',
      1 => 'group_sa_hispanic',
      2 => 'group_sa_asian',
      3 => 'group_sa_native',
      4 => 'group_sa_african',
      5 => 'group_sa_other',
      6 => 'group_sa_header',
      7 => 'group_sa_name',
      8 => 'group_sa_cc',
      9 => 'group_sa_pop',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Service Area',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sa-group field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sa_group|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_group|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service Area',
    'weight' => '3',
    'children' => array(
      0 => 'group_sa_white',
      1 => 'group_sa_hispanic',
      2 => 'group_sa_asian',
      3 => 'group_sa_native',
      4 => 'group_sa_african',
      5 => 'group_sa_other',
      6 => 'group_sa_header',
      7 => 'group_sa_cc',
      8 => 'group_sa_pop',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Service Area',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sa-group field-group-div nulTable',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sa_group|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_header|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '5',
    'children' => array(
      0 => 'field_composition_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sa-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sa_header|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_header|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_header';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Race',
    'weight' => '19',
    'children' => array(
      0 => 'field_composition_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Race',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sa-header field-group-div nulTableHeader',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sa_header|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_hispanic|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_hispanic';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '7',
    'children' => array(
      0 => 'field_service_area_hispanic',
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
        'classes' => 'group-sa-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_hispanic|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_hispanic|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_hispanic';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Hispanic/Latino',
    'weight' => '21',
    'children' => array(
      0 => 'field_service_area_hispanic',
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
        'classes' => 'group-sa-hispanic field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_hispanic|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_native|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_native';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '9',
    'children' => array(
      0 => 'field_service_area_native_am',
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
        'classes' => 'group-sa-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_native|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_native|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_native';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Native American',
    'weight' => '23',
    'children' => array(
      0 => 'field_service_area_native_am',
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
        'classes' => 'group-sa-native field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_native|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_other|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_other';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '11',
    'children' => array(
      0 => 'field_service_area_other',
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
        'classes' => 'group-sa-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_other|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_other|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_other';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '25',
    'children' => array(
      0 => 'field_service_area_other',
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
        'classes' => 'group-sa-other field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_other|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_pop|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_pop';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Population',
    'weight' => '3',
    'children' => array(
      0 => 'field_service_area_population',
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
        'classes' => 'group-sa-pop field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_pop|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_pop|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_pop';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'Population',
    'weight' => '18',
    'children' => array(
      0 => 'field_service_area_population',
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
        'classes' => 'group-sa-pop field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_pop|paragraphs_item|service_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_white|paragraphs_item|service_area|default';
  $field_group->group_name = 'group_sa_white';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '6',
    'children' => array(
      0 => 'field_service_area_white',
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
        'classes' => 'group-sa-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_white|paragraphs_item|service_area|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sa_white|paragraphs_item|service_area|form';
  $field_group->group_name = 'group_sa_white';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'service_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sa_group';
  $field_group->data = array(
    'label' => 'White',
    'weight' => '20',
    'children' => array(
      0 => 'field_service_area_white',
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
        'classes' => 'group-sa-white field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sa_white|paragraphs_item|service_area|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('African American');
  t('Asian American');
  t('City/County');
  t('Hispanic/Latino');
  t('Native American');
  t('Other');
  t('Population');
  t('Race');
  t('Service Area');
  t('White');

  return $field_groups;
}
