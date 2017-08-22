<?php
/**
 * @file
 * feature_add_multimedia_to_quiz.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_add_multimedia_to_quiz_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
