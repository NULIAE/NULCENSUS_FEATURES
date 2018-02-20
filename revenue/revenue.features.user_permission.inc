<?php
/**
 * @file
 * revenue.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function revenue_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_budget_venture_type'.
  $permissions['create field_budget_venture_type'] = array(
    'name' => 'create field_budget_venture_type',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'Affiliate Staff' => 'Affiliate Staff',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_budget_venture_type'.
  $permissions['edit field_budget_venture_type'] = array(
    'name' => 'edit field_budget_venture_type',
    'roles' => array(
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_budget_venture_type'.
  $permissions['edit own field_budget_venture_type'] = array(
    'name' => 'edit own field_budget_venture_type',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'Affiliate Staff' => 'Affiliate Staff',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_budget_venture_type'.
  $permissions['view field_budget_venture_type'] = array(
    'name' => 'view field_budget_venture_type',
    'roles' => array(
      'Affiliate CEO' => 'Affiliate CEO',
      'Affiliate Staff' => 'Affiliate Staff',
      'NUL Admin' => 'NUL Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_budget_venture_type'.
  $permissions['view own field_budget_venture_type'] = array(
    'name' => 'view own field_budget_venture_type',
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
