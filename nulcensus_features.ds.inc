<?php
/**
 * @file
 * nulcensus_features.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function nulcensus_features_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'status_info';
  $ds_view_mode->label = 'Status Info';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['status_info'] = $ds_view_mode;

  return $export;
}
