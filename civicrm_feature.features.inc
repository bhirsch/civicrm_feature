<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function civicrm_feature_context_default_contexts() {
  module_load_include('inc', 'civicrm_feature', 'civicrm_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_civicrm_feature_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function civicrm_feature_ctools_plugin_api() {
  module_load_include('inc', 'civicrm_feature', 'civicrm_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_civicrm_feature_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function civicrm_feature_menu_default_items() {
  module_load_include('inc', 'civicrm_feature', 'civicrm_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_civicrm_feature_menu_default_items', $args);
}
