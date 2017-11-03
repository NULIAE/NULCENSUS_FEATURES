<?php
/**
 * @file
 * emergency_relief_activities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function emergency_relief_activities_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function emergency_relief_activities_node_info() {
  $items = array(
    'emergency_relief_activities' => array(
      'name' => t('Emergency Relief Activities'),
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
