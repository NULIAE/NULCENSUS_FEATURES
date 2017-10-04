<?php
/**
 * @file
 * censusfeature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function censusfeature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function censusfeature_node_info() {
  $items = array(
    'census' => array(
      'name' => t('Census'),
      'base' => 'node_content',
      'description' => t('Collection of all census fields. Node can be imported into the new civi to initiate all fields at once using the Features module.
'),
      'has_title' => '1',
      'title_label' => t('NUL Census Fields'),
      'help' => '',
    ),
    'contact_information' => array(
      'name' => t('Contact Information'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
