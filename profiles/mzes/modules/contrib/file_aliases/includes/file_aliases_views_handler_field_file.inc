<?php
/**
 * @file
 * Field handler to provide simple renderer that allows linking to a file alias.
 */

class file_aliases_views_handler_field_file extends views_handler_field_file {
  /**
   * Constructor to provide additional field to add.
   */
  function init(&$view, &$options) {
    parent::init($view, $options);
    if (!empty($options['link_to_file'])) {
      $this->additional_fields['filepath'] = 'filepath';
    }
    $this->additional_fields['fid'] = 'fid';
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * Render whatever the data is as a link to the file.
   *
   * Data should be made XSS safe prior to calling this function.
   */
  function render_link($data, $values) {
    if (!empty($this->options['link_to_file']) && $data !== NULL && $data !== '') {
      $this->options['alter']['make_link'] = TRUE;
      $this->options['alter']['path'] = drupal_get_path_alias('filefield_paths/alias/'. $values->{$this->aliases{'fid'}});
    }

    return $data;
  }

  function render($values) {
    if (($alias = drupal_get_path_alias('filefield_paths/alias/'. $values->{$this->aliases{'fid'}})) !== 'filefield_paths/alias/'. $values->{$this->aliases{'fid'}}) {
      return $this->render_link(check_plain($alias), $values);
    }
    return FALSE;
  }
}
