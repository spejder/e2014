<?php

/**
 * @file
 * Display Suite E2014 News configuration.
 */

function ds_e2014_news() {
  return array(
    'label' => t('E2014 News'),
    'regions' => array(
      'main' => t('Main'),
    ),
    // Uncomment if you want to include a CSS file for this layout (e2014_news.css)
    'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (e2014_news.png)
    // 'image' => TRUE,
  );
}
