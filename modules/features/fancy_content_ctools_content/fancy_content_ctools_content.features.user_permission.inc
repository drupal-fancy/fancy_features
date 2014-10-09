<?php
/**
 * @file
 * fancy_content_ctools_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fancy_content_ctools_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck view fancy_content ctools_content entities'.
  $permissions['eck view fancy_content ctools_content entities'] = array(
    'name' => 'eck view fancy_content ctools_content entities',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
