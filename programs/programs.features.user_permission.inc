<?php
/**
 * @file
 * programs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function programs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_funding_organization'.
  $permissions['create field_funding_organization'] = array(
    'name' => 'create field_funding_organization',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'Affiliate Staff' => 'Affiliate Staff',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_program_service_provided'.
  $permissions['create field_program_service_provided'] = array(
    'name' => 'create field_program_service_provided',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'Affiliate Staff' => 'Affiliate Staff',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_funding_organization'.
  $permissions['edit field_funding_organization'] = array(
    'name' => 'edit field_funding_organization',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_program_service_provided'.
  $permissions['edit field_program_service_provided'] = array(
    'name' => 'edit field_program_service_provided',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_funding_organization'.
  $permissions['edit own field_funding_organization'] = array(
    'name' => 'edit own field_funding_organization',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'Affiliate Staff' => 'Affiliate Staff',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_program_service_provided'.
  $permissions['edit own field_program_service_provided'] = array(
    'name' => 'edit own field_program_service_provided',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'Affiliate Staff' => 'Affiliate Staff',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_funding_organization'.
  $permissions['view field_funding_organization'] = array(
    'name' => 'view field_funding_organization',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_program_service_provided'.
  $permissions['view field_program_service_provided'] = array(
    'name' => 'view field_program_service_provided',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_funding_organization'.
  $permissions['view own field_funding_organization'] = array(
    'name' => 'view own field_funding_organization',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'Affiliate Staff' => 'Affiliate Staff',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_program_service_provided'.
  $permissions['view own field_program_service_provided'] = array(
    'name' => 'view own field_program_service_provided',
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
