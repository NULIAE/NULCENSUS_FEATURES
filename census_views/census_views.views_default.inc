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
  $handler->display->display_options['fields']['field_year']['type'] = 'number_integer';
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
  $handler->display->display_options['title'] = 'All Censuses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_first_name' => 'field_first_name',
    'field_year' => 'field_year',
    'title' => 'title',
    'nid' => 'nid',
    'field_census_status' => 'field_census_status',
  );
  $handler->display->display_options['style_options']['default'] = 'field_year';
  $handler->display->display_options['style_options']['info'] = array(
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_census_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: affiliate select */
  $handler->display->display_options['fields']['field_affiliate_select']['id'] = 'field_affiliate_select';
  $handler->display->display_options['fields']['field_affiliate_select']['table'] = 'field_data_field_affiliate_select';
  $handler->display->display_options['fields']['field_affiliate_select']['field'] = 'field_affiliate_select';
  $handler->display->display_options['fields']['field_affiliate_select']['label'] = 'Affiliate';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Census Title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Links to Census';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=/full-census/[nid]>Full Version</a><br>
<a href=/node/[nid]>Census Summary</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Census Status */
  $handler->display->display_options['fields']['field_census_status']['id'] = 'field_census_status';
  $handler->display->display_options['fields']['field_census_status']['table'] = 'field_data_field_census_status';
  $handler->display->display_options['fields']['field_census_status']['field'] = 'field_census_status';
  $handler->display->display_options['fields']['field_census_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_census_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['field_year_value']['group_info']['label'] = 'Year';
  $handler->display->display_options['filters']['field_year_value']['group_info']['identifier'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '2010',
      'operator' => '=',
      'value' => array(
        'value' => '2010',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '2011',
      'operator' => '=',
      'value' => array(
        'value' => '2011',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '2012',
      'operator' => '=',
      'value' => array(
        'value' => '2012',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => '2013',
      'operator' => '=',
      'value' => array(
        'value' => '2013',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => '2014',
      'operator' => '=',
      'value' => array(
        'value' => '2014',
        'min' => '',
        'max' => '',
      ),
    ),
    6 => array(
      'title' => '2015',
      'operator' => '=',
      'value' => array(
        'value' => '2015',
        'min' => '',
        'max' => '',
      ),
    ),
    7 => array(
      'title' => '2016',
      'operator' => '=',
      'value' => array(
        'value' => '2016',
        'min' => '',
        'max' => '',
      ),
    ),
    8 => array(
      'title' => '2017',
      'operator' => '=',
      'value' => array(
        'value' => '2017',
        'min' => '',
        'max' => '',
      ),
    ),
    9 => array(
      'title' => '2018',
      'operator' => '=',
      'value' => array(
        'value' => '2018',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Content: Census Status (field_census_status) */
  $handler->display->display_options['filters']['field_census_status_tid']['id'] = 'field_census_status_tid';
  $handler->display->display_options['filters']['field_census_status_tid']['table'] = 'field_data_field_census_status';
  $handler->display->display_options['filters']['field_census_status_tid']['field'] = 'field_census_status_tid';
  $handler->display->display_options['filters']['field_census_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_census_status_tid']['expose']['operator_id'] = 'field_census_status_tid_op';
  $handler->display->display_options['filters']['field_census_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_census_status_tid']['expose']['operator'] = 'field_census_status_tid_op';
  $handler->display->display_options['filters']['field_census_status_tid']['expose']['identifier'] = 'field_census_status_tid';
  $handler->display->display_options['filters']['field_census_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_census_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_census_status_tid']['vocabulary'] = 'status_type_for_census';
  $handler->display->display_options['filters']['field_census_status_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: affiliate select (field_affiliate_select) */
  $handler->display->display_options['filters']['field_affiliate_select_value']['id'] = 'field_affiliate_select_value';
  $handler->display->display_options['filters']['field_affiliate_select_value']['table'] = 'field_data_field_affiliate_select';
  $handler->display->display_options['filters']['field_affiliate_select_value']['field'] = 'field_affiliate_select_value';
  $handler->display->display_options['filters']['field_affiliate_select_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_affiliate_select_value']['expose']['operator_id'] = 'field_affiliate_select_value_op';
  $handler->display->display_options['filters']['field_affiliate_select_value']['expose']['label'] = 'Affiliate';
  $handler->display->display_options['filters']['field_affiliate_select_value']['expose']['operator'] = 'field_affiliate_select_value_op';
  $handler->display->display_options['filters']['field_affiliate_select_value']['expose']['identifier'] = 'field_affiliate_select_value';
  $handler->display->display_options['filters']['field_affiliate_select_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: affiliate select (field_affiliate_select) */
  $handler->display->display_options['arguments']['field_affiliate_select_value']['id'] = 'field_affiliate_select_value';
  $handler->display->display_options['arguments']['field_affiliate_select_value']['table'] = 'field_data_field_affiliate_select';
  $handler->display->display_options['arguments']['field_affiliate_select_value']['field'] = 'field_affiliate_select_value';
  $handler->display->display_options['arguments']['field_affiliate_select_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_affiliate_select_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_affiliate_select_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_affiliate_select_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_affiliate_select_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_affiliate_select_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_affiliate_select_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_affiliate_select_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_affiliate_select_value']['limit'] = '0';
  $handler->display->display_options['path'] = 'census-s-by-affiliate';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Census Title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Links to Census';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=/full-census/[nid]>Full Version</a><br>
<a href=/node/[nid]>Census Summary</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Census Status */
  $handler->display->display_options['fields']['field_census_status']['id'] = 'field_census_status';
  $handler->display->display_options['fields']['field_census_status']['table'] = 'field_data_field_census_status';
  $handler->display->display_options['fields']['field_census_status']['field'] = 'field_census_status';
  $handler->display->display_options['fields']['field_census_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_census_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_affiliate_value']['id'] = 'field_affiliate_value';
  $handler->display->display_options['arguments']['field_affiliate_value']['table'] = 'field_data_field_affiliate';
  $handler->display->display_options['arguments']['field_affiliate_value']['field'] = 'field_affiliate_value';
  $handler->display->display_options['arguments']['field_affiliate_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_affiliate_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_affiliate_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_affiliate_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_affiliate_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_affiliate_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $translatables['census_s_by_affiliate'] = array(
    t('Master'),
    t('All Censuses'),
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
    t('Affiliate'),
    t('Year'),
    t('Census Title'),
    t('Links to Census'),
    t('<a href=/full-census/[nid]>Full Version</a><br>
<a href=/node/[nid]>Census Summary</a>'),
    t('Census Status'),
    t('Status'),
    t('Page'),
    t('All'),
    t('Block'),
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
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/add/!3/!4"><div class="tab"><div class="tabType">%2</div><div class="tabStatus notStarted">Not Started</div></div></a>';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_tab_status']['alter']['text'] = '<div class="tab">
<div class="tabType">[title]</div>
<div class="tabStatus [field_tab_status]">[field_tab_status] </div>
</div>';
  $handler->display->display_options['fields']['field_tab_status']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tab_status']['alter']['path'] = '/node/[nid]/!4';
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
  $handler->display->display_options['empty']['area']['content'] = '<a href=/node/add/!3/!1><div class="tab">
<div class="tabType">%2</div>
<div class="tabStatus notStarted">Not Started</div>
</div></a>


';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_tab_status']['alter']['text'] = '<div class="tab">
<div class="tabType">[title]</div>
<div class="tabStatus [field_tab_status]">[field_tab_status] </div>
</div>
';
  $handler->display->display_options['fields']['field_tab_status']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tab_status']['alter']['path'] = '/node/[nid]/!1';
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
    t('<a href="/node/add/!3/!4"><div class="tab"><div class="tabType">%2</div><div class="tabStatus notStarted">Not Started</div></div></a>'),
    t('Nid'),
    t('<a href=/node/[nid]/!4>%2</a>'),
    t('<div class="tab">
<div class="tabType">[title]</div>
<div class="tabStatus [field_tab_status]">[field_tab_status] </div>
</div>'),
    t('Census Tabs (on Census)'),
    t('<a href=/node/add/!3/!1><div class="tab">
<div class="tabType">%2</div>
<div class="tabStatus notStarted">Not Started</div>
</div></a>


'),
    t('<a href=/node/[nid]/!1>%2</a>
'),
    t('<div class="tab">
<div class="tabType">[title]</div>
<div class="tabStatus [field_tab_status]">[field_tab_status] </div>
</div>
'),
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
  $view->name = 'clone_of_other_programs_required_report_2_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Required Report 2 (Other Programs)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Programs (Required Report 2)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_year' => 'field_year',
    'field_affiliate_select' => 'field_affiliate_select',
    'title_1' => 'title_1',
    'field_parent_census' => 'field_parent_census',
    'field_program_area' => 'field_program_area',
    'title' => 'title',
    'field_program_served_total_1' => 'field_program_served_total_1',
    'field_program_served_total' => 'field_program_served_total',
    'title_2' => 'title_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_affiliate_select' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_enumerate_raw' => 'views_aggregator_enumerate_raw',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_parent_census' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_program_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_enumerate_raw' => 'views_aggregator_enumerate_raw',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_program_served_total_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_enumerate_raw' => 'views_aggregator_enumerate_raw',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_program_served_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => 'Total2',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => 'Total',
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['group_aggregation']['grouping_field_class'] = 'a';
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  /* Relationship: Field: Program Area (field_program_area) */
  $handler->display->display_options['relationships']['field_program_area_tid']['id'] = 'field_program_area_tid';
  $handler->display->display_options['relationships']['field_program_area_tid']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['relationships']['field_program_area_tid']['field'] = 'field_program_area_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_parent_census_target_id';
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: affiliate select */
  $handler->display->display_options['fields']['field_affiliate_select']['id'] = 'field_affiliate_select';
  $handler->display->display_options['fields']['field_affiliate_select']['table'] = 'field_data_field_affiliate_select';
  $handler->display->display_options['fields']['field_affiliate_select']['field'] = 'field_affiliate_select';
  $handler->display->display_options['fields']['field_affiliate_select']['relationship'] = 'field_parent_census_target_id';
  $handler->display->display_options['fields']['field_affiliate_select']['label'] = 'Affiliate';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Program Title';
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['label'] = '';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field: Program Area */
  $handler->display->display_options['fields']['field_program_area']['id'] = 'field_program_area';
  $handler->display->display_options['fields']['field_program_area']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['fields']['field_program_area']['field'] = 'field_program_area';
  $handler->display->display_options['fields']['field_program_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Number of People Served Annually */
  $handler->display->display_options['fields']['field_program_served_total_1']['id'] = 'field_program_served_total_1';
  $handler->display->display_options['fields']['field_program_served_total_1']['table'] = 'field_data_field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total_1']['field'] = 'field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total_1']['label'] = 'Number of People Served Annually by this program';
  $handler->display->display_options['fields']['field_program_served_total_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Number of People Served Annually */
  $handler->display->display_options['fields']['field_program_served_total']['id'] = 'field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total']['table'] = 'field_data_field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total']['field'] = 'field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total']['label'] = 'Total Number of People Served Annually for all Programs for this Affiliate';
  $handler->display->display_options['fields']['field_program_served_total']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_parent_census_target_id';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'programs' => 'programs',
  );
  /* Filter criterion: Field: Program Area (field_program_area) */
  $handler->display->display_options['filters']['field_program_area_tid']['id'] = 'field_program_area_tid';
  $handler->display->display_options['filters']['field_program_area_tid']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['filters']['field_program_area_tid']['field'] = 'field_program_area_tid';
  $handler->display->display_options['filters']['field_program_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_program_area_tid']['expose']['operator_id'] = 'field_program_area_tid_op';
  $handler->display->display_options['filters']['field_program_area_tid']['expose']['label'] = 'Program Area';
  $handler->display->display_options['filters']['field_program_area_tid']['expose']['operator'] = 'field_program_area_tid_op';
  $handler->display->display_options['filters']['field_program_area_tid']['expose']['identifier'] = 'field_program_area_tid';
  $handler->display->display_options['filters']['field_program_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_program_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_program_area_tid']['vocabulary'] = 'program_areas';
  $handler->display->display_options['filters']['field_program_area_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['relationship'] = 'field_parent_census_target_id';
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
  /* Filter criterion: Content: affiliate select (field_affiliate_select) */
  $handler->display->display_options['filters']['field_affiliate_select_value']['id'] = 'field_affiliate_select_value';
  $handler->display->display_options['filters']['field_affiliate_select_value']['table'] = 'field_data_field_affiliate_select';
  $handler->display->display_options['filters']['field_affiliate_select_value']['field'] = 'field_affiliate_select_value';
  $handler->display->display_options['filters']['field_affiliate_select_value']['relationship'] = 'field_parent_census_target_id';
  $handler->display->display_options['filters']['field_affiliate_select_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_affiliate_select_value']['expose']['operator_id'] = 'field_affiliate_select_value_op';
  $handler->display->display_options['filters']['field_affiliate_select_value']['expose']['label'] = 'Affiliate';
  $handler->display->display_options['filters']['field_affiliate_select_value']['expose']['operator'] = 'field_affiliate_select_value_op';
  $handler->display->display_options['filters']['field_affiliate_select_value']['expose']['identifier'] = 'field_affiliate_select_value';
  $handler->display->display_options['filters']['field_affiliate_select_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'required-report-2-programs';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'other-programs-required-report-2/data-export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['clone_of_other_programs_required_report_2_'] = array(
    t('Master'),
    t('Programs (Required Report 2)'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_program_area'),
    t('Content entity referenced from field_parent_census'),
    t('Year'),
    t('Affiliate'),
    t('Program Title'),
    t('Program Area'),
    t('Number of People Served Annually by this program'),
    t('Total Number of People Served Annually for all Programs for this Affiliate'),
    t('Title'),
    t('Page'),
    t('Data export'),
  );
  $export['clone_of_other_programs_required_report_2_'] = $view;

  $view = new view();
  $view->name = 'education_programs_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Education Programs View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Programs Breakdown';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'field_program_area' => 'field_program_area',
    'field_program_area_1' => 'field_program_area_1',
    'field_program_served_total' => 'field_program_served_total',
    'field_funding_amount' => 'field_funding_amount',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_program_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_program_area_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_count',
      'aggr_par_column' => '',
    ),
    'field_program_served_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_funding_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  /* Relationship: Content: Funding Sources (field_funding_sources) */
  $handler->display->display_options['relationships']['field_funding_sources_value']['id'] = 'field_funding_sources_value';
  $handler->display->display_options['relationships']['field_funding_sources_value']['table'] = 'field_data_field_funding_sources';
  $handler->display->display_options['relationships']['field_funding_sources_value']['field'] = 'field_funding_sources_value';
  $handler->display->display_options['relationships']['field_funding_sources_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_funding_sources_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['label'] = 'parent census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Field: Program Area */
  $handler->display->display_options['fields']['field_program_area']['id'] = 'field_program_area';
  $handler->display->display_options['fields']['field_program_area']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['fields']['field_program_area']['field'] = 'field_program_area';
  /* Field: Field: Program Area */
  $handler->display->display_options['fields']['field_program_area_1']['id'] = 'field_program_area_1';
  $handler->display->display_options['fields']['field_program_area_1']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['fields']['field_program_area_1']['field'] = 'field_program_area';
  $handler->display->display_options['fields']['field_program_area_1']['label'] = 'Number of Programs of this Program Area';
  /* Field: Content: Number of People Served Annually */
  $handler->display->display_options['fields']['field_program_served_total']['id'] = 'field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total']['table'] = 'field_data_field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total']['field'] = 'field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Paragraphs item: Amount Funded */
  $handler->display->display_options['fields']['field_funding_amount']['id'] = 'field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount']['table'] = 'field_data_field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount']['field'] = 'field_funding_amount';
  $handler->display->display_options['fields']['field_funding_amount']['relationship'] = 'field_funding_sources_value';
  $handler->display->display_options['fields']['field_funding_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
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
    'programs' => 'programs',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Program Area (field_program_area) */
  $handler->display->display_options['filters']['field_program_area_tid']['id'] = 'field_program_area_tid';
  $handler->display->display_options['filters']['field_program_area_tid']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['filters']['field_program_area_tid']['field'] = 'field_program_area_tid';
  $handler->display->display_options['filters']['field_program_area_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_program_area_tid']['value'] = '';
  $handler->display->display_options['filters']['field_program_area_tid']['vocabulary'] = 'program_areas';
  /* Filter criterion: Content: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['relationship'] = 'field_parent_census_target_id';
  $handler->display->display_options['filters']['field_year_value']['operator'] = '=';
  $handler->display->display_options['filters']['field_year_value']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
  );
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
  $handler->display->display_options['path'] = 'programs-breakdown';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'programs-breakdown/export.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['education_programs_view'] = array(
    t('Master'),
    t('Programs Breakdown'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Paragraph item from field_funding_sources'),
    t('parent census'),
    t('Type'),
    t('Program Area'),
    t('Number of Programs of this Program Area'),
    t('Number of People Served Annually'),
    t('Amount Funded'),
    t('Year'),
    t('Page'),
    t('Data export'),
  );
  $export['education_programs_view'] = $view;

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
    'census' => 'census',
    'civic_engagement' => 'civic_engagement',
    'community_relations' => 'community_relations',
    'contact_data_direct_indirect_pub' => 'contact_data_direct_indirect_pub',
    'program_education' => 'program_education',
    'emergency_relief_activities' => 'emergency_relief_activities',
    'employees_and_board_members' => 'employees_and_board_members',
    'empowerment' => 'empowerment',
    'program_entrepreneurship' => 'program_entrepreneurship',
    'expenditures' => 'expenditures',
    'program_health' => 'program_health',
    'program_housing' => 'program_housing',
    'program_other' => 'program_other',
    'revenue' => 'revenue',
    'service_areas' => 'service_areas',
    'volunteers_members' => 'volunteers_members',
    'program_workforce' => 'program_workforce',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'full-census';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'RequiredReport4';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
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
    t('Data export'),
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
  $view->name = 'other_programs_required_report_2_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other Programs (Required Report 2)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other Programs (Required Report 2)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_first_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_first_name' => 'field_first_name',
    'field_parent_census' => 'field_parent_census',
    'field_program_area' => 'field_program_area',
    'title' => 'title',
    'field_program_served_total' => 'field_program_served_total',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 0,
      'calc' => array(),
    ),
    'field_parent_census' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 0,
      'calc' => array(),
    ),
    'field_program_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 0,
      'calc' => array(),
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 0,
      'calc' => array(),
    ),
    'field_program_served_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 1,
      'calc' => array(
        'SUM' => 'SUM',
      ),
    ),
  );
  $handler->display->display_options['style_options']['detailed_values'] = '0';
  $handler->display->display_options['style_options']['precision'] = '0';
  /* Relationship: Field: Program Area (field_program_area) */
  $handler->display->display_options['relationships']['field_program_area_tid']['id'] = 'field_program_area_tid';
  $handler->display->display_options['relationships']['field_program_area_tid']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['relationships']['field_program_area_tid']['field'] = 'field_program_area_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census']['id'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census']['label'] = '';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parent_census']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field: Program Area */
  $handler->display->display_options['fields']['field_program_area']['id'] = 'field_program_area';
  $handler->display->display_options['fields']['field_program_area']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['fields']['field_program_area']['field'] = 'field_program_area';
  $handler->display->display_options['fields']['field_program_area']['label'] = '';
  $handler->display->display_options['fields']['field_program_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_area']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Number of People Served Annually */
  $handler->display->display_options['fields']['field_program_served_total']['id'] = 'field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total']['table'] = 'field_data_field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total']['field'] = 'field_program_served_total';
  $handler->display->display_options['fields']['field_program_served_total']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: parent census */
  $handler->display->display_options['fields']['field_parent_census_1']['id'] = 'field_parent_census_1';
  $handler->display->display_options['fields']['field_parent_census_1']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['fields']['field_parent_census_1']['field'] = 'field_parent_census';
  $handler->display->display_options['fields']['field_parent_census_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'programs' => 'programs',
  );
  /* Filter criterion: Field: Program Area (field_program_area) */
  $handler->display->display_options['filters']['field_program_area_tid']['id'] = 'field_program_area_tid';
  $handler->display->display_options['filters']['field_program_area_tid']['table'] = 'field_data_field_program_area';
  $handler->display->display_options['filters']['field_program_area_tid']['field'] = 'field_program_area_tid';
  $handler->display->display_options['filters']['field_program_area_tid']['value'] = array(
    109 => '109',
  );
  $handler->display->display_options['filters']['field_program_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_program_area_tid']['vocabulary'] = 'program_areas';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'other-programs-required-report-2';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'other-programs-required-report-2/data-export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['other_programs_required_report_2_'] = array(
    t('Master'),
    t('Other Programs (Required Report 2)'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_program_area'),
    t('Content entity referenced from field_parent_census'),
    t('Number of People Served Annually'),
    t('parent census'),
    t('Page'),
    t('Data export'),
  );
  $export['other_programs_required_report_2_'] = $view;

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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['label'] = 'parent census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['id'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['field'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['relationship'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['label'] = 'program details tab';
  $handler->display->display_options['relationships']['reverse_field_parent_census_node']['required'] = TRUE;
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
  $handler->display->display_options['fields']['field_parent_census']['label'] = '';
  $handler->display->display_options['fields']['field_parent_census']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_census']['element_label_colon'] = FALSE;
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
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_parent_census_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'program_education' => 'program_education',
    'program_entrepreneurship' => 'program_entrepreneurship',
    'program_health' => 'program_health',
    'program_housing' => 'program_housing',
    'program_other' => 'program_other',
    'program_workforce' => 'program_workforce',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'programs' => 'programs',
  );

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
    t('parent census'),
    t('program details tab'),
    t('Program Area'),
    t('<a href="/node/[nid]">View</a>  <a href="/node/[nid]/edit">Edit</a>  <a href="/node/[nid]/delete">Delete</a>'),
    t('All'),
    t('Block'),
  );
  $export['programs_for_program_area'] = $view;

  $view = new view();
  $view->name = 'programs_report_required_report_1_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Programs Report (Required Report 1)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Programs Report (Required Report 1)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'programs-report-required-report-1-';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'RequiredReport1';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['programs_report_required_report_1_'] = array(
    t('Master'),
    t('Programs Report (Required Report 1)'),
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
    t('Page'),
    t('Data export'),
  );
  $export['programs_report_required_report_1_'] = $view;

  $view = new view();
  $view->name = 'throwa';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'throwa';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Report: Census Summary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_year',
      'rendered' => 0,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['label'] = 'Parent Census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['required'] = TRUE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_parent_census_target_id';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['element_type'] = 'h5';
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  /* Field: SUM(Content: What was the total expenditure by your affiliate for expenses (include salaries, rent/mortgage, equipment, etc.)?) */
  $handler->display->display_options['fields']['field_total_expenditures']['id'] = 'field_total_expenditures';
  $handler->display->display_options['fields']['field_total_expenditures']['table'] = 'field_data_field_total_expenditures';
  $handler->display->display_options['fields']['field_total_expenditures']['field'] = 'field_total_expenditures';
  $handler->display->display_options['fields']['field_total_expenditures']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_total_expenditures']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_total_expenditures']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_total_expenditures']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_total_expenditures']['group_columns'] = array(
    'entity_id' => 'entity_id',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: SUM(Content: A. Salaries/Wages) */
  $handler->display->display_options['fields']['field_a_salaries_wages']['id'] = 'field_a_salaries_wages';
  $handler->display->display_options['fields']['field_a_salaries_wages']['table'] = 'field_data_field_a_salaries_wages';
  $handler->display->display_options['fields']['field_a_salaries_wages']['field'] = 'field_a_salaries_wages';
  $handler->display->display_options['fields']['field_a_salaries_wages']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_a_salaries_wages']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_a_salaries_wages']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_a_salaries_wages']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: B. Fringe Benefits) */
  $handler->display->display_options['fields']['field_b_fringe_benefits']['id'] = 'field_b_fringe_benefits';
  $handler->display->display_options['fields']['field_b_fringe_benefits']['table'] = 'field_data_field_b_fringe_benefits';
  $handler->display->display_options['fields']['field_b_fringe_benefits']['field'] = 'field_b_fringe_benefits';
  $handler->display->display_options['fields']['field_b_fringe_benefits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_b_fringe_benefits']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_b_fringe_benefits']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_b_fringe_benefits']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: C. Professional/Contract/Consulting Fees) */
  $handler->display->display_options['fields']['field_c_professional_fees']['id'] = 'field_c_professional_fees';
  $handler->display->display_options['fields']['field_c_professional_fees']['table'] = 'field_data_field_c_professional_fees';
  $handler->display->display_options['fields']['field_c_professional_fees']['field'] = 'field_c_professional_fees';
  $handler->display->display_options['fields']['field_c_professional_fees']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_c_professional_fees']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_c_professional_fees']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_c_professional_fees']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: D. Travel) */
  $handler->display->display_options['fields']['field_d_travel']['id'] = 'field_d_travel';
  $handler->display->display_options['fields']['field_d_travel']['table'] = 'field_data_field_d_travel';
  $handler->display->display_options['fields']['field_d_travel']['field'] = 'field_d_travel';
  $handler->display->display_options['fields']['field_d_travel']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_d_travel']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_d_travel']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_d_travel']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: E. Postage/Freight) */
  $handler->display->display_options['fields']['field_e_postage_freight']['id'] = 'field_e_postage_freight';
  $handler->display->display_options['fields']['field_e_postage_freight']['table'] = 'field_data_field_e_postage_freight';
  $handler->display->display_options['fields']['field_e_postage_freight']['field'] = 'field_e_postage_freight';
  $handler->display->display_options['fields']['field_e_postage_freight']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_e_postage_freight']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_e_postage_freight']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_e_postage_freight']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: F. Insurance) */
  $handler->display->display_options['fields']['field_f_insurance']['id'] = 'field_f_insurance';
  $handler->display->display_options['fields']['field_f_insurance']['table'] = 'field_data_field_f_insurance';
  $handler->display->display_options['fields']['field_f_insurance']['field'] = 'field_f_insurance';
  $handler->display->display_options['fields']['field_f_insurance']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_f_insurance']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_f_insurance']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_f_insurance']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: G. Interest Payments) */
  $handler->display->display_options['fields']['field_g_interest_payments']['id'] = 'field_g_interest_payments';
  $handler->display->display_options['fields']['field_g_interest_payments']['table'] = 'field_data_field_g_interest_payments';
  $handler->display->display_options['fields']['field_g_interest_payments']['field'] = 'field_g_interest_payments';
  $handler->display->display_options['fields']['field_g_interest_payments']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_g_interest_payments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_g_interest_payments']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_g_interest_payments']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: H. Dues/Subscription/Registration) */
  $handler->display->display_options['fields']['field_h_dues_subscription_regist']['id'] = 'field_h_dues_subscription_regist';
  $handler->display->display_options['fields']['field_h_dues_subscription_regist']['table'] = 'field_data_field_h_dues_subscription_regist';
  $handler->display->display_options['fields']['field_h_dues_subscription_regist']['field'] = 'field_h_dues_subscription_regist';
  $handler->display->display_options['fields']['field_h_dues_subscription_regist']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_h_dues_subscription_regist']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_h_dues_subscription_regist']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_h_dues_subscription_regist']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: I. Depreciation) */
  $handler->display->display_options['fields']['field_i_depreciation']['id'] = 'field_i_depreciation';
  $handler->display->display_options['fields']['field_i_depreciation']['table'] = 'field_data_field_i_depreciation';
  $handler->display->display_options['fields']['field_i_depreciation']['field'] = 'field_i_depreciation';
  $handler->display->display_options['fields']['field_i_depreciation']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_i_depreciation']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_i_depreciation']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_i_depreciation']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: J. Taxes (including property taxes)) */
  $handler->display->display_options['fields']['field_j_taxes_including_property']['id'] = 'field_j_taxes_including_property';
  $handler->display->display_options['fields']['field_j_taxes_including_property']['table'] = 'field_data_field_j_taxes_including_property';
  $handler->display->display_options['fields']['field_j_taxes_including_property']['field'] = 'field_j_taxes_including_property';
  $handler->display->display_options['fields']['field_j_taxes_including_property']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_j_taxes_including_property']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_j_taxes_including_property']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_j_taxes_including_property']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: K. Utilities (telephone, gas, electric)) */
  $handler->display->display_options['fields']['field_k_utilities']['id'] = 'field_k_utilities';
  $handler->display->display_options['fields']['field_k_utilities']['table'] = 'field_data_field_k_utilities';
  $handler->display->display_options['fields']['field_k_utilities']['field'] = 'field_k_utilities';
  $handler->display->display_options['fields']['field_k_utilities']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_k_utilities']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_k_utilities']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_k_utilities']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: L. Equipment/space rental) */
  $handler->display->display_options['fields']['field_l_equipment_space_rental']['id'] = 'field_l_equipment_space_rental';
  $handler->display->display_options['fields']['field_l_equipment_space_rental']['table'] = 'field_data_field_l_equipment_space_rental';
  $handler->display->display_options['fields']['field_l_equipment_space_rental']['field'] = 'field_l_equipment_space_rental';
  $handler->display->display_options['fields']['field_l_equipment_space_rental']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_l_equipment_space_rental']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_l_equipment_space_rental']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_l_equipment_space_rental']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: M. Goods and Services) */
  $handler->display->display_options['fields']['field_m_goods_and_services']['id'] = 'field_m_goods_and_services';
  $handler->display->display_options['fields']['field_m_goods_and_services']['table'] = 'field_data_field_m_goods_and_services';
  $handler->display->display_options['fields']['field_m_goods_and_services']['field'] = 'field_m_goods_and_services';
  $handler->display->display_options['fields']['field_m_goods_and_services']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_m_goods_and_services']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_m_goods_and_services']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_m_goods_and_services']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: N. Rent/mortgage payments) */
  $handler->display->display_options['fields']['field_n_rent_mortgage_payments']['id'] = 'field_n_rent_mortgage_payments';
  $handler->display->display_options['fields']['field_n_rent_mortgage_payments']['table'] = 'field_data_field_n_rent_mortgage_payments';
  $handler->display->display_options['fields']['field_n_rent_mortgage_payments']['field'] = 'field_n_rent_mortgage_payments';
  $handler->display->display_options['fields']['field_n_rent_mortgage_payments']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_n_rent_mortgage_payments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_n_rent_mortgage_payments']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_n_rent_mortgage_payments']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: O. Other) */
  $handler->display->display_options['fields']['field_o_other']['id'] = 'field_o_other';
  $handler->display->display_options['fields']['field_o_other']['table'] = 'field_data_field_o_other';
  $handler->display->display_options['fields']['field_o_other']['field'] = 'field_o_other';
  $handler->display->display_options['fields']['field_o_other']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_o_other']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_o_other']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_o_other']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: How many properties does the affiliate own?) */
  $handler->display->display_options['fields']['field_number_properties_owned']['id'] = 'field_number_properties_owned';
  $handler->display->display_options['fields']['field_number_properties_owned']['table'] = 'field_data_field_number_properties_owned';
  $handler->display->display_options['fields']['field_number_properties_owned']['field'] = 'field_number_properties_owned';
  $handler->display->display_options['fields']['field_number_properties_owned']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_number_properties_owned']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_number_properties_owned']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_number_properties_owned']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: How many properties does the affiliate rent?) */
  $handler->display->display_options['fields']['field_number_properties_rented']['id'] = 'field_number_properties_rented';
  $handler->display->display_options['fields']['field_number_properties_rented']['table'] = 'field_data_field_number_properties_rented';
  $handler->display->display_options['fields']['field_number_properties_rented']['field'] = 'field_number_properties_rented';
  $handler->display->display_options['fields']['field_number_properties_rented']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_number_properties_rented']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_number_properties_rented']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_number_properties_rented']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: If the affiliate owns its facilities, what is the current market value of the property?) */
  $handler->display->display_options['fields']['field_market_value_of_property']['id'] = 'field_market_value_of_property';
  $handler->display->display_options['fields']['field_market_value_of_property']['table'] = 'field_data_field_market_value_of_property';
  $handler->display->display_options['fields']['field_market_value_of_property']['field'] = 'field_market_value_of_property';
  $handler->display->display_options['fields']['field_market_value_of_property']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_market_value_of_property']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_market_value_of_property']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_market_value_of_property']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: If so, how much?) */
  $handler->display->display_options['fields']['field_capital_budget_amount']['id'] = 'field_capital_budget_amount';
  $handler->display->display_options['fields']['field_capital_budget_amount']['table'] = 'field_data_field_capital_budget_amount';
  $handler->display->display_options['fields']['field_capital_budget_amount']['field'] = 'field_capital_budget_amount';
  $handler->display->display_options['fields']['field_capital_budget_amount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_capital_budget_amount']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_capital_budget_amount']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_capital_budget_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Does the affiliate have a capital budget?) */
  $handler->display->display_options['fields']['field_capital_budget']['id'] = 'field_capital_budget';
  $handler->display->display_options['fields']['field_capital_budget']['table'] = 'field_data_field_capital_budget';
  $handler->display->display_options['fields']['field_capital_budget']['field'] = 'field_capital_budget';
  $handler->display->display_options['fields']['field_capital_budget']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_capital_budget']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_capital_budget']['empty_zero'] = TRUE;
  /* Field: SUM(Content: Total revenue for your affiliate:) */
  $handler->display->display_options['fields']['field_revenue_total_budget']['id'] = 'field_revenue_total_budget';
  $handler->display->display_options['fields']['field_revenue_total_budget']['table'] = 'field_data_field_revenue_total_budget';
  $handler->display->display_options['fields']['field_revenue_total_budget']['field'] = 'field_revenue_total_budget';
  $handler->display->display_options['fields']['field_revenue_total_budget']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_total_budget']['label'] = 'What is the total budget of your affiliate?';
  $handler->display->display_options['fields']['field_revenue_total_budget']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_total_budget']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_total_budget']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: NUL) */
  $handler->display->display_options['fields']['field_revenue_nul']['id'] = 'field_revenue_nul';
  $handler->display->display_options['fields']['field_revenue_nul']['table'] = 'field_data_field_revenue_nul';
  $handler->display->display_options['fields']['field_revenue_nul']['field'] = 'field_revenue_nul';
  $handler->display->display_options['fields']['field_revenue_nul']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_nul']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_nul']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_nul']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Corporations) */
  $handler->display->display_options['fields']['field_revenue_corporations']['id'] = 'field_revenue_corporations';
  $handler->display->display_options['fields']['field_revenue_corporations']['table'] = 'field_data_field_revenue_corporations';
  $handler->display->display_options['fields']['field_revenue_corporations']['field'] = 'field_revenue_corporations';
  $handler->display->display_options['fields']['field_revenue_corporations']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_corporations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_corporations']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_corporations']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Foundations) */
  $handler->display->display_options['fields']['field_revenue_foundations']['id'] = 'field_revenue_foundations';
  $handler->display->display_options['fields']['field_revenue_foundations']['table'] = 'field_data_field_revenue_foundations';
  $handler->display->display_options['fields']['field_revenue_foundations']['field'] = 'field_revenue_foundations';
  $handler->display->display_options['fields']['field_revenue_foundations']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_foundations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_foundations']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_foundations']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Individual Memberships) */
  $handler->display->display_options['fields']['field_revenue_individual_members']['id'] = 'field_revenue_individual_members';
  $handler->display->display_options['fields']['field_revenue_individual_members']['table'] = 'field_data_field_revenue_individual_members';
  $handler->display->display_options['fields']['field_revenue_individual_members']['field'] = 'field_revenue_individual_members';
  $handler->display->display_options['fields']['field_revenue_individual_members']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_individual_members']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_individual_members']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_individual_members']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Special Events) */
  $handler->display->display_options['fields']['field_revenue_special_events']['id'] = 'field_revenue_special_events';
  $handler->display->display_options['fields']['field_revenue_special_events']['table'] = 'field_data_field_revenue_special_events';
  $handler->display->display_options['fields']['field_revenue_special_events']['field'] = 'field_revenue_special_events';
  $handler->display->display_options['fields']['field_revenue_special_events']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_special_events']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_special_events']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_special_events']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: United Way) */
  $handler->display->display_options['fields']['field_revenue_united_way']['id'] = 'field_revenue_united_way';
  $handler->display->display_options['fields']['field_revenue_united_way']['table'] = 'field_data_field_revenue_united_way';
  $handler->display->display_options['fields']['field_revenue_united_way']['field'] = 'field_revenue_united_way';
  $handler->display->display_options['fields']['field_revenue_united_way']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_united_way']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_united_way']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_united_way']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Federal) */
  $handler->display->display_options['fields']['field_revenue_federal']['id'] = 'field_revenue_federal';
  $handler->display->display_options['fields']['field_revenue_federal']['table'] = 'field_data_field_revenue_federal';
  $handler->display->display_options['fields']['field_revenue_federal']['field'] = 'field_revenue_federal';
  $handler->display->display_options['fields']['field_revenue_federal']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_federal']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_federal']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_federal']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: State/Local) */
  $handler->display->display_options['fields']['field_revenue_state_local']['id'] = 'field_revenue_state_local';
  $handler->display->display_options['fields']['field_revenue_state_local']['table'] = 'field_data_field_revenue_state_local';
  $handler->display->display_options['fields']['field_revenue_state_local']['field'] = 'field_revenue_state_local';
  $handler->display->display_options['fields']['field_revenue_state_local']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_state_local']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_state_local']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_state_local']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: How much investment earnings (money market account, endowment)?) */
  $handler->display->display_options['fields']['field_revenue_investment']['id'] = 'field_revenue_investment';
  $handler->display->display_options['fields']['field_revenue_investment']['table'] = 'field_data_field_revenue_investment';
  $handler->display->display_options['fields']['field_revenue_investment']['field'] = 'field_revenue_investment';
  $handler->display->display_options['fields']['field_revenue_investment']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_investment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_investment']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_investment']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Affiliate Social Entrepreneurship Ventures and/or Income Generating Activities) */
  $handler->display->display_options['fields']['field_revenue_ventures']['id'] = 'field_revenue_ventures';
  $handler->display->display_options['fields']['field_revenue_ventures']['table'] = 'field_data_field_revenue_ventures';
  $handler->display->display_options['fields']['field_revenue_ventures']['field'] = 'field_revenue_ventures';
  $handler->display->display_options['fields']['field_revenue_ventures']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_ventures']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_ventures']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_ventures']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_revenue_ventures']['delta_offset'] = '0';
  /* Field: SUM(Content: Does the affiliate have an endowment?) */
  $handler->display->display_options['fields']['field_revenue_has_endowment']['id'] = 'field_revenue_has_endowment';
  $handler->display->display_options['fields']['field_revenue_has_endowment']['table'] = 'field_data_field_revenue_has_endowment';
  $handler->display->display_options['fields']['field_revenue_has_endowment']['field'] = 'field_revenue_has_endowment';
  $handler->display->display_options['fields']['field_revenue_has_endowment']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_has_endowment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_has_endowment']['empty_zero'] = TRUE;
  /* Field: SUM(Content: If so, what is the present amount?) */
  $handler->display->display_options['fields']['field_revenue_endowment_amount']['id'] = 'field_revenue_endowment_amount';
  $handler->display->display_options['fields']['field_revenue_endowment_amount']['table'] = 'field_data_field_revenue_endowment_amount';
  $handler->display->display_options['fields']['field_revenue_endowment_amount']['field'] = 'field_revenue_endowment_amount';
  $handler->display->display_options['fields']['field_revenue_endowment_amount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_revenue_endowment_amount']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_endowment_amount']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_revenue_endowment_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: If so, how many placements/recommendations for services do you make per year?) */
  $handler->display->display_options['fields']['field_program_ed_foster_total']['id'] = 'field_program_ed_foster_total';
  $handler->display->display_options['fields']['field_program_ed_foster_total']['table'] = 'field_data_field_program_ed_foster_total';
  $handler->display->display_options['fields']['field_program_ed_foster_total']['field'] = 'field_program_ed_foster_total';
  $handler->display->display_options['fields']['field_program_ed_foster_total']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_program_ed_foster_total']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_ed_foster_total']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_program_ed_foster_total']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Number of new businesses created) */
  $handler->display->display_options['fields']['field_program_entpr_new']['id'] = 'field_program_entpr_new';
  $handler->display->display_options['fields']['field_program_entpr_new']['table'] = 'field_data_field_program_entpr_new';
  $handler->display->display_options['fields']['field_program_entpr_new']['field'] = 'field_program_entpr_new';
  $handler->display->display_options['fields']['field_program_entpr_new']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_program_entpr_new']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_entpr_new']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_program_entpr_new']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Total sales of businesses started by participants in entrepreneurship programs (i.e. Small Business Matters)) */
  $handler->display->display_options['fields']['field_program_entpr_sales']['id'] = 'field_program_entpr_sales';
  $handler->display->display_options['fields']['field_program_entpr_sales']['table'] = 'field_data_field_program_entpr_sales';
  $handler->display->display_options['fields']['field_program_entpr_sales']['field'] = 'field_program_entpr_sales';
  $handler->display->display_options['fields']['field_program_entpr_sales']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_program_entpr_sales']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_entpr_sales']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_program_entpr_sales']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: How many participants attended or inquired about home ownership programs?) */
  $handler->display->display_options['fields']['field_program_housing_attended']['id'] = 'field_program_housing_attended';
  $handler->display->display_options['fields']['field_program_housing_attended']['table'] = 'field_data_field_program_housing_attended';
  $handler->display->display_options['fields']['field_program_housing_attended']['field'] = 'field_program_housing_attended';
  $handler->display->display_options['fields']['field_program_housing_attended']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_program_housing_attended']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_housing_attended']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_program_housing_attended']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Number of program participants who purchased a home) */
  $handler->display->display_options['fields']['field_program_housing_purchased']['id'] = 'field_program_housing_purchased';
  $handler->display->display_options['fields']['field_program_housing_purchased']['table'] = 'field_data_field_program_housing_purchased';
  $handler->display->display_options['fields']['field_program_housing_purchased']['field'] = 'field_program_housing_purchased';
  $handler->display->display_options['fields']['field_program_housing_purchased']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_program_housing_purchased']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_housing_purchased']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_program_housing_purchased']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: AVG(Content: Average price of homes purchased) */
  $handler->display->display_options['fields']['field_program_housing_avg_price']['id'] = 'field_program_housing_avg_price';
  $handler->display->display_options['fields']['field_program_housing_avg_price']['table'] = 'field_data_field_program_housing_avg_price';
  $handler->display->display_options['fields']['field_program_housing_avg_price']['field'] = 'field_program_housing_avg_price';
  $handler->display->display_options['fields']['field_program_housing_avg_price']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_program_housing_avg_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_housing_avg_price']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_program_housing_avg_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_program_work_avg_salary']['id'] = 'field_program_work_avg_salary';
  $handler->display->display_options['fields']['field_program_work_avg_salary']['table'] = 'field_data_field_program_work_avg_salary';
  $handler->display->display_options['fields']['field_program_work_avg_salary']['field'] = 'field_program_work_avg_salary';
  $handler->display->display_options['fields']['field_program_work_avg_salary']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_program_work_avg_salary']['label'] = 'Average salary for participants placed in jobs';
  $handler->display->display_options['fields']['field_program_work_avg_salary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_work_avg_salary']['empty_zero'] = TRUE;
  /* Field: SUM(Content: Annual welfare salary (if applicable)) */
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['id'] = 'field_program_work_welfare_salar';
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['table'] = 'field_data_field_program_work_welfare_salar';
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['field'] = 'field_program_work_welfare_salar';
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['label'] = 'Average salary of welfare recipieints placed in jobs';
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Number of participants placed in jobs) */
  $handler->display->display_options['fields']['field_program_work_placed']['id'] = 'field_program_work_placed';
  $handler->display->display_options['fields']['field_program_work_placed']['table'] = 'field_data_field_program_work_placed';
  $handler->display->display_options['fields']['field_program_work_placed']['field'] = 'field_program_work_placed';
  $handler->display->display_options['fields']['field_program_work_placed']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_program_work_placed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_work_placed']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_program_work_placed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Number of welfare participants in federal/state funded programs) */
  $handler->display->display_options['fields']['field_program_work_welfare']['id'] = 'field_program_work_welfare';
  $handler->display->display_options['fields']['field_program_work_welfare']['table'] = 'field_data_field_program_work_welfare';
  $handler->display->display_options['fields']['field_program_work_welfare']['field'] = 'field_program_work_welfare';
  $handler->display->display_options['fields']['field_program_work_welfare']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_program_work_welfare']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_work_welfare']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_program_work_welfare']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Number of welfare program participants placed in jobs) */
  $handler->display->display_options['fields']['field_program_work_welfare_place']['id'] = 'field_program_work_welfare_place';
  $handler->display->display_options['fields']['field_program_work_welfare_place']['table'] = 'field_data_field_program_work_welfare_place';
  $handler->display->display_options['fields']['field_program_work_welfare_place']['field'] = 'field_program_work_welfare_place';
  $handler->display->display_options['fields']['field_program_work_welfare_place']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_program_work_welfare_place']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_program_work_welfare_place']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_program_work_welfare_place']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Voter - Total Number Served or Registered (Male and Female)) */
  $handler->display->display_options['fields']['field_voter_societal_impact']['id'] = 'field_voter_societal_impact';
  $handler->display->display_options['fields']['field_voter_societal_impact']['table'] = 'field_data_field_voter_societal_impact';
  $handler->display->display_options['fields']['field_voter_societal_impact']['field'] = 'field_voter_societal_impact';
  $handler->display->display_options['fields']['field_voter_societal_impact']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_voter_societal_impact']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_voter_societal_impact']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_voter_societal_impact']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Community Forums Societal Impact) */
  $handler->display->display_options['fields']['field_forums_societal_impact']['id'] = 'field_forums_societal_impact';
  $handler->display->display_options['fields']['field_forums_societal_impact']['table'] = 'field_data_field_forums_societal_impact';
  $handler->display->display_options['fields']['field_forums_societal_impact']['field'] = 'field_forums_societal_impact';
  $handler->display->display_options['fields']['field_forums_societal_impact']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_forums_societal_impact']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_forums_societal_impact']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_forums_societal_impact']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Advocacy Efforts Societal Impact) */
  $handler->display->display_options['fields']['field_advocacy_societal_impact']['id'] = 'field_advocacy_societal_impact';
  $handler->display->display_options['fields']['field_advocacy_societal_impact']['table'] = 'field_data_field_advocacy_societal_impact';
  $handler->display->display_options['fields']['field_advocacy_societal_impact']['field'] = 'field_advocacy_societal_impact';
  $handler->display->display_options['fields']['field_advocacy_societal_impact']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_advocacy_societal_impact']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_advocacy_societal_impact']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_advocacy_societal_impact']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Police Brutality Societal Impact) */
  $handler->display->display_options['fields']['field_police_societal_impact']['id'] = 'field_police_societal_impact';
  $handler->display->display_options['fields']['field_police_societal_impact']['table'] = 'field_data_field_police_societal_impact';
  $handler->display->display_options['fields']['field_police_societal_impact']['field'] = 'field_police_societal_impact';
  $handler->display->display_options['fields']['field_police_societal_impact']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_police_societal_impact']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_police_societal_impact']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_police_societal_impact']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Civil Rights & Justice Activities Societal Impact) */
  $handler->display->display_options['fields']['field_crja_societal_impact']['id'] = 'field_crja_societal_impact';
  $handler->display->display_options['fields']['field_crja_societal_impact']['table'] = 'field_data_field_crja_societal_impact';
  $handler->display->display_options['fields']['field_crja_societal_impact']['field'] = 'field_crja_societal_impact';
  $handler->display->display_options['fields']['field_crja_societal_impact']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_crja_societal_impact']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_crja_societal_impact']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_crja_societal_impact']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Community Organization Societal Impact) */
  $handler->display->display_options['fields']['field_comm_org_societal_impact']['id'] = 'field_comm_org_societal_impact';
  $handler->display->display_options['fields']['field_comm_org_societal_impact']['table'] = 'field_data_field_comm_org_societal_impact';
  $handler->display->display_options['fields']['field_comm_org_societal_impact']['field'] = 'field_comm_org_societal_impact';
  $handler->display->display_options['fields']['field_comm_org_societal_impact']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_comm_org_societal_impact']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_comm_org_societal_impact']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_comm_org_societal_impact']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'civic_engagement' => 'civic_engagement',
    'program_education' => 'program_education',
    'program_entrepreneurship' => 'program_entrepreneurship',
    'expenditures' => 'expenditures',
    'program_housing' => 'program_housing',
    'revenue' => 'revenue',
    'program_workforce' => 'program_workforce',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['relationship'] = 'field_parent_census_target_id';
  $handler->display->display_options['filters']['field_year_value']['operator'] = '=';
  $handler->display->display_options['filters']['field_year_value']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
  );
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_first_name_format']['id'] = 'field_first_name_format';
  $handler->display->display_options['filters']['field_first_name_format']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_format']['field'] = 'field_first_name_format';
  $handler->display->display_options['filters']['field_first_name_format']['relationship'] = 'field_parent_census_target_id';
  $handler->display->display_options['filters']['field_first_name_format']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_format']['expose']['operator_id'] = 'field_first_name_format_op';
  $handler->display->display_options['filters']['field_first_name_format']['expose']['label'] = 'Affiliate Name';
  $handler->display->display_options['filters']['field_first_name_format']['expose']['operator'] = 'field_first_name_format_op';
  $handler->display->display_options['filters']['field_first_name_format']['expose']['identifier'] = 'field_first_name_format';
  $handler->display->display_options['filters']['field_first_name_format']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'census-summary';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'census-summary/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['throwa'] = array(
    t('Master'),
    t('Report: Census Summary'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Parent Census'),
    t('What was the total expenditure by your affiliate for expenses (include salaries, rent/mortgage, equipment, etc.)?'),
    t('Type'),
    t('A. Salaries/Wages'),
    t('B. Fringe Benefits'),
    t('C. Professional/Contract/Consulting Fees'),
    t('D. Travel'),
    t('E. Postage/Freight'),
    t('F. Insurance'),
    t('G. Interest Payments'),
    t('H. Dues/Subscription/Registration'),
    t('I. Depreciation'),
    t('J. Taxes (including property taxes)'),
    t('K. Utilities (telephone, gas, electric)'),
    t('L. Equipment/space rental'),
    t('M. Goods and Services'),
    t('N. Rent/mortgage payments'),
    t('O. Other'),
    t('How many properties does the affiliate own?'),
    t('How many properties does the affiliate rent?'),
    t('If the affiliate owns its facilities, what is the current market value of the property?'),
    t('If so, how much?'),
    t('Does the affiliate have a capital budget?'),
    t('What is the total budget of your affiliate?'),
    t('NUL'),
    t('Corporations'),
    t('Foundations'),
    t('Individual Memberships'),
    t('Special Events'),
    t('United Way'),
    t('Federal'),
    t('State/Local'),
    t('How much investment earnings (money market account, endowment)?'),
    t('Affiliate Social Entrepreneurship Ventures and/or Income Generating Activities'),
    t('Does the affiliate have an endowment?'),
    t('If so, what is the present amount?'),
    t('If so, how many placements/recommendations for services do you make per year?'),
    t('Number of new businesses created'),
    t('Total sales of businesses started by participants in entrepreneurship programs (i.e. Small Business Matters)'),
    t('How many participants attended or inquired about home ownership programs?'),
    t('Number of program participants who purchased a home'),
    t('Average price of homes purchased'),
    t('Average salary for participants placed in jobs'),
    t('Average salary of welfare recipieints placed in jobs'),
    t('Number of participants placed in jobs'),
    t('Number of welfare participants in federal/state funded programs'),
    t('Number of welfare program participants placed in jobs'),
    t('Voter - Total Number Served or Registered (Male and Female)'),
    t('Community Forums Societal Impact'),
    t('Advocacy Efforts Societal Impact'),
    t('Police Brutality Societal Impact'),
    t('Civil Rights & Justice Activities Societal Impact'),
    t('Community Organization Societal Impact'),
    t('Year'),
    t('Affiliate Name'),
    t('Page'),
    t('Data export'),
  );
  $export['throwa'] = $view;

  $view = new view();
  $view->name = 'workforce_development_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Workforce Development Report (Required Report 3)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Workforce Development Report (Required Report 3)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_census_target_id']['id'] = 'field_parent_census_target_id';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['table'] = 'field_data_field_parent_census';
  $handler->display->display_options['relationships']['field_parent_census_target_id']['field'] = 'field_parent_census_target_id';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_affiliate_value']['id'] = 'field_affiliate_value';
  $handler->display->display_options['filters']['field_affiliate_value']['table'] = 'field_data_field_affiliate';
  $handler->display->display_options['filters']['field_affiliate_value']['field'] = 'field_affiliate_value';
  $handler->display->display_options['filters']['field_affiliate_value']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
  );
  $handler->display->display_options['filters']['field_affiliate_value']['expose']['operator_id'] = 'field_affiliate_value_op';
  $handler->display->display_options['filters']['field_affiliate_value']['expose']['label'] = 'Affiliate ID (field_affiliate)';
  $handler->display->display_options['filters']['field_affiliate_value']['expose']['operator'] = 'field_affiliate_value_op';
  $handler->display->display_options['filters']['field_affiliate_value']['expose']['identifier'] = 'field_affiliate_value';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_first_name' => 'field_first_name',
    'field_program_work_salary' => 'field_program_work_salary',
    'field_program_work_avg_salary' => 'field_program_work_avg_salary',
    'field_program_work_welfare_salar' => 'field_program_work_welfare_salar',
    'field_program_work_credentials' => 'field_program_work_credentials',
    'field_program_work_placed' => 'field_program_work_placed',
    'field_program_work_retained' => 'field_program_work_retained',
    'field_program_work_welfare' => 'field_program_work_welfare',
    'field_program_work_welfare_place' => 'field_program_work_welfare_place',
    'field_program_work_hourly' => 'field_program_work_hourly',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_work_salary' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_work_avg_salary' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_work_welfare_salar' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_work_credentials' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_work_placed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_work_retained' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_work_welfare' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_work_welfare_place' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_program_work_hourly' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_parent_census_target_id';
  /* Field: Content: affiliate select */
  $handler->display->display_options['fields']['field_affiliate_select']['id'] = 'field_affiliate_select';
  $handler->display->display_options['fields']['field_affiliate_select']['table'] = 'field_data_field_affiliate_select';
  $handler->display->display_options['fields']['field_affiliate_select']['field'] = 'field_affiliate_select';
  $handler->display->display_options['fields']['field_affiliate_select']['relationship'] = 'field_parent_census_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content:  Number of clients who received workforce development/job placement counseling from your affiliate last year? */
  $handler->display->display_options['fields']['field_program_work_counseling']['id'] = 'field_program_work_counseling';
  $handler->display->display_options['fields']['field_program_work_counseling']['table'] = 'field_data_field_program_work_counseling';
  $handler->display->display_options['fields']['field_program_work_counseling']['field'] = 'field_program_work_counseling';
  $handler->display->display_options['fields']['field_program_work_counseling']['label'] = '# clients who received counseling';
  $handler->display->display_options['fields']['field_program_work_counseling']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_work_counseling']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Number of participants in employment/workforce development programs (exclude welfare recipients)? */
  $handler->display->display_options['fields']['field_program_work_participants']['id'] = 'field_program_work_participants';
  $handler->display->display_options['fields']['field_program_work_participants']['table'] = 'field_data_field_program_work_participants';
  $handler->display->display_options['fields']['field_program_work_participants']['field'] = 'field_program_work_participants';
  $handler->display->display_options['fields']['field_program_work_participants']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Number of participants placed in jobs */
  $handler->display->display_options['fields']['field_program_work_placed']['id'] = 'field_program_work_placed';
  $handler->display->display_options['fields']['field_program_work_placed']['table'] = 'field_data_field_program_work_placed';
  $handler->display->display_options['fields']['field_program_work_placed']['field'] = 'field_program_work_placed';
  $handler->display->display_options['fields']['field_program_work_placed']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Annual salary (if applicable) */
  $handler->display->display_options['fields']['field_program_work_salary']['id'] = 'field_program_work_salary';
  $handler->display->display_options['fields']['field_program_work_salary']['table'] = 'field_data_field_program_work_salary';
  $handler->display->display_options['fields']['field_program_work_salary']['field'] = 'field_program_work_salary';
  $handler->display->display_options['fields']['field_program_work_salary']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: or Hourly wage rate */
  $handler->display->display_options['fields']['field_program_work_hourly']['id'] = 'field_program_work_hourly';
  $handler->display->display_options['fields']['field_program_work_hourly']['table'] = 'field_data_field_program_work_hourly';
  $handler->display->display_options['fields']['field_program_work_hourly']['field'] = 'field_program_work_hourly';
  $handler->display->display_options['fields']['field_program_work_hourly']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Number of welfare participants in federal/state funded programs */
  $handler->display->display_options['fields']['field_program_work_welfare']['id'] = 'field_program_work_welfare';
  $handler->display->display_options['fields']['field_program_work_welfare']['table'] = 'field_data_field_program_work_welfare';
  $handler->display->display_options['fields']['field_program_work_welfare']['field'] = 'field_program_work_welfare';
  $handler->display->display_options['fields']['field_program_work_welfare']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Number of welfare program participants placed in jobs */
  $handler->display->display_options['fields']['field_program_work_welfare_place']['id'] = 'field_program_work_welfare_place';
  $handler->display->display_options['fields']['field_program_work_welfare_place']['table'] = 'field_data_field_program_work_welfare_place';
  $handler->display->display_options['fields']['field_program_work_welfare_place']['field'] = 'field_program_work_welfare_place';
  $handler->display->display_options['fields']['field_program_work_welfare_place']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Annual welfare salary (if applicable) */
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['id'] = 'field_program_work_welfare_salar';
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['table'] = 'field_data_field_program_work_welfare_salar';
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['field'] = 'field_program_work_welfare_salar';
  $handler->display->display_options['fields']['field_program_work_welfare_salar']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: or Hourly wage rate (welfare) */
  $handler->display->display_options['fields']['field_program_work_welfare_hour']['id'] = 'field_program_work_welfare_hour';
  $handler->display->display_options['fields']['field_program_work_welfare_hour']['table'] = 'field_data_field_program_work_welfare_hour';
  $handler->display->display_options['fields']['field_program_work_welfare_hour']['field'] = 'field_program_work_welfare_hour';
  $handler->display->display_options['fields']['field_program_work_welfare_hour']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['path'] = 'workforce-development-report-required-report-3';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'export3';
  $translatables['workforce_development_report'] = array(
    t('Master'),
    t('Workforce Development Report (Required Report 3)'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_parent_census'),
    t('Affiliate ID (field_affiliate)'),
    t('Page'),
    t('Title'),
    t('affiliate select'),
    t('# clients who received counseling'),
    t('Number of participants in employment/workforce development programs (exclude welfare recipients)?'),
    t('Number of participants placed in jobs'),
    t('Annual salary (if applicable)'),
    t('or Hourly wage rate'),
    t('Number of welfare participants in federal/state funded programs'),
    t('Number of welfare program participants placed in jobs'),
    t('Annual welfare salary (if applicable)'),
    t('or Hourly wage rate (welfare)'),
    t('Data export'),
  );
  $export['workforce_development_report'] = $view;

  return $export;
}
