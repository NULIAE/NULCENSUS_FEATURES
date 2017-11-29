<?php
/**
 * @file
 * contact_information.features.inc
 */

/**
 * Implements hook_node_info().
 */
function contact_information_node_info() {
  $items = array(
    'contact_information' => array(
      'name' => t('Contact Information'),
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
