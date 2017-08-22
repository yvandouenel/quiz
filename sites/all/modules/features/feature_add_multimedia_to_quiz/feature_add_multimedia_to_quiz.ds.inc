<?php
/**
 * @file
 * feature_add_multimedia_to_quiz.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_add_multimedia_to_quiz_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|short_answer|question';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'short_answer';
  $ds_layout->view_mode = 'question';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'group_ear',
        2 => 'field_son',
        3 => 'field_explanation',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'group_ear' => 'ds_content',
      'field_son' => 'ds_content',
      'field_explanation' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|short_answer|question'] = $ds_layout;

  return $export;
}
