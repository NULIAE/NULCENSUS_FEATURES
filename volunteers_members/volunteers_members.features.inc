<?php
/**
 * @file
 * volunteers_members.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function volunteers_members_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function volunteers_members_node_info() {
  $items = array(
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
