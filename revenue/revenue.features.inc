<?php
/**
 * @file
 * revenue.features.inc
 */

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
