<?php

function hosting_proxy_hosting_feature() {
  $features['proxy'] = array(
    'title' => t('Reverse Proxy servers'),
    'description' => t('Provide support for Reverse Proxy servers.'),
    'status' => HOSTING_FEATURE_DISABLED,
    'module' => 'proxy_server',
    'group' => 'experimental'
    );
  return $features;
}

