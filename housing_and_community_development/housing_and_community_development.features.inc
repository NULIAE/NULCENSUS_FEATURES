<?php
/**
 * @file
 * housing_and_community_development.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function housing_and_community_development_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function housing_and_community_development_node_info() {
  $items = array(
    'program_housing' => array(
      'name' => t('Housing and Community Development Program Details'),
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
