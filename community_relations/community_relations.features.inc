<?php
/**
 * @file
 * community_relations.features.inc
 */

/**
 * Implements hook_node_info().
 */
function community_relations_node_info() {
  $items = array(
    'community_relations' => array(
      'name' => t('Community Relations'),
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
