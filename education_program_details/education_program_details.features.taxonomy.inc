<?php
/**
 * @file
 * education_program_details.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function education_program_details_taxonomy_default_vocabularies() {
  return array(
    'census_tab_status' => array(
      'name' => 'Statuses for Census Tabs',
      'machine_name' => 'census_tab_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mentoring_program_funding_options' => array(
      'name' => 'Mentoring Program Funding Options',
      'machine_name' => 'mentoring_program_funding_options',
      'description' => 'Used in the Education and Youth Development Programs content type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
