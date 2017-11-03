<?php
/**
 * @file
 * employees_and_board_members.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function employees_and_board_members_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function employees_and_board_members_node_info() {
  $items = array(
    'employees_and_board_members' => array(
      'name' => t('Employees and Board Members'),
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
