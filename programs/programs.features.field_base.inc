<?php
/**
 * @file
 * programs.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function programs_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_content_type'.
  $field_bases['field_content_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content_type',
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
        'program_education' => 'program_education',
        'program_workforce' => 'program_workforce',
        'program_health' => 'program_health',
        'program_entrepreneurship' => 'program_entrepreneurship',
        'program_housing' => 'program_housing',
        'program_other' => 'program_other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_education_dollars_header'.
  $field_bases['field_education_dollars_header'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_education_dollars_header',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="nulTableCell"><h3>Dollars</h3></div>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_education_hours_header'.
  $field_bases['field_education_hours_header'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_education_hours_header',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="nulTableCell"><h3>Hours</h3></div>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_education_people_header'.
  $field_bases['field_education_people_header'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_education_people_header',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="nulTableCell"><h3>People Served</h3></div>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_education_service_header'.
  $field_bases['field_education_service_header'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_education_service_header',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="nulTableCell"><h3>Service Provided</h3></div>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_funding_amount'.
  $field_bases['field_funding_amount'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_funding_amount',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 0,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_funding_amount_label'.
  $field_bases['field_funding_amount_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_funding_amount_label',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="nulTableCell"><h3>Amount Funded</h3></div>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_funding_funding_source'.
  $field_bases['field_funding_funding_source'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_funding_funding_source',
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
        '10KSB' => '10KSB',
        '1st Tee of Louisville' => '1st Tee of Louisville',
        '21st Century Community Learning Centers' => '21st Century Community Learning Centers',
        '21st Century East Aurora CIS' => '21st Century East Aurora CIS',
        'AARP' => 'AARP',
        'Abbott' => 'Abbott',
        'Affordable Housing' => 'Affordable Housing',
        'Affordable Housing Shelter' => 'Affordable Housing Shelter',
        'Aflac' => 'Aflac',
        'African American Community Fund' => 'African American Community Fund',
        'Aging Disability Services Division' => 'Aging Disability Services Division',
        'ALCOA' => 'ALCOA',
        'Allegany Franciscan Foundation' => 'Allegany Franciscan Foundation',
        'Allegany Franciscan Ministries' => 'Allegany Franciscan Ministries',
        'Alliance for School Choice' => 'Alliance for School Choice',
        'Allstate' => 'Allstate',
        'ALSTOM Signaling Foundation' => 'ALSTOM Signaling Foundation',
        'Ameren' => 'Ameren',
        'Ameren Missouri' => 'Ameren Missouri',
        'AmeriCorps Program' => 'AmeriCorps Program',
        'Ann Kheel Foundation' => 'Ann Kheel Foundation',
        'Area Health Education Center' => 'Area Health Education Center',
        'Arnold' => 'Arnold',
        'AT&T' => 'AT&T',
        'Aurora Township' => 'Aurora Township',
        'Austin Community College- City of Austin' => 'Austin Community College- City of Austin',
        'AZ Commerce Authority' => 'AZ Commerce Authority',
        'Bank of America' => 'Bank of America',
        'Bank of Oklahoma' => 'Bank of Oklahoma',
        'Bank United' => 'Bank United',
        'Battle Creek Public Schools' => 'Battle Creek Public Schools',
        'Bill and Melinda Gates Foundation' => 'Bill and Melinda Gates Foundation',
        'BJC' => 'BJC',
        'Bloomberg' => 'Bloomberg',
        'BOA' => 'BOA',
        'Boeing' => 'Boeing',
        'BP' => 'BP',
        'BP America' => 'BP America',
        'Bradley Tuner' => 'Bradley Tuner',
        'Buhl Foundation' => 'Buhl Foundation',
        'Burton D. Morgan Foundation' => 'Burton D. Morgan Foundation',
        'By donation only' => 'By donation only',
        'CAANH' => 'CAANH',
        'California State University Sacramento' => 'California State University Sacramento',
        'CalWorks' => 'CalWorks',
        'Capital Federal' => 'Capital Federal',
        'Capital One' => 'Capital One',
        'Capital Workforce Partners' => 'Capital Workforce Partners',
        'CareerLink' => 'CareerLink',
        'Cascadia Behavioral Health' => 'Cascadia Behavioral Health',
        'Catholic Health System' => 'Catholic Health System',
        'CDBG-PCSI' => 'CDBG-PCSI',
        'CDC' => 'CDC',
        'CDFI' => 'CDFI',
        'Centene' => 'Centene',
        'Centerpoint' => 'Centerpoint',
        'Chase' => 'Chase',
        'Chase Settlement' => 'Chase Settlement',
        'Chevron' => 'Chevron',
        'CHFA' => 'CHFA',
        'Chicago Community Trust' => 'Chicago Community Trust',
        'Child Care and Development Block Grant (CCDBG)' => 'Child Care and Development Block Grant (CCDBG)',
        'Childcare Connection' => 'Childcare Connection',
        'Children\'s Services Council' => 'Children\'s Services Council',
        'Children\'s Services Council of Broward County' => 'Children\'s Services Council of Broward County',
        'CICF' => 'CICF',
        'Cincinnati Public Schools' => 'Cincinnati Public Schools',
        'Cith of Chicago Department of Business Affairs and Consumer Protection' => 'Cith of Chicago Department of Business Affairs and Consumer Protection',
        'Citi' => 'Citi',
        'Citizens Bank' => 'Citizens Bank',
        'City ESG and EFSGP' => 'City ESG and EFSGP',
        'Clark County' => 'Clark County',
        'Cleveland Foundation' => 'Cleveland Foundation',
        'Cleveland Metropolitan School District' => 'Cleveland Metropolitan School District',
        'Clinical and Translational Science Institute' => 'Clinical and Translational Science Institute',
        'Coca Cola Company' => 'Coca Cola Company',
        'Comcast' => 'Comcast',
        'ComEd' => 'ComEd',
        'Commonwelath of PA' => 'Commonwelath of PA',
        'Community Development' => 'Community Development',
        'Community Development Block Grant (CDBG)' => 'Community Development Block Grant (CDBG)',
        'Community Foundation' => 'Community Foundation',
        'Community foundation of Broward' => 'Community foundation of Broward',
        'Community Health Foundation' => 'Community Health Foundation',
        'Community Health Network of Buffalo' => 'Community Health Network of Buffalo',
        'Community Resource Management OAG' => 'Community Resource Management OAG',
        'Community Winterhelp Inc.' => 'Community Winterhelp Inc.',
        'CON EDISON' => 'CON EDISON',
        'Connecticut Housing Finance Authority' => 'Connecticut Housing Finance Authority',
        'Consortium for Worker Ed' => 'Consortium for Worker Ed',
        'Construction Employer Association' => 'Construction Employer Association',
        'Country Financial' => 'Country Financial',
        'Cremer Foundation' => 'Cremer Foundation',
        'Criminal Justice Coordinating Council' => 'Criminal Justice Coordinating Council',
        'CSBG' => 'CSBG',
        'CT Department of Education' => 'CT Department of Education',
        'CUNA Mutual Foundation' => 'CUNA Mutual Foundation',
        'Cuyahoga County Family and Children First Council' => 'Cuyahoga County Family and Children First Council',
        'Cuyahoga Metropolitan Housing Association' => 'Cuyahoga Metropolitan Housing Association',
        'Dane County Department of Human Services' => 'Dane County Department of Human Services',
        'Dane County Human Services' => 'Dane County Human Services',
        'DCA' => 'DCA',
        'DCEO' => 'DCEO',
        'DCFS Dept of Child and Family Services' => 'DCFS Dept of Child and Family Services',
        'DEAL' => 'DEAL',
        'DeKalb County' => 'DeKalb County',
        'DEO' => 'DEO',
        'DES Wings Like Eagles' => 'DES Wings Like Eagles',
        'Discover' => 'Discover',
        'District 131' => 'District 131',
        'Division of Child Protection and Permanency' => 'Division of Child Protection and Permanency',
        'Division of Social Services' => 'Division of Social Services',
        'Division of Welfare and Supportive Services' => 'Division of Welfare and Supportive Services',
        'Dollar More' => 'Dollar More',
        'Doug Maria DeVos Foundation' => 'Doug Maria DeVos Foundation',
        'DSS' => 'DSS',
        'DVR and SER Senior Program.' => 'DVR and SER Senior Program.',
        'DWSS' => 'DWSS',
        'East Tennessee Foundation' => 'East Tennessee Foundation',
        'ECDSS' => 'ECDSS',
        'Education and Training Division' => 'Education and Training Division',
        'EEIP SSBG TANF-49 OSA SEC URRD AZ COMMUNITY UURD  SW GAS  AZ HOME ENERGY ASST HOUSE. URRD  CSBG  LIHEAP' => 'EEIP SSBG TANF-49 OSA SEC URRD AZ COMMUNITY UURD  SW GAS  AZ HOME ENERGY ASST HOUSE. URRD  CSBG  LIHEAP',
        'EITC' => 'EITC',
        'Elyria Noon Rotary' => 'Elyria Noon Rotary',
        'Emerald Cities' => 'Emerald Cities',
        'Emergency Food and Shelter' => 'Emergency Food and Shelter',
        'Emerson Electric' => 'Emerson Electric',
        'Empire State Development Corporation' => 'Empire State Development Corporation',
        'Enroll Michigan' => 'Enroll Michigan',
        'Enterprise Rent a car' => 'Enterprise Rent a car',
        'Episcopal Health Foundation' => 'Episcopal Health Foundation',
        'ESPN' => 'ESPN',
        'ETAS and Oberlin Connects' => 'ETAS and Oberlin Connects',
        'Fannie Mae' => 'Fannie Mae',
        'Fayette County Public Schools' => 'Fayette County Public Schools',
        'FCPS' => 'FCPS',
        'FEAC' => 'FEAC',
        'Federal Child Care Development Block Grant' => 'Federal Child Care Development Block Grant',
        'Feinbloom Supporting Foundation' => 'Feinbloom Supporting Foundation',
        'Fifth Third Bank' => 'Fifth Third Bank',
        'First Bank of Boston' => 'First Bank of Boston',
        'First Niagara Bank' => 'First Niagara Bank',
        'FISA Foundation' => 'FISA Foundation',
        'FMC' => 'FMC',
        'Foellinger Foundation' => 'Foellinger Foundation',
        'Forsyth County Department of Public Health' => 'Forsyth County Department of Public Health',
        'Foundation for a Healthy St. Petersburg' => 'Foundation for a Healthy St. Petersburg',
        'Freddie Mac' => 'Freddie Mac',
        'Fulton County' => 'Fulton County',
        'FWUL' => 'FWUL',
        'Gannett Foundation' => 'Gannett Foundation',
        'Gates Foundation' => 'Gates Foundation',
        'GEICO' => 'GEICO',
        'Georgia Pacific' => 'Georgia Pacific',
        'Glimmer of Hope Foundation' => 'Glimmer of Hope Foundation',
        'GOE' => 'GOE',
        'Golf Scramble Revenues' => 'Golf Scramble Revenues',
        'Google' => 'Google',
        'Greater Cincinnati Foundation' => 'Greater Cincinnati Foundation',
        'Greater Springfield Chamber of Commerce Grand Victoria Foundation' => 'Greater Springfield Chamber of Commerce Grand Victoria Foundation',
        'Greater Tacoma Community Foundation' => 'Greater Tacoma Community Foundation',
        'Greenville County' => 'Greenville County',
        'Gunderson' => 'Gunderson',
        'Hamilton County' => 'Hamilton County',
        'Hartford Public School' => 'Hartford Public School',
        'Harvard Pilgram HC' => 'Harvard Pilgram HC',
        'Head Start' => 'Head Start',
        'Health Council of Southeastern Florida' => 'Health Council of Southeastern Florida',
        'Healthy Start Coalition' => 'Healthy Start Coalition',
        'Heart of WM United Way' => 'Heart of WM United Way',
        'Heat UP' => 'Heat UP',
        'HEB' => 'HEB',
        'Heinz Endowments' => 'Heinz Endowments',
        'Helen Bader Foundation' => 'Helen Bader Foundation',
        'Hennepin County' => 'Hennepin County',
        'HESG' => 'HESG',
        'HFPG' => 'HFPG',
        'Honda Ronald McDonald House Charities' => 'Honda Ronald McDonald House Charities',
        'Honeywell' => 'Honeywell',
        'HOPP' => 'HOPP',
        'HOPWA' => 'HOPWA',
        'Housing Authority City of Pittsburgh' => 'Housing Authority City of Pittsburgh',
        'HTF' => 'HTF',
        'HUD Housing Counseling Funds' => 'HUD Housing Counseling Funds',
        'Humana' => 'Humana',
        'IFPN' => 'IFPN',
        'Infor' => 'Infor',
        'Internal Revenue Service' => 'Internal Revenue Service',
        'Intrust Bank' => 'Intrust Bank',
        'IRCO' => 'IRCO',
        'Jacobs-CSRS' => 'Jacobs-CSRS',
        'James Graham Brown Foundation' => 'James Graham Brown Foundation',
        'JCCC' => 'JCCC',
        'Jefferson County Public Schools' => 'Jefferson County Public Schools',
        'John. F. Wegman Fund' => 'John. F. Wegman Fund',
        'Joseph Corporations' => 'Joseph Corporations',
        'Joyce Foundation' => 'Joyce Foundation',
        'JP Morgan Chase' => 'JP Morgan Chase',
        'Jr. Coalition' => 'Jr. Coalition',
        'Kaiser Permanente' => 'Kaiser Permanente',
        'Kane County - OCR' => 'Kane County - OCR',
        'Kenosha Community Development Block Grant' => 'Kenosha Community Development Block Grant',
        'Kenosha Community Foundation' => 'Kenosha Community Foundation',
        'Kenosha Unified School District' => 'Kenosha Unified School District',
        'KeyBank' => 'KeyBank',
        'KHC' => 'KHC',
        'Kiwanis Riviera Beach' => 'Kiwanis Riviera Beach',
        'Knox County' => 'Knox County',
        'L\'OREAL' => 'L\'OREAL',
        'Laclede Gas' => 'Laclede Gas',
        'LCCC' => 'LCCC',
        'LDOL' => 'LDOL',
        'Leadership Lorain College' => 'Leadership Lorain College',
        'LEAP' => 'LEAP',
        'Legacy Foundation' => 'Legacy Foundation',
        'Legislative Member Item' => 'Legislative Member Item',
        'LFUCG' => 'LFUCG',
        'LIHEAP' => 'LIHEAP',
        'Lilly Endowment' => 'Lilly Endowment',
        'Lincoln Financial' => 'Lincoln Financial',
        'Lincoln Financial Group' => 'Lincoln Financial Group',
        'Local Workforce Investment Board' => 'Local Workforce Investment Board',
        'Lorain School Gear Up Program' => 'Lorain School Gear Up Program',
        'Louisiana Endowment for the Humanities' => 'Louisiana Endowment for the Humanities',
        'Louisiana Federation for Children' => 'Louisiana Federation for Children',
        'Louisville Asset Building Coalition' => 'Louisville Asset Building Coalition',
        'Louisville Metro' => 'Louisville Metro',
        'Lousiana Child and Adult Food Care Program' => 'Lousiana Child and Adult Food Care Program',
        'LUL' => 'LUL',
        'Macy\'s' => 'Macy\'s',
        'Madison Community Foundation' => 'Madison Community Foundation',
        'Madison County Community Development' => 'Madison County Community Development',
        'Madison Metro School District' => 'Madison Metro School District',
        'Male Involvement Program' => 'Male Involvement Program',
        'Marathon' => 'Marathon',
        'Marion County Health Department' => 'Marion County Health Department',
        'Martin Luther King' => 'Martin Luther King',
        'McDonalds' => 'McDonalds',
        'MDHHS' => 'MDHHS',
        'Medicaid' => 'Medicaid',
        'MEMORIAL HEALTH SYSTEMS' => 'MEMORIAL HEALTH SYSTEMS',
        'Men\'s Wearhouse' => 'Men\'s Wearhouse',
        'Mental Health America of San Diego County' => 'Mental Health America of San Diego County',
        'Mercedes Benz' => 'Mercedes Benz',
        'Mery Regional Medical Center' => 'Mery Regional Medical Center',
        'Metro United Urban Ministries' => 'Metro United Urban Ministries',
        'Metro United Way' => 'Metro United Way',
        'Metroboard' => 'Metroboard',
        'Meyer Memorial Trust' => 'Meyer Memorial Trust',
        'MGM Foundation' => 'MGM Foundation',
        'MI Dept of Health and Human Services' => 'MI Dept of Health and Human Services',
        'Michigan Department of Community Health' => 'Michigan Department of Community Health',
        'MillerCoors' => 'MillerCoors',
        'Mitchell Fd' => 'Mitchell Fd',
        'Morehouse School of Medicine' => 'Morehouse School of Medicine',
        'MUFG Union Bank' => 'MUFG Union Bank',
        'Multnomah County' => 'Multnomah County',
        'National Children\'s Oral Health Foundation' => 'National Children\'s Oral Health Foundation',
        'National Council on Aging' => 'National Council on Aging',
        'National Urban League' => 'National Urban League',
        'NAYA Family Center' => 'NAYA Family Center',
        'NBC Connecticut' => 'NBC Connecticut',
        'NCAA' => 'NCAA',
        'Neighborworks' => 'Neighborworks',
        'Neighborworks America' => 'Neighborworks America',
        'New York City Council' => 'New York City Council',
        'New York State Department of Labor' => 'New York State Department of Labor',
        'NFMC' => 'NFMC',
        'NFMC Round 10' => 'NFMC Round 10',
        'Nicor Gas' => 'Nicor Gas',
        'Ninde Fund' => 'Ninde Fund',
        'NJ Housing and Mortgage Finance' => 'NJ Housing and Mortgage Finance',
        'NJNFMC' => 'NJNFMC',
        'Nordstrom' => 'Nordstrom',
        'Norfolk Southern' => 'Norfolk Southern',
        'Northeast Indiana Workforce Development' => 'Northeast Indiana Workforce Development',
        'Northwest Area Foundation' => 'Northwest Area Foundation',
        'NUL EEP' => 'NUL EEP',
        'NUL Urban Empowerment Fund' => 'NUL Urban Empowerment Fund',
        'NV State Department of Education' => 'NV State Department of Education',
        'NWA' => 'NWA',
        'NYC DYCD' => 'NYC DYCD',
        'NYUL Football Classic' => 'NYUL Football Classic',
        'NYUL young Professionals' => 'NYUL young Professionals',
        'O\'Reilly Family Foundation' => 'O\'Reilly Family Foundation',
        'OAG' => 'OAG',
        'OASIS and MO Foundation For Health' => 'OASIS and MO Foundation For Health',
        'OCFS' => 'OCFS',
        'ODOD' => 'ODOD',
        ':' => ':',
        'Office of People With Dev Disabilities' => 'Office of People With Dev Disabilities',
        'OGE' => 'OGE',
        'OHCD' => 'OHCD',
        'Old National Ban' => 'Old National Ban',
        'Opportunity Inc.' => 'Opportunity Inc.',
        'Orthwein Foundation' => 'Orthwein Foundation',
        'Oscar Rennebohm Foundation' => 'Oscar Rennebohm Foundation',
        'PA Dept. of Health Grant' => 'PA Dept. of Health Grant',
        'PA State Dept. of Public Welfare' => 'PA State Dept. of Public Welfare',
        'PA Women Work' => 'PA Women Work',
        'Pacers Sports and Entertainment' => 'Pacers Sports and Entertainment',
        'Palm Beach Community Chest' => 'Palm Beach Community Chest',
        'Palm Beach Sheriff Office' => 'Palm Beach Sheriff Office',
        'Parker Foundation' => 'Parker Foundation',
        'PBC HCD' => 'PBC HCD',
        'PCOA. City of Tucson Dept of Human Services' => 'PCOA. City of Tucson Dept of Human Services',
        'PECO' => 'PECO',
        'People\'s Bank' => 'People\'s Bank',
        'PGA of America' => 'PGA of America',
        'PHFA' => 'PHFA',
        'Pitney Bowes' => 'Pitney Bowes',
        'PNC Bank' => 'PNC Bank',
        'Port of Houston Authority' => 'Port of Houston Authority',
        'Portland Public Schools' => 'Portland Public Schools',
        'Potawatomie Forest County Foundation' => 'Potawatomie Forest County Foundation',
        'PPG Industries' => 'PPG Industries',
        'Preschool for All' => 'Preschool for All',
        'programFunder' => 'programFunder',
        'Propel and EITC' => 'Propel and EITC',
        'Provide healthy food and physical fitness activities for youth using the fitzone.' => 'Provide healthy food and physical fitness activities for youth using the fitzone.',
        'Publix' => 'Publix',
        'Purchase of Service Contracts' => 'Purchase of Service Contracts',
        'Racine Unified School District' => 'Racine Unified School District',
        'Rams' => 'Rams',
        'Regional Arts Commission' => 'Regional Arts Commission',
        'Regional Transportation District' => 'Regional Transportation District',
        'Regions Bank' => 'Regions Bank',
        'Richland County' => 'Richland County',
        'Richland School District 1' => 'Richland School District 1',
        'Richland School District 2.' => 'Richland School District 2.',
        'Richland School District Two' => 'Richland School District Two',
        'Robert Wood Johnson Foundation' => 'Robert Wood Johnson Foundation',
        'Rochester Works' => 'Rochester Works',
        'Rockefeller Financial Services' => 'Rockefeller Financial Services',
        'Ryan White CARE Act Part A' => 'Ryan White CARE Act Part A',
        'Ryan White Title I-Part A' => 'Ryan White Title I-Part A',
        'Sacramento Chapter of the Links' => 'Sacramento Chapter of the Links',
        'San Diego Workforce Development' => 'San Diego Workforce Development',
        'Sangamon County Community Foundation' => 'Sangamon County Community Foundation',
        'SBA' => 'SBA',
        'SCAN' => 'SCAN',
        'School District of Philadelphia' => 'School District of Philadelphia',
        'Schwab Foundation' => 'Schwab Foundation',
        'Self-funded through participant registration fee' => 'Self-funded through participant registration fee',
        'Seniors Service America' => 'Seniors Service America',
        'Seton Healthcare- Huston Tillotson University' => 'Seton Healthcare- Huston Tillotson University',
        'Shell' => 'Shell',
        'Sierra Health Foundation' => 'Sierra Health Foundation',
        'Skadden and MUFG Union Bank' => 'Skadden and MUFG Union Bank',
        'SNAP' => 'SNAP',
        'South Carolina Department of Social Services' => 'South Carolina Department of Social Services',
        'Southeast Wisconsin Regional Planning Commission' => 'Southeast Wisconsin Regional Planning Commission',
        'Southwest Gas' => 'Southwest Gas',
        'Special Events' => 'Special Events',
        'Speedway Children\'s Charities' => 'Speedway Children\'s Charities',
        'Sponsors through partnership with CA Black Chamber Foundation' => 'Sponsors through partnership with CA Black Chamber Foundation',
        'St. John\'s' => 'St. John\'s',
        'St. Louis Alliance' => 'St. Louis Alliance',
        'St. Louis County' => 'St. Louis County',
        'Starbucks' => 'Starbucks',
        'Starting Point' => 'Starting Point',
        'State Farm' => 'State Farm',
        'State Farm MUFG Union Bank' => 'State Farm MUFG Union Bank',
        'State subsidized training programs W2' => 'State subsidized training programs W2',
        'Steelcase Foundation' => 'Steelcase Foundation',
        'SUL General Fund' => 'SUL General Fund',
        'Summit County Department of Job and Family Services' => 'Summit County Department of Job and Family Services',
        'Summit County Department of Job and Family Services Workforce Investment Act' => 'Summit County Department of Job and Family Services Workforce Investment Act',
        'Sun Sentinel' => 'Sun Sentinel',
        'SUNY Research Foundation' => 'SUNY Research Foundation',
        'Tacoma Pierce County Health Department' => 'Tacoma Pierce County Health Department',
        'Talbert House' => 'Talbert House',
        'TD Bank' => 'TD Bank',
        'Texas Department of Transportation' => 'Texas Department of Transportation',
        'Texas Veteran Commission' => 'Texas Veteran Commission',
        'The Community Builders' => 'The Community Builders',
        'The Florida Network' => 'The Florida Network',
        'The Jim Moran Foundation' => 'The Jim Moran Foundation',
        'Third Federal Bank' => 'Third Federal Bank',
        'Three Rivers Workforce Investment Board' => 'Three Rivers Workforce Investment Board',
        'TIME WARNER' => 'TIME WARNER',
        'Total Community Action' => 'Total Community Action',
        'Town of Amherst' => 'Town of Amherst',
        'Treasury Department' => 'Treasury Department',
        'Tri-Met' => 'Tri-Met',
        'True Child' => 'True Child',
        'Tucson Electric Power' => 'Tucson Electric Power',
        'TVA' => 'TVA',
        'Twin Rivers Unified School District' => 'Twin Rivers Unified School District',
        'Tyson Foods' => 'Tyson Foods',
        'ULMC' => 'ULMC',
        'ULPBC' => 'ULPBC',
        'ULR In-Kind' => 'ULR In-Kind',
        'UMB Bank' => 'UMB Bank',
        'United Black Fund and Economic Growth' => 'United Black Fund and Economic Growth',
        'United Way' => 'United Way',
        'United Way -Town of Amherst' => 'United Way -Town of Amherst',
        'United Way AZ' => 'United Way AZ',
        'United Way for the Greater New Orleans Area' => 'United Way for the Greater New Orleans Area',
        'United Way Housing' => 'United Way Housing',
        'United Way of Allegheny County' => 'United Way of Allegheny County',
        'United Way of Allen County' => 'United Way of Allen County',
        'United Way of Broward County' => 'United Way of Broward County',
        'United Way of Cental Oklahoma' => 'United Way of Cental Oklahoma',
        'United Way of Central Illinois' => 'United Way of Central Illinois',
        'United Way of Central Indiana' => 'United Way of Central Indiana',
        'United Way of Central Oklahoma' => 'United Way of Central Oklahoma',
        'United Way of Forsyth County' => 'United Way of Forsyth County',
        'United Way of Greater Knoxville' => 'United Way of Greater Knoxville',
        'United Way of Greater Milwaukee' => 'United Way of Greater Milwaukee',
        'United Way of Greater Milwaukee and Waukesha County' => 'United Way of Greater Milwaukee and Waukesha County',
        'United Way of Miami Dade CountyFisher Island' => 'United Way of Miami Dade CountyFisher Island',
        'United Way of Miami-Dade CountyFisher Island' => 'United Way of Miami-Dade CountyFisher Island',
        'United Way of NE Florida' => 'United Way of NE Florida',
        'United Way of PBC' => 'United Way of PBC',
        'United Way of Pierce County' => 'United Way of Pierce County',
        'United Way of Racine County' => 'United Way of Racine County',
        'United Way of Rochester' => 'United Way of Rochester',
        'United Way of SHR' => 'United Way of SHR',
        'United Way of Summit County' => 'United Way of Summit County',
        'United Way of Tampa Bay' => 'United Way of Tampa Bay',
        'United Way of Texas Gulf Coast' => 'United Way of Texas Gulf Coast',
        'United Way of the Midlands' => 'United Way of the Midlands',
        'United Way of the Texas Gulf Coast' => 'United Way of the Texas Gulf Coast',
        'United Way Suncoast' => 'United Way Suncoast',
        'United Way VA Peninsula' => 'United Way VA Peninsula',
        'University of Colorado Hospital' => 'University of Colorado Hospital',
        'University of Pittsburgh' => 'University of Pittsburgh',
        'University of South Florida' => 'University of South Florida',
        'UPAC' => 'UPAC',
        'UPS' => 'UPS',
        'Urban League of Broward County' => 'Urban League of Broward County',
        'Urban League of Metropolitan Seattle' => 'Urban League of Metropolitan Seattle',
        'UWay State' => 'UWay State',
        'Valparaiso and Unity' => 'Valparaiso and Unity',
        'Walgreens' => 'Walgreens',
        'WalMart' => 'WalMart',
        'Walmart Elyria' => 'Walmart Elyria',
        'Walton Family Foundation' => 'Walton Family Foundation',
        'Warm Neighbors' => 'Warm Neighbors',
        'WE Energies Foundation' => 'WE Energies Foundation',
        'Wells Fargo' => 'Wells Fargo',
        'West Harlem Development Corp.' => 'West Harlem Development Corp.',
        'WIA' => 'WIA',
        'WIA Adult' => 'WIA Adult',
        'WIA Adult CalWorks' => 'WIA Adult CalWorks',
        'WIA CalWorks' => 'WIA CalWorks',
        'WIA Dislocated Worker' => 'WIA Dislocated Worker',
        'WIOA' => 'WIOA',
        'WIOA - Local Workforce Investment Board' => 'WIOA - Local Workforce Investment Board',
        'Wisconsin Department of Children and Families' => 'Wisconsin Department of Children and Families',
        'WK Kellogg Foundation' => 'WK Kellogg Foundation',
        'Women\'s Board and The Leaguers' => 'Women\'s Board and The Leaguers',
        'Women\'s Foundation of Genesee Valley' => 'Women\'s Foundation of Genesee Valley',
        'Work Systems' => 'Work Systems',
        'Workforce Connections of Southern Nevada' => 'Workforce Connections of Southern Nevada',
        'Workforce Development Board' => 'Workforce Development Board',
        'Workforce Investment Board' => 'Workforce Investment Board',
        'Youth Service Invesment Fund' => 'Youth Service Invesment Fund',
        'YWCA' => 'YWCA',
        'USC' => 'USC',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_funding_funding_type'.
  $field_bases['field_funding_funding_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_funding_funding_type',
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
        'Grant' => 'Grant',
        'Loan' => 'Loan',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_funding_funding_type_label'.
  $field_bases['field_funding_funding_type_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_funding_funding_type_label',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="nulTableCell"><h3>Funding Type</h3></div>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_funding_source_label'.
  $field_bases['field_funding_source_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_funding_source_label',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="nulTableCell"><h3>Funding Source</h3></div>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_funding_source_type'.
  $field_bases['field_funding_source_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_funding_source_type',
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
        'Banks' => 'Banks',
        'Benevolent Fund' => 'Benevolent Fund',
        'Chamber of Commerce' => 'Chamber of Commerce',
        'Community' => 'Community',
        'Contributions' => 'Contributions',
        'Corporate Memberships' => 'Corporate Memberships',
        'Corporation for National Service' => 'Corporation for National Service',
        'Corporations' => 'Corporations',
        'Donations' => 'Donations',
        'Donors - Corporate' => 'Donors - Corporate',
        'Donors - Individuals' => 'Donors - Individuals',
        'Donors - Private' => 'Donors - Private',
        'Donors - Public' => 'Donors - Public',
        'Fees - Enrolled Participants' => 'Fees - Enrolled Participants',
        'Fees - Management' => 'Fees - Management',
        'Fees - Membership' => 'Fees - Membership',
        'Fees - Parent Fees' => 'Fees - Parent Fees',
        'Fees - Registration' => 'Fees - Registration',
        'Fees - Service Fee' => 'Fees - Service Fee',
        'Fees - Tuition' => 'Fees - Tuition',
        'Financial Institutons' => 'Financial Institutons',
        'Foundations' => 'Foundations',
        'Fundraising' => 'Fundraising',
        'Government' => 'Government',
        'Government - Local' => 'Government - Local',
        'Government - Federal' => 'Government - Federal',
        'Government - State' => 'Government - State',
        'Grants' => 'Grants',
        'In-Kind Donation' => 'In-Kind Donation',
        'Income - Rental Income' => 'Income - Rental Income',
        'Income - Sales' => 'Income - Sales',
        'Lending partners' => 'Lending partners',
        'Local Businesses' => 'Local Businesses',
        'Local Housing authority' => 'Local Housing authority',
        'Local School Districts' => 'Local School Districts',
        'Membership Campaign' => 'Membership Campaign',
        'Partnerships' => 'Partnerships',
        'Sponsorships' => 'Sponsorships',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_funding_source_type_label'.
  $field_bases['field_funding_source_type_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_funding_source_type_label',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="nulTableCell"><h3>Source Type</h3></div>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_funding_sources'.
  $field_bases['field_funding_sources'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_funding_sources',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_legacy_program_id'.
  $field_bases['field_legacy_program_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_legacy_program_id',
    'field_permissions' => array(
      'type' => 1,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_parent_census'.
  $field_bases['field_parent_census'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_parent_census',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'census' => 'census',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_program_area'.
  $field_bases['field_program_area'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_area',
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
          'vocabulary' => 'program_areas',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_program_budget'.
  $field_bases['field_program_budget'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_budget',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_program_duration_amount'.
  $field_bases['field_program_duration_amount'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_duration_amount',
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

  // Exported field_base: 'field_program_duration_type'.
  $field_bases['field_program_duration_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_duration_type',
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
        'D' => 'Days',
        'W' => 'Weeks',
        'S' => 'Summer',
        'Y' => 'Year-round',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_program_percent_asian'.
  $field_bases['field_program_percent_asian'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_percent_asian',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_program_percent_black'.
  $field_bases['field_program_percent_black'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_percent_black',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_program_percent_female'.
  $field_bases['field_program_percent_female'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_percent_female',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_program_percent_hispanic'.
  $field_bases['field_program_percent_hispanic'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_percent_hispanic',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_program_percent_male'.
  $field_bases['field_program_percent_male'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_percent_male',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_program_percent_native'.
  $field_bases['field_program_percent_native'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_percent_native',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_program_percent_non_hispan'.
  $field_bases['field_program_percent_non_hispan'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_percent_non_hispan',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_program_percent_white'.
  $field_bases['field_program_percent_white'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_percent_white',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_program_purpose'.
  $field_bases['field_program_purpose'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_purpose',
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

  // Exported field_base: 'field_program_served_total'.
  $field_bases['field_program_served_total'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_served_total',
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

  // Exported field_base: 'field_program_service_dollars'.
  $field_bases['field_program_service_dollars'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_service_dollars',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_program_service_hours'.
  $field_bases['field_program_service_hours'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_service_hours',
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

  // Exported field_base: 'field_program_service_provided'.
  $field_bases['field_program_service_provided'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_service_provided',
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
          'vocabulary' => 'services_provided',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_program_service_served'.
  $field_bases['field_program_service_served'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_service_served',
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

  // Exported field_base: 'field_program_target_group'.
  $field_bases['field_program_target_group'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_target_group',
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
          'vocabulary' => 'target_group_served',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_program_types'.
  $field_bases['field_program_types'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_types',
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
          'vocabulary' => 'program_types',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_services_provided'.
  $field_bases['field_services_provided'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_services_provided',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  return $field_bases;
}
