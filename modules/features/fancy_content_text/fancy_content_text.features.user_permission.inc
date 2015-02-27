<?php
/**
 * @file
 * fancy_content_text.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fancy_content_text_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck view fancy_content text entities'.
  $permissions['eck view fancy_content text entities'] = array(
    'name' => 'eck view fancy_content text entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
