<?php
/**
 * @file
 * other_programs.features.inc
 */

/**
 * Implements hook_node_info().
 */
function other_programs_node_info() {
  $items = array(
    'program_other' => array(
      'name' => t('Other Programs'),
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
