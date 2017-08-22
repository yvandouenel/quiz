<?php
/**
 * @file
 * feature_add_multimedia_to_quiz.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_add_multimedia_to_quiz_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ear|node|short_answer|question';
  $field_group->group_name = 'group_ear';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'short_answer';
  $field_group->mode = 'question';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ecouter',
    'weight' => '1',
    'children' => array(
      0 => 'field_son',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-ear field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_ear|node|short_answer|question'] = $field_group;

  return $export;
}
