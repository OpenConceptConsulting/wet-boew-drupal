<?php
/**
 * @file
 * wetkit_wetboew.features.menu_custom.inc
 */

/**
 * Implements _menu_wetkit_load().
 */
function _menu_wetkit_load() {
  /* Header Navigation */
  $source_menu_item = _add_custom_menu('http://www.canada.gc.ca/home.html', 'Canada.gc.ca', NULL, 'menu-wet-header', 0, 'en');
  $translated_menu_item = _add_custom_menu('http://www.canada.gc.ca/accueil.html', 'Canada.gc.ca', NULL, 'menu-wet-header', 0, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('http://www.servicecanada.gc.ca/eng/home.shtml', 'Services', NULL, 'menu-wet-header', 1, 'en');
  $translated_menu_item = _add_custom_menu('http://www.servicecanada.gc.ca/fra/accueil.shtml', 'Services', NULL, 'menu-wet-header', 1, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('http://www.canada.gc.ca/depts/major/depind-eng.html', 'Departments', NULL, 'menu-wet-header', 2, 'en');
  $translated_menu_item = _add_custom_menu('http://www.canada.gc.ca/depts/major/depind-fra.html', 'Ministères', NULL, 'menu-wet-header', 2, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  /* Mega Menu Navigation */
  $source_menu_item_depth = _add_custom_menu('<front>', 'Home', NULL, 'main-menu', 0, 'en');
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Accueil', NULL, 'main-menu', 0, 'fr');
  _create_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _add_custom_menu('<front>', 'Front Page', NULL, 'main-menu', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item = _add_custom_menu('<front>', 'Première Page', NULL, 'main-menu', 0, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item_depth = _add_custom_menu('https://github.com/wet-boew/wet-boew-drupal', 'GitHub', NULL, 'main-menu', 1, 'en');
  $translated_menu_item_depth = _add_custom_menu('https://github.com/wet-boew/wet-boew-drupal', 'GitHub', NULL, 'main-menu', 1, 'fr');
  _create_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _add_custom_menu('https://github.com/wet-boew/wet-boew', 'WET-BOEW', NULL, 'main-menu', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item = _add_custom_menu('https://github.com/wet-boew/wet-boew', 'WET-BOEW', NULL, 'main-menu', 0, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  _add_custom_menu('https://github.com/wet-boew/wet-boew', 'Main project page', NULL, 'main-menu', 0, 'en', 0, $source_menu_item);
  _add_custom_menu('https://github.com/wet-boew/wet-boew', 'Page principale du projet', NULL, 'main-menu', 0, 'fr', 0, $translated_menu_item);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  _add_custom_menu('https://github.com/wet-boew/wet-boew/wiki', 'Wiki Page', NULL, 'main-menu', 1, 'en', 0, $source_menu_item);
  _add_custom_menu('https://github.com/wet-boew/wet-boew/wiki', 'Page Wiki', NULL, 'main-menu', 1, 'fr', 0, $translated_menu_item);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  _add_custom_menu('https://github.com/wet-boew/wet-boew/issues', 'Issue Queue', NULL, 'main-menu', 2, 'en', 0, $source_menu_item);
  _add_custom_menu('https://github.com/wet-boew/wet-boew/issues', 'Problème', NULL, 'main-menu', 2, 'fr', 0, $translated_menu_item);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('https://github.com/wet-boew/wet-boew-drupal', 'WET-BOEW-DRUPAL', NULL, 'main-menu', 1, 'en', 0, $source_menu_item_depth);
  $translated_menu_item = _add_custom_menu('https://github.com/wet-boew/wet-boew-drupal', 'WET-BOEW-DRUPAL', NULL, 'main-menu', 1, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  _add_custom_menu('https://github.com/wet-boew/wet-boew-drupal', 'Main project page', NULL, 'main-menu', 0, 'en', 0, $source_menu_item);
  _add_custom_menu('https://github.com/wet-boew/wet-boew-drupal', 'Page principale du projet', NULL, 'main-menu', 0, 'fr', 0, $translated_menu_item);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  _add_custom_menu('https://github.com/wet-boew/wet-boew-drupal/wiki', 'Wiki Page', NULL, 'main-menu', 1, 'en', 0, $source_menu_item);
  _add_custom_menu('https://github.com/wet-boew/wet-boew-drupal/wiki', 'Page Wiki', NULL, 'main-menu', 1, 'fr', 0, $translated_menu_item);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  _add_custom_menu('https://github.com/wet-boew/wet-boew-drupal/issues', 'Issue Queue', NULL, 'main-menu', 2, 'en', 0, $source_menu_item);
  _add_custom_menu('https://github.com/wet-boew/wet-boew-drupal/issues', 'Problème', NULL, 'main-menu', 2, 'fr', 0, $translated_menu_item);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item_depth = _add_custom_menu('node/1', 'Example Pages', NULL, 'main-menu', 2, 'en');
  $translated_menu_item_depth = _add_custom_menu('node/2', 'Pages d\'Example', NULL, 'main-menu', 2, 'fr');
  _create_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _add_custom_menu('node/1', 'Sample Content Pages', NULL, 'main-menu', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item = _add_custom_menu('node/2', 'Pages de contenu exemples', NULL, 'main-menu', 0, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  _add_custom_menu('node/1', 'WetKit Demo', NULL, 'main-menu', 0, 'en', 0, $source_menu_item);
  _add_custom_menu('node/2', 'Démo Wetkit', NULL, 'main-menu', 0, 'fr', 0, $translated_menu_item);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  _add_custom_menu('node/6', 'WetKit Features', NULL, 'main-menu', 1, 'en', 0, $source_menu_item);
  _add_custom_menu('node/5', 'Features WetKit', NULL, 'main-menu', 1, 'fr', 0, $translated_menu_item);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  _add_custom_menu('node/4', 'WetKit Collaboration', NULL, 'main-menu', 2, 'en', 0, $source_menu_item);
  _add_custom_menu('node/3', 'Collaboration WetKit', NULL, 'main-menu', 2, 'fr', 0, $translated_menu_item);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item_depth = _add_custom_menu('http://drupal.org', 'Drupal WCMS', NULL, 'main-menu', 3, 'en');
  $translated_menu_item_depth = _add_custom_menu('http://drupal.org', 'WCMS Drupal', NULL, 'main-menu', 3, 'fr');
  _create_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _add_custom_menu('http://drupal.org', 'Drupal.org', NULL, 'main-menu', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item = _add_custom_menu('http://drupal.org', 'Drupal.org', NULL, 'main-menu', 0, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  /* Terms and Transparency Navigation */
  $source_menu_item = _add_custom_menu('<front>', 'Terms and Conditions', NULL, 'menu-wet-terms', 0, 'en');
  $translated_menu_item = _add_custom_menu('<front>', 'Avis', NULL, 'menu-wet-terms', 0, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('<front>', 'Transparency', NULL, 'menu-wet-terms', 1, 'en');
  $translated_menu_item = _add_custom_menu('<front>', 'Transparence', NULL, 'menu-wet-terms', 1, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  /* Mid Footer Navigation */
  $source_menu_item_depth = _add_custom_menu('<front>', 'About Us', NULL, 'menu-wet-mid-footer', 0, 'en');
  $translated_menu_item_depth = _add_custom_menu('<front>', 'À propos de nous', NULL, 'menu-wet-mid-footer', 0, 'fr');
  _create_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _add_custom_menu('<front>', 'Our Mandate', NULL, 'menu-wet-mid-footer', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item = _add_custom_menu('<front>', 'Notre mandat', NULL, 'menu-wet-mid-footer', 0, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('<front>', 'Our Minister', NULL, 'menu-wet-mid-footer', 1, 'en', 0, $source_menu_item_depth);
  $translated_menu_item = _add_custom_menu('<front>', 'Le ministre', NULL, 'menu-wet-mid-footer', 1, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item_depth = _add_custom_menu('<front>', 'News', NULL, 'menu-wet-mid-footer', 1, 'en');
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Média', NULL, 'menu-wet-mid-footer', 1, 'fr');
  _create_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _add_custom_menu('<front>', 'News Releases', NULL, 'menu-wet-mid-footer', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Communiqués', NULL, 'menu-wet-mid-footer', 0, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('<front>', 'Media Advisories', NULL, 'menu-wet-mid-footer', 1, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Avis aux médias', NULL, 'menu-wet-mid-footer', 1, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('<front>', 'Multimedia', NULL, 'menu-wet-mid-footer', 2, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Multimedia', NULL, 'menu-wet-mid-footer', 2, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item_depth = _add_custom_menu('<front>', 'Contact Us', NULL, 'menu-wet-mid-footer', 2, 'en');
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Contactez-nous', NULL, 'menu-wet-mid-footer', 2, 'fr');
  _create_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _add_custom_menu('<front>', 'Phone Numbers', NULL, 'menu-wet-mid-footer', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Numéros de téléphone', NULL, 'menu-wet-mid-footer', 0, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('<front>', 'Find an Employee', NULL, 'menu-wet-mid-footer', 1, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Trouvez un(e) employé(e)', NULL, 'menu-wet-mid-footer', 1, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item_depth = _add_custom_menu('<front>', 'Stay Connected', NULL, 'menu-wet-mid-footer', 3, 'en');
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Restez branchés', NULL, 'menu-wet-mid-footer', 3, 'fr');
  _create_translation_sets($source_menu_item_depth, $translated_menu_item_depth);

  $source_menu_item = _add_custom_menu('<front>', 'Youtube', NULL, 'menu-wet-mid-footer', 0, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Youtube', NULL, 'menu-wet-mid-footer', 0, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('<front>', 'Twitter', NULL, 'menu-wet-mid-footer', 1, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Twitter', NULL, 'menu-wet-mid-footer', 1, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('<front>', 'Feeds', NULL, 'menu-wet-mid-footer', 2, 'en', 0, $source_menu_item_depth);
  $translated_menu_item_depth = _add_custom_menu('<front>', 'Fils de nouvelles', NULL, 'menu-wet-mid-footer', 2, 'fr', 0, $translated_menu_item_depth);
  _create_translation_sets($source_menu_item, $translated_menu_item);

  /* Footer Navigation */
  $source_menu_item = _add_custom_menu('http://healthycanadians.gc.ca/index-eng.php', 'Health', 'healthycanadians.gc.ca', 'menu-wet-footer', 0, 'en');
  $translated_menu_item = _add_custom_menu('http://canadiensensante.gc.ca/index-fra.php', 'Santé', 'canadiensensante.gc.ca', 'menu-wet-footer', 0, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('http://www.voyage.gc.ca/index-eng.asp', 'Travel', 'travel.gc.ca', 'menu-wet-footer', 1, 'en');
  $translated_menu_item = _add_custom_menu('http://voyage.gc.ca/index-fra.asp', 'Voyage', 'voyage.gc.ca', 'menu-wet-footer', 1, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('http://www.servicecanada.gc.ca/eng/home.shtml', 'Service Canada', 'servicecanada.gc.ca', 'menu-wet-footer', 2, 'en');
  $translated_menu_item = _add_custom_menu('http://www.servicecanada.gc.ca/fra/accueil.shtml', 'Service Canada', 'servicecanada.gc.ca', 'menu-wet-footer', 2, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('http://www.jobbank.gc.ca/intro-eng.aspx', 'Jobs', 'jobbank.gc.ca', 'menu-wet-footer', 3, 'en');
  $translated_menu_item = _add_custom_menu('http://www.guichetemplois.gc.ca/Intro-fra.aspx', 'Emplois', 'guichetemplois.gc.ca', 'menu-wet-footer', 3, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('http://actionplan.gc.ca/en', 'Economy', 'actionplan.gc.ca', 'menu-wet-footer', 4, 'en');
  $translated_menu_item = _add_custom_menu('http://www.plandaction.gc.ca/fr', 'Économie', 'plandaction.gc.ca', 'menu-wet-footer', 4, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  $source_menu_item = _add_custom_menu('http://www.canada.gc.ca/home.html', 'Canada.gc.ca', NULL, 'menu-wet-footer', 5, 'en');
  $translated_menu_item = _add_custom_menu('http://www.canada.gc.ca/accueil.html', 'Canada.gc.ca', NULL, 'menu-wet-footer', 5, 'fr');
  _create_translation_sets($source_menu_item, $translated_menu_item);

  //Clears all menu caches
  menu_cache_clear_all();
}

/* HELPER FUNCTIONS */

/**
 * Implements _add_custom_menu().
 */
function _add_custom_menu($link, $title, $desc, $menu, $weight, $language, $mlid = 0, $plid = 0) {
  $options = array();
  if ($desc != NULL) {
    $options += array(
      'attributes' => array(
        'title' => $desc,
      ),
    );
  }
  $item = array(
    'link_path' => $link,
    'link_title' => $title,
    'menu_name' => $menu,
    'weight' => $weight,
    'language' => $language,
    'customized' => 1,
    'options' => $options,
    'mlid' => $mlid,
    'plid' => $plid,
  );
  return menu_link_save($item);
}

/**
 * Implements _add_custom_menu_attributes().
 */
function _add_custom_menu_attributes($link, $title, $desc, $rel, $class, $menu, $weight, $language, $mlid = 0, $plid = 0) {
  $options = array();
  if ($desc != NULL) {
    $options += array(
      'attributes' => array(
        'title' => $desc,
      ),
    );
  }
  if ($rel != NULL) {
    $options += array(
      'attributes' => array(
        'rel' => $rel,
      ),
    );
  }
  if ($class != NULL) {
    $options += array(
      'attributes' => array(
        'class' => $class,
      ),
    );
  }
  $item = array(
    'link_path' => $link,
    'link_title' => $title,
    'menu_name' => $menu,
    'weight' => $weight,
    'language' => $language,
    'customized' => 1,
    'options' => $options,
    'mlid' => $mlid,
    'plid' => $plid,
  );
  return menu_link_save($item);
}

/**
 * Implements _add_custom_translation_set().
 */
function _create_translation_sets($source_mlid, $translated_mlid) {
  $translation_set = i18n_translation_set_create('menu_link');
  $translation_set->reset_translations();
  $item = menu_link_load($source_mlid);
  $translation_set->add_item($item, 'en');
  $item = menu_link_load($translated_mlid);
  $translation_set->add_item($item, 'fr');
  $translation_set->save(TRUE);
}
