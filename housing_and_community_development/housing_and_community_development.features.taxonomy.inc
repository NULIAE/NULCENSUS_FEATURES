<?php
/**
 * @file
 * housing_and_community_development.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function housing_and_community_development_taxonomy_default_vocabularies() {
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
  );
}
