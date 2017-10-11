<?php
/**
 * @file
 * nulcensus_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nulcensus_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nulcensus_features_node_info() {
  $items = array(
    'civic_engagement' => array(
      'name' => t('Civic Engagement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'community_relations' => array(
      'name' => t('Community Relations'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'contact_data_direct_indirect_pub' => array(
      'name' => t('Contact Data (Direct, Indirect & Public)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'contact_information' => array(
      'name' => t('Contact Information'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'emergency_relief_activities' => array(
      'name' => t('Emergency Relief Activities'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'employees_and_board_members' => array(
      'name' => t('Employees and Board Members'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'empowerment' => array(
      'name' => t('Empowerment'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'expenditures' => array(
      'name' => t('Expenditures'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'revenue' => array(
      'name' => t('Revenue'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_areas' => array(
      'name' => t('Service Areas'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'survey_certification' => array(
      'name' => t('Survey Certification'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'test_clean_census' => array(
      'name' => t('TEST clean census'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'volunteers_members' => array(
      'name' => t('Volunteers/Members'),
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
function nulcensus_features_paragraphs_info() {
  $items = array(
    'budget_ventures' => array(
      'name' => 'Ventures',
      'bundle' => 'budget_ventures',
      'locked' => '1',
    ),
    'service_area' => array(
      'name' => 'Service Area',
      'bundle' => 'service_area',
      'locked' => '1',
    ),
  );
  return $items;
}
