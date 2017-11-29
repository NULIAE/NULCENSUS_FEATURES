<?php
/**
 * @file
 * contact_data.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contact_data_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function contact_data_node_info() {
  $items = array(
    'contact_data_direct_indirect_pub' => array(
      'name' => t('Contact Data (Direct, Indirect & Public)'),
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
