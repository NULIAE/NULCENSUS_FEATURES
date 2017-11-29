<?php
/**
 * @file
 * census_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function census_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'back_to_census_button_for_new';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'back to census button for new';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'back to census button new';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['label'] = '';
  $handler->display->display_options['fields']['field_parent_census']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['alter']['text'] = '<a href="/census-in-status-mode/!1">Back to Parent Census</a>';
  $handler->display->display_options['fields']['field_parent_census']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Back to Census Button */
  $handler = $view->new_display('block', 'Back to Census Button', 'block');
  $handler->display->display_options['display_description'] = 'For Content Tabs that have been saved';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/!1">Back to Parent Census</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $translatables['back_to_census_button_for_new'] = array(
    t('Master'),
    t('back to census button new'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/census-in-status-mode/!1">Back to Parent Census</a>'),
    t('Custom text'),
    t('All'),
    t('Back to Census Button'),
    t('For Content Tabs that have been saved'),
    t('<a href="/node/!1">Back to Parent Census</a>'),
  );
  $export['back_to_census_button_for_new'] = $view;

  $view = new view();
  $view->name = 'button_to_add_new_program';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Button to Add new Program';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Button to Add new Program';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Program Area (field_program_area) */
  $handler->display->display_options['relationships']['field_program_area_tid']['id'] = 'field_program_area_tid';
  $handler->display->display_options['relationships']['field_program_area_tid']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['relationships']['field_program_area_tid']['field'] = 'field_program_area_tid';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<a href="/node/add/programs/[type]/[field_parent_census] ">Add a Program</a>';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['label'] = '';
  $handler->display->display_options['fields']['field_parent_census']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['alter']['text'] = '<a href=/node/add/programs/[field_parent_census-target_id]/[type]>Add a Program</a>';
  $handler->display->display_options['fields']['field_parent_census']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['button_to_add_new_program'] = array(
    t('Master'),
    t('Button to Add new Program'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_program_area'),
    t('<a href="/node/add/programs/[type]/[field_parent_census] ">Add a Program</a>'),
    t('<a href=/node/add/programs/[field_parent_census-target_id]/[type]>Add a Program</a>'),
    t('All'),
    t('Block'),
  );
  $export['button_to_add_new_program'] = $view;

  $view = new view();
  $view->name = 'census_tab_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Census Tab Menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Census Tabs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<a href=/node/add/!2/!1>%2</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['label'] = 'Census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['id'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['field'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['relationship'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['label'] = 'other tab';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Census Tabs (on Tab) */
  $handler = $view->new_display('block', 'Census Tabs (on Tab)', 'block');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<a href=/node/add/!3/!4>%2</a>
Not Started';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tab_status']['alter']['text'] = '[field_tab_status] 
<p></p>';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null_1']['id'] = 'null_1';
  $handler->display->display_options['arguments']['null_1']['table'] = 'views';
  $handler->display->display_options['arguments']['null_1']['field'] = 'null';
  $handler->display->display_options['arguments']['null_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null_1']['summary_options']['items_per_page'] = '25';

  /* Display: Census Tabs (on Census) */
  $handler = $view->new_display('block', 'Census Tabs (on Census)', 'block_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<a href=/node/add/!3/!1>%2</a>
Not Started
</br>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tab_status']['alter']['text'] = '[field_tab_status]
<p></p>';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $translatables['census_tab_menu'] = array(
    t('Master'),
    t('Census Tabs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href=/node/add/!2/!1>%2</a>
<p>Not Started</p>'),
    t('Census'),
    t('other tab'),
    t('parent census'),
    t('All'),
    t('Census Tabs (on Tab)'),
    t('<a href=/node/add/!3/!4>%2</a>
Not Started'),
    t('[field_tab_status] 
<p></p>'),
    t('Census Tabs (on Census)'),
    t('<a href=/node/add/!3/!1>%2</a>
Not Started
</br>'),
    t('[field_tab_status]
<p></p>'),
  );
  $export['census_tab_menu'] = $view;

  $view = new view();
  $view->name = 'programs_for_program_area';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Programs for Program Area';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Program Area (field_program_area) */
  $handler->display->display_options['relationships']['field_program_area_tid']['id'] = 'field_program_area_tid';
  $handler->display->display_options['relationships']['field_program_area_tid']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['relationships']['field_program_area_tid']['field'] = 'field_program_area_tid';
  $handler->display->display_options['relationships']['field_program_area_tid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Program Area */
  $handler->display->display_options['fields']['field_program_area']['id'] = 'field_program_area';
  $handler->display->display_options['fields']['field_program_area']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['fields']['field_program_area']['field'] = 'field_program_area';
  $handler->display->display_options['fields']['field_program_area']['exclude'] = TRUE;
  /* Field: Content: Purpose of Program */
  $handler->display->display_options['fields']['field_program_purpose']['id'] = 'field_program_purpose';
  $handler->display->display_options['fields']['field_program_purpose']['table'] = 'field_data_field_program_purpose';
  $handler->display->display_options['fields']['field_program_purpose']['field'] = 'field_program_purpose';
  $handler->display->display_options['fields']['field_program_purpose']['label'] = '';
  $handler->display->display_options['fields']['field_program_purpose']['element_label_colon'] = FALSE;
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/node/[nid]">View</a>  <a href="/node/[nid]/edit">Edit</a>  <a href="/node/[nid]/delete">Delete</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Content Type (field_content_type) */
  $handler->display->display_options['arguments']['field_content_type_value']['id'] = 'field_content_type_value';
  $handler->display->display_options['arguments']['field_content_type_value']['table'] = 'field_data_field_content_type';
  $handler->display->display_options['arguments']['field_content_type_value']['field'] = 'field_content_type_value';
  $handler->display->display_options['arguments']['field_content_type_value']['relationship'] = 'field_program_area_tid';
  $handler->display->display_options['arguments']['field_content_type_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_content_type_value']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_content_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_content_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_content_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_content_type_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_content_type_value']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_content_type_value']['validate_options']['code'] = 'if ($node = node_load($argument)) {
  //check that the node type is one of our program area tabs
  $programAreaContentType = field_info_field(\'field_content_type\');
  $allowed_values= list_allowed_values($programAreaContentType);
  if (!array_key_exists($node->type, $allowed_values)) {
     return false;
  }
  $handler->argument = $node->type;
  return true;
}
return false;';
  $handler->display->display_options['arguments']['field_content_type_value']['limit'] = '0';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id_1']['id'] = 'field_parent_census_target_id_1';
  $handler->display->display_options['arguments']['field_parent_census_target_id_1']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id_1']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id_1']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_parent_census_target_id_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id_1']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'programs' => 'programs',
  );
  /* Filter criterion: Content: parent census (field_parent_census) */
  $handler->display->display_options['filters']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['filters']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['filters']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['filters']['field_parent_census_target_id']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['programs_for_program_area'] = array(
    t('Master'),
    t('Programs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_program_area'),
    t('Program Area'),
    t('parent census'),
    t('<a href="/node/[nid]">View</a>  <a href="/node/[nid]/edit">Edit</a>  <a href="/node/[nid]/delete">Delete</a>'),
    t('All'),
    t('Block'),
  );
  $export['programs_for_program_area'] = $view;

  return $export;
}
