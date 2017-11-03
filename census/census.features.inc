<?php
/**
 * @file
 * census.features.inc
 */

/**
 * Implements hook_node_info().
 */
function census_node_info() {
  $items = array(
    'test_clean_census' => array(
      'name' => t('Census'),
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
