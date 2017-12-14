<?php
/**
 * @file
 * programs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function programs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function programs_node_info() {
  $items = array(
    'programs' => array(
      'name' => t('Programs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name of Program'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function programs_paragraphs_info() {
  $items = array(
    'funding_source' => array(
      'name' => 'Funding Source',
      'bundle' => 'funding_source',
      'locked' => '1',
    ),
  );
  return $items;
}
