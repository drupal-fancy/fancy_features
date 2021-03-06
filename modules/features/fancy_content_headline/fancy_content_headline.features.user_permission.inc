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

  // Exported permission: 'eck add fancy_content headline entities'.
  $permissions['eck add fancy_content headline entities'] = array(
    'name' => 'eck add fancy_content headline entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer fancy_content headline entities'.
  $permissions['eck administer fancy_content headline entities'] = array(
    'name' => 'eck administer fancy_content headline entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete fancy_content headline entities'.
  $permissions['eck delete fancy_content headline entities'] = array(
    'name' => 'eck delete fancy_content headline entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit fancy_content headline entities'.
  $permissions['eck edit fancy_content headline entities'] = array(
    'name' => 'eck edit fancy_content headline entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list fancy_content headline entities'.
  $permissions['eck list fancy_content headline entities'] = array(
    'name' => 'eck list fancy_content headline entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view fancy_content headline entities'.
  $permissions['eck view fancy_content headline entities'] = array(
    'name' => 'eck view fancy_content headline entities',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
