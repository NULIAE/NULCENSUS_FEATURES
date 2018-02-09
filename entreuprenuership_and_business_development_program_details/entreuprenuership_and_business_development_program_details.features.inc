<?php
/**
 * @file
 * entreuprenuership_and_business_development_program_details.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function entreuprenuership_and_business_development_program_details_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function entreuprenuership_and_business_development_program_details_node_info() {
  $items = array(
    'program_entrepreneurship' => array(
      'name' => t('Entrepreneurship and Business Development Programs'),
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

/**
 * Implements hook_paragraphs_info().
 */
function entreuprenuership_and_business_development_program_details_paragraphs_info() {
  $items = array(
    'entpr_businesses' => array(
      'name' => 'Entrepreneurship and Business Development Businesses',
      'bundle' => 'entpr_businesses',
      'locked' => '1',
    ),
  );
  return $items;
}
