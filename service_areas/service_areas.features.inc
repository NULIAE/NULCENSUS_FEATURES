<?php
/**
 * @file
 * service_areas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function service_areas_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function service_areas_node_info() {
  $items = array(
    'service_areas' => array(
      'name' => t('Service Areas'),
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

/**
 * Implements hook_paragraphs_info().
 */
function service_areas_paragraphs_info() {
  $items = array(
    'service_area' => array(
      'name' => 'Service Area',
      'bundle' => 'service_area',
      'locked' => '1',
    ),
  );
  return $items;
}
