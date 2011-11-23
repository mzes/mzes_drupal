<?php

/**
 * Allow taxonomy term ID(s) as argument
 */
class i18nviews_handler_argument_taxonomy_index_tid extends views_handler_argument_term_node_tid {
  function title_query() {
    $titles = array();
    // @todo: check vocabulary translation mode (if localization needed)
    $result = db_select('taxonomy_term_data', 'td')
      ->fields('td', array('name', 'tid'))
      ->condition('td.tid', $this->value)
      ->execute();
    foreach ($result as $term) {
      $titles[] = check_plain(i18n_taxonomy_term_name($term));
    }
    return $titles;
  }
}

