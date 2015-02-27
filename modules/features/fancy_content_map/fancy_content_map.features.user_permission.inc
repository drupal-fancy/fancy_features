<?php
/**
 * @file
 * fancy_content_map.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fancy_content_map_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck view fancy_content map entities'.
  $permissions['eck view fancy_content map entities'] = array(
    'name' => 'eck view fancy_content map entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
