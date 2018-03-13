<?php
/**
 * @file
 * census.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function census_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_address_line_1'.
  $field_bases['field_address_line_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address_line_1',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_address_line_2'.
  $field_bases['field_address_line_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address_line_2',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_affiliate_select'.
  $field_bases['field_affiliate_select'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_affiliate_select',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        20 => 'Akron Urban League',
        21 => 'Austin Area Urban League',
        1 => 'Birmingham Urban League',
        22 => 'Broome County Urban League',
        23 => 'Buffalo Urban League',
        24 => 'Central Florida Urban League',
        25 => 'Charleston Trident Urban League',
        26 => 'Chicago Urban League',
        27 => 'Columbus Urban League',
        28 => 'Fort Wayne Urban League',
        29 => 'Grand Rapids Urban League',
        30 => 'Greater Baltimore Urban League',
        31 => 'Greater Phoenix Urban League',
        32 => 'Greater Sacramento Urban League',
        33 => 'Greater Stark County Urban League',
        34 => 'Greater Toledo Urban League',
        35 => 'Greater Warren-Youngstown Urban League',
        36 => 'Greater Washington Urban League',
        2 => 'Houston Urban League',
        37 => 'Indianapolis Urban League Orleans',
        38 => 'Jacksonville Urban League',
        39 => 'Knoxville Area Urban League',
        8 => 'Las Vegas Urban League',
        10 => 'Lorain County Urban League',
        9 => 'Los Angeles Urban League',
        40 => 'Louisville Urban League',
        41 => 'Madison County Urban League',
        42 => 'Memphis Urban League',
        43 => 'Metropolitan Tulsa Urban League',
        44 => 'Metropolitan Wilmington Urban League',
        45 => 'Milwaukee Urban League',
        46 => 'Minneapolis Urban League',
        200 => 'National Urban League',
        47 => 'New York Urban League',
        48 => 'Northern Virginia Urban League',
        49 => 'Pinellas County Urban League',
        3 => 'Quad County Urban League',
        50 => 'Saint Paul Urban League',
        52 => 'Southwestern Michigan Urban League',
        11 => 'Springfield Urban League',
        53 => 'Tacoma Urban League',
        54 => 'Tallahassee Urban League',
        55 => 'The Dayton Urban League',
        12 => 'Tri County Urban League',
        56 => 'Tucson Urban League',
        57 => 'Urban League of Anchorage-Alaska',
        58 => 'Urban League of Bergen County',
        4 => 'Urban League of Broward County',
        59 => 'Urban League of Central Carolinas',
        5 => 'Urban League of Cincinnati',
        60 => 'Urban League of Columbia',
        61 => 'Urban League of Detroit & Southeastern Michigan',
        62 => 'Urban League of Eastern Massachusetts',
        13 => 'Urban League of Essex County',
        63 => 'Urban League of Flint',
        14 => 'Urban League of Greater Atlanta',
        64 => 'Urban League of Greater Chattanooga',
        6 => 'Urban League of Greater Cleveland',
        65 => 'Urban League of Greater Columbus',
        18 => 'Urban League of Greater Dallas & North Central Texas',
        66 => 'Urban League of Greater Hartford',
        67 => 'Urban League of Greater Jackson',
        68 => 'Urban League of Greater Kansas City',
        69 => 'Urban League of Greater Madison',
        70 => 'Urban League of Greater Miami',
        71 => 'Urban League of Greater Muskegon',
        15 => 'Urban League of Louisiana',
        19 => 'Urban League of Greater Pittsburgh',
        72 => 'Urban League of Greater Richmond',
        73 => 'Urban League of Hampton Roads',
        74 => 'Urban League of Hudson County',
        99 => 'Urban League of Kansas',
        75 => 'Urban League of Kansas City',
        76 => 'Urban League of Lancaster County',
        77 => 'Urban League of Lexington-Fayette County',
        78 => 'Urban League of Long Island',
        79 => 'Urban League of Madison County',
        80 => 'Urban League of Metropolitan Denver',
        81 => 'Urban League of Metropolitan Saint Louis',
        82 => 'Urban League of Metropolitan Seattle',
        83 => 'Urban League of Middle Tennessee',
        84 => 'Urban League of Morris County',
        85 => 'Urban League of Nebraska',
        86 => 'Urban League of Northwest Indiana',
        16 => 'Urban League of Oklahoma City',
        17 => 'Urban League of Palm Beach County',
        87 => 'Urban League of Philadelphia',
        88 => 'Urban League of Pikes Peak Region',
        89 => 'Urban League of Portland',
        90 => 'Urban League of Racine and Kenosha',
        91 => 'Urban League of Rhode Island',
        7 => 'Urban League of Rochester',
        92 => 'Urban League of San Diego County',
        51 => 'Urban League of Shenango Valley',
        93 => 'Urban League of Southern Connecticut',
        94 => 'Urban League of Springfield',
        95 => 'Urban League of the Upstate',
        96 => 'Urban League of Union County',
        97 => 'Urban League of Westchester County',
        98 => 'Winston-Salem Urban League',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_cellular_number'.
  $field_bases['field_cellular_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cellular_number',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_census_status'.
  $field_bases['field_census_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_census_status',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'status_type_for_census',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_city'.
  $field_bases['field_city'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_city',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_date_established'.
  $field_bases['field_date_established'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date_established',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_email_address'.
  $field_bases['field_email_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_address',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_fax'.
  $field_bases['field_fax'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fax',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_legacy_census_id'.
  $field_bases['field_legacy_census_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_legacy_census_id',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_legacy_comments_contact'.
  $field_bases['field_legacy_comments_contact'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_legacy_comments_contact',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_number_of_years_as_ceo'.
  $field_bases['field_number_of_years_as_ceo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_number_of_years_as_ceo',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_number_of_years_of_service'.
  $field_bases['field_number_of_years_of_service'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_number_of_years_of_service',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_photo'.
  $field_bases['field_photo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_photo',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_president_ceo_first_name'.
  $field_bases['field_president_ceo_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_president_ceo_first_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_president_ceo_last_name'.
  $field_bases['field_president_ceo_last_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_president_ceo_last_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_president_ceo_middle_name'.
  $field_bases['field_president_ceo_middle_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_president_ceo_middle_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_state_province'.
  $field_bases['field_state_province'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_state_province',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Armed Forces Americas' => 'Armed Forces Americas',
        'Armed Forces Europe, Middle East, & Canada' => 'Armed Forces Europe, Middle East, & Canada',
        'Alaska' => 'Alaska',
        'Alabama' => 'Alabama',
        'Armed Forces Pacific' => 'Armed Forces Pacific',
        'Arkansas' => 'Arkansas',
        'American Samoa' => 'American Samoa',
        'Arizona' => 'Arizona',
        'California' => 'California',
        'Colorado' => 'Colorado',
        'Connecticut' => 'Connecticut',
        'District of Columbia' => 'District of Columbia',
        'Delaware' => 'Delaware',
        'Florida' => 'Florida',
        'Federated States of Micronesia' => 'Federated States of Micronesia',
        'Georgia' => 'Georgia',
        'Guam' => 'Guam',
        'Hawaii' => 'Hawaii',
        'Iowa' => 'Iowa',
        'Idaho' => 'Idaho',
        'Illinois' => 'Illinois',
        'Indiana' => 'Indiana',
        'Kansas' => 'Kansas',
        'Kentucky' => 'Kentucky',
        'Louisiana' => 'Louisiana',
        'Massachusetts' => 'Massachusetts',
        'Maryland' => 'Maryland',
        'Maine' => 'Maine',
        'Marshall Islands' => 'Marshall Islands',
        'Michigan' => 'Michigan',
        'Minnesota' => 'Minnesota',
        'Missouri' => 'Missouri',
        'Northern Mariana Islands' => 'Northern Mariana Islands',
        'Mississippi' => 'Mississippi',
        'Montana' => 'Montana',
        'North Carolina' => 'North Carolina',
        'North Dakota' => 'North Dakota',
        'Nebraska' => 'Nebraska',
        'New Hampshire' => 'New Hampshire',
        'New Jersey' => 'New Jersey',
        'New Mexico' => 'New Mexico',
        'Nevada' => 'Nevada',
        'New York' => 'New York',
        'Ohio' => 'Ohio',
        'Oklahoma' => 'Oklahoma',
        'Oregon' => 'Oregon',
        'Pennsylvania' => 'Pennsylvania',
        'Puerto Rico' => 'Puerto Rico',
        'Palau' => 'Palau',
        'Rhode Island' => 'Rhode Island',
        'South Carolina' => 'South Carolina',
        'South Dakota' => 'South Dakota',
        'Tennessee' => 'Tennessee',
        'Texas' => 'Texas',
        'Utah' => 'Utah',
        'Virginia' => 'Virginia',
        'Virgin Islands' => 'Virgin Islands',
        'Vermont' => 'Vermont',
        'Washington' => 'Washington',
        'West Virginia' => 'West Virginia',
        'Wisconsin' => 'Wisconsin',
        'Wyoming' => 'Wyoming',
        'Alberta' => 'Alberta',
        'British Columbia' => 'British Columbia',
        'Manitoba' => 'Manitoba',
        'New Brunswick' => 'New Brunswick',
        'Newfoundland' => 'Newfoundland',
        'Nova Scotia' => 'Nova Scotia',
        'Nunavut' => 'Nunavut',
        'Ontario' => 'Ontario',
        'Prince Edward Island' => 'Prince Edward Island',
        'Quebec' => 'Quebec',
        'Saskatchewan' => 'Saskatchewan',
        'Northwest Territories' => 'Northwest Territories',
        'Yukon Territory' => 'Yukon Territory',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_survey_name_of_certifier'.
  $field_bases['field_survey_name_of_certifier'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_survey_name_of_certifier',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_telephone'.
  $field_bases['field_telephone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_telephone',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_year'.
  $field_bases['field_year'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_year',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        2018 => 2018,
        2017 => 2017,
        2016 => 2016,
        2015 => 2015,
        2014 => 2014,
        2013 => 2013,
        2012 => 2012,
        2011 => 2011,
        2010 => 2010,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_zip_code'.
  $field_bases['field_zip_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_zip_code',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
