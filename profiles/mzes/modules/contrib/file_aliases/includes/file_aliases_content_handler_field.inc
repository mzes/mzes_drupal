<?php

/**
 * @file
 * The subclass adds basic field and formatter info,
 * for field-specific subclasses to use if they need to.
 *
 * Fields could extend this class if they want field and formatter handling
 * but don't want the multiple value grouping options created by
 * content_handler_field_multiple.
 */
class file_aliases_content_handler_field extends content_handler_field {
  var $content_field;

  function render($values) {
    $field = $this->content_field;
    $options = $this->options;
    $db_info = content_database_info($field);

    // Build a pseudo-node from the retrieved values.
    $node = clone($values);
    $node->type = $values->{$this->aliases['type']};
    $node->nid = $values->{$this->aliases['nid']};
    $node->vid = $values->{$this->aliases['vid']};
    // Some formatters need to behave differently depending on the build_mode
    // (for instance: preview), so we provide one.
    $node->build_mode = NODE_BUILD_NORMAL;

    $item = array();
    foreach ($db_info['columns'] as $column => $attributes) {
      $item[$column] = $values->{$this->aliases[$attributes['column']]};
    }

    $item['#delta'] = $field['multiple'] ?  $values->{$this->aliases['delta']} : 0;

    $field['module'] = 'file_aliases_'. $field['module'];

    // Render items.
    $formatter_name = $options['format'];
    if ($formatter = _content_get_formatter($formatter_name, $field['type'])) {
      if (content_handle('formatter', 'multiple values', $formatter) == CONTENT_HANDLE_CORE) {
        // Single-value formatter.
        $output = content_format($field, $item, $formatter_name, $node);
      }
      else {
        // Multiple values formatter - we actually have only one value to display.
        $output = content_format($field, array($item), $formatter_name, $node);
      }
      return $this->render_link($output, $values);
    }
    return '';
  }

}
