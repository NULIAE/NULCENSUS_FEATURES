<?php
/**
 * @file
 * census_tabs_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function census_tabs_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'census_tabs' => array(
      'name' => 'Census Tabs',
      'machine_name' => 'census_tabs',
      'description' => 'Custom Code relies on this taxonomy names should exactly match content types',
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
