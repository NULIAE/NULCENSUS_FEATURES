<?php
/**
 * @file
 * civic_engagement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function civic_engagement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function civic_engagement_node_info() {
  $items = array(
    'civic_engagement' => array(
      'name' => t('Civic Engagement'),
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
