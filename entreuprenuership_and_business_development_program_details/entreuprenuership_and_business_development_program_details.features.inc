<?php
/**
 * @file
 * entreuprenuership_and_business_development_program_details.features.inc
 */

/**
 * Implements hook_node_info().
 */
function entreuprenuership_and_business_development_program_details_node_info() {
  $items = array(
    'program_entrepreneurship' => array(
      'name' => t('Entrepreneurship and Business Development Program Details'),
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
