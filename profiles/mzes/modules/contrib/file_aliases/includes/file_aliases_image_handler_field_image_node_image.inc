<?php
/**
 * @file
 * Views handler for image field.
 *
 * This is a fake field that does not query anything. Instead, it adds the node
 * table fields we need to build a fake node object to send to Image module to
 * load the proper image.
 */

/**
 * Field handler to provide an image tag.
 *
 * Inherit from views_handler_field_node so we get the 'link to node' stuff for
 * free.
 */
class file_aliases_image_handler_field_image_node_image extends image_handler_field_image_node_image {
  function construct() {
    parent::construct();
    $this->additional_fields['fid'] = array('table' => 'image', 'field' => 'fid');
    $this->additional_fields['image_size'] = array('table' => 'image', 'field' => 'image_size');
  }

  function pre_render(&$values) {
    foreach ($values as $item) {
      if ($item->{$this->aliases['image_size']} == $this->options['image_derivative']) {
        $values = array($item);
        return;
      }
      if ($item->{$this->aliases['image_size']} == '_original') {
        $original = $item;
      }
    }
    $this->options['image_derivative'] = '_original';
    $values = array($original);
  }

  /**
   * Return image html, using image_load() and image_display().
   *
   * We rely on Image module to handle getting the data because although we can
   * use the derivative option to restrict the join, we do not have the agility
   * to fall back to the original when the requested derivative is larger than
   * the image and is absent from the system.
   */
  function render_html($values) {
    $derivative = $this->options['image_derivative'];

    $node = $this->build_image_display_node($values);

    // image_load() will load the files for all derivatives. Derivatives larger
    // than the original fall back to the original. Stale derivatives will be
    // regenerated.
    image_load($node);

    if (($alias = drupal_get_path_alias('filefield_paths/alias/'. $values->{$this->aliases['fid']})) !== 'filefield_paths/alias/'. $values->{$this->aliases['fid']} && _file_aliases_display_alias('image', 'image')) {
      // Calculate relative path.
      $path = (variable_get('file_downloads', FILE_DOWNLOADS_PUBLIC) == FILE_DOWNLOADS_PUBLIC) ? '' : base_path();
      foreach (explode('/', file_directory_path()) as $dir) {
        $path .= '../';
      }
      $node->images[$derivative] = $path . $alias;
    }

    return image_display($node, $derivative);
  }
}
