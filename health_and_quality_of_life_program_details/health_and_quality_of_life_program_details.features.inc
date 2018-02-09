<?php
/**
 * @file
 * health_and_quality_of_life_program_details.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function health_and_quality_of_life_program_details_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function health_and_quality_of_life_program_details_node_info() {
  $items = array(
    'program_health' => array(
      'name' => t('Health and Quality of Life Programs'),
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
function health_and_quality_of_life_program_details_paragraphs_info() {
  $items = array(
    'health_services' => array(
      'name' => 'Health Services Provided',
      'bundle' => 'health_services',
      'locked' => '1',
    ),
  );
  return $items;
}
