<?php
/**
 * @file
 * Field handler to provide a list of uploads.
 */

class file_aliases_views_handler_field_upload_fid extends views_handler_field_upload_fid {
  function pre_render($values) {
    $vids = array();
    $this->items = array();

    foreach ($values as $result) {
      $vids[] = $result->{$this->field_alias};
    }

    if ($vids) {
      // Support "only listed files" option.
      $where = '';
      if (!empty($this->options['only_listed'])) {
        $where = " AND u.list <> 0";
      }
      $result = db_query("SELECT n.type, u.vid, u.fid, f.filepath, u.description FROM {upload} u LEFT JOIN {files} f ON f.fid = u.fid LEFT JOIN {node} n ON u.nid = n.nid WHERE u.vid IN (" . implode(', ', $vids) . ")$where ORDER BY u.weight");
      while ($file = db_fetch_object($result)) {
        $this->items[$file->vid][$file->fid] = $this->render_link(check_plain($file->description), $file);
      }
    }
  }

  /**
   * Render whatever the data is as a link to the file.
   *
   * Data should be made XSS safe prior to calling this function.
   */
  function render_link($data, $values) {
    if (!empty($this->options['link_to_file']) && $data !== NULL && $data !== '') {
      if (($alias = drupal_get_path_alias('filefield_paths/alias/'. $values->fid)) !== 'filefield_paths/alias/'. $values->fid && _file_aliases_display_alias($values->type, 'upload')) {
        return l($data, $alias, array('html' => TRUE));
      }
      else {
        return l($data, file_create_url($values->filepath), array('html' => TRUE));
      }
    }
    return $data;
  }
}
