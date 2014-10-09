<?php
/**
 * @file
 * fancy_content_headline.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fancy_content_headline_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck view fancy_content headline entities'.
  $permissions['eck view fancy_content headline entities'] = array(
    'name' => 'eck view fancy_content headline entities',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
