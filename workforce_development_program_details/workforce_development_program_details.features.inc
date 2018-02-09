<?php
/**
 * @file
 * workforce_development_program_details.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function workforce_development_program_details_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function workforce_development_program_details_node_info() {
  $items = array(
    'program_workforce' => array(
      'name' => t('Workforce Development Programs'),
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
