<?php
/**
 * @file
 * empowerment.features.inc
 */

/**
 * Implements hook_node_info().
 */
function empowerment_node_info() {
  $items = array(
    'empowerment' => array(
      'name' => t('Empowerment'),
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
