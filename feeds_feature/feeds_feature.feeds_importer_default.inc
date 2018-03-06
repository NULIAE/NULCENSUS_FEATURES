<?php
/**
 * @file
 * feeds_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'communityrelations';
  $feeds_importer->config = array(
    'name' => 'CommunityRelations',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'crReportYesNo',
            'target' => 'field_produces_annual_report',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'crNewsletterYesNo',
            'target' => 'field_newsletter',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'crStateofBlackYesNo',
            'target' => 'field_state_of_black_report',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'crWebsite',
            'target' => 'field_maintains_website',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'crWebsiteAddress',
            'target' => 'field_affiliate_website_address',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'crNoOfHits',
            'target' => 'field_monthly_website_hits',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'crNULWebsite',
            'target' => 'field_is_website_linked_to_nul',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'crTVYesNo',
            'target' => 'field_produces_tv_or_cable_show',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'crRadioShowYesNo',
            'target' => 'field_produces_a_radio_show',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'crCampaignYesNo',
            'target' => 'field_has_ad_marketing_campaign',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'crMethod',
            'target' => 'field_method_of_ad_marketing',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'crMarketingKitYesNo',
            'target' => 'field_marketing_kit_or_pamphlet',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'community_relations',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['communityrelations'] = $feeds_importer;

  return $export;
}
