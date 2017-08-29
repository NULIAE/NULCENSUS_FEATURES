<?php
/**
 * @file
 * censusfeature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function censusfeature_node_info() {
  $items = array(
    'census' => array(
      'name' => t('Census'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Census'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
