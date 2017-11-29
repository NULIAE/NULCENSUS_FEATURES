<?php
/**
 * @file
 * expenditures.features.inc
 */

/**
 * Implements hook_node_info().
 */
function expenditures_node_info() {
  $items = array(
    'expenditures' => array(
      'name' => t('Expenditures'),
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
