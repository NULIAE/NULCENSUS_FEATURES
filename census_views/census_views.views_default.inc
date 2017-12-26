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
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['label'] = 'Back to Parent Census: ';
  $handler->display->display_options['fields']['field_parent_census']['alter']['text'] = '<a href="/census-in-status-mode/[field_parent_census-target_id]">Back to Parent Census</a>';
  $handler->display->display_options['fields']['field_parent_census']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
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
    t('Back to Parent Census: '),
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_affiliate_']['id'] = 'field_affiliate_';
  $handler->display->display_options['fields']['field_affiliate_']['table'] = 'field_data_field_affiliate_';
  $handler->display->display_options['fields']['field_affiliate_']['field'] = 'field_affiliate_';
  $handler->display->display_options['fields']['field_affiliate_']['label'] = '';
  $handler->display->display_options['fields']['field_affiliate_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_affiliate_']['element_label_colon'] = FALSE;
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
  /* Contextual filter: Broken/missing handler */
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
  $view->name = 'census_s_by_affiliate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Censuss By Affiliate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Censuss By Affiliate';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Census Status */
  $handler->display->display_options['fields']['field_census_status']['id'] = 'field_census_status';
  $handler->display->display_options['fields']['field_census_status']['table'] = 'field_data_field_census_status';
  $handler->display->display_options['fields']['field_census_status']['field'] = 'field_census_status';
  $handler->display->display_options['fields']['field_census_status']['label'] = '';
  $handler->display->display_options['fields']['field_census_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_census_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Affiliate ID (field_affiliate) */
  $handler->display->display_options['arguments']['field_affiliate_value']['id'] = 'field_affiliate_value';
  $handler->display->display_options['arguments']['field_affiliate_value']['table'] = 'field_data_field_affiliate';
  $handler->display->display_options['arguments']['field_affiliate_value']['field'] = 'field_affiliate_value';
  $handler->display->display_options['arguments']['field_affiliate_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_affiliate_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_affiliate_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_affiliate_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_affiliate_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_affiliate_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_affiliate_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_affiliate_value']['validate']['fail'] = 'ignore';
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
    'census' => 'census',
  );
  /* Filter criterion: Content: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_value']['expose']['operator_id'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_year_value']['expose']['operator'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['identifier'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'census-s-by-affiliate';
  $translatables['census_s_by_affiliate'] = array(
    t('Master'),
    t('Censuss By Affiliate'),
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
    t('Year'),
    t('Page'),
  );
  $export['census_s_by_affiliate'] = $view;

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
  /* Field: Content: Census Status */
  $handler->display->display_options['fields']['field_census_status']['id'] = 'field_census_status';
  $handler->display->display_options['fields']['field_census_status']['table'] = 'field_data_field_census_status';
  $handler->display->display_options['fields']['field_census_status']['field'] = 'field_census_status';
  $handler->display->display_options['fields']['field_census_status']['label'] = 'census status';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=/node/[nid]/!4>%2</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  $handler->display->display_options['fields']['field_parent_census']['type'] = 'entityreference_entity_id';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'civic_engagement' => 'civic_engagement',
    'community_relations' => 'community_relations',
    'contact_data_direct_indirect_pub' => 'contact_data_direct_indirect_pub',
    'contact_information' => 'contact_information',
    'emergency_relief_activities' => 'emergency_relief_activities',
    'employees_and_board_members' => 'employees_and_board_members',
    'empowerment' => 'empowerment',
    'expenditures' => 'expenditures',
    'programs' => 'programs',
    'program_education' => 'program_education',
    'program_entrepreneurship' => 'program_entrepreneurship',
    'program_health' => 'program_health',
    'program_housing' => 'program_housing',
    'program_other' => 'program_other',
    'program_workforce' => 'program_workforce',
    'revenue' => 'revenue',
    'service_areas' => 'service_areas',
    'survey_certification' => 'survey_certification',
    'volunteers_members' => 'volunteers_members',
  );
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=/node/[nid]/!1>%2</a>
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
  $handler->display->display_options['arguments']['field_parent_census_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_parent_census_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_census_target_id']['validate_options']['types'] = array(
    'census' => 'census',
  );
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
    t('Nid'),
    t('<a href=/node/[nid]/!4>%2</a>'),
    t('[field_tab_status] 
<p></p>'),
    t('Census Tabs (on Census)'),
    t('<a href=/node/add/!3/!1>%2</a>
Not Started
</br>'),
    t('<a href=/node/[nid]/!1>%2</a>
'),
    t('[field_tab_status]
<p></p>'),
  );
  $export['census_tab_menu'] = $view;

  $view = new view();
  $view->name = 'censuses_for_my_affiliate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'Censuses for My Affiliate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Censuses for My Affiliate';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['hide_empty'] = TRUE;
  /* Field: CiviCRM Custom: Affiliate: Affiliate */
  $handler->display->display_options['fields']['affiliate_11_1']['id'] = 'affiliate_11_1';
  $handler->display->display_options['fields']['affiliate_11_1']['table'] = 'civicrm_value_affiliate_5';
  $handler->display->display_options['fields']['affiliate_11_1']['field'] = 'affiliate_11';
  $handler->display->display_options['fields']['affiliate_11_1']['label'] = '';
  $handler->display->display_options['fields']['affiliate_11_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['affiliate_11_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['affiliate_11_1']['hide_empty'] = TRUE;
  /* Field: CiviCRM Custom: Affiliate: Affiliate */
  $handler->display->display_options['fields']['affiliate_11']['id'] = 'affiliate_11';
  $handler->display->display_options['fields']['affiliate_11']['table'] = 'civicrm_value_affiliate_5';
  $handler->display->display_options['fields']['affiliate_11']['field'] = 'affiliate_11';
  $handler->display->display_options['fields']['affiliate_11']['label'] = '';
  $handler->display->display_options['fields']['affiliate_11']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['affiliate_11']['alter']['text'] = '<a href=/census-s-by-affiliate/[affiliate_11]>All Censuses for [affiliate_11_1]</a></br>
<a href=/node/add/census/[affiliate_11]>This Year\'s Census for [affiliate_11_1]</a>';
  $handler->display->display_options['fields']['affiliate_11']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['affiliate_11']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['affiliate_11']['civicrm_custom_formatter'] = 'value';
  /* Contextual filter: CiviCRM Drupal match table: Drupal User ID */
  $handler->display->display_options['arguments']['uf_id']['id'] = 'uf_id';
  $handler->display->display_options['arguments']['uf_id']['table'] = 'civicrm_uf_match';
  $handler->display->display_options['arguments']['uf_id']['field'] = 'uf_id';
  $handler->display->display_options['arguments']['uf_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uf_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uf_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uf_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uf_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'censuses-for-my-affiliate';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['censuses_for_my_affiliate'] = array(
    t('Master'),
    t('Censuses for My Affiliate'),
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
    t('Contact ID'),
    t('.'),
    t(','),
    t('<a href=/census-s-by-affiliate/[affiliate_11]>All Censuses for [affiliate_11_1]</a></br>
<a href=/node/add/census/[affiliate_11]>This Year\'s Census for [affiliate_11_1]</a>'),
    t('All'),
    t('Page'),
    t('Block'),
  );
  $export['censuses_for_my_affiliate'] = $view;

  $view = new view();
  $view->name = 'full_census';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Full Census';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Full Census';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'full-census';
  $translatables['full_census'] = array(
    t('Master'),
    t('Full Census'),
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
    t('Type'),
    t('Page'),
  );
  $export['full_census'] = $view;

  $view = new view();
  $view->name = 'full_parent_census';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Full Parent Census';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Full Parent Census';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
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
    'census' => 'census',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['full_parent_census'] = array(
    t('Master'),
    t('Full Parent Census'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['full_parent_census'] = $view;

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
  $view->name = 'link_to_full_census';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'link to full census';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'link to full census';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=/full-census/!1>Link to View Full [title]</a>';
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
    'census' => 'census',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['link_to_full_census'] = array(
    t('Master'),
    t('link to full census'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href=/full-census/!1>Link to View Full [title]</a>'),
    t('All'),
    t('Block'),
  );
  $export['link_to_full_census'] = $view;

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
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
