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
  $view->name = 'back_to_census_button';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'back to census button';
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

  /* Display: Back to Census Button */
  $handler = $view->new_display('block', 'Back to Census Button', 'block');
  $handler->display->display_options['display_description'] = 'For Content Tabs that have been saved';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['label'] = '';
  $handler->display->display_options['fields']['field_parent_census']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['alter']['text'] = '<a href="/census-in-status-mode/[field_parent_census-target_id]">Back to Parent Census</a>';
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
  $translatables['back_to_census_button'] = array(
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
    t('<a href="/census-in-status-mode/[field_parent_census-target_id]">Back to Parent Census</a>'),
  );
  $export['back_to_census_button'] = $view;

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
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/census-in-status-mode/!1">Back to Parent Census</a>';
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
  $view->name = 'ce_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Civic Engagement View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Civic Engagement View';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href ="/node/add/civic-engagement/!1">Civic Engagement</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'civic_engagement' => 'civic_engagement',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ce_view'] = array(
    t('Master'),
    t('Civic Engagement View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href ="/node/add/civic-engagement/!1">Civic Engagement</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['ce_view'] = $view;

  $view = new view();
  $view->name = 'census_for_affliate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Census for Affliate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Census\'s for Affliate';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_affiliate_' => 'field_affiliate_',
    'field_year' => 'field_year',
  );
  $handler->display->display_options['style_options']['default'] = 'field_year';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_affiliate_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Affiliate  */
  $handler->display->display_options['fields']['field_affiliate_']['id'] = 'field_affiliate_';
  $handler->display->display_options['fields']['field_affiliate_']['table'] = 'field_data_field_affiliate_';
  $handler->display->display_options['fields']['field_affiliate_']['field'] = 'field_affiliate_';
  $handler->display->display_options['fields']['field_affiliate_']['label'] = '';
  $handler->display->display_options['fields']['field_affiliate_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_affiliate_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_affiliate_']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Census';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_year]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'census-in-status-mode/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  /* Contextual filter: Content: Affiliate  (field_affiliate_) */
  $handler->display->display_options['arguments']['field_affiliate__value']['id'] = 'field_affiliate__value';
  $handler->display->display_options['arguments']['field_affiliate__value']['table'] = 'field_data_field_affiliate_';
  $handler->display->display_options['arguments']['field_affiliate__value']['field'] = 'field_affiliate__value';
  $handler->display->display_options['arguments']['field_affiliate__value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_affiliate__value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_affiliate__value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_affiliate__value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_affiliate__value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_affiliate__value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'test_clean_census' => 'test_clean_census',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'census-for-affliate';
  $translatables['census_for_affliate'] = array(
    t('Master'),
    t('Census\'s for Affliate'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Census'),
    t('[field_year]'),
    t('All'),
    t('Page'),
  );
  $export['census_for_affliate'] = $view;

  $view = new view();
  $view->name = 'census_status';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Census in Status Mode';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Census in Status Mode';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: census status */
  $handler->display->display_options['fields']['field_census_status']['id'] = 'field_census_status';
  $handler->display->display_options['fields']['field_census_status']['table'] = 'field_data_field_census_status';
  $handler->display->display_options['fields']['field_census_status']['field'] = 'field_census_status';
  $handler->display->display_options['fields']['field_census_status']['type'] = 'taxonomy_term_reference_plain';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'test_clean_census' => 'test_clean_census',
  );

  /* Display: Status Info Census Page */
  $handler = $view->new_display('page', 'Status Info Census Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'census-in-status-mode';

  /* Display: Full Content Census Page */
  $handler = $view->new_display('page', 'Full Content Census Page', 'page_1');
  $handler->display->display_options['path'] = 'census/full/%';
  $translatables['census_status'] = array(
    t('Master'),
    t('Census in Status Mode'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('census status'),
    t('All'),
    t('Status Info Census Page'),
    t('Full Content Census Page'),
  );
  $export['census_status'] = $view;

  $view = new view();
  $view->name = 'community_relations_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Community Relations View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Community Relations View';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/community-relations/!1">Community Relations</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'community_relations' => 'community_relations',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['community_relations_view'] = array(
    t('Master'),
    t('Community Relations View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/community-relations/!1">Community Relations</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['community_relations_view'] = $view;

  $view = new view();
  $view->name = 'contact_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Data';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/contact-data-direct-indirect-pub/!1">Create Contact Data (Direct, Indirect & Public)</a>
<p>Not Started</p>
';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact_data_direct_indirect_pub' => 'contact_data_direct_indirect_pub',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['contact_data'] = array(
    t('Master'),
    t('Contact Data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/contact-data-direct-indirect-pub/!1">Create Contact Data (Direct, Indirect & Public)</a>
<p>Not Started</p>
'),
    t('All'),
    t('Block'),
  );
  $export['contact_data'] = $view;

  $view = new view();
  $view->name = 'contact_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Information';
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
  $handler->display->display_options['empty']['area']['content'] = '  <a href="/node/add/contact-information/!1">Contact Information</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact_information' => 'contact_information',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['contact_information'] = array(
    t('Master'),
    t('Contact Information'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('  <a href="/node/add/contact-information/!1">Contact Information</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['contact_information'] = $view;

  $view = new view();
  $view->name = 'education_details_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Education Details View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Education Program Details View';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/program-education/!1">Education Program Details</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]/!1">Education Details Program</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_education' => 'program_education',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['education_details_view'] = array(
    t('Master'),
    t('Education Program Details View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/program-education/!1">Education Program Details</a>
<p>Not Started</p>'),
    t('parent census'),
    t('<a href="/node/[nid]/!1">Education Details Program</a>'),
    t('All'),
    t('Block'),
  );
  $export['education_details_view'] = $view;

  $view = new view();
  $view->name = 'emergency_relief_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emergency Relief Activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Emergency Relief Activities';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/emergency-relief-activities/!1">Emergency Relief Activities</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'emergency_relief_activities' => 'emergency_relief_activities',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['emergency_relief_activities'] = array(
    t('Master'),
    t('Emergency Relief Activities'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/emergency-relief-activities/!1">Emergency Relief Activities</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['emergency_relief_activities'] = $view;

  $view = new view();
  $view->name = 'employees_and_board_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Employees and Board Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employees and Board Members';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/employees-and-board-members/!1">Employees and Board Members</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'employees_and_board_members' => 'employees_and_board_members',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['employees_and_board_members'] = array(
    t('Master'),
    t('Employees and Board Members'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/employees-and-board-members/!1">Employees and Board Members</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['employees_and_board_members'] = $view;

  $view = new view();
  $view->name = 'empowerment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Empowerment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Empowerment';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href ="/node/add/empowerment/!1">Empowerment</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'empowerment' => 'empowerment',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['empowerment'] = array(
    t('Master'),
    t('Empowerment'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href ="/node/add/empowerment/!1">Empowerment</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['empowerment'] = $view;

  $view = new view();
  $view->name = 'entity_reference_test';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'entity reference test';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'entity reference test';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'entity-reference-test';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'nid' => 'nid',
    'title' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['entity_reference_test'] = array(
    t('Master'),
    t('entity reference test'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Page'),
    t('Entity Reference'),
  );
  $export['entity_reference_test'] = $view;

  $view = new view();
  $view->name = 'expenditures';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Expenditures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Expenditures';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/expenditures/!1">Expenditures</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expenditures' => 'expenditures',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['expenditures'] = array(
    t('Master'),
    t('Expenditures'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/expenditures/!1">Expenditures</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['expenditures'] = $view;

  $view = new view();
  $view->name = 'go_to_census_in_status_mode';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Go to Census in Status Mode';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Go to Census in Status Mode';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/census-in-status-mode/!1">Go to this Census in Status Mode<a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'test_clean_census' => 'test_clean_census',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['go_to_census_in_status_mode'] = array(
    t('Master'),
    t('Go to Census in Status Mode'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/census-in-status-mode/!1">Go to this Census in Status Mode<a>'),
    t('All'),
    t('Block'),
  );
  $export['go_to_census_in_status_mode'] = $view;

  $view = new view();
  $view->name = 'program_areas_entity_reference_filter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'program areas entity reference filter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'program areas entity reference filter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Content Type */
  $handler->display->display_options['fields']['field_content_type']['id'] = 'field_content_type';
  $handler->display->display_options['fields']['field_content_type']['table'] = 'field_data_field_content_type';
  $handler->display->display_options['fields']['field_content_type']['field'] = 'field_content_type';
  /* Contextual filter: Taxonomy term: Content Type (field_content_type) */
  $handler->display->display_options['arguments']['field_content_type_value']['id'] = 'field_content_type_value';
  $handler->display->display_options['arguments']['field_content_type_value']['table'] = 'field_data_field_content_type';
  $handler->display->display_options['arguments']['field_content_type_value']['field'] = 'field_content_type_value';
  $handler->display->display_options['arguments']['field_content_type_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_content_type_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_content_type_value']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['field_content_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_content_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_content_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_content_type_value']['limit'] = '0';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'program_areas' => 'program_areas',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['program_areas_entity_reference_filter'] = array(
    t('Master'),
    t('program areas entity reference filter'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content Type'),
    t('All'),
    t('Block'),
    t('Entity Reference'),
  );
  $export['program_areas_entity_reference_filter'] = $view;

  $view = new view();
  $view->name = 'program_education';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Education and Youth Development Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Education and Youth Development Programs';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/program-education/!1">Education and Youth Development Programs</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_education' => 'program_education',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['program_education'] = array(
    t('Master'),
    t('Education and Youth Development Programs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/program-education/!1">Education and Youth Development Programs</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['program_education'] = $view;

  $view = new view();
  $view->name = 'program_entrepreneurship';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entrepreneurship and Business Development Program Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Entrepreneurship and Business Development Program Details';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/program-entrepreneurship/!1">Entrepreneurship and Business Development Programs</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]/!1">Entrepreneurship and Business Development Program Details</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_entrepreneurship' => 'program_entrepreneurship',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['program_entrepreneurship'] = array(
    t('Master'),
    t('Entrepreneurship and Business Development Program Details'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/program-entrepreneurship/!1">Entrepreneurship and Business Development Programs</a>
<p>Not Started</p>'),
    t('parent census'),
    t('Nid'),
    t('<a href="/node/[nid]/!1">Entrepreneurship and Business Development Program Details</a>'),
    t('All'),
    t('Block'),
  );
  $export['program_entrepreneurship'] = $view;

  $view = new view();
  $view->name = 'program_health';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Health and Quality of Life Program Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Health and Quality of Life Program';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/program-health/!1">Health and Quality of Life Programs</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]/!1">Health and Quality of Life Program</a>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_health' => 'program_health',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['program_health'] = array(
    t('Master'),
    t('Health and Quality of Life Program'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/program-health/!1">Health and Quality of Life Programs</a>
<p>Not Started</p>'),
    t('Nid'),
    t('parent census'),
    t('<a href="/node/[nid]/!1">Health and Quality of Life Program</a>
'),
    t('All'),
    t('Block'),
  );
  $export['program_health'] = $view;

  $view = new view();
  $view->name = 'program_housing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Housing and Community Development';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Housing and Community Development';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/program-housing/!1">Housing and Community Development Programs</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]/!1">Housing and Community Development</a>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_housing' => 'program_housing',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['program_housing'] = array(
    t('Master'),
    t('Housing and Community Development'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/program-housing/!1">Housing and Community Development Programs</a>
<p>Not Started</p>'),
    t('Nid'),
    t('parent census'),
    t('<a href="/node/[nid]/!1">Housing and Community Development</a>
'),
    t('All'),
    t('Block'),
  );
  $export['program_housing'] = $view;

  $view = new view();
  $view->name = 'program_other';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other Programs';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/program-other/!1">Other Programs</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]/!1">Other Program</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_other' => 'program_other',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['program_other'] = array(
    t('Master'),
    t('Other Programs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/program-other/!1">Other Programs</a>
<p>Not Started</p>'),
    t('parent census'),
    t('Nid'),
    t('<a href="/node/[nid]/!1">Other Program</a>'),
    t('All'),
    t('Block'),
  );
  $export['program_other'] = $view;

  $view = new view();
  $view->name = 'program_workforce';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Workforce Development Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Workforce Development Programs';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/program-workforce/!1">Workforce Development Programs</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]/!1">Workforce Development Program Details</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program_workforce' => 'program_workforce',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['program_workforce'] = array(
    t('Master'),
    t('Workforce Development Programs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/program-workforce/!1">Workforce Development Programs</a>
<p>Not Started</p>'),
    t('parent census'),
    t('Nid'),
    t('<a href="/node/[nid]/!1">Workforce Development Program Details</a>'),
    t('All'),
    t('Block'),
  );
  $export['program_workforce'] = $view;

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

  $view = new view();
  $view->name = 'revenue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Revenue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Revenue';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/revenue/!1">Revenue</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'revenue' => 'revenue',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['revenue'] = array(
    t('Master'),
    t('Revenue'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/revenue/!1">Revenue</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['revenue'] = $view;

  $view = new view();
  $view->name = 'service_areas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Areas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Areas';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/service-areas/!1">Service Areas</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service_areas' => 'service_areas',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['service_areas'] = array(
    t('Master'),
    t('Service Areas'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/service-areas/!1">Service Areas</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['service_areas'] = $view;

  $view = new view();
  $view->name = 'survey_certification';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Survey Certification';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Survey Certification';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/survey-certification/!1">Survey Certification</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'survey_certification' => 'survey_certification',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['survey_certification'] = array(
    t('Master'),
    t('Survey Certification'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/survey-certification/!1">Survey Certification</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['survey_certification'] = $view;

  $view = new view();
  $view->name = 'volunteers_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Volunteers/Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Volunteers/Members';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/volunteers-members/!1">Volunteers/Members</a>
<p>Not Started</p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tab Status */
  $handler->display->display_options['fields']['field_tab_status']['id'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['table'] = 'field_data_field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['field'] = 'field_tab_status';
  $handler->display->display_options['fields']['field_tab_status']['label'] = '';
  $handler->display->display_options['fields']['field_tab_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: parent census (field_parent_census) */
  $handler->display->display_options['arguments']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers_members' => 'volunteers_members',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['volunteers_members'] = array(
    t('Master'),
    t('Volunteers/Members'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/add/volunteers-members/!1">Volunteers/Members</a>
<p>Not Started</p>'),
    t('All'),
    t('Block'),
  );
  $export['volunteers_members'] = $view;

  return $export;
}
