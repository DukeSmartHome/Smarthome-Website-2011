<?php
// $Id: twocol_bricks.inc,v 1.4 2010/10/11 22:56:02 sdboyer Exp $

/**
 * @file
 * Implementation for the two column bricked layout
 */

// Plugin definition
$plugin = array(
  'title' => t('Home Page'),
  'category' => t('Smart Home'),
  'icon' => 'home.png',
  'theme' => 'home',
  'css' => 'home.css',
  'regions' => array(
    'top' => t('Top'),
    'left_middle' => t('Left middle'),
    'right_middle' => t('Right middle'),
    'left_bottom' => t('Left bottom'),
    'center_bottom' => t('Center bottom'),
    'right_bottom' => t('Right bottom'),
  ),
);

