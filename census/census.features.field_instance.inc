<?php
/**
 * @file
 * census.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function census_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-census-field_affiliate_'.
  $field_instances['node-census-field_affiliate_'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field should be the id of the organization the logged in drupal user has a relationship of something like "affliate rep to" to in civicrm

',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'status_info' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_affiliate_',
    'label' => 'Affiliate ',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-census-field_census_status'.
  $field_instances['node-census-field_census_status'] = array(
    'bundle' => 'census',
    'default_value' => array(
      0 => array(
        'tid' => 16,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'status_info' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_census_status',
    'label' => 'census status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-census-field_year'.
  $field_instances['node-census-field_year'] = array(
    'bundle' => 'census',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field should be autopopulated by the code to be the current year',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'status_info' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_year',
    'label' => 'Year',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Affiliate ');
  t('This field should be autopopulated by the code to be the current year');
  t('This field should be the id of the organization the logged in drupal user has a relationship of something like "affliate rep to" to in civicrm

');
  t('Year');
  t('census status');

  return $field_instances;
}
