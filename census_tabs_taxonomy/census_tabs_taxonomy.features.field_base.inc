<?php
/**
 * @file
 * census_tabs_taxonomy.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function census_tabs_taxonomy_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_content_type_machine_name'.
  $field_bases['field_content_type_machine_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content_type_machine_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
