<?php

/**
 * @file
 * Display Suite E2014 Article configuration.
 */

function ds_e2014_article() {
  return array(
    'label' => t('E2014 Article'),
    'regions' => array(
      'main' => t('Main'),
    ),
    // Uncomment if you want to include a CSS file for this layout (e2014_article.css)
    'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (e2014_article.png)
    // 'image' => TRUE,
  );
}
