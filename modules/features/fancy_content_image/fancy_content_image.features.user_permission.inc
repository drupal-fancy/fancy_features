<?php
/**
 * @file
 * fancy_content_image.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fancy_content_image_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck view fancy_content image entities'.
  $permissions['eck view fancy_content image entities'] = array(
    'name' => 'eck view fancy_content image entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
