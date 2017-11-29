<?php
/**
 * @file
 * census_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function census_roles_user_default_roles() {
  $roles = array();

  // Exported role: Affiliate CEO.
  $roles['Affiliate CEO'] = array(
    'name' => 'Affiliate CEO',
    'weight' => 6,
  );

  // Exported role: Affiliate Staff.
  $roles['Affiliate Staff'] = array(
    'name' => 'Affiliate Staff',
    'weight' => 5,
  );

  // Exported role: NUL Admin.
  $roles['NUL Admin'] = array(
    'name' => 'NUL Admin',
    'weight' => 4,
  );

  return $roles;
}
