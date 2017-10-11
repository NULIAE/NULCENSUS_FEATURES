<?php
/**
 * @file
 * nulcensus_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nulcensus_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_tab_1_contact_information'.
  $permissions['create field_tab_1_contact_information'] = array(
    'name' => 'create field_tab_1_contact_information',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tab_2_service_areas'.
  $permissions['create field_tab_2_service_areas'] = array(
    'name' => 'create field_tab_2_service_areas',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tab_1_contact_information'.
  $permissions['edit field_tab_1_contact_information'] = array(
    'name' => 'edit field_tab_1_contact_information',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tab_2_service_areas'.
  $permissions['edit field_tab_2_service_areas'] = array(
    'name' => 'edit field_tab_2_service_areas',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tab_1_contact_information'.
  $permissions['edit own field_tab_1_contact_information'] = array(
    'name' => 'edit own field_tab_1_contact_information',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tab_2_service_areas'.
  $permissions['edit own field_tab_2_service_areas'] = array(
    'name' => 'edit own field_tab_2_service_areas',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tab_1_contact_information'.
  $permissions['view field_tab_1_contact_information'] = array(
    'name' => 'view field_tab_1_contact_information',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tab_2_service_areas'.
  $permissions['view field_tab_2_service_areas'] = array(
    'name' => 'view field_tab_2_service_areas',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tab_1_contact_information'.
  $permissions['view own field_tab_1_contact_information'] = array(
    'name' => 'view own field_tab_1_contact_information',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'Affiliate Staff' => 'Affiliate Staff',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tab_2_service_areas'.
  $permissions['view own field_tab_2_service_areas'] = array(
    'name' => 'view own field_tab_2_service_areas',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'Affiliate Staff' => 'Affiliate Staff',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
