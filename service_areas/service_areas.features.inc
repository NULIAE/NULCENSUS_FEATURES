<?php
/**
 * @file
 * service_areas.features.inc
 */

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
