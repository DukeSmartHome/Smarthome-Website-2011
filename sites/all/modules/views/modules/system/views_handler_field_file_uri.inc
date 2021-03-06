<?php
// $Id: views_handler_field_file_uri.inc,v 1.1.2.1 2010/10/06 17:47:37 dereine Exp $

/**
 * Field handler to add rendering file paths as file URLs instead of as internal file URIs.
 */
class views_handler_field_file_uri extends views_handler_field_file {
  function option_definition() {
    $options = parent::option_definition();
    $options['file_download_path'] = array('default' => FALSE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['file_download_path'] = array(
      '#title' => t('Display download path instead of file storage URI'),
      '#description' => t('This will provide the full download URL rather than the internal filestream address.'),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['file_download_path']),
    );
  }

  function render($values) {
    $data = $values->{$this->field_alias};
    if (!empty($this->options['file_download_path']) && $data !== NULL && $data !== '') {
      $data = file_create_url($data);
    }
    return $this->render_link($data, $values);
  }
}
