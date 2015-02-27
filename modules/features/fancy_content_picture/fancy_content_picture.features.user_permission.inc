<?php
/**
 * @file
 * fancy_content_picture.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fancy_content_picture_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck view fancy_content picture entities'.
  $permissions['eck view fancy_content picture entities'] = array(
    'name' => 'eck view fancy_content picture entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
