<?php

class i18nviews extends i18n_string_object_wrapper {
  /**
   * Get string context
   */
  public function get_string_context() {
    return array($this->object->name, '*');
  }

  /**
   * Get translatable properties
   */
  protected function build_properties() {
    $properties = parent::build_properties();
    $properties[$this->get_textgroup()][$this->object->name] = i18nviews_views_properties($this->object);
    return $properties;
  }

  /**
   * Get edit path for oject.
   */
  public function get_edit_path() {
    return 'admin/structure/views/view/' . $this->object->name .'/edit';
  }

  /**
   * Get translate path for object
   */
  public function get_translate_path($langcode = NULL) {
    return 'admin/structure/views/view/' . $this->object->name .'/translate' . ($langcode ? '/' . $langcode : '');
  }
}
