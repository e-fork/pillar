<?php
/**
 * @file
 * pillar_nutzer_rollen.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pillar_nutzer_rollen_user_default_roles() {
  $roles = array();

  // Exported role: Chefredakteur.
  $roles['Chefredakteur'] = array(
    'name' => 'Chefredakteur',
    'weight' => 3,
  );

  // Exported role: Redakteur.
  $roles['Redakteur'] = array(
    'name' => 'Redakteur',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  return $roles;
}
