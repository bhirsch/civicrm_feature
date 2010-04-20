<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _civicrm_feature_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'civicrm';
  $context->description = '';
  $context->tag = 'CiviCRM';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'civicrm' => 'civicrm',
      ),
    ),
    'path' => array(
      'values' => array(
        'civicrm' => 'civicrm',
        'civicrm/*' => 'civicrm/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'civicrm-2' => array(
          'module' => 'civicrm',
          'delta' => 2,
          'region' => 'right',
          'weight' => 0,
        ),
        'civicrm-4' => array(
          'module' => 'civicrm',
          'delta' => 4,
          'region' => 'right',
          'weight' => 1,
        ),
        'civicrm-7' => array(
          'module' => 'civicrm',
          'delta' => 7,
          'region' => 'right',
          'weight' => 2,
        ),
        'civicrm-8' => array(
          'module' => 'civicrm',
          'delta' => 8,
          'region' => 'content',
          'weight' => 0,
        ),
      ),
      'layout' => 'default',
    ),
  );
  $context->condition_mode = 0;

  $translatables['civicrm'] = array(
    t('CiviCRM'),
  );

  $export['civicrm'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _civicrm_feature_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _civicrm_feature_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'CiviCRM',
    'path' => 'civicrm',
    'weight' => '0',
  );
  // Translatables
  array(
    t('CiviCRM'),
  );


  return $items;
}
