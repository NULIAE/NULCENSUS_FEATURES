<?php
/**
 * @file
 * education_program_details.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_program_details_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function education_program_details_node_info() {
  $items = array(
    'program_education' => array(
      'name' => t('Education Program Details'),
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
