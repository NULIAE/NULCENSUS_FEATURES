<?php
/**
 * @file
 * revenue.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function revenue_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function revenue_node_info() {
  $items = array(
    'revenue' => array(
      'name' => t('Revenue'),
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
function revenue_paragraphs_info() {
  $items = array(
    'budget_ventures' => array(
      'name' => 'Ventures',
      'bundle' => 'budget_ventures',
      'locked' => '1',
    ),
  );
  return $items;
}
