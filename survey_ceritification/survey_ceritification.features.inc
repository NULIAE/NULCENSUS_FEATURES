<?php
/**
 * @file
 * survey_ceritification.features.inc
 */

/**
 * Implements hook_node_info().
 */
function survey_ceritification_node_info() {
  $items = array(
    'survey_certification' => array(
      'name' => t('Survey Certification'),
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
