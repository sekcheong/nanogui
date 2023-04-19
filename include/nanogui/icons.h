/*
    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/

/* Developer note: need to make a change to this file?
 * Please raise an Issue on GitHub describing what needs to change.  This file
 * was generated, so the scripts that generated it needs to update as well.
 */

/**
 * \file nanogui/icons.h
 *
 * \brief This is a list of icon codes for the free variant of the
 * FontAwesome 5.10.1 font.
 *
 * \rst
 *
 * This file defines the full listing of
 * `FontAwesome <https://raw.githubusercontent.com/FortAwesome/Font-Awesome>`_
 * icons available in NanoGUI.  Please note that if viewing the documentation
 * on the web, your browser may display the icons differently than what they
 * look like in NanoGUI.  Run the one of the :ref:`nanogui_example_icons`
 * executables to see what they all look like in NanoGUI.
 *
 * .. tip::
 *
 *    In C++, ``#include <nanogui/icons.h>`` to gain access to the ``#define``
 *    shown in these docs and simply reference the names as listed in the
 *    documentation.  To use the icons from Python, declare
 *    ``from nanogui import icons`` and reference the icons as follows:
 *    ``icons.FA_ASTERISK``.
 *
 * The following icons are available:
 *
 * .. raw:: html
 *
 *    <center>
 *      <div class="wy-table-responsive">
 *        <table class="docutils" border=1>
 *          <colgroup>
 *            <col width="90%" align="center"/>
 *            <col width="10%" align="center" />
 *          </colgroup>
 *          <thead valign="bottom">
 *            <tr class="row-odd">
 *              <th class="head" align="center">Definition</th>
 *              <th class="head" align="center">Icon</th>
 *            </tr>
 *          </thead>
 *          <tbody valign="top">
 *            <tr class="row-even">
 *              <td align="right"><code>FA_0</code></td>
 *              <td align="center"><span class="fa-0"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_1</code></td>
 *              <td align="center"><span class="fa-1"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_2</code></td>
 *              <td align="center"><span class="fa-2"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_3</code></td>
 *              <td align="center"><span class="fa-3"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_4</code></td>
 *              <td align="center"><span class="fa-4"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_5</code></td>
 *              <td align="center"><span class="fa-5"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_6</code></td>
 *              <td align="center"><span class="fa-6"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_7</code></td>
 *              <td align="center"><span class="fa-7"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_8</code></td>
 *              <td align="center"><span class="fa-8"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_9</code></td>
 *              <td align="center"><span class="fa-9"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_A</code></td>
 *              <td align="center"><span class="fa-a"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ADDRESS_BOOK</code></td>
 *              <td align="center"><span class="fa-address-book"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ADDRESS_CARD</code></td>
 *              <td align="center"><span class="fa-address-card"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ALIGN_CENTER</code></td>
 *              <td align="center"><span class="fa-align-center"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ALIGN_JUSTIFY</code></td>
 *              <td align="center"><span class="fa-align-justify"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ALIGN_LEFT</code></td>
 *              <td align="center"><span class="fa-align-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ALIGN_RIGHT</code></td>
 *              <td align="center"><span class="fa-align-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ANCHOR</code></td>
 *              <td align="center"><span class="fa-anchor"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ANCHOR_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-anchor-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ANCHOR_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-anchor-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ANCHOR_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-anchor-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ANCHOR_LOCK</code></td>
 *              <td align="center"><span class="fa-anchor-lock"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ANGLE_DOWN</code></td>
 *              <td align="center"><span class="fa-angle-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ANGLE_LEFT</code></td>
 *              <td align="center"><span class="fa-angle-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ANGLE_RIGHT</code></td>
 *              <td align="center"><span class="fa-angle-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ANGLE_UP</code></td>
 *              <td align="center"><span class="fa-angle-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ANGLES_DOWN</code></td>
 *              <td align="center"><span class="fa-angles-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ANGLES_LEFT</code></td>
 *              <td align="center"><span class="fa-angles-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ANGLES_RIGHT</code></td>
 *              <td align="center"><span class="fa-angles-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ANGLES_UP</code></td>
 *              <td align="center"><span class="fa-angles-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ANKH</code></td>
 *              <td align="center"><span class="fa-ankh"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_APPLE_WHOLE</code></td>
 *              <td align="center"><span class="fa-apple-whole"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARCHWAY</code></td>
 *              <td align="center"><span class="fa-archway"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_DOWN</code></td>
 *              <td align="center"><span class="fa-arrow-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_DOWN_1_9</code></td>
 *              <td align="center"><span class="fa-arrow-down-1-9"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_DOWN_9_1</code></td>
 *              <td align="center"><span class="fa-arrow-down-9-1"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_DOWN_A_Z</code></td>
 *              <td align="center"><span class="fa-arrow-down-a-z"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_DOWN_LONG</code></td>
 *              <td align="center"><span class="fa-arrow-down-long"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_DOWN_SHORT_WIDE</code></td>
 *              <td align="center"><span class="fa-arrow-down-short-wide"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_DOWN_UP_ACROSS_LINE</code></td>
 *              <td align="center"><span class="fa-arrow-down-up-across-line"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_DOWN_UP_LOCK</code></td>
 *              <td align="center"><span class="fa-arrow-down-up-lock"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_DOWN_WIDE_SHORT</code></td>
 *              <td align="center"><span class="fa-arrow-down-wide-short"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_DOWN_Z_A</code></td>
 *              <td align="center"><span class="fa-arrow-down-z-a"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_LEFT</code></td>
 *              <td align="center"><span class="fa-arrow-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_LEFT_LONG</code></td>
 *              <td align="center"><span class="fa-arrow-left-long"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_POINTER</code></td>
 *              <td align="center"><span class="fa-arrow-pointer"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_RIGHT</code></td>
 *              <td align="center"><span class="fa-arrow-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_RIGHT_ARROW_LEFT</code></td>
 *              <td align="center"><span class="fa-arrow-right-arrow-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_RIGHT_FROM_BRACKET</code></td>
 *              <td align="center"><span class="fa-arrow-right-from-bracket"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_RIGHT_LONG</code></td>
 *              <td align="center"><span class="fa-arrow-right-long"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_RIGHT_TO_BRACKET</code></td>
 *              <td align="center"><span class="fa-arrow-right-to-bracket"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_RIGHT_TO_CITY</code></td>
 *              <td align="center"><span class="fa-arrow-right-to-city"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_ROTATE_LEFT</code></td>
 *              <td align="center"><span class="fa-arrow-rotate-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_ROTATE_RIGHT</code></td>
 *              <td align="center"><span class="fa-arrow-rotate-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_TREND_DOWN</code></td>
 *              <td align="center"><span class="fa-arrow-trend-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_TREND_UP</code></td>
 *              <td align="center"><span class="fa-arrow-trend-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_TURN_DOWN</code></td>
 *              <td align="center"><span class="fa-arrow-turn-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_TURN_UP</code></td>
 *              <td align="center"><span class="fa-arrow-turn-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_UP</code></td>
 *              <td align="center"><span class="fa-arrow-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_UP_1_9</code></td>
 *              <td align="center"><span class="fa-arrow-up-1-9"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_UP_9_1</code></td>
 *              <td align="center"><span class="fa-arrow-up-9-1"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_UP_A_Z</code></td>
 *              <td align="center"><span class="fa-arrow-up-a-z"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_UP_FROM_BRACKET</code></td>
 *              <td align="center"><span class="fa-arrow-up-from-bracket"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_UP_FROM_GROUND_WATER</code></td>
 *              <td align="center"><span class="fa-arrow-up-from-ground-water"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_UP_FROM_WATER_PUMP</code></td>
 *              <td align="center"><span class="fa-arrow-up-from-water-pump"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_UP_LONG</code></td>
 *              <td align="center"><span class="fa-arrow-up-long"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_UP_RIGHT_DOTS</code></td>
 *              <td align="center"><span class="fa-arrow-up-right-dots"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_UP_RIGHT_FROM_SQUARE</code></td>
 *              <td align="center"><span class="fa-arrow-up-right-from-square"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_UP_SHORT_WIDE</code></td>
 *              <td align="center"><span class="fa-arrow-up-short-wide"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROW_UP_WIDE_SHORT</code></td>
 *              <td align="center"><span class="fa-arrow-up-wide-short"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROW_UP_Z_A</code></td>
 *              <td align="center"><span class="fa-arrow-up-z-a"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROWS_DOWN_TO_LINE</code></td>
 *              <td align="center"><span class="fa-arrows-down-to-line"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROWS_DOWN_TO_PEOPLE</code></td>
 *              <td align="center"><span class="fa-arrows-down-to-people"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROWS_LEFT_RIGHT</code></td>
 *              <td align="center"><span class="fa-arrows-left-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROWS_LEFT_RIGHT_TO_LINE</code></td>
 *              <td align="center"><span class="fa-arrows-left-right-to-line"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROWS_ROTATE</code></td>
 *              <td align="center"><span class="fa-arrows-rotate"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROWS_SPIN</code></td>
 *              <td align="center"><span class="fa-arrows-spin"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROWS_SPLIT_UP_AND_LEFT</code></td>
 *              <td align="center"><span class="fa-arrows-split-up-and-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROWS_TO_CIRCLE</code></td>
 *              <td align="center"><span class="fa-arrows-to-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROWS_TO_DOT</code></td>
 *              <td align="center"><span class="fa-arrows-to-dot"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROWS_TO_EYE</code></td>
 *              <td align="center"><span class="fa-arrows-to-eye"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROWS_TURN_RIGHT</code></td>
 *              <td align="center"><span class="fa-arrows-turn-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROWS_TURN_TO_DOTS</code></td>
 *              <td align="center"><span class="fa-arrows-turn-to-dots"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROWS_UP_DOWN</code></td>
 *              <td align="center"><span class="fa-arrows-up-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ARROWS_UP_DOWN_LEFT_RIGHT</code></td>
 *              <td align="center"><span class="fa-arrows-up-down-left-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ARROWS_UP_TO_LINE</code></td>
 *              <td align="center"><span class="fa-arrows-up-to-line"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ASTERISK</code></td>
 *              <td align="center"><span class="fa-asterisk"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_AT</code></td>
 *              <td align="center"><span class="fa-at"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ATOM</code></td>
 *              <td align="center"><span class="fa-atom"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_AUDIO_DESCRIPTION</code></td>
 *              <td align="center"><span class="fa-audio-description"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_AUSTRAL_SIGN</code></td>
 *              <td align="center"><span class="fa-austral-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_AWARD</code></td>
 *              <td align="center"><span class="fa-award"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_B</code></td>
 *              <td align="center"><span class="fa-b"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BABY</code></td>
 *              <td align="center"><span class="fa-baby"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BABY_CARRIAGE</code></td>
 *              <td align="center"><span class="fa-baby-carriage"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BACKWARD</code></td>
 *              <td align="center"><span class="fa-backward"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BACKWARD_FAST</code></td>
 *              <td align="center"><span class="fa-backward-fast"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BACKWARD_STEP</code></td>
 *              <td align="center"><span class="fa-backward-step"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BACON</code></td>
 *              <td align="center"><span class="fa-bacon"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BACTERIA</code></td>
 *              <td align="center"><span class="fa-bacteria"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BACTERIUM</code></td>
 *              <td align="center"><span class="fa-bacterium"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BAG_SHOPPING</code></td>
 *              <td align="center"><span class="fa-bag-shopping"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BAHAI</code></td>
 *              <td align="center"><span class="fa-bahai"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BAHT_SIGN</code></td>
 *              <td align="center"><span class="fa-baht-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BAN</code></td>
 *              <td align="center"><span class="fa-ban"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BAN_SMOKING</code></td>
 *              <td align="center"><span class="fa-ban-smoking"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BANDAGE</code></td>
 *              <td align="center"><span class="fa-bandage"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BANGLADESHI_TAKA_SIGN</code></td>
 *              <td align="center"><span class="fa-bangladeshi-taka-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BARCODE</code></td>
 *              <td align="center"><span class="fa-barcode"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BARS</code></td>
 *              <td align="center"><span class="fa-bars"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BARS_PROGRESS</code></td>
 *              <td align="center"><span class="fa-bars-progress"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BARS_STAGGERED</code></td>
 *              <td align="center"><span class="fa-bars-staggered"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BASEBALL</code></td>
 *              <td align="center"><span class="fa-baseball"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BASEBALL_BAT_BALL</code></td>
 *              <td align="center"><span class="fa-baseball-bat-ball"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BASKET_SHOPPING</code></td>
 *              <td align="center"><span class="fa-basket-shopping"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BASKETBALL</code></td>
 *              <td align="center"><span class="fa-basketball"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BATH</code></td>
 *              <td align="center"><span class="fa-bath"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BATTERY_EMPTY</code></td>
 *              <td align="center"><span class="fa-battery-empty"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BATTERY_FULL</code></td>
 *              <td align="center"><span class="fa-battery-full"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BATTERY_HALF</code></td>
 *              <td align="center"><span class="fa-battery-half"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BATTERY_QUARTER</code></td>
 *              <td align="center"><span class="fa-battery-quarter"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BATTERY_THREE_QUARTERS</code></td>
 *              <td align="center"><span class="fa-battery-three-quarters"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BED</code></td>
 *              <td align="center"><span class="fa-bed"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BED_PULSE</code></td>
 *              <td align="center"><span class="fa-bed-pulse"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BEER_MUG_EMPTY</code></td>
 *              <td align="center"><span class="fa-beer-mug-empty"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BELL</code></td>
 *              <td align="center"><span class="fa-bell"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BELL_CONCIERGE</code></td>
 *              <td align="center"><span class="fa-bell-concierge"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BELL_SLASH</code></td>
 *              <td align="center"><span class="fa-bell-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BEZIER_CURVE</code></td>
 *              <td align="center"><span class="fa-bezier-curve"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BICYCLE</code></td>
 *              <td align="center"><span class="fa-bicycle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BINOCULARS</code></td>
 *              <td align="center"><span class="fa-binoculars"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BIOHAZARD</code></td>
 *              <td align="center"><span class="fa-biohazard"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BITCOIN_SIGN</code></td>
 *              <td align="center"><span class="fa-bitcoin-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BLENDER</code></td>
 *              <td align="center"><span class="fa-blender"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BLENDER_PHONE</code></td>
 *              <td align="center"><span class="fa-blender-phone"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BLOG</code></td>
 *              <td align="center"><span class="fa-blog"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOLD</code></td>
 *              <td align="center"><span class="fa-bold"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOLT</code></td>
 *              <td align="center"><span class="fa-bolt"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOLT_LIGHTNING</code></td>
 *              <td align="center"><span class="fa-bolt-lightning"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOMB</code></td>
 *              <td align="center"><span class="fa-bomb"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BONE</code></td>
 *              <td align="center"><span class="fa-bone"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BONG</code></td>
 *              <td align="center"><span class="fa-bong"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOOK</code></td>
 *              <td align="center"><span class="fa-book"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOOK_ATLAS</code></td>
 *              <td align="center"><span class="fa-book-atlas"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOOK_BIBLE</code></td>
 *              <td align="center"><span class="fa-book-bible"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOOK_BOOKMARK</code></td>
 *              <td align="center"><span class="fa-book-bookmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOOK_JOURNAL_WHILLS</code></td>
 *              <td align="center"><span class="fa-book-journal-whills"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOOK_MEDICAL</code></td>
 *              <td align="center"><span class="fa-book-medical"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOOK_OPEN</code></td>
 *              <td align="center"><span class="fa-book-open"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOOK_OPEN_READER</code></td>
 *              <td align="center"><span class="fa-book-open-reader"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOOK_QURAN</code></td>
 *              <td align="center"><span class="fa-book-quran"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOOK_SKULL</code></td>
 *              <td align="center"><span class="fa-book-skull"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOOK_TANAKH</code></td>
 *              <td align="center"><span class="fa-book-tanakh"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOOKMARK</code></td>
 *              <td align="center"><span class="fa-bookmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BORDER_ALL</code></td>
 *              <td align="center"><span class="fa-border-all"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BORDER_NONE</code></td>
 *              <td align="center"><span class="fa-border-none"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BORDER_TOP_LEFT</code></td>
 *              <td align="center"><span class="fa-border-top-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BORE_HOLE</code></td>
 *              <td align="center"><span class="fa-bore-hole"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOTTLE_DROPLET</code></td>
 *              <td align="center"><span class="fa-bottle-droplet"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOTTLE_WATER</code></td>
 *              <td align="center"><span class="fa-bottle-water"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOWL_FOOD</code></td>
 *              <td align="center"><span class="fa-bowl-food"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOWL_RICE</code></td>
 *              <td align="center"><span class="fa-bowl-rice"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOWLING_BALL</code></td>
 *              <td align="center"><span class="fa-bowling-ball"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOX</code></td>
 *              <td align="center"><span class="fa-box"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOX_ARCHIVE</code></td>
 *              <td align="center"><span class="fa-box-archive"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOX_OPEN</code></td>
 *              <td align="center"><span class="fa-box-open"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOX_TISSUE</code></td>
 *              <td align="center"><span class="fa-box-tissue"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BOXES_PACKING</code></td>
 *              <td align="center"><span class="fa-boxes-packing"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BOXES_STACKED</code></td>
 *              <td align="center"><span class="fa-boxes-stacked"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BRAILLE</code></td>
 *              <td align="center"><span class="fa-braille"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BRAIN</code></td>
 *              <td align="center"><span class="fa-brain"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BRAZILIAN_REAL_SIGN</code></td>
 *              <td align="center"><span class="fa-brazilian-real-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BREAD_SLICE</code></td>
 *              <td align="center"><span class="fa-bread-slice"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BRIDGE</code></td>
 *              <td align="center"><span class="fa-bridge"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BRIDGE_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-bridge-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BRIDGE_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-bridge-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BRIDGE_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-bridge-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BRIDGE_LOCK</code></td>
 *              <td align="center"><span class="fa-bridge-lock"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BRIDGE_WATER</code></td>
 *              <td align="center"><span class="fa-bridge-water"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BRIEFCASE</code></td>
 *              <td align="center"><span class="fa-briefcase"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BRIEFCASE_MEDICAL</code></td>
 *              <td align="center"><span class="fa-briefcase-medical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BROOM</code></td>
 *              <td align="center"><span class="fa-broom"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BROOM_BALL</code></td>
 *              <td align="center"><span class="fa-broom-ball"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BRUSH</code></td>
 *              <td align="center"><span class="fa-brush"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BUCKET</code></td>
 *              <td align="center"><span class="fa-bucket"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BUG</code></td>
 *              <td align="center"><span class="fa-bug"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BUG_SLASH</code></td>
 *              <td align="center"><span class="fa-bug-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BUGS</code></td>
 *              <td align="center"><span class="fa-bugs"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BUILDING</code></td>
 *              <td align="center"><span class="fa-building"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BUILDING_CIRCLE_ARROW_RIGHT</code></td>
 *              <td align="center"><span class="fa-building-circle-arrow-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BUILDING_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-building-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BUILDING_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-building-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BUILDING_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-building-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BUILDING_COLUMNS</code></td>
 *              <td align="center"><span class="fa-building-columns"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BUILDING_FLAG</code></td>
 *              <td align="center"><span class="fa-building-flag"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BUILDING_LOCK</code></td>
 *              <td align="center"><span class="fa-building-lock"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BUILDING_NGO</code></td>
 *              <td align="center"><span class="fa-building-ngo"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BUILDING_SHIELD</code></td>
 *              <td align="center"><span class="fa-building-shield"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BUILDING_UN</code></td>
 *              <td align="center"><span class="fa-building-un"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BUILDING_USER</code></td>
 *              <td align="center"><span class="fa-building-user"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BUILDING_WHEAT</code></td>
 *              <td align="center"><span class="fa-building-wheat"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BULLHORN</code></td>
 *              <td align="center"><span class="fa-bullhorn"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BULLSEYE</code></td>
 *              <td align="center"><span class="fa-bullseye"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BURGER</code></td>
 *              <td align="center"><span class="fa-burger"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BURST</code></td>
 *              <td align="center"><span class="fa-burst"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BUS</code></td>
 *              <td align="center"><span class="fa-bus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_BUS_SIMPLE</code></td>
 *              <td align="center"><span class="fa-bus-simple"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_BUSINESS_TIME</code></td>
 *              <td align="center"><span class="fa-business-time"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_C</code></td>
 *              <td align="center"><span class="fa-c"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CABLE_CAR</code></td>
 *              <td align="center"><span class="fa-cable-car"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CAKE_CANDLES</code></td>
 *              <td align="center"><span class="fa-cake-candles"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CALCULATOR</code></td>
 *              <td align="center"><span class="fa-calculator"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CALENDAR</code></td>
 *              <td align="center"><span class="fa-calendar"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CALENDAR_CHECK</code></td>
 *              <td align="center"><span class="fa-calendar-check"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CALENDAR_DAY</code></td>
 *              <td align="center"><span class="fa-calendar-day"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CALENDAR_DAYS</code></td>
 *              <td align="center"><span class="fa-calendar-days"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CALENDAR_MINUS</code></td>
 *              <td align="center"><span class="fa-calendar-minus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CALENDAR_PLUS</code></td>
 *              <td align="center"><span class="fa-calendar-plus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CALENDAR_WEEK</code></td>
 *              <td align="center"><span class="fa-calendar-week"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CALENDAR_XMARK</code></td>
 *              <td align="center"><span class="fa-calendar-xmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CAMERA</code></td>
 *              <td align="center"><span class="fa-camera"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CAMERA_RETRO</code></td>
 *              <td align="center"><span class="fa-camera-retro"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CAMERA_ROTATE</code></td>
 *              <td align="center"><span class="fa-camera-rotate"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CAMPGROUND</code></td>
 *              <td align="center"><span class="fa-campground"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CANDY_CANE</code></td>
 *              <td align="center"><span class="fa-candy-cane"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CANNABIS</code></td>
 *              <td align="center"><span class="fa-cannabis"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CAPSULES</code></td>
 *              <td align="center"><span class="fa-capsules"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CAR</code></td>
 *              <td align="center"><span class="fa-car"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CAR_BATTERY</code></td>
 *              <td align="center"><span class="fa-car-battery"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CAR_BURST</code></td>
 *              <td align="center"><span class="fa-car-burst"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CAR_ON</code></td>
 *              <td align="center"><span class="fa-car-on"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CAR_REAR</code></td>
 *              <td align="center"><span class="fa-car-rear"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CAR_SIDE</code></td>
 *              <td align="center"><span class="fa-car-side"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CAR_TUNNEL</code></td>
 *              <td align="center"><span class="fa-car-tunnel"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CARAVAN</code></td>
 *              <td align="center"><span class="fa-caravan"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CARET_DOWN</code></td>
 *              <td align="center"><span class="fa-caret-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CARET_LEFT</code></td>
 *              <td align="center"><span class="fa-caret-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CARET_RIGHT</code></td>
 *              <td align="center"><span class="fa-caret-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CARET_UP</code></td>
 *              <td align="center"><span class="fa-caret-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CARROT</code></td>
 *              <td align="center"><span class="fa-carrot"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CART_ARROW_DOWN</code></td>
 *              <td align="center"><span class="fa-cart-arrow-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CART_FLATBED</code></td>
 *              <td align="center"><span class="fa-cart-flatbed"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CART_FLATBED_SUITCASE</code></td>
 *              <td align="center"><span class="fa-cart-flatbed-suitcase"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CART_PLUS</code></td>
 *              <td align="center"><span class="fa-cart-plus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CART_SHOPPING</code></td>
 *              <td align="center"><span class="fa-cart-shopping"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CASH_REGISTER</code></td>
 *              <td align="center"><span class="fa-cash-register"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CAT</code></td>
 *              <td align="center"><span class="fa-cat"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CEDI_SIGN</code></td>
 *              <td align="center"><span class="fa-cedi-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CENT_SIGN</code></td>
 *              <td align="center"><span class="fa-cent-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CERTIFICATE</code></td>
 *              <td align="center"><span class="fa-certificate"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHAIR</code></td>
 *              <td align="center"><span class="fa-chair"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHALKBOARD</code></td>
 *              <td align="center"><span class="fa-chalkboard"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHALKBOARD_USER</code></td>
 *              <td align="center"><span class="fa-chalkboard-user"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHAMPAGNE_GLASSES</code></td>
 *              <td align="center"><span class="fa-champagne-glasses"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHARGING_STATION</code></td>
 *              <td align="center"><span class="fa-charging-station"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHART_AREA</code></td>
 *              <td align="center"><span class="fa-chart-area"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHART_BAR</code></td>
 *              <td align="center"><span class="fa-chart-bar"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHART_COLUMN</code></td>
 *              <td align="center"><span class="fa-chart-column"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHART_GANTT</code></td>
 *              <td align="center"><span class="fa-chart-gantt"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHART_LINE</code></td>
 *              <td align="center"><span class="fa-chart-line"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHART_PIE</code></td>
 *              <td align="center"><span class="fa-chart-pie"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHART_SIMPLE</code></td>
 *              <td align="center"><span class="fa-chart-simple"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHECK</code></td>
 *              <td align="center"><span class="fa-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHECK_DOUBLE</code></td>
 *              <td align="center"><span class="fa-check-double"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHECK_TO_SLOT</code></td>
 *              <td align="center"><span class="fa-check-to-slot"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHEESE</code></td>
 *              <td align="center"><span class="fa-cheese"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHESS</code></td>
 *              <td align="center"><span class="fa-chess"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHESS_BISHOP</code></td>
 *              <td align="center"><span class="fa-chess-bishop"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHESS_BOARD</code></td>
 *              <td align="center"><span class="fa-chess-board"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHESS_KING</code></td>
 *              <td align="center"><span class="fa-chess-king"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHESS_KNIGHT</code></td>
 *              <td align="center"><span class="fa-chess-knight"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHESS_PAWN</code></td>
 *              <td align="center"><span class="fa-chess-pawn"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHESS_QUEEN</code></td>
 *              <td align="center"><span class="fa-chess-queen"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHESS_ROOK</code></td>
 *              <td align="center"><span class="fa-chess-rook"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHEVRON_DOWN</code></td>
 *              <td align="center"><span class="fa-chevron-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHEVRON_LEFT</code></td>
 *              <td align="center"><span class="fa-chevron-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHEVRON_RIGHT</code></td>
 *              <td align="center"><span class="fa-chevron-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHEVRON_UP</code></td>
 *              <td align="center"><span class="fa-chevron-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHILD</code></td>
 *              <td align="center"><span class="fa-child"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHILD_COMBATANT</code></td>
 *              <td align="center"><span class="fa-child-combatant"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHILD_DRESS</code></td>
 *              <td align="center"><span class="fa-child-dress"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHILD_REACHING</code></td>
 *              <td align="center"><span class="fa-child-reaching"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CHILDREN</code></td>
 *              <td align="center"><span class="fa-children"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CHURCH</code></td>
 *              <td align="center"><span class="fa-church"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE</code></td>
 *              <td align="center"><span class="fa-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_ARROW_DOWN</code></td>
 *              <td align="center"><span class="fa-circle-arrow-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_ARROW_LEFT</code></td>
 *              <td align="center"><span class="fa-circle-arrow-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_ARROW_RIGHT</code></td>
 *              <td align="center"><span class="fa-circle-arrow-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_ARROW_UP</code></td>
 *              <td align="center"><span class="fa-circle-arrow-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_CHEVRON_DOWN</code></td>
 *              <td align="center"><span class="fa-circle-chevron-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_CHEVRON_LEFT</code></td>
 *              <td align="center"><span class="fa-circle-chevron-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_CHEVRON_RIGHT</code></td>
 *              <td align="center"><span class="fa-circle-chevron-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_CHEVRON_UP</code></td>
 *              <td align="center"><span class="fa-circle-chevron-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_DOLLAR_TO_SLOT</code></td>
 *              <td align="center"><span class="fa-circle-dollar-to-slot"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_DOT</code></td>
 *              <td align="center"><span class="fa-circle-dot"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_DOWN</code></td>
 *              <td align="center"><span class="fa-circle-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_H</code></td>
 *              <td align="center"><span class="fa-circle-h"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_HALF_STROKE</code></td>
 *              <td align="center"><span class="fa-circle-half-stroke"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_INFO</code></td>
 *              <td align="center"><span class="fa-circle-info"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_LEFT</code></td>
 *              <td align="center"><span class="fa-circle-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_MINUS</code></td>
 *              <td align="center"><span class="fa-circle-minus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_NODES</code></td>
 *              <td align="center"><span class="fa-circle-nodes"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_NOTCH</code></td>
 *              <td align="center"><span class="fa-circle-notch"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_PAUSE</code></td>
 *              <td align="center"><span class="fa-circle-pause"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_PLAY</code></td>
 *              <td align="center"><span class="fa-circle-play"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_PLUS</code></td>
 *              <td align="center"><span class="fa-circle-plus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_QUESTION</code></td>
 *              <td align="center"><span class="fa-circle-question"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_RADIATION</code></td>
 *              <td align="center"><span class="fa-circle-radiation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_RIGHT</code></td>
 *              <td align="center"><span class="fa-circle-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_STOP</code></td>
 *              <td align="center"><span class="fa-circle-stop"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_UP</code></td>
 *              <td align="center"><span class="fa-circle-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CIRCLE_USER</code></td>
 *              <td align="center"><span class="fa-circle-user"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CITY</code></td>
 *              <td align="center"><span class="fa-city"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLAPPERBOARD</code></td>
 *              <td align="center"><span class="fa-clapperboard"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLIPBOARD</code></td>
 *              <td align="center"><span class="fa-clipboard"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLIPBOARD_CHECK</code></td>
 *              <td align="center"><span class="fa-clipboard-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLIPBOARD_LIST</code></td>
 *              <td align="center"><span class="fa-clipboard-list"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLIPBOARD_QUESTION</code></td>
 *              <td align="center"><span class="fa-clipboard-question"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLIPBOARD_USER</code></td>
 *              <td align="center"><span class="fa-clipboard-user"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLOCK</code></td>
 *              <td align="center"><span class="fa-clock"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLOCK_ROTATE_LEFT</code></td>
 *              <td align="center"><span class="fa-clock-rotate-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLONE</code></td>
 *              <td align="center"><span class="fa-clone"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLOSED_CAPTIONING</code></td>
 *              <td align="center"><span class="fa-closed-captioning"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLOUD</code></td>
 *              <td align="center"><span class="fa-cloud"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLOUD_ARROW_DOWN</code></td>
 *              <td align="center"><span class="fa-cloud-arrow-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLOUD_ARROW_UP</code></td>
 *              <td align="center"><span class="fa-cloud-arrow-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLOUD_BOLT</code></td>
 *              <td align="center"><span class="fa-cloud-bolt"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLOUD_MEATBALL</code></td>
 *              <td align="center"><span class="fa-cloud-meatball"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLOUD_MOON</code></td>
 *              <td align="center"><span class="fa-cloud-moon"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLOUD_MOON_RAIN</code></td>
 *              <td align="center"><span class="fa-cloud-moon-rain"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLOUD_RAIN</code></td>
 *              <td align="center"><span class="fa-cloud-rain"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLOUD_SHOWERS_HEAVY</code></td>
 *              <td align="center"><span class="fa-cloud-showers-heavy"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLOUD_SHOWERS_WATER</code></td>
 *              <td align="center"><span class="fa-cloud-showers-water"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLOUD_SUN</code></td>
 *              <td align="center"><span class="fa-cloud-sun"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CLOUD_SUN_RAIN</code></td>
 *              <td align="center"><span class="fa-cloud-sun-rain"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CLOVER</code></td>
 *              <td align="center"><span class="fa-clover"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CODE</code></td>
 *              <td align="center"><span class="fa-code"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CODE_BRANCH</code></td>
 *              <td align="center"><span class="fa-code-branch"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CODE_COMMIT</code></td>
 *              <td align="center"><span class="fa-code-commit"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CODE_COMPARE</code></td>
 *              <td align="center"><span class="fa-code-compare"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CODE_FORK</code></td>
 *              <td align="center"><span class="fa-code-fork"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CODE_MERGE</code></td>
 *              <td align="center"><span class="fa-code-merge"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CODE_PULL_REQUEST</code></td>
 *              <td align="center"><span class="fa-code-pull-request"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COINS</code></td>
 *              <td align="center"><span class="fa-coins"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COLON_SIGN</code></td>
 *              <td align="center"><span class="fa-colon-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COMMENT</code></td>
 *              <td align="center"><span class="fa-comment"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COMMENT_DOLLAR</code></td>
 *              <td align="center"><span class="fa-comment-dollar"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COMMENT_DOTS</code></td>
 *              <td align="center"><span class="fa-comment-dots"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COMMENT_MEDICAL</code></td>
 *              <td align="center"><span class="fa-comment-medical"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COMMENT_SLASH</code></td>
 *              <td align="center"><span class="fa-comment-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COMMENT_SMS</code></td>
 *              <td align="center"><span class="fa-comment-sms"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COMMENTS</code></td>
 *              <td align="center"><span class="fa-comments"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COMMENTS_DOLLAR</code></td>
 *              <td align="center"><span class="fa-comments-dollar"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COMPACT_DISC</code></td>
 *              <td align="center"><span class="fa-compact-disc"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COMPASS</code></td>
 *              <td align="center"><span class="fa-compass"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COMPASS_DRAFTING</code></td>
 *              <td align="center"><span class="fa-compass-drafting"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COMPRESS</code></td>
 *              <td align="center"><span class="fa-compress"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COMPUTER</code></td>
 *              <td align="center"><span class="fa-computer"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COMPUTER_MOUSE</code></td>
 *              <td align="center"><span class="fa-computer-mouse"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COOKIE</code></td>
 *              <td align="center"><span class="fa-cookie"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COOKIE_BITE</code></td>
 *              <td align="center"><span class="fa-cookie-bite"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COPY</code></td>
 *              <td align="center"><span class="fa-copy"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COPYRIGHT</code></td>
 *              <td align="center"><span class="fa-copyright"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_COUCH</code></td>
 *              <td align="center"><span class="fa-couch"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_COW</code></td>
 *              <td align="center"><span class="fa-cow"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CREDIT_CARD</code></td>
 *              <td align="center"><span class="fa-credit-card"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CROP</code></td>
 *              <td align="center"><span class="fa-crop"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CROP_SIMPLE</code></td>
 *              <td align="center"><span class="fa-crop-simple"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CROSS</code></td>
 *              <td align="center"><span class="fa-cross"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CROSSHAIRS</code></td>
 *              <td align="center"><span class="fa-crosshairs"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CROW</code></td>
 *              <td align="center"><span class="fa-crow"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CROWN</code></td>
 *              <td align="center"><span class="fa-crown"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CRUTCH</code></td>
 *              <td align="center"><span class="fa-crutch"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CRUZEIRO_SIGN</code></td>
 *              <td align="center"><span class="fa-cruzeiro-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CUBE</code></td>
 *              <td align="center"><span class="fa-cube"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_CUBES</code></td>
 *              <td align="center"><span class="fa-cubes"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_CUBES_STACKED</code></td>
 *              <td align="center"><span class="fa-cubes-stacked"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_D</code></td>
 *              <td align="center"><span class="fa-d"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DATABASE</code></td>
 *              <td align="center"><span class="fa-database"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DELETE_LEFT</code></td>
 *              <td align="center"><span class="fa-delete-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DEMOCRAT</code></td>
 *              <td align="center"><span class="fa-democrat"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DESKTOP</code></td>
 *              <td align="center"><span class="fa-desktop"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DHARMACHAKRA</code></td>
 *              <td align="center"><span class="fa-dharmachakra"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DIAGRAM_NEXT</code></td>
 *              <td align="center"><span class="fa-diagram-next"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DIAGRAM_PREDECESSOR</code></td>
 *              <td align="center"><span class="fa-diagram-predecessor"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DIAGRAM_PROJECT</code></td>
 *              <td align="center"><span class="fa-diagram-project"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DIAGRAM_SUCCESSOR</code></td>
 *              <td align="center"><span class="fa-diagram-successor"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DIAMOND</code></td>
 *              <td align="center"><span class="fa-diamond"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DIAMOND_TURN_RIGHT</code></td>
 *              <td align="center"><span class="fa-diamond-turn-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DICE</code></td>
 *              <td align="center"><span class="fa-dice"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DICE_D20</code></td>
 *              <td align="center"><span class="fa-dice-d20"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DICE_D6</code></td>
 *              <td align="center"><span class="fa-dice-d6"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DICE_FIVE</code></td>
 *              <td align="center"><span class="fa-dice-five"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DICE_FOUR</code></td>
 *              <td align="center"><span class="fa-dice-four"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DICE_ONE</code></td>
 *              <td align="center"><span class="fa-dice-one"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DICE_SIX</code></td>
 *              <td align="center"><span class="fa-dice-six"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DICE_THREE</code></td>
 *              <td align="center"><span class="fa-dice-three"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DICE_TWO</code></td>
 *              <td align="center"><span class="fa-dice-two"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DISEASE</code></td>
 *              <td align="center"><span class="fa-disease"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DISPLAY</code></td>
 *              <td align="center"><span class="fa-display"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DIVIDE</code></td>
 *              <td align="center"><span class="fa-divide"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DNA</code></td>
 *              <td align="center"><span class="fa-dna"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DOG</code></td>
 *              <td align="center"><span class="fa-dog"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DOLLAR_SIGN</code></td>
 *              <td align="center"><span class="fa-dollar-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DOLLY</code></td>
 *              <td align="center"><span class="fa-dolly"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DONG_SIGN</code></td>
 *              <td align="center"><span class="fa-dong-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DOOR_CLOSED</code></td>
 *              <td align="center"><span class="fa-door-closed"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DOOR_OPEN</code></td>
 *              <td align="center"><span class="fa-door-open"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DOVE</code></td>
 *              <td align="center"><span class="fa-dove"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DOWN_LEFT_AND_UP_RIGHT_TO_CENTER</code></td>
 *              <td align="center"><span class="fa-down-left-and-up-right-to-center"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DOWN_LONG</code></td>
 *              <td align="center"><span class="fa-down-long"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DOWNLOAD</code></td>
 *              <td align="center"><span class="fa-download"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DRAGON</code></td>
 *              <td align="center"><span class="fa-dragon"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DRAW_POLYGON</code></td>
 *              <td align="center"><span class="fa-draw-polygon"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DROPLET</code></td>
 *              <td align="center"><span class="fa-droplet"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DROPLET_SLASH</code></td>
 *              <td align="center"><span class="fa-droplet-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DRUM</code></td>
 *              <td align="center"><span class="fa-drum"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DRUM_STEELPAN</code></td>
 *              <td align="center"><span class="fa-drum-steelpan"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DRUMSTICK_BITE</code></td>
 *              <td align="center"><span class="fa-drumstick-bite"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DUMBBELL</code></td>
 *              <td align="center"><span class="fa-dumbbell"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DUMPSTER</code></td>
 *              <td align="center"><span class="fa-dumpster"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_DUMPSTER_FIRE</code></td>
 *              <td align="center"><span class="fa-dumpster-fire"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_DUNGEON</code></td>
 *              <td align="center"><span class="fa-dungeon"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_E</code></td>
 *              <td align="center"><span class="fa-e"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_EAR_DEAF</code></td>
 *              <td align="center"><span class="fa-ear-deaf"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_EAR_LISTEN</code></td>
 *              <td align="center"><span class="fa-ear-listen"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_EARTH_AFRICA</code></td>
 *              <td align="center"><span class="fa-earth-africa"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_EARTH_AMERICAS</code></td>
 *              <td align="center"><span class="fa-earth-americas"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_EARTH_ASIA</code></td>
 *              <td align="center"><span class="fa-earth-asia"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_EARTH_EUROPE</code></td>
 *              <td align="center"><span class="fa-earth-europe"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_EARTH_OCEANIA</code></td>
 *              <td align="center"><span class="fa-earth-oceania"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_EGG</code></td>
 *              <td align="center"><span class="fa-egg"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_EJECT</code></td>
 *              <td align="center"><span class="fa-eject"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ELEVATOR</code></td>
 *              <td align="center"><span class="fa-elevator"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ELLIPSIS</code></td>
 *              <td align="center"><span class="fa-ellipsis"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ELLIPSIS_VERTICAL</code></td>
 *              <td align="center"><span class="fa-ellipsis-vertical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ENVELOPE</code></td>
 *              <td align="center"><span class="fa-envelope"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ENVELOPE_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-envelope-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ENVELOPE_OPEN</code></td>
 *              <td align="center"><span class="fa-envelope-open"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ENVELOPE_OPEN_TEXT</code></td>
 *              <td align="center"><span class="fa-envelope-open-text"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ENVELOPES_BULK</code></td>
 *              <td align="center"><span class="fa-envelopes-bulk"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_EQUALS</code></td>
 *              <td align="center"><span class="fa-equals"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ERASER</code></td>
 *              <td align="center"><span class="fa-eraser"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ETHERNET</code></td>
 *              <td align="center"><span class="fa-ethernet"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_EURO_SIGN</code></td>
 *              <td align="center"><span class="fa-euro-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_EXPAND</code></td>
 *              <td align="center"><span class="fa-expand"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_EXPLOSION</code></td>
 *              <td align="center"><span class="fa-explosion"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_EYE</code></td>
 *              <td align="center"><span class="fa-eye"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_EYE_DROPPER</code></td>
 *              <td align="center"><span class="fa-eye-dropper"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_EYE_LOW_VISION</code></td>
 *              <td align="center"><span class="fa-eye-low-vision"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_EYE_SLASH</code></td>
 *              <td align="center"><span class="fa-eye-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_F</code></td>
 *              <td align="center"><span class="fa-f"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_ANGRY</code></td>
 *              <td align="center"><span class="fa-face-angry"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_DIZZY</code></td>
 *              <td align="center"><span class="fa-face-dizzy"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_FLUSHED</code></td>
 *              <td align="center"><span class="fa-face-flushed"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_FROWN</code></td>
 *              <td align="center"><span class="fa-face-frown"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_FROWN_OPEN</code></td>
 *              <td align="center"><span class="fa-face-frown-open"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_GRIMACE</code></td>
 *              <td align="center"><span class="fa-face-grimace"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_GRIN</code></td>
 *              <td align="center"><span class="fa-face-grin"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_GRIN_BEAM</code></td>
 *              <td align="center"><span class="fa-face-grin-beam"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_GRIN_BEAM_SWEAT</code></td>
 *              <td align="center"><span class="fa-face-grin-beam-sweat"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_GRIN_HEARTS</code></td>
 *              <td align="center"><span class="fa-face-grin-hearts"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_GRIN_SQUINT</code></td>
 *              <td align="center"><span class="fa-face-grin-squint"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_GRIN_SQUINT_TEARS</code></td>
 *              <td align="center"><span class="fa-face-grin-squint-tears"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_GRIN_STARS</code></td>
 *              <td align="center"><span class="fa-face-grin-stars"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_GRIN_TEARS</code></td>
 *              <td align="center"><span class="fa-face-grin-tears"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_GRIN_TONGUE</code></td>
 *              <td align="center"><span class="fa-face-grin-tongue"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_GRIN_TONGUE_SQUINT</code></td>
 *              <td align="center"><span class="fa-face-grin-tongue-squint"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_GRIN_TONGUE_WINK</code></td>
 *              <td align="center"><span class="fa-face-grin-tongue-wink"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_GRIN_WIDE</code></td>
 *              <td align="center"><span class="fa-face-grin-wide"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_GRIN_WINK</code></td>
 *              <td align="center"><span class="fa-face-grin-wink"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_KISS</code></td>
 *              <td align="center"><span class="fa-face-kiss"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_KISS_BEAM</code></td>
 *              <td align="center"><span class="fa-face-kiss-beam"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_KISS_WINK_HEART</code></td>
 *              <td align="center"><span class="fa-face-kiss-wink-heart"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_LAUGH</code></td>
 *              <td align="center"><span class="fa-face-laugh"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_LAUGH_BEAM</code></td>
 *              <td align="center"><span class="fa-face-laugh-beam"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_LAUGH_SQUINT</code></td>
 *              <td align="center"><span class="fa-face-laugh-squint"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_LAUGH_WINK</code></td>
 *              <td align="center"><span class="fa-face-laugh-wink"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_MEH</code></td>
 *              <td align="center"><span class="fa-face-meh"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_MEH_BLANK</code></td>
 *              <td align="center"><span class="fa-face-meh-blank"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_ROLLING_EYES</code></td>
 *              <td align="center"><span class="fa-face-rolling-eyes"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_SAD_CRY</code></td>
 *              <td align="center"><span class="fa-face-sad-cry"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_SAD_TEAR</code></td>
 *              <td align="center"><span class="fa-face-sad-tear"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_SMILE</code></td>
 *              <td align="center"><span class="fa-face-smile"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_SMILE_BEAM</code></td>
 *              <td align="center"><span class="fa-face-smile-beam"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_SMILE_WINK</code></td>
 *              <td align="center"><span class="fa-face-smile-wink"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FACE_SURPRISE</code></td>
 *              <td align="center"><span class="fa-face-surprise"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FACE_TIRED</code></td>
 *              <td align="center"><span class="fa-face-tired"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FAN</code></td>
 *              <td align="center"><span class="fa-fan"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FAUCET</code></td>
 *              <td align="center"><span class="fa-faucet"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FAUCET_DRIP</code></td>
 *              <td align="center"><span class="fa-faucet-drip"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FAX</code></td>
 *              <td align="center"><span class="fa-fax"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FEATHER</code></td>
 *              <td align="center"><span class="fa-feather"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FEATHER_POINTED</code></td>
 *              <td align="center"><span class="fa-feather-pointed"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FERRY</code></td>
 *              <td align="center"><span class="fa-ferry"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE</code></td>
 *              <td align="center"><span class="fa-file"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_ARROW_DOWN</code></td>
 *              <td align="center"><span class="fa-file-arrow-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_ARROW_UP</code></td>
 *              <td align="center"><span class="fa-file-arrow-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_AUDIO</code></td>
 *              <td align="center"><span class="fa-file-audio"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-file-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-file-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_CIRCLE_MINUS</code></td>
 *              <td align="center"><span class="fa-file-circle-minus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_CIRCLE_PLUS</code></td>
 *              <td align="center"><span class="fa-file-circle-plus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_CIRCLE_QUESTION</code></td>
 *              <td align="center"><span class="fa-file-circle-question"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-file-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_CODE</code></td>
 *              <td align="center"><span class="fa-file-code"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_CONTRACT</code></td>
 *              <td align="center"><span class="fa-file-contract"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_CSV</code></td>
 *              <td align="center"><span class="fa-file-csv"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_EXCEL</code></td>
 *              <td align="center"><span class="fa-file-excel"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_EXPORT</code></td>
 *              <td align="center"><span class="fa-file-export"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_IMAGE</code></td>
 *              <td align="center"><span class="fa-file-image"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_IMPORT</code></td>
 *              <td align="center"><span class="fa-file-import"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_INVOICE</code></td>
 *              <td align="center"><span class="fa-file-invoice"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_INVOICE_DOLLAR</code></td>
 *              <td align="center"><span class="fa-file-invoice-dollar"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_LINES</code></td>
 *              <td align="center"><span class="fa-file-lines"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_MEDICAL</code></td>
 *              <td align="center"><span class="fa-file-medical"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_PDF</code></td>
 *              <td align="center"><span class="fa-file-pdf"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_PEN</code></td>
 *              <td align="center"><span class="fa-file-pen"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_POWERPOINT</code></td>
 *              <td align="center"><span class="fa-file-powerpoint"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_PRESCRIPTION</code></td>
 *              <td align="center"><span class="fa-file-prescription"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_SHIELD</code></td>
 *              <td align="center"><span class="fa-file-shield"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_SIGNATURE</code></td>
 *              <td align="center"><span class="fa-file-signature"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_VIDEO</code></td>
 *              <td align="center"><span class="fa-file-video"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_WAVEFORM</code></td>
 *              <td align="center"><span class="fa-file-waveform"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILE_WORD</code></td>
 *              <td align="center"><span class="fa-file-word"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILE_ZIPPER</code></td>
 *              <td align="center"><span class="fa-file-zipper"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILL</code></td>
 *              <td align="center"><span class="fa-fill"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILL_DRIP</code></td>
 *              <td align="center"><span class="fa-fill-drip"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILM</code></td>
 *              <td align="center"><span class="fa-film"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILTER</code></td>
 *              <td align="center"><span class="fa-filter"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FILTER_CIRCLE_DOLLAR</code></td>
 *              <td align="center"><span class="fa-filter-circle-dollar"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FILTER_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-filter-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FINGERPRINT</code></td>
 *              <td align="center"><span class="fa-fingerprint"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FIRE</code></td>
 *              <td align="center"><span class="fa-fire"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FIRE_BURNER</code></td>
 *              <td align="center"><span class="fa-fire-burner"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FIRE_EXTINGUISHER</code></td>
 *              <td align="center"><span class="fa-fire-extinguisher"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FIRE_FLAME_CURVED</code></td>
 *              <td align="center"><span class="fa-fire-flame-curved"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FIRE_FLAME_SIMPLE</code></td>
 *              <td align="center"><span class="fa-fire-flame-simple"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FISH</code></td>
 *              <td align="center"><span class="fa-fish"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FISH_FINS</code></td>
 *              <td align="center"><span class="fa-fish-fins"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FLAG</code></td>
 *              <td align="center"><span class="fa-flag"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FLAG_CHECKERED</code></td>
 *              <td align="center"><span class="fa-flag-checkered"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FLAG_USA</code></td>
 *              <td align="center"><span class="fa-flag-usa"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FLASK</code></td>
 *              <td align="center"><span class="fa-flask"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FLASK_VIAL</code></td>
 *              <td align="center"><span class="fa-flask-vial"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FLOPPY_DISK</code></td>
 *              <td align="center"><span class="fa-floppy-disk"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FLORIN_SIGN</code></td>
 *              <td align="center"><span class="fa-florin-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FOLDER</code></td>
 *              <td align="center"><span class="fa-folder"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FOLDER_CLOSED</code></td>
 *              <td align="center"><span class="fa-folder-closed"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FOLDER_MINUS</code></td>
 *              <td align="center"><span class="fa-folder-minus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FOLDER_OPEN</code></td>
 *              <td align="center"><span class="fa-folder-open"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FOLDER_PLUS</code></td>
 *              <td align="center"><span class="fa-folder-plus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FOLDER_TREE</code></td>
 *              <td align="center"><span class="fa-folder-tree"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FONT</code></td>
 *              <td align="center"><span class="fa-font"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FONT_AWESOME</code></td>
 *              <td align="center"><span class="fa-font-awesome"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FOOTBALL</code></td>
 *              <td align="center"><span class="fa-football"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FORWARD</code></td>
 *              <td align="center"><span class="fa-forward"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FORWARD_FAST</code></td>
 *              <td align="center"><span class="fa-forward-fast"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FORWARD_STEP</code></td>
 *              <td align="center"><span class="fa-forward-step"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FRANC_SIGN</code></td>
 *              <td align="center"><span class="fa-franc-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_FROG</code></td>
 *              <td align="center"><span class="fa-frog"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_FUTBOL</code></td>
 *              <td align="center"><span class="fa-futbol"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_G</code></td>
 *              <td align="center"><span class="fa-g"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GAMEPAD</code></td>
 *              <td align="center"><span class="fa-gamepad"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GAS_PUMP</code></td>
 *              <td align="center"><span class="fa-gas-pump"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GAUGE</code></td>
 *              <td align="center"><span class="fa-gauge"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GAUGE_HIGH</code></td>
 *              <td align="center"><span class="fa-gauge-high"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GAUGE_SIMPLE</code></td>
 *              <td align="center"><span class="fa-gauge-simple"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GAUGE_SIMPLE_HIGH</code></td>
 *              <td align="center"><span class="fa-gauge-simple-high"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GAVEL</code></td>
 *              <td align="center"><span class="fa-gavel"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GEAR</code></td>
 *              <td align="center"><span class="fa-gear"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GEARS</code></td>
 *              <td align="center"><span class="fa-gears"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GEM</code></td>
 *              <td align="center"><span class="fa-gem"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GENDERLESS</code></td>
 *              <td align="center"><span class="fa-genderless"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GHOST</code></td>
 *              <td align="center"><span class="fa-ghost"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GIFT</code></td>
 *              <td align="center"><span class="fa-gift"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GIFTS</code></td>
 *              <td align="center"><span class="fa-gifts"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GLASS_WATER</code></td>
 *              <td align="center"><span class="fa-glass-water"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GLASS_WATER_DROPLET</code></td>
 *              <td align="center"><span class="fa-glass-water-droplet"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GLASSES</code></td>
 *              <td align="center"><span class="fa-glasses"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GLOBE</code></td>
 *              <td align="center"><span class="fa-globe"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GOLF_BALL_TEE</code></td>
 *              <td align="center"><span class="fa-golf-ball-tee"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GOPURAM</code></td>
 *              <td align="center"><span class="fa-gopuram"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GRADUATION_CAP</code></td>
 *              <td align="center"><span class="fa-graduation-cap"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GREATER_THAN</code></td>
 *              <td align="center"><span class="fa-greater-than"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GREATER_THAN_EQUAL</code></td>
 *              <td align="center"><span class="fa-greater-than-equal"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GRIP</code></td>
 *              <td align="center"><span class="fa-grip"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GRIP_LINES</code></td>
 *              <td align="center"><span class="fa-grip-lines"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GRIP_LINES_VERTICAL</code></td>
 *              <td align="center"><span class="fa-grip-lines-vertical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GRIP_VERTICAL</code></td>
 *              <td align="center"><span class="fa-grip-vertical"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GROUP_ARROWS_ROTATE</code></td>
 *              <td align="center"><span class="fa-group-arrows-rotate"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GUARANI_SIGN</code></td>
 *              <td align="center"><span class="fa-guarani-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_GUITAR</code></td>
 *              <td align="center"><span class="fa-guitar"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_GUN</code></td>
 *              <td align="center"><span class="fa-gun"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_H</code></td>
 *              <td align="center"><span class="fa-h"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAMMER</code></td>
 *              <td align="center"><span class="fa-hammer"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAMSA</code></td>
 *              <td align="center"><span class="fa-hamsa"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND</code></td>
 *              <td align="center"><span class="fa-hand"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAND_BACK_FIST</code></td>
 *              <td align="center"><span class="fa-hand-back-fist"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND_DOTS</code></td>
 *              <td align="center"><span class="fa-hand-dots"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAND_FIST</code></td>
 *              <td align="center"><span class="fa-hand-fist"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND_HOLDING</code></td>
 *              <td align="center"><span class="fa-hand-holding"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAND_HOLDING_DOLLAR</code></td>
 *              <td align="center"><span class="fa-hand-holding-dollar"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND_HOLDING_DROPLET</code></td>
 *              <td align="center"><span class="fa-hand-holding-droplet"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAND_HOLDING_HAND</code></td>
 *              <td align="center"><span class="fa-hand-holding-hand"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND_HOLDING_HEART</code></td>
 *              <td align="center"><span class="fa-hand-holding-heart"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAND_HOLDING_MEDICAL</code></td>
 *              <td align="center"><span class="fa-hand-holding-medical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND_LIZARD</code></td>
 *              <td align="center"><span class="fa-hand-lizard"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAND_MIDDLE_FINGER</code></td>
 *              <td align="center"><span class="fa-hand-middle-finger"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND_PEACE</code></td>
 *              <td align="center"><span class="fa-hand-peace"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAND_POINT_DOWN</code></td>
 *              <td align="center"><span class="fa-hand-point-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND_POINT_LEFT</code></td>
 *              <td align="center"><span class="fa-hand-point-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAND_POINT_RIGHT</code></td>
 *              <td align="center"><span class="fa-hand-point-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND_POINT_UP</code></td>
 *              <td align="center"><span class="fa-hand-point-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAND_POINTER</code></td>
 *              <td align="center"><span class="fa-hand-pointer"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND_SCISSORS</code></td>
 *              <td align="center"><span class="fa-hand-scissors"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAND_SPARKLES</code></td>
 *              <td align="center"><span class="fa-hand-sparkles"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAND_SPOCK</code></td>
 *              <td align="center"><span class="fa-hand-spock"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HANDCUFFS</code></td>
 *              <td align="center"><span class="fa-handcuffs"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HANDS</code></td>
 *              <td align="center"><span class="fa-hands"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HANDS_ASL_INTERPRETING</code></td>
 *              <td align="center"><span class="fa-hands-asl-interpreting"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HANDS_BOUND</code></td>
 *              <td align="center"><span class="fa-hands-bound"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HANDS_BUBBLES</code></td>
 *              <td align="center"><span class="fa-hands-bubbles"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HANDS_CLAPPING</code></td>
 *              <td align="center"><span class="fa-hands-clapping"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HANDS_HOLDING</code></td>
 *              <td align="center"><span class="fa-hands-holding"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HANDS_HOLDING_CHILD</code></td>
 *              <td align="center"><span class="fa-hands-holding-child"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HANDS_HOLDING_CIRCLE</code></td>
 *              <td align="center"><span class="fa-hands-holding-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HANDS_PRAYING</code></td>
 *              <td align="center"><span class="fa-hands-praying"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HANDSHAKE</code></td>
 *              <td align="center"><span class="fa-handshake"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HANDSHAKE_ANGLE</code></td>
 *              <td align="center"><span class="fa-handshake-angle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HANDSHAKE_SIMPLE</code></td>
 *              <td align="center"><span class="fa-handshake-simple"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HANDSHAKE_SIMPLE_SLASH</code></td>
 *              <td align="center"><span class="fa-handshake-simple-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HANDSHAKE_SLASH</code></td>
 *              <td align="center"><span class="fa-handshake-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HANUKIAH</code></td>
 *              <td align="center"><span class="fa-hanukiah"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HARD_DRIVE</code></td>
 *              <td align="center"><span class="fa-hard-drive"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HASHTAG</code></td>
 *              <td align="center"><span class="fa-hashtag"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAT_COWBOY</code></td>
 *              <td align="center"><span class="fa-hat-cowboy"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HAT_COWBOY_SIDE</code></td>
 *              <td align="center"><span class="fa-hat-cowboy-side"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HAT_WIZARD</code></td>
 *              <td align="center"><span class="fa-hat-wizard"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HEAD_SIDE_COUGH</code></td>
 *              <td align="center"><span class="fa-head-side-cough"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HEAD_SIDE_COUGH_SLASH</code></td>
 *              <td align="center"><span class="fa-head-side-cough-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HEAD_SIDE_MASK</code></td>
 *              <td align="center"><span class="fa-head-side-mask"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HEAD_SIDE_VIRUS</code></td>
 *              <td align="center"><span class="fa-head-side-virus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HEADING</code></td>
 *              <td align="center"><span class="fa-heading"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HEADPHONES</code></td>
 *              <td align="center"><span class="fa-headphones"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HEADPHONES_SIMPLE</code></td>
 *              <td align="center"><span class="fa-headphones-simple"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HEADSET</code></td>
 *              <td align="center"><span class="fa-headset"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HEART</code></td>
 *              <td align="center"><span class="fa-heart"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HEART_CIRCLE_BOLT</code></td>
 *              <td align="center"><span class="fa-heart-circle-bolt"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HEART_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-heart-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HEART_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-heart-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HEART_CIRCLE_MINUS</code></td>
 *              <td align="center"><span class="fa-heart-circle-minus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HEART_CIRCLE_PLUS</code></td>
 *              <td align="center"><span class="fa-heart-circle-plus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HEART_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-heart-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HEART_CRACK</code></td>
 *              <td align="center"><span class="fa-heart-crack"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HEART_PULSE</code></td>
 *              <td align="center"><span class="fa-heart-pulse"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HELICOPTER</code></td>
 *              <td align="center"><span class="fa-helicopter"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HELICOPTER_SYMBOL</code></td>
 *              <td align="center"><span class="fa-helicopter-symbol"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HELMET_SAFETY</code></td>
 *              <td align="center"><span class="fa-helmet-safety"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HELMET_UN</code></td>
 *              <td align="center"><span class="fa-helmet-un"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HIGHLIGHTER</code></td>
 *              <td align="center"><span class="fa-highlighter"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HILL_AVALANCHE</code></td>
 *              <td align="center"><span class="fa-hill-avalanche"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HILL_ROCKSLIDE</code></td>
 *              <td align="center"><span class="fa-hill-rockslide"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HIPPO</code></td>
 *              <td align="center"><span class="fa-hippo"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOCKEY_PUCK</code></td>
 *              <td align="center"><span class="fa-hockey-puck"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOLLY_BERRY</code></td>
 *              <td align="center"><span class="fa-holly-berry"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HORSE</code></td>
 *              <td align="center"><span class="fa-horse"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HORSE_HEAD</code></td>
 *              <td align="center"><span class="fa-horse-head"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOSPITAL</code></td>
 *              <td align="center"><span class="fa-hospital"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOSPITAL_USER</code></td>
 *              <td align="center"><span class="fa-hospital-user"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOT_TUB_PERSON</code></td>
 *              <td align="center"><span class="fa-hot-tub-person"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOTDOG</code></td>
 *              <td align="center"><span class="fa-hotdog"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOTEL</code></td>
 *              <td align="center"><span class="fa-hotel"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOURGLASS</code></td>
 *              <td align="center"><span class="fa-hourglass"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOURGLASS_END</code></td>
 *              <td align="center"><span class="fa-hourglass-end"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOURGLASS_HALF</code></td>
 *              <td align="center"><span class="fa-hourglass-half"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOURGLASS_START</code></td>
 *              <td align="center"><span class="fa-hourglass-start"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE</code></td>
 *              <td align="center"><span class="fa-house"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_CHIMNEY</code></td>
 *              <td align="center"><span class="fa-house-chimney"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_CHIMNEY_CRACK</code></td>
 *              <td align="center"><span class="fa-house-chimney-crack"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_CHIMNEY_MEDICAL</code></td>
 *              <td align="center"><span class="fa-house-chimney-medical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_CHIMNEY_USER</code></td>
 *              <td align="center"><span class="fa-house-chimney-user"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_CHIMNEY_WINDOW</code></td>
 *              <td align="center"><span class="fa-house-chimney-window"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-house-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-house-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-house-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_CRACK</code></td>
 *              <td align="center"><span class="fa-house-crack"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_FIRE</code></td>
 *              <td align="center"><span class="fa-house-fire"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_FLAG</code></td>
 *              <td align="center"><span class="fa-house-flag"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_FLOOD_WATER</code></td>
 *              <td align="center"><span class="fa-house-flood-water"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_FLOOD_WATER_CIRCLE_ARROW_RIGHT</code></td>
 *              <td align="center"><span class="fa-house-flood-water-circle-arrow-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_LAPTOP</code></td>
 *              <td align="center"><span class="fa-house-laptop"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_LOCK</code></td>
 *              <td align="center"><span class="fa-house-lock"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_MEDICAL</code></td>
 *              <td align="center"><span class="fa-house-medical"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_MEDICAL_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-house-medical-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_MEDICAL_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-house-medical-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_MEDICAL_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-house-medical-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_MEDICAL_FLAG</code></td>
 *              <td align="center"><span class="fa-house-medical-flag"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_SIGNAL</code></td>
 *              <td align="center"><span class="fa-house-signal"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HOUSE_TSUNAMI</code></td>
 *              <td align="center"><span class="fa-house-tsunami"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HOUSE_USER</code></td>
 *              <td align="center"><span class="fa-house-user"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_HRYVNIA_SIGN</code></td>
 *              <td align="center"><span class="fa-hryvnia-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_HURRICANE</code></td>
 *              <td align="center"><span class="fa-hurricane"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_I</code></td>
 *              <td align="center"><span class="fa-i"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_I_CURSOR</code></td>
 *              <td align="center"><span class="fa-i-cursor"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ICE_CREAM</code></td>
 *              <td align="center"><span class="fa-ice-cream"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ICICLES</code></td>
 *              <td align="center"><span class="fa-icicles"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ICONS</code></td>
 *              <td align="center"><span class="fa-icons"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ID_BADGE</code></td>
 *              <td align="center"><span class="fa-id-badge"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ID_CARD</code></td>
 *              <td align="center"><span class="fa-id-card"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ID_CARD_CLIP</code></td>
 *              <td align="center"><span class="fa-id-card-clip"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_IGLOO</code></td>
 *              <td align="center"><span class="fa-igloo"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_IMAGE</code></td>
 *              <td align="center"><span class="fa-image"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_IMAGE_PORTRAIT</code></td>
 *              <td align="center"><span class="fa-image-portrait"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_IMAGES</code></td>
 *              <td align="center"><span class="fa-images"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_INBOX</code></td>
 *              <td align="center"><span class="fa-inbox"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_INDENT</code></td>
 *              <td align="center"><span class="fa-indent"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_INDIAN_RUPEE_SIGN</code></td>
 *              <td align="center"><span class="fa-indian-rupee-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_INDUSTRY</code></td>
 *              <td align="center"><span class="fa-industry"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_INFINITY</code></td>
 *              <td align="center"><span class="fa-infinity"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_INFO</code></td>
 *              <td align="center"><span class="fa-info"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ITALIC</code></td>
 *              <td align="center"><span class="fa-italic"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_J</code></td>
 *              <td align="center"><span class="fa-j"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_JAR</code></td>
 *              <td align="center"><span class="fa-jar"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_JAR_WHEAT</code></td>
 *              <td align="center"><span class="fa-jar-wheat"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_JEDI</code></td>
 *              <td align="center"><span class="fa-jedi"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_JET_FIGHTER</code></td>
 *              <td align="center"><span class="fa-jet-fighter"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_JET_FIGHTER_UP</code></td>
 *              <td align="center"><span class="fa-jet-fighter-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_JOINT</code></td>
 *              <td align="center"><span class="fa-joint"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_JUG_DETERGENT</code></td>
 *              <td align="center"><span class="fa-jug-detergent"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_K</code></td>
 *              <td align="center"><span class="fa-k"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_KAABA</code></td>
 *              <td align="center"><span class="fa-kaaba"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_KEY</code></td>
 *              <td align="center"><span class="fa-key"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_KEYBOARD</code></td>
 *              <td align="center"><span class="fa-keyboard"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_KHANDA</code></td>
 *              <td align="center"><span class="fa-khanda"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_KIP_SIGN</code></td>
 *              <td align="center"><span class="fa-kip-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_KIT_MEDICAL</code></td>
 *              <td align="center"><span class="fa-kit-medical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_KITCHEN_SET</code></td>
 *              <td align="center"><span class="fa-kitchen-set"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_KIWI_BIRD</code></td>
 *              <td align="center"><span class="fa-kiwi-bird"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_L</code></td>
 *              <td align="center"><span class="fa-l"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LAND_MINE_ON</code></td>
 *              <td align="center"><span class="fa-land-mine-on"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LANDMARK</code></td>
 *              <td align="center"><span class="fa-landmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LANDMARK_DOME</code></td>
 *              <td align="center"><span class="fa-landmark-dome"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LANDMARK_FLAG</code></td>
 *              <td align="center"><span class="fa-landmark-flag"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LANGUAGE</code></td>
 *              <td align="center"><span class="fa-language"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LAPTOP</code></td>
 *              <td align="center"><span class="fa-laptop"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LAPTOP_CODE</code></td>
 *              <td align="center"><span class="fa-laptop-code"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LAPTOP_FILE</code></td>
 *              <td align="center"><span class="fa-laptop-file"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LAPTOP_MEDICAL</code></td>
 *              <td align="center"><span class="fa-laptop-medical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LARI_SIGN</code></td>
 *              <td align="center"><span class="fa-lari-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LAYER_GROUP</code></td>
 *              <td align="center"><span class="fa-layer-group"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LEAF</code></td>
 *              <td align="center"><span class="fa-leaf"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LEFT_LONG</code></td>
 *              <td align="center"><span class="fa-left-long"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LEFT_RIGHT</code></td>
 *              <td align="center"><span class="fa-left-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LEMON</code></td>
 *              <td align="center"><span class="fa-lemon"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LESS_THAN</code></td>
 *              <td align="center"><span class="fa-less-than"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LESS_THAN_EQUAL</code></td>
 *              <td align="center"><span class="fa-less-than-equal"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LIFE_RING</code></td>
 *              <td align="center"><span class="fa-life-ring"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LIGHTBULB</code></td>
 *              <td align="center"><span class="fa-lightbulb"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LINES_LEANING</code></td>
 *              <td align="center"><span class="fa-lines-leaning"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LINK</code></td>
 *              <td align="center"><span class="fa-link"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LINK_SLASH</code></td>
 *              <td align="center"><span class="fa-link-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LIRA_SIGN</code></td>
 *              <td align="center"><span class="fa-lira-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LIST</code></td>
 *              <td align="center"><span class="fa-list"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LIST_CHECK</code></td>
 *              <td align="center"><span class="fa-list-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LIST_OL</code></td>
 *              <td align="center"><span class="fa-list-ol"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LIST_UL</code></td>
 *              <td align="center"><span class="fa-list-ul"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LITECOIN_SIGN</code></td>
 *              <td align="center"><span class="fa-litecoin-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LOCATION_ARROW</code></td>
 *              <td align="center"><span class="fa-location-arrow"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LOCATION_CROSSHAIRS</code></td>
 *              <td align="center"><span class="fa-location-crosshairs"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LOCATION_DOT</code></td>
 *              <td align="center"><span class="fa-location-dot"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LOCATION_PIN</code></td>
 *              <td align="center"><span class="fa-location-pin"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LOCATION_PIN_LOCK</code></td>
 *              <td align="center"><span class="fa-location-pin-lock"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LOCK</code></td>
 *              <td align="center"><span class="fa-lock"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LOCK_OPEN</code></td>
 *              <td align="center"><span class="fa-lock-open"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LOCUST</code></td>
 *              <td align="center"><span class="fa-locust"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_LUNGS</code></td>
 *              <td align="center"><span class="fa-lungs"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_LUNGS_VIRUS</code></td>
 *              <td align="center"><span class="fa-lungs-virus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_M</code></td>
 *              <td align="center"><span class="fa-m"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MAGNET</code></td>
 *              <td align="center"><span class="fa-magnet"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MAGNIFYING_GLASS</code></td>
 *              <td align="center"><span class="fa-magnifying-glass"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MAGNIFYING_GLASS_ARROW_RIGHT</code></td>
 *              <td align="center"><span class="fa-magnifying-glass-arrow-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MAGNIFYING_GLASS_CHART</code></td>
 *              <td align="center"><span class="fa-magnifying-glass-chart"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MAGNIFYING_GLASS_DOLLAR</code></td>
 *              <td align="center"><span class="fa-magnifying-glass-dollar"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MAGNIFYING_GLASS_LOCATION</code></td>
 *              <td align="center"><span class="fa-magnifying-glass-location"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MAGNIFYING_GLASS_MINUS</code></td>
 *              <td align="center"><span class="fa-magnifying-glass-minus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MAGNIFYING_GLASS_PLUS</code></td>
 *              <td align="center"><span class="fa-magnifying-glass-plus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MANAT_SIGN</code></td>
 *              <td align="center"><span class="fa-manat-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MAP</code></td>
 *              <td align="center"><span class="fa-map"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MAP_LOCATION</code></td>
 *              <td align="center"><span class="fa-map-location"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MAP_LOCATION_DOT</code></td>
 *              <td align="center"><span class="fa-map-location-dot"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MAP_PIN</code></td>
 *              <td align="center"><span class="fa-map-pin"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MARKER</code></td>
 *              <td align="center"><span class="fa-marker"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MARS</code></td>
 *              <td align="center"><span class="fa-mars"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MARS_AND_VENUS</code></td>
 *              <td align="center"><span class="fa-mars-and-venus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MARS_AND_VENUS_BURST</code></td>
 *              <td align="center"><span class="fa-mars-and-venus-burst"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MARS_DOUBLE</code></td>
 *              <td align="center"><span class="fa-mars-double"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MARS_STROKE</code></td>
 *              <td align="center"><span class="fa-mars-stroke"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MARS_STROKE_RIGHT</code></td>
 *              <td align="center"><span class="fa-mars-stroke-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MARS_STROKE_UP</code></td>
 *              <td align="center"><span class="fa-mars-stroke-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MARTINI_GLASS</code></td>
 *              <td align="center"><span class="fa-martini-glass"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MARTINI_GLASS_CITRUS</code></td>
 *              <td align="center"><span class="fa-martini-glass-citrus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MARTINI_GLASS_EMPTY</code></td>
 *              <td align="center"><span class="fa-martini-glass-empty"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MASK</code></td>
 *              <td align="center"><span class="fa-mask"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MASK_FACE</code></td>
 *              <td align="center"><span class="fa-mask-face"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MASK_VENTILATOR</code></td>
 *              <td align="center"><span class="fa-mask-ventilator"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MASKS_THEATER</code></td>
 *              <td align="center"><span class="fa-masks-theater"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MATTRESS_PILLOW</code></td>
 *              <td align="center"><span class="fa-mattress-pillow"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MAXIMIZE</code></td>
 *              <td align="center"><span class="fa-maximize"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MEDAL</code></td>
 *              <td align="center"><span class="fa-medal"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MEMORY</code></td>
 *              <td align="center"><span class="fa-memory"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MENORAH</code></td>
 *              <td align="center"><span class="fa-menorah"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MERCURY</code></td>
 *              <td align="center"><span class="fa-mercury"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MESSAGE</code></td>
 *              <td align="center"><span class="fa-message"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_METEOR</code></td>
 *              <td align="center"><span class="fa-meteor"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MICROCHIP</code></td>
 *              <td align="center"><span class="fa-microchip"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MICROPHONE</code></td>
 *              <td align="center"><span class="fa-microphone"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MICROPHONE_LINES</code></td>
 *              <td align="center"><span class="fa-microphone-lines"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MICROPHONE_LINES_SLASH</code></td>
 *              <td align="center"><span class="fa-microphone-lines-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MICROPHONE_SLASH</code></td>
 *              <td align="center"><span class="fa-microphone-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MICROSCOPE</code></td>
 *              <td align="center"><span class="fa-microscope"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MILL_SIGN</code></td>
 *              <td align="center"><span class="fa-mill-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MINIMIZE</code></td>
 *              <td align="center"><span class="fa-minimize"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MINUS</code></td>
 *              <td align="center"><span class="fa-minus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MITTEN</code></td>
 *              <td align="center"><span class="fa-mitten"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MOBILE</code></td>
 *              <td align="center"><span class="fa-mobile"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MOBILE_BUTTON</code></td>
 *              <td align="center"><span class="fa-mobile-button"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MOBILE_RETRO</code></td>
 *              <td align="center"><span class="fa-mobile-retro"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MOBILE_SCREEN</code></td>
 *              <td align="center"><span class="fa-mobile-screen"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MOBILE_SCREEN_BUTTON</code></td>
 *              <td align="center"><span class="fa-mobile-screen-button"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MONEY_BILL</code></td>
 *              <td align="center"><span class="fa-money-bill"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MONEY_BILL_1</code></td>
 *              <td align="center"><span class="fa-money-bill-1"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MONEY_BILL_1_WAVE</code></td>
 *              <td align="center"><span class="fa-money-bill-1-wave"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MONEY_BILL_TRANSFER</code></td>
 *              <td align="center"><span class="fa-money-bill-transfer"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MONEY_BILL_TREND_UP</code></td>
 *              <td align="center"><span class="fa-money-bill-trend-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MONEY_BILL_WAVE</code></td>
 *              <td align="center"><span class="fa-money-bill-wave"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MONEY_BILL_WHEAT</code></td>
 *              <td align="center"><span class="fa-money-bill-wheat"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MONEY_BILLS</code></td>
 *              <td align="center"><span class="fa-money-bills"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MONEY_CHECK</code></td>
 *              <td align="center"><span class="fa-money-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MONEY_CHECK_DOLLAR</code></td>
 *              <td align="center"><span class="fa-money-check-dollar"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MONUMENT</code></td>
 *              <td align="center"><span class="fa-monument"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MOON</code></td>
 *              <td align="center"><span class="fa-moon"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MORTAR_PESTLE</code></td>
 *              <td align="center"><span class="fa-mortar-pestle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MOSQUE</code></td>
 *              <td align="center"><span class="fa-mosque"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MOSQUITO</code></td>
 *              <td align="center"><span class="fa-mosquito"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MOSQUITO_NET</code></td>
 *              <td align="center"><span class="fa-mosquito-net"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MOTORCYCLE</code></td>
 *              <td align="center"><span class="fa-motorcycle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MOUND</code></td>
 *              <td align="center"><span class="fa-mound"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MOUNTAIN</code></td>
 *              <td align="center"><span class="fa-mountain"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MOUNTAIN_CITY</code></td>
 *              <td align="center"><span class="fa-mountain-city"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MOUNTAIN_SUN</code></td>
 *              <td align="center"><span class="fa-mountain-sun"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MUG_HOT</code></td>
 *              <td align="center"><span class="fa-mug-hot"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_MUG_SAUCER</code></td>
 *              <td align="center"><span class="fa-mug-saucer"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_MUSIC</code></td>
 *              <td align="center"><span class="fa-music"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_N</code></td>
 *              <td align="center"><span class="fa-n"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_NAIRA_SIGN</code></td>
 *              <td align="center"><span class="fa-naira-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_NETWORK_WIRED</code></td>
 *              <td align="center"><span class="fa-network-wired"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_NEUTER</code></td>
 *              <td align="center"><span class="fa-neuter"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_NEWSPAPER</code></td>
 *              <td align="center"><span class="fa-newspaper"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_NOT_EQUAL</code></td>
 *              <td align="center"><span class="fa-not-equal"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_NOTDEF</code></td>
 *              <td align="center"><span class="fa-notdef"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_NOTE_STICKY</code></td>
 *              <td align="center"><span class="fa-note-sticky"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_NOTES_MEDICAL</code></td>
 *              <td align="center"><span class="fa-notes-medical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_O</code></td>
 *              <td align="center"><span class="fa-o"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_OBJECT_GROUP</code></td>
 *              <td align="center"><span class="fa-object-group"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_OBJECT_UNGROUP</code></td>
 *              <td align="center"><span class="fa-object-ungroup"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_OIL_CAN</code></td>
 *              <td align="center"><span class="fa-oil-can"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_OIL_WELL</code></td>
 *              <td align="center"><span class="fa-oil-well"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_OM</code></td>
 *              <td align="center"><span class="fa-om"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_OTTER</code></td>
 *              <td align="center"><span class="fa-otter"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_OUTDENT</code></td>
 *              <td align="center"><span class="fa-outdent"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_P</code></td>
 *              <td align="center"><span class="fa-p"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PAGER</code></td>
 *              <td align="center"><span class="fa-pager"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PAINT_ROLLER</code></td>
 *              <td align="center"><span class="fa-paint-roller"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PAINTBRUSH</code></td>
 *              <td align="center"><span class="fa-paintbrush"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PALETTE</code></td>
 *              <td align="center"><span class="fa-palette"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PALLET</code></td>
 *              <td align="center"><span class="fa-pallet"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PANORAMA</code></td>
 *              <td align="center"><span class="fa-panorama"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PAPER_PLANE</code></td>
 *              <td align="center"><span class="fa-paper-plane"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PAPERCLIP</code></td>
 *              <td align="center"><span class="fa-paperclip"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PARACHUTE_BOX</code></td>
 *              <td align="center"><span class="fa-parachute-box"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PARAGRAPH</code></td>
 *              <td align="center"><span class="fa-paragraph"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PASSPORT</code></td>
 *              <td align="center"><span class="fa-passport"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PASTE</code></td>
 *              <td align="center"><span class="fa-paste"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PAUSE</code></td>
 *              <td align="center"><span class="fa-pause"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PAW</code></td>
 *              <td align="center"><span class="fa-paw"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PEACE</code></td>
 *              <td align="center"><span class="fa-peace"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PEN</code></td>
 *              <td align="center"><span class="fa-pen"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PEN_CLIP</code></td>
 *              <td align="center"><span class="fa-pen-clip"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PEN_FANCY</code></td>
 *              <td align="center"><span class="fa-pen-fancy"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PEN_NIB</code></td>
 *              <td align="center"><span class="fa-pen-nib"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PEN_RULER</code></td>
 *              <td align="center"><span class="fa-pen-ruler"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PEN_TO_SQUARE</code></td>
 *              <td align="center"><span class="fa-pen-to-square"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PENCIL</code></td>
 *              <td align="center"><span class="fa-pencil"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PEOPLE_ARROWS</code></td>
 *              <td align="center"><span class="fa-people-arrows"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PEOPLE_CARRY_BOX</code></td>
 *              <td align="center"><span class="fa-people-carry-box"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PEOPLE_GROUP</code></td>
 *              <td align="center"><span class="fa-people-group"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PEOPLE_LINE</code></td>
 *              <td align="center"><span class="fa-people-line"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PEOPLE_PULLING</code></td>
 *              <td align="center"><span class="fa-people-pulling"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PEOPLE_ROBBERY</code></td>
 *              <td align="center"><span class="fa-people-robbery"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PEOPLE_ROOF</code></td>
 *              <td align="center"><span class="fa-people-roof"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PEPPER_HOT</code></td>
 *              <td align="center"><span class="fa-pepper-hot"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERCENT</code></td>
 *              <td align="center"><span class="fa-percent"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON</code></td>
 *              <td align="center"><span class="fa-person"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_ARROW_DOWN_TO_LINE</code></td>
 *              <td align="center"><span class="fa-person-arrow-down-to-line"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_ARROW_UP_FROM_LINE</code></td>
 *              <td align="center"><span class="fa-person-arrow-up-from-line"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_BIKING</code></td>
 *              <td align="center"><span class="fa-person-biking"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_BOOTH</code></td>
 *              <td align="center"><span class="fa-person-booth"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_BREASTFEEDING</code></td>
 *              <td align="center"><span class="fa-person-breastfeeding"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_BURST</code></td>
 *              <td align="center"><span class="fa-person-burst"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_CANE</code></td>
 *              <td align="center"><span class="fa-person-cane"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_CHALKBOARD</code></td>
 *              <td align="center"><span class="fa-person-chalkboard"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-person-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-person-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_CIRCLE_MINUS</code></td>
 *              <td align="center"><span class="fa-person-circle-minus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_CIRCLE_PLUS</code></td>
 *              <td align="center"><span class="fa-person-circle-plus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_CIRCLE_QUESTION</code></td>
 *              <td align="center"><span class="fa-person-circle-question"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-person-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_DIGGING</code></td>
 *              <td align="center"><span class="fa-person-digging"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_DOTS_FROM_LINE</code></td>
 *              <td align="center"><span class="fa-person-dots-from-line"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_DRESS</code></td>
 *              <td align="center"><span class="fa-person-dress"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_DRESS_BURST</code></td>
 *              <td align="center"><span class="fa-person-dress-burst"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_DROWNING</code></td>
 *              <td align="center"><span class="fa-person-drowning"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_FALLING</code></td>
 *              <td align="center"><span class="fa-person-falling"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_FALLING_BURST</code></td>
 *              <td align="center"><span class="fa-person-falling-burst"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_HALF_DRESS</code></td>
 *              <td align="center"><span class="fa-person-half-dress"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_HARASSING</code></td>
 *              <td align="center"><span class="fa-person-harassing"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_HIKING</code></td>
 *              <td align="center"><span class="fa-person-hiking"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_MILITARY_POINTING</code></td>
 *              <td align="center"><span class="fa-person-military-pointing"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_MILITARY_RIFLE</code></td>
 *              <td align="center"><span class="fa-person-military-rifle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_MILITARY_TO_PERSON</code></td>
 *              <td align="center"><span class="fa-person-military-to-person"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_PRAYING</code></td>
 *              <td align="center"><span class="fa-person-praying"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_PREGNANT</code></td>
 *              <td align="center"><span class="fa-person-pregnant"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_RAYS</code></td>
 *              <td align="center"><span class="fa-person-rays"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_RIFLE</code></td>
 *              <td align="center"><span class="fa-person-rifle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_RUNNING</code></td>
 *              <td align="center"><span class="fa-person-running"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_SHELTER</code></td>
 *              <td align="center"><span class="fa-person-shelter"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_SKATING</code></td>
 *              <td align="center"><span class="fa-person-skating"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_SKIING</code></td>
 *              <td align="center"><span class="fa-person-skiing"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_SKIING_NORDIC</code></td>
 *              <td align="center"><span class="fa-person-skiing-nordic"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_SNOWBOARDING</code></td>
 *              <td align="center"><span class="fa-person-snowboarding"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_SWIMMING</code></td>
 *              <td align="center"><span class="fa-person-swimming"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_THROUGH_WINDOW</code></td>
 *              <td align="center"><span class="fa-person-through-window"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_WALKING</code></td>
 *              <td align="center"><span class="fa-person-walking"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_WALKING_ARROW_LOOP_LEFT</code></td>
 *              <td align="center"><span class="fa-person-walking-arrow-loop-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_WALKING_ARROW_RIGHT</code></td>
 *              <td align="center"><span class="fa-person-walking-arrow-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_WALKING_DASHED_LINE_ARROW_RIGHT</code></td>
 *              <td align="center"><span class="fa-person-walking-dashed-line-arrow-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PERSON_WALKING_LUGGAGE</code></td>
 *              <td align="center"><span class="fa-person-walking-luggage"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PERSON_WALKING_WITH_CANE</code></td>
 *              <td align="center"><span class="fa-person-walking-with-cane"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PESETA_SIGN</code></td>
 *              <td align="center"><span class="fa-peseta-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PESO_SIGN</code></td>
 *              <td align="center"><span class="fa-peso-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PHONE</code></td>
 *              <td align="center"><span class="fa-phone"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PHONE_FLIP</code></td>
 *              <td align="center"><span class="fa-phone-flip"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PHONE_SLASH</code></td>
 *              <td align="center"><span class="fa-phone-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PHONE_VOLUME</code></td>
 *              <td align="center"><span class="fa-phone-volume"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PHOTO_FILM</code></td>
 *              <td align="center"><span class="fa-photo-film"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PIGGY_BANK</code></td>
 *              <td align="center"><span class="fa-piggy-bank"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PILLS</code></td>
 *              <td align="center"><span class="fa-pills"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PIZZA_SLICE</code></td>
 *              <td align="center"><span class="fa-pizza-slice"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLACE_OF_WORSHIP</code></td>
 *              <td align="center"><span class="fa-place-of-worship"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLANE</code></td>
 *              <td align="center"><span class="fa-plane"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLANE_ARRIVAL</code></td>
 *              <td align="center"><span class="fa-plane-arrival"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLANE_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-plane-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLANE_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-plane-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLANE_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-plane-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLANE_DEPARTURE</code></td>
 *              <td align="center"><span class="fa-plane-departure"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLANE_LOCK</code></td>
 *              <td align="center"><span class="fa-plane-lock"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLANE_SLASH</code></td>
 *              <td align="center"><span class="fa-plane-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLANE_UP</code></td>
 *              <td align="center"><span class="fa-plane-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLANT_WILT</code></td>
 *              <td align="center"><span class="fa-plant-wilt"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLATE_WHEAT</code></td>
 *              <td align="center"><span class="fa-plate-wheat"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLAY</code></td>
 *              <td align="center"><span class="fa-play"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLUG</code></td>
 *              <td align="center"><span class="fa-plug"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLUG_CIRCLE_BOLT</code></td>
 *              <td align="center"><span class="fa-plug-circle-bolt"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLUG_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-plug-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLUG_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-plug-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLUG_CIRCLE_MINUS</code></td>
 *              <td align="center"><span class="fa-plug-circle-minus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLUG_CIRCLE_PLUS</code></td>
 *              <td align="center"><span class="fa-plug-circle-plus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLUG_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-plug-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PLUS</code></td>
 *              <td align="center"><span class="fa-plus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PLUS_MINUS</code></td>
 *              <td align="center"><span class="fa-plus-minus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PODCAST</code></td>
 *              <td align="center"><span class="fa-podcast"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_POO</code></td>
 *              <td align="center"><span class="fa-poo"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_POO_STORM</code></td>
 *              <td align="center"><span class="fa-poo-storm"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_POOP</code></td>
 *              <td align="center"><span class="fa-poop"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_POWER_OFF</code></td>
 *              <td align="center"><span class="fa-power-off"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PRESCRIPTION</code></td>
 *              <td align="center"><span class="fa-prescription"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PRESCRIPTION_BOTTLE</code></td>
 *              <td align="center"><span class="fa-prescription-bottle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PRESCRIPTION_BOTTLE_MEDICAL</code></td>
 *              <td align="center"><span class="fa-prescription-bottle-medical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PRINT</code></td>
 *              <td align="center"><span class="fa-print"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PUMP_MEDICAL</code></td>
 *              <td align="center"><span class="fa-pump-medical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_PUMP_SOAP</code></td>
 *              <td align="center"><span class="fa-pump-soap"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_PUZZLE_PIECE</code></td>
 *              <td align="center"><span class="fa-puzzle-piece"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_Q</code></td>
 *              <td align="center"><span class="fa-q"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_QRCODE</code></td>
 *              <td align="center"><span class="fa-qrcode"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_QUESTION</code></td>
 *              <td align="center"><span class="fa-question"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_QUOTE_LEFT</code></td>
 *              <td align="center"><span class="fa-quote-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_QUOTE_RIGHT</code></td>
 *              <td align="center"><span class="fa-quote-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_R</code></td>
 *              <td align="center"><span class="fa-r"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RADIATION</code></td>
 *              <td align="center"><span class="fa-radiation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RADIO</code></td>
 *              <td align="center"><span class="fa-radio"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RAINBOW</code></td>
 *              <td align="center"><span class="fa-rainbow"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RANKING_STAR</code></td>
 *              <td align="center"><span class="fa-ranking-star"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RECEIPT</code></td>
 *              <td align="center"><span class="fa-receipt"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RECORD_VINYL</code></td>
 *              <td align="center"><span class="fa-record-vinyl"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RECTANGLE_AD</code></td>
 *              <td align="center"><span class="fa-rectangle-ad"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RECTANGLE_LIST</code></td>
 *              <td align="center"><span class="fa-rectangle-list"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RECTANGLE_XMARK</code></td>
 *              <td align="center"><span class="fa-rectangle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RECYCLE</code></td>
 *              <td align="center"><span class="fa-recycle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_REGISTERED</code></td>
 *              <td align="center"><span class="fa-registered"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_REPEAT</code></td>
 *              <td align="center"><span class="fa-repeat"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_REPLY</code></td>
 *              <td align="center"><span class="fa-reply"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_REPLY_ALL</code></td>
 *              <td align="center"><span class="fa-reply-all"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_REPUBLICAN</code></td>
 *              <td align="center"><span class="fa-republican"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RESTROOM</code></td>
 *              <td align="center"><span class="fa-restroom"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RETWEET</code></td>
 *              <td align="center"><span class="fa-retweet"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RIBBON</code></td>
 *              <td align="center"><span class="fa-ribbon"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RIGHT_FROM_BRACKET</code></td>
 *              <td align="center"><span class="fa-right-from-bracket"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RIGHT_LEFT</code></td>
 *              <td align="center"><span class="fa-right-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RIGHT_LONG</code></td>
 *              <td align="center"><span class="fa-right-long"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RIGHT_TO_BRACKET</code></td>
 *              <td align="center"><span class="fa-right-to-bracket"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RING</code></td>
 *              <td align="center"><span class="fa-ring"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ROAD</code></td>
 *              <td align="center"><span class="fa-road"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ROAD_BARRIER</code></td>
 *              <td align="center"><span class="fa-road-barrier"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ROAD_BRIDGE</code></td>
 *              <td align="center"><span class="fa-road-bridge"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ROAD_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-road-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ROAD_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-road-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ROAD_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-road-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ROAD_LOCK</code></td>
 *              <td align="center"><span class="fa-road-lock"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ROAD_SPIKES</code></td>
 *              <td align="center"><span class="fa-road-spikes"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ROBOT</code></td>
 *              <td align="center"><span class="fa-robot"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ROCKET</code></td>
 *              <td align="center"><span class="fa-rocket"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ROTATE</code></td>
 *              <td align="center"><span class="fa-rotate"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ROTATE_LEFT</code></td>
 *              <td align="center"><span class="fa-rotate-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_ROTATE_RIGHT</code></td>
 *              <td align="center"><span class="fa-rotate-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_ROUTE</code></td>
 *              <td align="center"><span class="fa-route"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RSS</code></td>
 *              <td align="center"><span class="fa-rss"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RUBLE_SIGN</code></td>
 *              <td align="center"><span class="fa-ruble-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RUG</code></td>
 *              <td align="center"><span class="fa-rug"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RULER</code></td>
 *              <td align="center"><span class="fa-ruler"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RULER_COMBINED</code></td>
 *              <td align="center"><span class="fa-ruler-combined"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RULER_HORIZONTAL</code></td>
 *              <td align="center"><span class="fa-ruler-horizontal"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RULER_VERTICAL</code></td>
 *              <td align="center"><span class="fa-ruler-vertical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_RUPEE_SIGN</code></td>
 *              <td align="center"><span class="fa-rupee-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_RUPIAH_SIGN</code></td>
 *              <td align="center"><span class="fa-rupiah-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_S</code></td>
 *              <td align="center"><span class="fa-s"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SACK_DOLLAR</code></td>
 *              <td align="center"><span class="fa-sack-dollar"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SACK_XMARK</code></td>
 *              <td align="center"><span class="fa-sack-xmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SAILBOAT</code></td>
 *              <td align="center"><span class="fa-sailboat"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SATELLITE</code></td>
 *              <td align="center"><span class="fa-satellite"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SATELLITE_DISH</code></td>
 *              <td align="center"><span class="fa-satellite-dish"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SCALE_BALANCED</code></td>
 *              <td align="center"><span class="fa-scale-balanced"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SCALE_UNBALANCED</code></td>
 *              <td align="center"><span class="fa-scale-unbalanced"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SCALE_UNBALANCED_FLIP</code></td>
 *              <td align="center"><span class="fa-scale-unbalanced-flip"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SCHOOL</code></td>
 *              <td align="center"><span class="fa-school"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SCHOOL_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-school-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SCHOOL_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-school-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SCHOOL_CIRCLE_XMARK</code></td>
 *              <td align="center"><span class="fa-school-circle-xmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SCHOOL_FLAG</code></td>
 *              <td align="center"><span class="fa-school-flag"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SCHOOL_LOCK</code></td>
 *              <td align="center"><span class="fa-school-lock"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SCISSORS</code></td>
 *              <td align="center"><span class="fa-scissors"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SCREWDRIVER</code></td>
 *              <td align="center"><span class="fa-screwdriver"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SCREWDRIVER_WRENCH</code></td>
 *              <td align="center"><span class="fa-screwdriver-wrench"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SCROLL</code></td>
 *              <td align="center"><span class="fa-scroll"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SCROLL_TORAH</code></td>
 *              <td align="center"><span class="fa-scroll-torah"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SD_CARD</code></td>
 *              <td align="center"><span class="fa-sd-card"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SECTION</code></td>
 *              <td align="center"><span class="fa-section"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SEEDLING</code></td>
 *              <td align="center"><span class="fa-seedling"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SERVER</code></td>
 *              <td align="center"><span class="fa-server"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHAPES</code></td>
 *              <td align="center"><span class="fa-shapes"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHARE</code></td>
 *              <td align="center"><span class="fa-share"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHARE_FROM_SQUARE</code></td>
 *              <td align="center"><span class="fa-share-from-square"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHARE_NODES</code></td>
 *              <td align="center"><span class="fa-share-nodes"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHEET_PLASTIC</code></td>
 *              <td align="center"><span class="fa-sheet-plastic"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHEKEL_SIGN</code></td>
 *              <td align="center"><span class="fa-shekel-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHIELD</code></td>
 *              <td align="center"><span class="fa-shield"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHIELD_CAT</code></td>
 *              <td align="center"><span class="fa-shield-cat"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHIELD_DOG</code></td>
 *              <td align="center"><span class="fa-shield-dog"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHIELD_HALVED</code></td>
 *              <td align="center"><span class="fa-shield-halved"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHIELD_HEART</code></td>
 *              <td align="center"><span class="fa-shield-heart"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHIELD_VIRUS</code></td>
 *              <td align="center"><span class="fa-shield-virus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHIP</code></td>
 *              <td align="center"><span class="fa-ship"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHIRT</code></td>
 *              <td align="center"><span class="fa-shirt"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHOE_PRINTS</code></td>
 *              <td align="center"><span class="fa-shoe-prints"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHOP</code></td>
 *              <td align="center"><span class="fa-shop"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHOP_LOCK</code></td>
 *              <td align="center"><span class="fa-shop-lock"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHOP_SLASH</code></td>
 *              <td align="center"><span class="fa-shop-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHOWER</code></td>
 *              <td align="center"><span class="fa-shower"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHRIMP</code></td>
 *              <td align="center"><span class="fa-shrimp"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SHUFFLE</code></td>
 *              <td align="center"><span class="fa-shuffle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SHUTTLE_SPACE</code></td>
 *              <td align="center"><span class="fa-shuttle-space"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SIGN_HANGING</code></td>
 *              <td align="center"><span class="fa-sign-hanging"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SIGNAL</code></td>
 *              <td align="center"><span class="fa-signal"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SIGNATURE</code></td>
 *              <td align="center"><span class="fa-signature"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SIGNS_POST</code></td>
 *              <td align="center"><span class="fa-signs-post"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SIM_CARD</code></td>
 *              <td align="center"><span class="fa-sim-card"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SINK</code></td>
 *              <td align="center"><span class="fa-sink"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SITEMAP</code></td>
 *              <td align="center"><span class="fa-sitemap"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SKULL</code></td>
 *              <td align="center"><span class="fa-skull"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SKULL_CROSSBONES</code></td>
 *              <td align="center"><span class="fa-skull-crossbones"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SLASH</code></td>
 *              <td align="center"><span class="fa-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SLEIGH</code></td>
 *              <td align="center"><span class="fa-sleigh"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SLIDERS</code></td>
 *              <td align="center"><span class="fa-sliders"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SMOG</code></td>
 *              <td align="center"><span class="fa-smog"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SMOKING</code></td>
 *              <td align="center"><span class="fa-smoking"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SNOWFLAKE</code></td>
 *              <td align="center"><span class="fa-snowflake"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SNOWMAN</code></td>
 *              <td align="center"><span class="fa-snowman"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SNOWPLOW</code></td>
 *              <td align="center"><span class="fa-snowplow"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SOAP</code></td>
 *              <td align="center"><span class="fa-soap"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SOCKS</code></td>
 *              <td align="center"><span class="fa-socks"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SOLAR_PANEL</code></td>
 *              <td align="center"><span class="fa-solar-panel"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SORT</code></td>
 *              <td align="center"><span class="fa-sort"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SORT_DOWN</code></td>
 *              <td align="center"><span class="fa-sort-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SORT_UP</code></td>
 *              <td align="center"><span class="fa-sort-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SPA</code></td>
 *              <td align="center"><span class="fa-spa"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SPAGHETTI_MONSTER_FLYING</code></td>
 *              <td align="center"><span class="fa-spaghetti-monster-flying"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SPELL_CHECK</code></td>
 *              <td align="center"><span class="fa-spell-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SPIDER</code></td>
 *              <td align="center"><span class="fa-spider"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SPINNER</code></td>
 *              <td align="center"><span class="fa-spinner"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SPLOTCH</code></td>
 *              <td align="center"><span class="fa-splotch"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SPOON</code></td>
 *              <td align="center"><span class="fa-spoon"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SPRAY_CAN</code></td>
 *              <td align="center"><span class="fa-spray-can"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SPRAY_CAN_SPARKLES</code></td>
 *              <td align="center"><span class="fa-spray-can-sparkles"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE</code></td>
 *              <td align="center"><span class="fa-square"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_ARROW_UP_RIGHT</code></td>
 *              <td align="center"><span class="fa-square-arrow-up-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_CARET_DOWN</code></td>
 *              <td align="center"><span class="fa-square-caret-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_CARET_LEFT</code></td>
 *              <td align="center"><span class="fa-square-caret-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_CARET_RIGHT</code></td>
 *              <td align="center"><span class="fa-square-caret-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_CARET_UP</code></td>
 *              <td align="center"><span class="fa-square-caret-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_CHECK</code></td>
 *              <td align="center"><span class="fa-square-check"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_ENVELOPE</code></td>
 *              <td align="center"><span class="fa-square-envelope"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_FULL</code></td>
 *              <td align="center"><span class="fa-square-full"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_H</code></td>
 *              <td align="center"><span class="fa-square-h"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_MINUS</code></td>
 *              <td align="center"><span class="fa-square-minus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_NFI</code></td>
 *              <td align="center"><span class="fa-square-nfi"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_PARKING</code></td>
 *              <td align="center"><span class="fa-square-parking"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_PEN</code></td>
 *              <td align="center"><span class="fa-square-pen"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_PERSON_CONFINED</code></td>
 *              <td align="center"><span class="fa-square-person-confined"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_PHONE</code></td>
 *              <td align="center"><span class="fa-square-phone"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_PHONE_FLIP</code></td>
 *              <td align="center"><span class="fa-square-phone-flip"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_PLUS</code></td>
 *              <td align="center"><span class="fa-square-plus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_POLL_HORIZONTAL</code></td>
 *              <td align="center"><span class="fa-square-poll-horizontal"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_POLL_VERTICAL</code></td>
 *              <td align="center"><span class="fa-square-poll-vertical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_ROOT_VARIABLE</code></td>
 *              <td align="center"><span class="fa-square-root-variable"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_RSS</code></td>
 *              <td align="center"><span class="fa-square-rss"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_SHARE_NODES</code></td>
 *              <td align="center"><span class="fa-square-share-nodes"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_UP_RIGHT</code></td>
 *              <td align="center"><span class="fa-square-up-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SQUARE_VIRUS</code></td>
 *              <td align="center"><span class="fa-square-virus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SQUARE_XMARK</code></td>
 *              <td align="center"><span class="fa-square-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_STAFF_SNAKE</code></td>
 *              <td align="center"><span class="fa-staff-snake"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_STAIRS</code></td>
 *              <td align="center"><span class="fa-stairs"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_STAMP</code></td>
 *              <td align="center"><span class="fa-stamp"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_STAPLER</code></td>
 *              <td align="center"><span class="fa-stapler"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_STAR</code></td>
 *              <td align="center"><span class="fa-star"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_STAR_AND_CRESCENT</code></td>
 *              <td align="center"><span class="fa-star-and-crescent"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_STAR_HALF</code></td>
 *              <td align="center"><span class="fa-star-half"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_STAR_HALF_STROKE</code></td>
 *              <td align="center"><span class="fa-star-half-stroke"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_STAR_OF_DAVID</code></td>
 *              <td align="center"><span class="fa-star-of-david"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_STAR_OF_LIFE</code></td>
 *              <td align="center"><span class="fa-star-of-life"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_STERLING_SIGN</code></td>
 *              <td align="center"><span class="fa-sterling-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_STETHOSCOPE</code></td>
 *              <td align="center"><span class="fa-stethoscope"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_STOP</code></td>
 *              <td align="center"><span class="fa-stop"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_STOPWATCH</code></td>
 *              <td align="center"><span class="fa-stopwatch"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_STOPWATCH_20</code></td>
 *              <td align="center"><span class="fa-stopwatch-20"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_STORE</code></td>
 *              <td align="center"><span class="fa-store"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_STORE_SLASH</code></td>
 *              <td align="center"><span class="fa-store-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_STREET_VIEW</code></td>
 *              <td align="center"><span class="fa-street-view"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_STRIKETHROUGH</code></td>
 *              <td align="center"><span class="fa-strikethrough"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_STROOPWAFEL</code></td>
 *              <td align="center"><span class="fa-stroopwafel"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SUBSCRIPT</code></td>
 *              <td align="center"><span class="fa-subscript"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SUITCASE</code></td>
 *              <td align="center"><span class="fa-suitcase"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SUITCASE_MEDICAL</code></td>
 *              <td align="center"><span class="fa-suitcase-medical"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SUITCASE_ROLLING</code></td>
 *              <td align="center"><span class="fa-suitcase-rolling"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SUN</code></td>
 *              <td align="center"><span class="fa-sun"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SUN_PLANT_WILT</code></td>
 *              <td align="center"><span class="fa-sun-plant-wilt"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SUPERSCRIPT</code></td>
 *              <td align="center"><span class="fa-superscript"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SWATCHBOOK</code></td>
 *              <td align="center"><span class="fa-swatchbook"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_SYNAGOGUE</code></td>
 *              <td align="center"><span class="fa-synagogue"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_SYRINGE</code></td>
 *              <td align="center"><span class="fa-syringe"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_T</code></td>
 *              <td align="center"><span class="fa-t"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TABLE</code></td>
 *              <td align="center"><span class="fa-table"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TABLE_CELLS</code></td>
 *              <td align="center"><span class="fa-table-cells"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TABLE_CELLS_LARGE</code></td>
 *              <td align="center"><span class="fa-table-cells-large"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TABLE_COLUMNS</code></td>
 *              <td align="center"><span class="fa-table-columns"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TABLE_LIST</code></td>
 *              <td align="center"><span class="fa-table-list"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TABLE_TENNIS_PADDLE_BALL</code></td>
 *              <td align="center"><span class="fa-table-tennis-paddle-ball"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TABLET</code></td>
 *              <td align="center"><span class="fa-tablet"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TABLET_BUTTON</code></td>
 *              <td align="center"><span class="fa-tablet-button"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TABLET_SCREEN_BUTTON</code></td>
 *              <td align="center"><span class="fa-tablet-screen-button"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TABLETS</code></td>
 *              <td align="center"><span class="fa-tablets"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TACHOGRAPH_DIGITAL</code></td>
 *              <td align="center"><span class="fa-tachograph-digital"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TAG</code></td>
 *              <td align="center"><span class="fa-tag"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TAGS</code></td>
 *              <td align="center"><span class="fa-tags"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TAPE</code></td>
 *              <td align="center"><span class="fa-tape"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TARP</code></td>
 *              <td align="center"><span class="fa-tarp"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TARP_DROPLET</code></td>
 *              <td align="center"><span class="fa-tarp-droplet"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TAXI</code></td>
 *              <td align="center"><span class="fa-taxi"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TEETH</code></td>
 *              <td align="center"><span class="fa-teeth"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TEETH_OPEN</code></td>
 *              <td align="center"><span class="fa-teeth-open"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TEMPERATURE_ARROW_DOWN</code></td>
 *              <td align="center"><span class="fa-temperature-arrow-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TEMPERATURE_ARROW_UP</code></td>
 *              <td align="center"><span class="fa-temperature-arrow-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TEMPERATURE_EMPTY</code></td>
 *              <td align="center"><span class="fa-temperature-empty"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TEMPERATURE_FULL</code></td>
 *              <td align="center"><span class="fa-temperature-full"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TEMPERATURE_HALF</code></td>
 *              <td align="center"><span class="fa-temperature-half"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TEMPERATURE_HIGH</code></td>
 *              <td align="center"><span class="fa-temperature-high"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TEMPERATURE_LOW</code></td>
 *              <td align="center"><span class="fa-temperature-low"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TEMPERATURE_QUARTER</code></td>
 *              <td align="center"><span class="fa-temperature-quarter"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TEMPERATURE_THREE_QUARTERS</code></td>
 *              <td align="center"><span class="fa-temperature-three-quarters"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TENGE_SIGN</code></td>
 *              <td align="center"><span class="fa-tenge-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TENT</code></td>
 *              <td align="center"><span class="fa-tent"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TENT_ARROW_DOWN_TO_LINE</code></td>
 *              <td align="center"><span class="fa-tent-arrow-down-to-line"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TENT_ARROW_LEFT_RIGHT</code></td>
 *              <td align="center"><span class="fa-tent-arrow-left-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TENT_ARROW_TURN_LEFT</code></td>
 *              <td align="center"><span class="fa-tent-arrow-turn-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TENT_ARROWS_DOWN</code></td>
 *              <td align="center"><span class="fa-tent-arrows-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TENTS</code></td>
 *              <td align="center"><span class="fa-tents"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TERMINAL</code></td>
 *              <td align="center"><span class="fa-terminal"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TEXT_HEIGHT</code></td>
 *              <td align="center"><span class="fa-text-height"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TEXT_SLASH</code></td>
 *              <td align="center"><span class="fa-text-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TEXT_WIDTH</code></td>
 *              <td align="center"><span class="fa-text-width"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_THERMOMETER</code></td>
 *              <td align="center"><span class="fa-thermometer"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_THUMBS_DOWN</code></td>
 *              <td align="center"><span class="fa-thumbs-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_THUMBS_UP</code></td>
 *              <td align="center"><span class="fa-thumbs-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_THUMBTACK</code></td>
 *              <td align="center"><span class="fa-thumbtack"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TICKET</code></td>
 *              <td align="center"><span class="fa-ticket"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TICKET_SIMPLE</code></td>
 *              <td align="center"><span class="fa-ticket-simple"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TIMELINE</code></td>
 *              <td align="center"><span class="fa-timeline"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TOGGLE_OFF</code></td>
 *              <td align="center"><span class="fa-toggle-off"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TOGGLE_ON</code></td>
 *              <td align="center"><span class="fa-toggle-on"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TOILET</code></td>
 *              <td align="center"><span class="fa-toilet"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TOILET_PAPER</code></td>
 *              <td align="center"><span class="fa-toilet-paper"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TOILET_PAPER_SLASH</code></td>
 *              <td align="center"><span class="fa-toilet-paper-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TOILET_PORTABLE</code></td>
 *              <td align="center"><span class="fa-toilet-portable"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TOILETS_PORTABLE</code></td>
 *              <td align="center"><span class="fa-toilets-portable"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TOOLBOX</code></td>
 *              <td align="center"><span class="fa-toolbox"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TOOTH</code></td>
 *              <td align="center"><span class="fa-tooth"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TORII_GATE</code></td>
 *              <td align="center"><span class="fa-torii-gate"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TORNADO</code></td>
 *              <td align="center"><span class="fa-tornado"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TOWER_BROADCAST</code></td>
 *              <td align="center"><span class="fa-tower-broadcast"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TOWER_CELL</code></td>
 *              <td align="center"><span class="fa-tower-cell"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TOWER_OBSERVATION</code></td>
 *              <td align="center"><span class="fa-tower-observation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRACTOR</code></td>
 *              <td align="center"><span class="fa-tractor"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRADEMARK</code></td>
 *              <td align="center"><span class="fa-trademark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRAFFIC_LIGHT</code></td>
 *              <td align="center"><span class="fa-traffic-light"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRAILER</code></td>
 *              <td align="center"><span class="fa-trailer"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRAIN</code></td>
 *              <td align="center"><span class="fa-train"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRAIN_SUBWAY</code></td>
 *              <td align="center"><span class="fa-train-subway"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRAIN_TRAM</code></td>
 *              <td align="center"><span class="fa-train-tram"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRANSGENDER</code></td>
 *              <td align="center"><span class="fa-transgender"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRASH</code></td>
 *              <td align="center"><span class="fa-trash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRASH_ARROW_UP</code></td>
 *              <td align="center"><span class="fa-trash-arrow-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRASH_CAN</code></td>
 *              <td align="center"><span class="fa-trash-can"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRASH_CAN_ARROW_UP</code></td>
 *              <td align="center"><span class="fa-trash-can-arrow-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TREE</code></td>
 *              <td align="center"><span class="fa-tree"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TREE_CITY</code></td>
 *              <td align="center"><span class="fa-tree-city"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRIANGLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-triangle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TROPHY</code></td>
 *              <td align="center"><span class="fa-trophy"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TROWEL</code></td>
 *              <td align="center"><span class="fa-trowel"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TROWEL_BRICKS</code></td>
 *              <td align="center"><span class="fa-trowel-bricks"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRUCK</code></td>
 *              <td align="center"><span class="fa-truck"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRUCK_ARROW_RIGHT</code></td>
 *              <td align="center"><span class="fa-truck-arrow-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRUCK_DROPLET</code></td>
 *              <td align="center"><span class="fa-truck-droplet"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRUCK_FAST</code></td>
 *              <td align="center"><span class="fa-truck-fast"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRUCK_FIELD</code></td>
 *              <td align="center"><span class="fa-truck-field"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRUCK_FIELD_UN</code></td>
 *              <td align="center"><span class="fa-truck-field-un"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRUCK_FRONT</code></td>
 *              <td align="center"><span class="fa-truck-front"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRUCK_MEDICAL</code></td>
 *              <td align="center"><span class="fa-truck-medical"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRUCK_MONSTER</code></td>
 *              <td align="center"><span class="fa-truck-monster"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRUCK_MOVING</code></td>
 *              <td align="center"><span class="fa-truck-moving"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRUCK_PICKUP</code></td>
 *              <td align="center"><span class="fa-truck-pickup"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TRUCK_PLANE</code></td>
 *              <td align="center"><span class="fa-truck-plane"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TRUCK_RAMP_BOX</code></td>
 *              <td align="center"><span class="fa-truck-ramp-box"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TTY</code></td>
 *              <td align="center"><span class="fa-tty"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TURKISH_LIRA_SIGN</code></td>
 *              <td align="center"><span class="fa-turkish-lira-sign"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TURN_DOWN</code></td>
 *              <td align="center"><span class="fa-turn-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_TURN_UP</code></td>
 *              <td align="center"><span class="fa-turn-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_TV</code></td>
 *              <td align="center"><span class="fa-tv"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_U</code></td>
 *              <td align="center"><span class="fa-u"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_UMBRELLA</code></td>
 *              <td align="center"><span class="fa-umbrella"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_UMBRELLA_BEACH</code></td>
 *              <td align="center"><span class="fa-umbrella-beach"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_UNDERLINE</code></td>
 *              <td align="center"><span class="fa-underline"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_UNIVERSAL_ACCESS</code></td>
 *              <td align="center"><span class="fa-universal-access"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_UNLOCK</code></td>
 *              <td align="center"><span class="fa-unlock"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_UNLOCK_KEYHOLE</code></td>
 *              <td align="center"><span class="fa-unlock-keyhole"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_UP_DOWN</code></td>
 *              <td align="center"><span class="fa-up-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_UP_DOWN_LEFT_RIGHT</code></td>
 *              <td align="center"><span class="fa-up-down-left-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_UP_LONG</code></td>
 *              <td align="center"><span class="fa-up-long"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_UP_RIGHT_AND_DOWN_LEFT_FROM_CENTER</code></td>
 *              <td align="center"><span class="fa-up-right-and-down-left-from-center"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_UP_RIGHT_FROM_SQUARE</code></td>
 *              <td align="center"><span class="fa-up-right-from-square"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_UPLOAD</code></td>
 *              <td align="center"><span class="fa-upload"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER</code></td>
 *              <td align="center"><span class="fa-user"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_ASTRONAUT</code></td>
 *              <td align="center"><span class="fa-user-astronaut"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_CHECK</code></td>
 *              <td align="center"><span class="fa-user-check"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_CLOCK</code></td>
 *              <td align="center"><span class="fa-user-clock"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_DOCTOR</code></td>
 *              <td align="center"><span class="fa-user-doctor"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_GEAR</code></td>
 *              <td align="center"><span class="fa-user-gear"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_GRADUATE</code></td>
 *              <td align="center"><span class="fa-user-graduate"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_GROUP</code></td>
 *              <td align="center"><span class="fa-user-group"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_INJURED</code></td>
 *              <td align="center"><span class="fa-user-injured"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_LARGE</code></td>
 *              <td align="center"><span class="fa-user-large"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_LARGE_SLASH</code></td>
 *              <td align="center"><span class="fa-user-large-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_LOCK</code></td>
 *              <td align="center"><span class="fa-user-lock"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_MINUS</code></td>
 *              <td align="center"><span class="fa-user-minus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_NINJA</code></td>
 *              <td align="center"><span class="fa-user-ninja"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_NURSE</code></td>
 *              <td align="center"><span class="fa-user-nurse"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_PEN</code></td>
 *              <td align="center"><span class="fa-user-pen"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_PLUS</code></td>
 *              <td align="center"><span class="fa-user-plus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_SECRET</code></td>
 *              <td align="center"><span class="fa-user-secret"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_SHIELD</code></td>
 *              <td align="center"><span class="fa-user-shield"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_SLASH</code></td>
 *              <td align="center"><span class="fa-user-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_TAG</code></td>
 *              <td align="center"><span class="fa-user-tag"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USER_TIE</code></td>
 *              <td align="center"><span class="fa-user-tie"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USER_XMARK</code></td>
 *              <td align="center"><span class="fa-user-xmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USERS</code></td>
 *              <td align="center"><span class="fa-users"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USERS_BETWEEN_LINES</code></td>
 *              <td align="center"><span class="fa-users-between-lines"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USERS_GEAR</code></td>
 *              <td align="center"><span class="fa-users-gear"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USERS_LINE</code></td>
 *              <td align="center"><span class="fa-users-line"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USERS_RAYS</code></td>
 *              <td align="center"><span class="fa-users-rays"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USERS_RECTANGLE</code></td>
 *              <td align="center"><span class="fa-users-rectangle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_USERS_SLASH</code></td>
 *              <td align="center"><span class="fa-users-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_USERS_VIEWFINDER</code></td>
 *              <td align="center"><span class="fa-users-viewfinder"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_UTENSILS</code></td>
 *              <td align="center"><span class="fa-utensils"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_V</code></td>
 *              <td align="center"><span class="fa-v"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VAN_SHUTTLE</code></td>
 *              <td align="center"><span class="fa-van-shuttle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VAULT</code></td>
 *              <td align="center"><span class="fa-vault"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VECTOR_SQUARE</code></td>
 *              <td align="center"><span class="fa-vector-square"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VENUS</code></td>
 *              <td align="center"><span class="fa-venus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VENUS_DOUBLE</code></td>
 *              <td align="center"><span class="fa-venus-double"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VENUS_MARS</code></td>
 *              <td align="center"><span class="fa-venus-mars"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VEST</code></td>
 *              <td align="center"><span class="fa-vest"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VEST_PATCHES</code></td>
 *              <td align="center"><span class="fa-vest-patches"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VIAL</code></td>
 *              <td align="center"><span class="fa-vial"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VIAL_CIRCLE_CHECK</code></td>
 *              <td align="center"><span class="fa-vial-circle-check"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VIAL_VIRUS</code></td>
 *              <td align="center"><span class="fa-vial-virus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VIALS</code></td>
 *              <td align="center"><span class="fa-vials"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VIDEO</code></td>
 *              <td align="center"><span class="fa-video"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VIDEO_SLASH</code></td>
 *              <td align="center"><span class="fa-video-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VIHARA</code></td>
 *              <td align="center"><span class="fa-vihara"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VIRUS</code></td>
 *              <td align="center"><span class="fa-virus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VIRUS_COVID</code></td>
 *              <td align="center"><span class="fa-virus-covid"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VIRUS_COVID_SLASH</code></td>
 *              <td align="center"><span class="fa-virus-covid-slash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VIRUS_SLASH</code></td>
 *              <td align="center"><span class="fa-virus-slash"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VIRUSES</code></td>
 *              <td align="center"><span class="fa-viruses"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VOICEMAIL</code></td>
 *              <td align="center"><span class="fa-voicemail"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VOLCANO</code></td>
 *              <td align="center"><span class="fa-volcano"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VOLLEYBALL</code></td>
 *              <td align="center"><span class="fa-volleyball"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VOLUME_HIGH</code></td>
 *              <td align="center"><span class="fa-volume-high"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VOLUME_LOW</code></td>
 *              <td align="center"><span class="fa-volume-low"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VOLUME_OFF</code></td>
 *              <td align="center"><span class="fa-volume-off"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_VOLUME_XMARK</code></td>
 *              <td align="center"><span class="fa-volume-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_VR_CARDBOARD</code></td>
 *              <td align="center"><span class="fa-vr-cardboard"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_W</code></td>
 *              <td align="center"><span class="fa-w"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WALKIE_TALKIE</code></td>
 *              <td align="center"><span class="fa-walkie-talkie"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WALLET</code></td>
 *              <td align="center"><span class="fa-wallet"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WAND_MAGIC</code></td>
 *              <td align="center"><span class="fa-wand-magic"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WAND_MAGIC_SPARKLES</code></td>
 *              <td align="center"><span class="fa-wand-magic-sparkles"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WAND_SPARKLES</code></td>
 *              <td align="center"><span class="fa-wand-sparkles"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WAREHOUSE</code></td>
 *              <td align="center"><span class="fa-warehouse"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WATER</code></td>
 *              <td align="center"><span class="fa-water"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WATER_LADDER</code></td>
 *              <td align="center"><span class="fa-water-ladder"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WAVE_SQUARE</code></td>
 *              <td align="center"><span class="fa-wave-square"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WEIGHT_HANGING</code></td>
 *              <td align="center"><span class="fa-weight-hanging"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WEIGHT_SCALE</code></td>
 *              <td align="center"><span class="fa-weight-scale"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WHEAT_AWN</code></td>
 *              <td align="center"><span class="fa-wheat-awn"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WHEAT_AWN_CIRCLE_EXCLAMATION</code></td>
 *              <td align="center"><span class="fa-wheat-awn-circle-exclamation"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WHEELCHAIR</code></td>
 *              <td align="center"><span class="fa-wheelchair"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WHEELCHAIR_MOVE</code></td>
 *              <td align="center"><span class="fa-wheelchair-move"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WHISKEY_GLASS</code></td>
 *              <td align="center"><span class="fa-whiskey-glass"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WIFI</code></td>
 *              <td align="center"><span class="fa-wifi"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WIND</code></td>
 *              <td align="center"><span class="fa-wind"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WINDOW_MAXIMIZE</code></td>
 *              <td align="center"><span class="fa-window-maximize"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WINDOW_MINIMIZE</code></td>
 *              <td align="center"><span class="fa-window-minimize"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WINDOW_RESTORE</code></td>
 *              <td align="center"><span class="fa-window-restore"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WINE_BOTTLE</code></td>
 *              <td align="center"><span class="fa-wine-bottle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WINE_GLASS</code></td>
 *              <td align="center"><span class="fa-wine-glass"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WINE_GLASS_EMPTY</code></td>
 *              <td align="center"><span class="fa-wine-glass-empty"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WON_SIGN</code></td>
 *              <td align="center"><span class="fa-won-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_WORM</code></td>
 *              <td align="center"><span class="fa-worm"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_WRENCH</code></td>
 *              <td align="center"><span class="fa-wrench"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_X</code></td>
 *              <td align="center"><span class="fa-x"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_X_RAY</code></td>
 *              <td align="center"><span class="fa-x-ray"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_XMARK</code></td>
 *              <td align="center"><span class="fa-xmark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_XMARKS_LINES</code></td>
 *              <td align="center"><span class="fa-xmarks-lines"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_Y</code></td>
 *              <td align="center"><span class="fa-y"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_YEN_SIGN</code></td>
 *              <td align="center"><span class="fa-yen-sign"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td align="right"><code>FA_YIN_YANG</code></td>
 *              <td align="center"><span class="fa-yin-yang"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td align="right"><code>FA_Z</code></td>
 *              <td align="center"><span class="fa-z"></span></td>
 *            </tr>
 *          </tbody>
 *        </table>
 *      </div><!-- wy-table-responsive -->
 *    </center>
 *
 * \endrst
 */

#pragma once

// prevent individual pages from being generated for all of these
#if !defined(DOXYGEN_SHOULD_SKIP_THIS)

#define FA_0                                    0x30
#define FA_1                                    0x31
#define FA_2                                    0x32
#define FA_3                                    0x33
#define FA_4                                    0x34
#define FA_5                                    0x35
#define FA_6                                    0x36
#define FA_7                                    0x37
#define FA_8                                    0x38
#define FA_9                                    0x39
#define FA_A                                    0x41
#define FA_ADDRESS_BOOK                         0xf2b9
#define FA_ADDRESS_CARD                         0xf2bb
#define FA_ALIGN_CENTER                         0xf037
#define FA_ALIGN_JUSTIFY                        0xf039
#define FA_ALIGN_LEFT                           0xf036
#define FA_ALIGN_RIGHT                          0xf038
#define FA_ANCHOR                               0xf13d
#define FA_ANCHOR_CIRCLE_CHECK                  0xe4aa
#define FA_ANCHOR_CIRCLE_EXCLAMATION            0xe4ab
#define FA_ANCHOR_CIRCLE_XMARK                  0xe4ac
#define FA_ANCHOR_LOCK                          0xe4ad
#define FA_ANGLE_DOWN                           0xf107
#define FA_ANGLE_LEFT                           0xf104
#define FA_ANGLE_RIGHT                          0xf105
#define FA_ANGLE_UP                             0xf106
#define FA_ANGLES_DOWN                          0xf103
#define FA_ANGLES_LEFT                          0xf100
#define FA_ANGLES_RIGHT                         0xf101
#define FA_ANGLES_UP                            0xf102
#define FA_ANKH                                 0xf644
#define FA_APPLE_WHOLE                          0xf5d1
#define FA_ARCHWAY                              0xf557
#define FA_ARROW_DOWN                           0xf063
#define FA_ARROW_DOWN_1_9                       0xf162
#define FA_ARROW_DOWN_9_1                       0xf886
#define FA_ARROW_DOWN_A_Z                       0xf15d
#define FA_ARROW_DOWN_LONG                      0xf175
#define FA_ARROW_DOWN_SHORT_WIDE                0xf884
#define FA_ARROW_DOWN_UP_ACROSS_LINE            0xe4af
#define FA_ARROW_DOWN_UP_LOCK                   0xe4b0
#define FA_ARROW_DOWN_WIDE_SHORT                0xf160
#define FA_ARROW_DOWN_Z_A                       0xf881
#define FA_ARROW_LEFT                           0xf060
#define FA_ARROW_LEFT_LONG                      0xf177
#define FA_ARROW_POINTER                        0xf245
#define FA_ARROW_RIGHT                          0xf061
#define FA_ARROW_RIGHT_ARROW_LEFT               0xf0ec
#define FA_ARROW_RIGHT_FROM_BRACKET             0xf08b
#define FA_ARROW_RIGHT_LONG                     0xf178
#define FA_ARROW_RIGHT_TO_BRACKET               0xf090
#define FA_ARROW_RIGHT_TO_CITY                  0xe4b3
#define FA_ARROW_ROTATE_LEFT                    0xf0e2
#define FA_ARROW_ROTATE_RIGHT                   0xf01e
#define FA_ARROW_TREND_DOWN                     0xe097
#define FA_ARROW_TREND_UP                       0xe098
#define FA_ARROW_TURN_DOWN                      0xf149
#define FA_ARROW_TURN_UP                        0xf148
#define FA_ARROW_UP                             0xf062
#define FA_ARROW_UP_1_9                         0xf163
#define FA_ARROW_UP_9_1                         0xf887
#define FA_ARROW_UP_A_Z                         0xf15e
#define FA_ARROW_UP_FROM_BRACKET                0xe09a
#define FA_ARROW_UP_FROM_GROUND_WATER           0xe4b5
#define FA_ARROW_UP_FROM_WATER_PUMP             0xe4b6
#define FA_ARROW_UP_LONG                        0xf176
#define FA_ARROW_UP_RIGHT_DOTS                  0xe4b7
#define FA_ARROW_UP_RIGHT_FROM_SQUARE           0xf08e
#define FA_ARROW_UP_SHORT_WIDE                  0xf885
#define FA_ARROW_UP_WIDE_SHORT                  0xf161
#define FA_ARROW_UP_Z_A                         0xf882
#define FA_ARROWS_DOWN_TO_LINE                  0xe4b8
#define FA_ARROWS_DOWN_TO_PEOPLE                0xe4b9
#define FA_ARROWS_LEFT_RIGHT                    0xf07e
#define FA_ARROWS_LEFT_RIGHT_TO_LINE            0xe4ba
#define FA_ARROWS_ROTATE                        0xf021
#define FA_ARROWS_SPIN                          0xe4bb
#define FA_ARROWS_SPLIT_UP_AND_LEFT             0xe4bc
#define FA_ARROWS_TO_CIRCLE                     0xe4bd
#define FA_ARROWS_TO_DOT                        0xe4be
#define FA_ARROWS_TO_EYE                        0xe4bf
#define FA_ARROWS_TURN_RIGHT                    0xe4c0
#define FA_ARROWS_TURN_TO_DOTS                  0xe4c1
#define FA_ARROWS_UP_DOWN                       0xf07d
#define FA_ARROWS_UP_DOWN_LEFT_RIGHT            0xf047
#define FA_ARROWS_UP_TO_LINE                    0xe4c2
#define FA_ASTERISK                             0x2a
#define FA_AT                                   0x40
#define FA_ATOM                                 0xf5d2
#define FA_AUDIO_DESCRIPTION                    0xf29e
#define FA_AUSTRAL_SIGN                         0xe0a9
#define FA_AWARD                                0xf559
#define FA_B                                    0x42
#define FA_BABY                                 0xf77c
#define FA_BABY_CARRIAGE                        0xf77d
#define FA_BACKWARD                             0xf04a
#define FA_BACKWARD_FAST                        0xf049
#define FA_BACKWARD_STEP                        0xf048
#define FA_BACON                                0xf7e5
#define FA_BACTERIA                             0xe059
#define FA_BACTERIUM                            0xe05a
#define FA_BAG_SHOPPING                         0xf290
#define FA_BAHAI                                0xf666
#define FA_BAHT_SIGN                            0xe0ac
#define FA_BAN                                  0xf05e
#define FA_BAN_SMOKING                          0xf54d
#define FA_BANDAGE                              0xf462
#define FA_BANGLADESHI_TAKA_SIGN                0xe2e6
#define FA_BARCODE                              0xf02a
#define FA_BARS                                 0xf0c9
#define FA_BARS_PROGRESS                        0xf828
#define FA_BARS_STAGGERED                       0xf550
#define FA_BASEBALL                             0xf433
#define FA_BASEBALL_BAT_BALL                    0xf432
#define FA_BASKET_SHOPPING                      0xf291
#define FA_BASKETBALL                           0xf434
#define FA_BATH                                 0xf2cd
#define FA_BATTERY_EMPTY                        0xf244
#define FA_BATTERY_FULL                         0xf240
#define FA_BATTERY_HALF                         0xf242
#define FA_BATTERY_QUARTER                      0xf243
#define FA_BATTERY_THREE_QUARTERS               0xf241
#define FA_BED                                  0xf236
#define FA_BED_PULSE                            0xf487
#define FA_BEER_MUG_EMPTY                       0xf0fc
#define FA_BELL                                 0xf0f3
#define FA_BELL_CONCIERGE                       0xf562
#define FA_BELL_SLASH                           0xf1f6
#define FA_BEZIER_CURVE                         0xf55b
#define FA_BICYCLE                              0xf206
#define FA_BINOCULARS                           0xf1e5
#define FA_BIOHAZARD                            0xf780
#define FA_BITCOIN_SIGN                         0xe0b4
#define FA_BLENDER                              0xf517
#define FA_BLENDER_PHONE                        0xf6b6
#define FA_BLOG                                 0xf781
#define FA_BOLD                                 0xf032
#define FA_BOLT                                 0xf0e7
#define FA_BOLT_LIGHTNING                       0xe0b7
#define FA_BOMB                                 0xf1e2
#define FA_BONE                                 0xf5d7
#define FA_BONG                                 0xf55c
#define FA_BOOK                                 0xf02d
#define FA_BOOK_ATLAS                           0xf558
#define FA_BOOK_BIBLE                           0xf647
#define FA_BOOK_BOOKMARK                        0xe0bb
#define FA_BOOK_JOURNAL_WHILLS                  0xf66a
#define FA_BOOK_MEDICAL                         0xf7e6
#define FA_BOOK_OPEN                            0xf518
#define FA_BOOK_OPEN_READER                     0xf5da
#define FA_BOOK_QURAN                           0xf687
#define FA_BOOK_SKULL                           0xf6b7
#define FA_BOOK_TANAKH                          0xf827
#define FA_BOOKMARK                             0xf02e
#define FA_BORDER_ALL                           0xf84c
#define FA_BORDER_NONE                          0xf850
#define FA_BORDER_TOP_LEFT                      0xf853
#define FA_BORE_HOLE                            0xe4c3
#define FA_BOTTLE_DROPLET                       0xe4c4
#define FA_BOTTLE_WATER                         0xe4c5
#define FA_BOWL_FOOD                            0xe4c6
#define FA_BOWL_RICE                            0xe2eb
#define FA_BOWLING_BALL                         0xf436
#define FA_BOX                                  0xf466
#define FA_BOX_ARCHIVE                          0xf187
#define FA_BOX_OPEN                             0xf49e
#define FA_BOX_TISSUE                           0xe05b
#define FA_BOXES_PACKING                        0xe4c7
#define FA_BOXES_STACKED                        0xf468
#define FA_BRAILLE                              0xf2a1
#define FA_BRAIN                                0xf5dc
#define FA_BRAZILIAN_REAL_SIGN                  0xe46c
#define FA_BREAD_SLICE                          0xf7ec
#define FA_BRIDGE                               0xe4c8
#define FA_BRIDGE_CIRCLE_CHECK                  0xe4c9
#define FA_BRIDGE_CIRCLE_EXCLAMATION            0xe4ca
#define FA_BRIDGE_CIRCLE_XMARK                  0xe4cb
#define FA_BRIDGE_LOCK                          0xe4cc
#define FA_BRIDGE_WATER                         0xe4ce
#define FA_BRIEFCASE                            0xf0b1
#define FA_BRIEFCASE_MEDICAL                    0xf469
#define FA_BROOM                                0xf51a
#define FA_BROOM_BALL                           0xf458
#define FA_BRUSH                                0xf55d
#define FA_BUCKET                               0xe4cf
#define FA_BUG                                  0xf188
#define FA_BUG_SLASH                            0xe490
#define FA_BUGS                                 0xe4d0
#define FA_BUILDING                             0xf1ad
#define FA_BUILDING_CIRCLE_ARROW_RIGHT          0xe4d1
#define FA_BUILDING_CIRCLE_CHECK                0xe4d2
#define FA_BUILDING_CIRCLE_EXCLAMATION          0xe4d3
#define FA_BUILDING_CIRCLE_XMARK                0xe4d4
#define FA_BUILDING_COLUMNS                     0xf19c
#define FA_BUILDING_FLAG                        0xe4d5
#define FA_BUILDING_LOCK                        0xe4d6
#define FA_BUILDING_NGO                         0xe4d7
#define FA_BUILDING_SHIELD                      0xe4d8
#define FA_BUILDING_UN                          0xe4d9
#define FA_BUILDING_USER                        0xe4da
#define FA_BUILDING_WHEAT                       0xe4db
#define FA_BULLHORN                             0xf0a1
#define FA_BULLSEYE                             0xf140
#define FA_BURGER                               0xf805
#define FA_BURST                                0xe4dc
#define FA_BUS                                  0xf207
#define FA_BUS_SIMPLE                           0xf55e
#define FA_BUSINESS_TIME                        0xf64a
#define FA_C                                    0x43
#define FA_CABLE_CAR                            0xf7da
#define FA_CAKE_CANDLES                         0xf1fd
#define FA_CALCULATOR                           0xf1ec
#define FA_CALENDAR                             0xf133
#define FA_CALENDAR_CHECK                       0xf274
#define FA_CALENDAR_DAY                         0xf783
#define FA_CALENDAR_DAYS                        0xf073
#define FA_CALENDAR_MINUS                       0xf272
#define FA_CALENDAR_PLUS                        0xf271
#define FA_CALENDAR_WEEK                        0xf784
#define FA_CALENDAR_XMARK                       0xf273
#define FA_CAMERA                               0xf030
#define FA_CAMERA_RETRO                         0xf083
#define FA_CAMERA_ROTATE                        0xe0d8
#define FA_CAMPGROUND                           0xf6bb
#define FA_CANDY_CANE                           0xf786
#define FA_CANNABIS                             0xf55f
#define FA_CAPSULES                             0xf46b
#define FA_CAR                                  0xf1b9
#define FA_CAR_BATTERY                          0xf5df
#define FA_CAR_BURST                            0xf5e1
#define FA_CAR_ON                               0xe4dd
#define FA_CAR_REAR                             0xf5de
#define FA_CAR_SIDE                             0xf5e4
#define FA_CAR_TUNNEL                           0xe4de
#define FA_CARAVAN                              0xf8ff
#define FA_CARET_DOWN                           0xf0d7
#define FA_CARET_LEFT                           0xf0d9
#define FA_CARET_RIGHT                          0xf0da
#define FA_CARET_UP                             0xf0d8
#define FA_CARROT                               0xf787
#define FA_CART_ARROW_DOWN                      0xf218
#define FA_CART_FLATBED                         0xf474
#define FA_CART_FLATBED_SUITCASE                0xf59d
#define FA_CART_PLUS                            0xf217
#define FA_CART_SHOPPING                        0xf07a
#define FA_CASH_REGISTER                        0xf788
#define FA_CAT                                  0xf6be
#define FA_CEDI_SIGN                            0xe0df
#define FA_CENT_SIGN                            0xe3f5
#define FA_CERTIFICATE                          0xf0a3
#define FA_CHAIR                                0xf6c0
#define FA_CHALKBOARD                           0xf51b
#define FA_CHALKBOARD_USER                      0xf51c
#define FA_CHAMPAGNE_GLASSES                    0xf79f
#define FA_CHARGING_STATION                     0xf5e7
#define FA_CHART_AREA                           0xf1fe
#define FA_CHART_BAR                            0xf080
#define FA_CHART_COLUMN                         0xe0e3
#define FA_CHART_GANTT                          0xe0e4
#define FA_CHART_LINE                           0xf201
#define FA_CHART_PIE                            0xf200
#define FA_CHART_SIMPLE                         0xe473
#define FA_CHECK                                0xf00c
#define FA_CHECK_DOUBLE                         0xf560
#define FA_CHECK_TO_SLOT                        0xf772
#define FA_CHEESE                               0xf7ef
#define FA_CHESS                                0xf439
#define FA_CHESS_BISHOP                         0xf43a
#define FA_CHESS_BOARD                          0xf43c
#define FA_CHESS_KING                           0xf43f
#define FA_CHESS_KNIGHT                         0xf441
#define FA_CHESS_PAWN                           0xf443
#define FA_CHESS_QUEEN                          0xf445
#define FA_CHESS_ROOK                           0xf447
#define FA_CHEVRON_DOWN                         0xf078
#define FA_CHEVRON_LEFT                         0xf053
#define FA_CHEVRON_RIGHT                        0xf054
#define FA_CHEVRON_UP                           0xf077
#define FA_CHILD                                0xf1ae
#define FA_CHILD_COMBATANT                      0xe4e0
#define FA_CHILD_DRESS                          0xe59c
#define FA_CHILD_REACHING                       0xe59d
#define FA_CHILDREN                             0xe4e1
#define FA_CHURCH                               0xf51d
#define FA_CIRCLE                               0xf111
#define FA_CIRCLE_ARROW_DOWN                    0xf0ab
#define FA_CIRCLE_ARROW_LEFT                    0xf0a8
#define FA_CIRCLE_ARROW_RIGHT                   0xf0a9
#define FA_CIRCLE_ARROW_UP                      0xf0aa
#define FA_CIRCLE_CHECK                         0xf058
#define FA_CIRCLE_CHEVRON_DOWN                  0xf13a
#define FA_CIRCLE_CHEVRON_LEFT                  0xf137
#define FA_CIRCLE_CHEVRON_RIGHT                 0xf138
#define FA_CIRCLE_CHEVRON_UP                    0xf139
#define FA_CIRCLE_DOLLAR_TO_SLOT                0xf4b9
#define FA_CIRCLE_DOT                           0xf192
#define FA_CIRCLE_DOWN                          0xf358
#define FA_CIRCLE_EXCLAMATION                   0xf06a
#define FA_CIRCLE_H                             0xf47e
#define FA_CIRCLE_HALF_STROKE                   0xf042
#define FA_CIRCLE_INFO                          0xf05a
#define FA_CIRCLE_LEFT                          0xf359
#define FA_CIRCLE_MINUS                         0xf056
#define FA_CIRCLE_NODES                         0xe4e2
#define FA_CIRCLE_NOTCH                         0xf1ce
#define FA_CIRCLE_PAUSE                         0xf28b
#define FA_CIRCLE_PLAY                          0xf144
#define FA_CIRCLE_PLUS                          0xf055
#define FA_CIRCLE_QUESTION                      0xf059
#define FA_CIRCLE_RADIATION                     0xf7ba
#define FA_CIRCLE_RIGHT                         0xf35a
#define FA_CIRCLE_STOP                          0xf28d
#define FA_CIRCLE_UP                            0xf35b
#define FA_CIRCLE_USER                          0xf2bd
#define FA_CIRCLE_XMARK                         0xf057
#define FA_CITY                                 0xf64f
#define FA_CLAPPERBOARD                         0xe131
#define FA_CLIPBOARD                            0xf328
#define FA_CLIPBOARD_CHECK                      0xf46c
#define FA_CLIPBOARD_LIST                       0xf46d
#define FA_CLIPBOARD_QUESTION                   0xe4e3
#define FA_CLIPBOARD_USER                       0xf7f3
#define FA_CLOCK                                0xf017
#define FA_CLOCK_ROTATE_LEFT                    0xf1da
#define FA_CLONE                                0xf24d
#define FA_CLOSED_CAPTIONING                    0xf20a
#define FA_CLOUD                                0xf0c2
#define FA_CLOUD_ARROW_DOWN                     0xf0ed
#define FA_CLOUD_ARROW_UP                       0xf0ee
#define FA_CLOUD_BOLT                           0xf76c
#define FA_CLOUD_MEATBALL                       0xf73b
#define FA_CLOUD_MOON                           0xf6c3
#define FA_CLOUD_MOON_RAIN                      0xf73c
#define FA_CLOUD_RAIN                           0xf73d
#define FA_CLOUD_SHOWERS_HEAVY                  0xf740
#define FA_CLOUD_SHOWERS_WATER                  0xe4e4
#define FA_CLOUD_SUN                            0xf6c4
#define FA_CLOUD_SUN_RAIN                       0xf743
#define FA_CLOVER                               0xe139
#define FA_CODE                                 0xf121
#define FA_CODE_BRANCH                          0xf126
#define FA_CODE_COMMIT                          0xf386
#define FA_CODE_COMPARE                         0xe13a
#define FA_CODE_FORK                            0xe13b
#define FA_CODE_MERGE                           0xf387
#define FA_CODE_PULL_REQUEST                    0xe13c
#define FA_COINS                                0xf51e
#define FA_COLON_SIGN                           0xe140
#define FA_COMMENT                              0xf075
#define FA_COMMENT_DOLLAR                       0xf651
#define FA_COMMENT_DOTS                         0xf4ad
#define FA_COMMENT_MEDICAL                      0xf7f5
#define FA_COMMENT_SLASH                        0xf4b3
#define FA_COMMENT_SMS                          0xf7cd
#define FA_COMMENTS                             0xf086
#define FA_COMMENTS_DOLLAR                      0xf653
#define FA_COMPACT_DISC                         0xf51f
#define FA_COMPASS                              0xf14e
#define FA_COMPASS_DRAFTING                     0xf568
#define FA_COMPRESS                             0xf066
#define FA_COMPUTER                             0xe4e5
#define FA_COMPUTER_MOUSE                       0xf8cc
#define FA_COOKIE                               0xf563
#define FA_COOKIE_BITE                          0xf564
#define FA_COPY                                 0xf0c5
#define FA_COPYRIGHT                            0xf1f9
#define FA_COUCH                                0xf4b8
#define FA_COW                                  0xf6c8
#define FA_CREDIT_CARD                          0xf09d
#define FA_CROP                                 0xf125
#define FA_CROP_SIMPLE                          0xf565
#define FA_CROSS                                0xf654
#define FA_CROSSHAIRS                           0xf05b
#define FA_CROW                                 0xf520
#define FA_CROWN                                0xf521
#define FA_CRUTCH                               0xf7f7
#define FA_CRUZEIRO_SIGN                        0xe152
#define FA_CUBE                                 0xf1b2
#define FA_CUBES                                0xf1b3
#define FA_CUBES_STACKED                        0xe4e6
#define FA_D                                    0x44
#define FA_DATABASE                             0xf1c0
#define FA_DELETE_LEFT                          0xf55a
#define FA_DEMOCRAT                             0xf747
#define FA_DESKTOP                              0xf390
#define FA_DHARMACHAKRA                         0xf655
#define FA_DIAGRAM_NEXT                         0xe476
#define FA_DIAGRAM_PREDECESSOR                  0xe477
#define FA_DIAGRAM_PROJECT                      0xf542
#define FA_DIAGRAM_SUCCESSOR                    0xe47a
#define FA_DIAMOND                              0xf219
#define FA_DIAMOND_TURN_RIGHT                   0xf5eb
#define FA_DICE                                 0xf522
#define FA_DICE_D20                             0xf6cf
#define FA_DICE_D6                              0xf6d1
#define FA_DICE_FIVE                            0xf523
#define FA_DICE_FOUR                            0xf524
#define FA_DICE_ONE                             0xf525
#define FA_DICE_SIX                             0xf526
#define FA_DICE_THREE                           0xf527
#define FA_DICE_TWO                             0xf528
#define FA_DISEASE                              0xf7fa
#define FA_DISPLAY                              0xe163
#define FA_DIVIDE                               0xf529
#define FA_DNA                                  0xf471
#define FA_DOG                                  0xf6d3
#define FA_DOLLAR_SIGN                          0x24
#define FA_DOLLY                                0xf472
#define FA_DONG_SIGN                            0xe169
#define FA_DOOR_CLOSED                          0xf52a
#define FA_DOOR_OPEN                            0xf52b
#define FA_DOVE                                 0xf4ba
#define FA_DOWN_LEFT_AND_UP_RIGHT_TO_CENTER     0xf422
#define FA_DOWN_LONG                            0xf309
#define FA_DOWNLOAD                             0xf019
#define FA_DRAGON                               0xf6d5
#define FA_DRAW_POLYGON                         0xf5ee
#define FA_DROPLET                              0xf043
#define FA_DROPLET_SLASH                        0xf5c7
#define FA_DRUM                                 0xf569
#define FA_DRUM_STEELPAN                        0xf56a
#define FA_DRUMSTICK_BITE                       0xf6d7
#define FA_DUMBBELL                             0xf44b
#define FA_DUMPSTER                             0xf793
#define FA_DUMPSTER_FIRE                        0xf794
#define FA_DUNGEON                              0xf6d9
#define FA_E                                    0x45
#define FA_EAR_DEAF                             0xf2a4
#define FA_EAR_LISTEN                           0xf2a2
#define FA_EARTH_AFRICA                         0xf57c
#define FA_EARTH_AMERICAS                       0xf57d
#define FA_EARTH_ASIA                           0xf57e
#define FA_EARTH_EUROPE                         0xf7a2
#define FA_EARTH_OCEANIA                        0xe47b
#define FA_EGG                                  0xf7fb
#define FA_EJECT                                0xf052
#define FA_ELEVATOR                             0xe16d
#define FA_ELLIPSIS                             0xf141
#define FA_ELLIPSIS_VERTICAL                    0xf142
#define FA_ENVELOPE                             0xf0e0
#define FA_ENVELOPE_CIRCLE_CHECK                0xe4e8
#define FA_ENVELOPE_OPEN                        0xf2b6
#define FA_ENVELOPE_OPEN_TEXT                   0xf658
#define FA_ENVELOPES_BULK                       0xf674
#define FA_EQUALS                               0x3d
#define FA_ERASER                               0xf12d
#define FA_ETHERNET                             0xf796
#define FA_EURO_SIGN                            0xf153
#define FA_EXCLAMATION                          0x21
#define FA_EXPAND                               0xf065
#define FA_EXPLOSION                            0xe4e9
#define FA_EYE                                  0xf06e
#define FA_EYE_DROPPER                          0xf1fb
#define FA_EYE_LOW_VISION                       0xf2a8
#define FA_EYE_SLASH                            0xf070
#define FA_F                                    0x46
#define FA_FACE_ANGRY                           0xf556
#define FA_FACE_DIZZY                           0xf567
#define FA_FACE_FLUSHED                         0xf579
#define FA_FACE_FROWN                           0xf119
#define FA_FACE_FROWN_OPEN                      0xf57a
#define FA_FACE_GRIMACE                         0xf57f
#define FA_FACE_GRIN                            0xf580
#define FA_FACE_GRIN_BEAM                       0xf582
#define FA_FACE_GRIN_BEAM_SWEAT                 0xf583
#define FA_FACE_GRIN_HEARTS                     0xf584
#define FA_FACE_GRIN_SQUINT                     0xf585
#define FA_FACE_GRIN_SQUINT_TEARS               0xf586
#define FA_FACE_GRIN_STARS                      0xf587
#define FA_FACE_GRIN_TEARS                      0xf588
#define FA_FACE_GRIN_TONGUE                     0xf589
#define FA_FACE_GRIN_TONGUE_SQUINT              0xf58a
#define FA_FACE_GRIN_TONGUE_WINK                0xf58b
#define FA_FACE_GRIN_WIDE                       0xf581
#define FA_FACE_GRIN_WINK                       0xf58c
#define FA_FACE_KISS                            0xf596
#define FA_FACE_KISS_BEAM                       0xf597
#define FA_FACE_KISS_WINK_HEART                 0xf598
#define FA_FACE_LAUGH                           0xf599
#define FA_FACE_LAUGH_BEAM                      0xf59a
#define FA_FACE_LAUGH_SQUINT                    0xf59b
#define FA_FACE_LAUGH_WINK                      0xf59c
#define FA_FACE_MEH                             0xf11a
#define FA_FACE_MEH_BLANK                       0xf5a4
#define FA_FACE_ROLLING_EYES                    0xf5a5
#define FA_FACE_SAD_CRY                         0xf5b3
#define FA_FACE_SAD_TEAR                        0xf5b4
#define FA_FACE_SMILE                           0xf118
#define FA_FACE_SMILE_BEAM                      0xf5b8
#define FA_FACE_SMILE_WINK                      0xf4da
#define FA_FACE_SURPRISE                        0xf5c2
#define FA_FACE_TIRED                           0xf5c8
#define FA_FAN                                  0xf863
#define FA_FAUCET                               0xe005
#define FA_FAUCET_DRIP                          0xe006
#define FA_FAX                                  0xf1ac
#define FA_FEATHER                              0xf52d
#define FA_FEATHER_POINTED                      0xf56b
#define FA_FERRY                                0xe4ea
#define FA_FILE                                 0xf15b
#define FA_FILE_ARROW_DOWN                      0xf56d
#define FA_FILE_ARROW_UP                        0xf574
#define FA_FILE_AUDIO                           0xf1c7
#define FA_FILE_CIRCLE_CHECK                    0xe5a0
#define FA_FILE_CIRCLE_EXCLAMATION              0xe4eb
#define FA_FILE_CIRCLE_MINUS                    0xe4ed
#define FA_FILE_CIRCLE_PLUS                     0xe494
#define FA_FILE_CIRCLE_QUESTION                 0xe4ef
#define FA_FILE_CIRCLE_XMARK                    0xe5a1
#define FA_FILE_CODE                            0xf1c9
#define FA_FILE_CONTRACT                        0xf56c
#define FA_FILE_CSV                             0xf6dd
#define FA_FILE_EXCEL                           0xf1c3
#define FA_FILE_EXPORT                          0xf56e
#define FA_FILE_IMAGE                           0xf1c5
#define FA_FILE_IMPORT                          0xf56f
#define FA_FILE_INVOICE                         0xf570
#define FA_FILE_INVOICE_DOLLAR                  0xf571
#define FA_FILE_LINES                           0xf15c
#define FA_FILE_MEDICAL                         0xf477
#define FA_FILE_PDF                             0xf1c1
#define FA_FILE_PEN                             0xf31c
#define FA_FILE_POWERPOINT                      0xf1c4
#define FA_FILE_PRESCRIPTION                    0xf572
#define FA_FILE_SHIELD                          0xe4f0
#define FA_FILE_SIGNATURE                       0xf573
#define FA_FILE_VIDEO                           0xf1c8
#define FA_FILE_WAVEFORM                        0xf478
#define FA_FILE_WORD                            0xf1c2
#define FA_FILE_ZIPPER                          0xf1c6
#define FA_FILL                                 0xf575
#define FA_FILL_DRIP                            0xf576
#define FA_FILM                                 0xf008
#define FA_FILTER                               0xf0b0
#define FA_FILTER_CIRCLE_DOLLAR                 0xf662
#define FA_FILTER_CIRCLE_XMARK                  0xe17b
#define FA_FINGERPRINT                          0xf577
#define FA_FIRE                                 0xf06d
#define FA_FIRE_BURNER                          0xe4f1
#define FA_FIRE_EXTINGUISHER                    0xf134
#define FA_FIRE_FLAME_CURVED                    0xf7e4
#define FA_FIRE_FLAME_SIMPLE                    0xf46a
#define FA_FISH                                 0xf578
#define FA_FISH_FINS                            0xe4f2
#define FA_FLAG                                 0xf024
#define FA_FLAG_CHECKERED                       0xf11e
#define FA_FLAG_USA                             0xf74d
#define FA_FLASK                                0xf0c3
#define FA_FLASK_VIAL                           0xe4f3
#define FA_FLOPPY_DISK                          0xf0c7
#define FA_FLORIN_SIGN                          0xe184
#define FA_FOLDER                               0xf07b
#define FA_FOLDER_CLOSED                        0xe185
#define FA_FOLDER_MINUS                         0xf65d
#define FA_FOLDER_OPEN                          0xf07c
#define FA_FOLDER_PLUS                          0xf65e
#define FA_FOLDER_TREE                          0xf802
#define FA_FONT                                 0xf031
#define FA_FONT_AWESOME                         0xf2b4
#define FA_FOOTBALL                             0xf44e
#define FA_FORWARD                              0xf04e
#define FA_FORWARD_FAST                         0xf050
#define FA_FORWARD_STEP                         0xf051
#define FA_FRANC_SIGN                           0xe18f
#define FA_FROG                                 0xf52e
#define FA_FUTBOL                               0xf1e3
#define FA_G                                    0x47
#define FA_GAMEPAD                              0xf11b
#define FA_GAS_PUMP                             0xf52f
#define FA_GAUGE                                0xf624
#define FA_GAUGE_HIGH                           0xf625
#define FA_GAUGE_SIMPLE                         0xf629
#define FA_GAUGE_SIMPLE_HIGH                    0xf62a
#define FA_GAVEL                                0xf0e3
#define FA_GEAR                                 0xf013
#define FA_GEARS                                0xf085
#define FA_GEM                                  0xf3a5
#define FA_GENDERLESS                           0xf22d
#define FA_GHOST                                0xf6e2
#define FA_GIFT                                 0xf06b
#define FA_GIFTS                                0xf79c
#define FA_GLASS_WATER                          0xe4f4
#define FA_GLASS_WATER_DROPLET                  0xe4f5
#define FA_GLASSES                              0xf530
#define FA_GLOBE                                0xf0ac
#define FA_GOLF_BALL_TEE                        0xf450
#define FA_GOPURAM                              0xf664
#define FA_GRADUATION_CAP                       0xf19d
#define FA_GREATER_THAN                         0x3e
#define FA_GREATER_THAN_EQUAL                   0xf532
#define FA_GRIP                                 0xf58d
#define FA_GRIP_LINES                           0xf7a4
#define FA_GRIP_LINES_VERTICAL                  0xf7a5
#define FA_GRIP_VERTICAL                        0xf58e
#define FA_GROUP_ARROWS_ROTATE                  0xe4f6
#define FA_GUARANI_SIGN                         0xe19a
#define FA_GUITAR                               0xf7a6
#define FA_GUN                                  0xe19b
#define FA_H                                    0x48
#define FA_HAMMER                               0xf6e3
#define FA_HAMSA                                0xf665
#define FA_HAND                                 0xf256
#define FA_HAND_BACK_FIST                       0xf255
#define FA_HAND_DOTS                            0xf461
#define FA_HAND_FIST                            0xf6de
#define FA_HAND_HOLDING                         0xf4bd
#define FA_HAND_HOLDING_DOLLAR                  0xf4c0
#define FA_HAND_HOLDING_DROPLET                 0xf4c1
#define FA_HAND_HOLDING_HAND                    0xe4f7
#define FA_HAND_HOLDING_HEART                   0xf4be
#define FA_HAND_HOLDING_MEDICAL                 0xe05c
#define FA_HAND_LIZARD                          0xf258
#define FA_HAND_MIDDLE_FINGER                   0xf806
#define FA_HAND_PEACE                           0xf25b
#define FA_HAND_POINT_DOWN                      0xf0a7
#define FA_HAND_POINT_LEFT                      0xf0a5
#define FA_HAND_POINT_RIGHT                     0xf0a4
#define FA_HAND_POINT_UP                        0xf0a6
#define FA_HAND_POINTER                         0xf25a
#define FA_HAND_SCISSORS                        0xf257
#define FA_HAND_SPARKLES                        0xe05d
#define FA_HAND_SPOCK                           0xf259
#define FA_HANDCUFFS                            0xe4f8
#define FA_HANDS                                0xf2a7
#define FA_HANDS_ASL_INTERPRETING               0xf2a3
#define FA_HANDS_BOUND                          0xe4f9
#define FA_HANDS_BUBBLES                        0xe05e
#define FA_HANDS_CLAPPING                       0xe1a8
#define FA_HANDS_HOLDING                        0xf4c2
#define FA_HANDS_HOLDING_CHILD                  0xe4fa
#define FA_HANDS_HOLDING_CIRCLE                 0xe4fb
#define FA_HANDS_PRAYING                        0xf684
#define FA_HANDSHAKE                            0xf2b5
#define FA_HANDSHAKE_ANGLE                      0xf4c4
#define FA_HANDSHAKE_SIMPLE                     0xf4c6
#define FA_HANDSHAKE_SIMPLE_SLASH               0xe05f
#define FA_HANDSHAKE_SLASH                      0xe060
#define FA_HANUKIAH                             0xf6e6
#define FA_HARD_DRIVE                           0xf0a0
#define FA_HASHTAG                              0x23
#define FA_HAT_COWBOY                           0xf8c0
#define FA_HAT_COWBOY_SIDE                      0xf8c1
#define FA_HAT_WIZARD                           0xf6e8
#define FA_HEAD_SIDE_COUGH                      0xe061
#define FA_HEAD_SIDE_COUGH_SLASH                0xe062
#define FA_HEAD_SIDE_MASK                       0xe063
#define FA_HEAD_SIDE_VIRUS                      0xe064
#define FA_HEADING                              0xf1dc
#define FA_HEADPHONES                           0xf025
#define FA_HEADPHONES_SIMPLE                    0xf58f
#define FA_HEADSET                              0xf590
#define FA_HEART                                0xf004
#define FA_HEART_CIRCLE_BOLT                    0xe4fc
#define FA_HEART_CIRCLE_CHECK                   0xe4fd
#define FA_HEART_CIRCLE_EXCLAMATION             0xe4fe
#define FA_HEART_CIRCLE_MINUS                   0xe4ff
#define FA_HEART_CIRCLE_PLUS                    0xe500
#define FA_HEART_CIRCLE_XMARK                   0xe501
#define FA_HEART_CRACK                          0xf7a9
#define FA_HEART_PULSE                          0xf21e
#define FA_HELICOPTER                           0xf533
#define FA_HELICOPTER_SYMBOL                    0xe502
#define FA_HELMET_SAFETY                        0xf807
#define FA_HELMET_UN                            0xe503
#define FA_HIGHLIGHTER                          0xf591
#define FA_HILL_AVALANCHE                       0xe507
#define FA_HILL_ROCKSLIDE                       0xe508
#define FA_HIPPO                                0xf6ed
#define FA_HOCKEY_PUCK                          0xf453
#define FA_HOLLY_BERRY                          0xf7aa
#define FA_HORSE                                0xf6f0
#define FA_HORSE_HEAD                           0xf7ab
#define FA_HOSPITAL                             0xf0f8
#define FA_HOSPITAL_USER                        0xf80d
#define FA_HOT_TUB_PERSON                       0xf593
#define FA_HOTDOG                               0xf80f
#define FA_HOTEL                                0xf594
#define FA_HOURGLASS                            0xf254
#define FA_HOURGLASS_END                        0xf253
#define FA_HOURGLASS_HALF                       0xf252
#define FA_HOURGLASS_START                      0xf251
#define FA_HOUSE                                0xf015
#define FA_HOUSE_CHIMNEY                        0xe3af
#define FA_HOUSE_CHIMNEY_CRACK                  0xf6f1
#define FA_HOUSE_CHIMNEY_MEDICAL                0xf7f2
#define FA_HOUSE_CHIMNEY_USER                   0xe065
#define FA_HOUSE_CHIMNEY_WINDOW                 0xe00d
#define FA_HOUSE_CIRCLE_CHECK                   0xe509
#define FA_HOUSE_CIRCLE_EXCLAMATION             0xe50a
#define FA_HOUSE_CIRCLE_XMARK                   0xe50b
#define FA_HOUSE_CRACK                          0xe3b1
#define FA_HOUSE_FIRE                           0xe50c
#define FA_HOUSE_FLAG                           0xe50d
#define FA_HOUSE_FLOOD_WATER                    0xe50e
#define FA_HOUSE_FLOOD_WATER_CIRCLE_ARROW_RIGHT 0xe50f
#define FA_HOUSE_LAPTOP                         0xe066
#define FA_HOUSE_LOCK                           0xe510
#define FA_HOUSE_MEDICAL                        0xe3b2
#define FA_HOUSE_MEDICAL_CIRCLE_CHECK           0xe511
#define FA_HOUSE_MEDICAL_CIRCLE_EXCLAMATION     0xe512
#define FA_HOUSE_MEDICAL_CIRCLE_XMARK           0xe513
#define FA_HOUSE_MEDICAL_FLAG                   0xe514
#define FA_HOUSE_SIGNAL                         0xe012
#define FA_HOUSE_TSUNAMI                        0xe515
#define FA_HOUSE_USER                           0xe1b0
#define FA_HRYVNIA_SIGN                         0xf6f2
#define FA_HURRICANE                            0xf751
#define FA_I                                    0x49
#define FA_I_CURSOR                             0xf246
#define FA_ICE_CREAM                            0xf810
#define FA_ICICLES                              0xf7ad
#define FA_ICONS                                0xf86d
#define FA_ID_BADGE                             0xf2c1
#define FA_ID_CARD                              0xf2c2
#define FA_ID_CARD_CLIP                         0xf47f
#define FA_IGLOO                                0xf7ae
#define FA_IMAGE                                0xf03e
#define FA_IMAGE_PORTRAIT                       0xf3e0
#define FA_IMAGES                               0xf302
#define FA_INBOX                                0xf01c
#define FA_INDENT                               0xf03c
#define FA_INDIAN_RUPEE_SIGN                    0xe1bc
#define FA_INDUSTRY                             0xf275
#define FA_INFINITY                             0xf534
#define FA_INFO                                 0xf129
#define FA_ITALIC                               0xf033
#define FA_J                                    0x4a
#define FA_JAR                                  0xe516
#define FA_JAR_WHEAT                            0xe517
#define FA_JEDI                                 0xf669
#define FA_JET_FIGHTER                          0xf0fb
#define FA_JET_FIGHTER_UP                       0xe518
#define FA_JOINT                                0xf595
#define FA_JUG_DETERGENT                        0xe519
#define FA_K                                    0x4b
#define FA_KAABA                                0xf66b
#define FA_KEY                                  0xf084
#define FA_KEYBOARD                             0xf11c
#define FA_KHANDA                               0xf66d
#define FA_KIP_SIGN                             0xe1c4
#define FA_KIT_MEDICAL                          0xf479
#define FA_KITCHEN_SET                          0xe51a
#define FA_KIWI_BIRD                            0xf535
#define FA_L                                    0x4c
#define FA_LAND_MINE_ON                         0xe51b
#define FA_LANDMARK                             0xf66f
#define FA_LANDMARK_DOME                        0xf752
#define FA_LANDMARK_FLAG                        0xe51c
#define FA_LANGUAGE                             0xf1ab
#define FA_LAPTOP                               0xf109
#define FA_LAPTOP_CODE                          0xf5fc
#define FA_LAPTOP_FILE                          0xe51d
#define FA_LAPTOP_MEDICAL                       0xf812
#define FA_LARI_SIGN                            0xe1c8
#define FA_LAYER_GROUP                          0xf5fd
#define FA_LEAF                                 0xf06c
#define FA_LEFT_LONG                            0xf30a
#define FA_LEFT_RIGHT                           0xf337
#define FA_LEMON                                0xf094
#define FA_LESS_THAN                            0x3c
#define FA_LESS_THAN_EQUAL                      0xf537
#define FA_LIFE_RING                            0xf1cd
#define FA_LIGHTBULB                            0xf0eb
#define FA_LINES_LEANING                        0xe51e
#define FA_LINK                                 0xf0c1
#define FA_LINK_SLASH                           0xf127
#define FA_LIRA_SIGN                            0xf195
#define FA_LIST                                 0xf03a
#define FA_LIST_CHECK                           0xf0ae
#define FA_LIST_OL                              0xf0cb
#define FA_LIST_UL                              0xf0ca
#define FA_LITECOIN_SIGN                        0xe1d3
#define FA_LOCATION_ARROW                       0xf124
#define FA_LOCATION_CROSSHAIRS                  0xf601
#define FA_LOCATION_DOT                         0xf3c5
#define FA_LOCATION_PIN                         0xf041
#define FA_LOCATION_PIN_LOCK                    0xe51f
#define FA_LOCK                                 0xf023
#define FA_LOCK_OPEN                            0xf3c1
#define FA_LOCUST                               0xe520
#define FA_LUNGS                                0xf604
#define FA_LUNGS_VIRUS                          0xe067
#define FA_M                                    0x4d
#define FA_MAGNET                               0xf076
#define FA_MAGNIFYING_GLASS                     0xf002
#define FA_MAGNIFYING_GLASS_ARROW_RIGHT         0xe521
#define FA_MAGNIFYING_GLASS_CHART               0xe522
#define FA_MAGNIFYING_GLASS_DOLLAR              0xf688
#define FA_MAGNIFYING_GLASS_LOCATION            0xf689
#define FA_MAGNIFYING_GLASS_MINUS               0xf010
#define FA_MAGNIFYING_GLASS_PLUS                0xf00e
#define FA_MANAT_SIGN                           0xe1d5
#define FA_MAP                                  0xf279
#define FA_MAP_LOCATION                         0xf59f
#define FA_MAP_LOCATION_DOT                     0xf5a0
#define FA_MAP_PIN                              0xf276
#define FA_MARKER                               0xf5a1
#define FA_MARS                                 0xf222
#define FA_MARS_AND_VENUS                       0xf224
#define FA_MARS_AND_VENUS_BURST                 0xe523
#define FA_MARS_DOUBLE                          0xf227
#define FA_MARS_STROKE                          0xf229
#define FA_MARS_STROKE_RIGHT                    0xf22b
#define FA_MARS_STROKE_UP                       0xf22a
#define FA_MARTINI_GLASS                        0xf57b
#define FA_MARTINI_GLASS_CITRUS                 0xf561
#define FA_MARTINI_GLASS_EMPTY                  0xf000
#define FA_MASK                                 0xf6fa
#define FA_MASK_FACE                            0xe1d7
#define FA_MASK_VENTILATOR                      0xe524
#define FA_MASKS_THEATER                        0xf630
#define FA_MATTRESS_PILLOW                      0xe525
#define FA_MAXIMIZE                             0xf31e
#define FA_MEDAL                                0xf5a2
#define FA_MEMORY                               0xf538
#define FA_MENORAH                              0xf676
#define FA_MERCURY                              0xf223
#define FA_MESSAGE                              0xf27a
#define FA_METEOR                               0xf753
#define FA_MICROCHIP                            0xf2db
#define FA_MICROPHONE                           0xf130
#define FA_MICROPHONE_LINES                     0xf3c9
#define FA_MICROPHONE_LINES_SLASH               0xf539
#define FA_MICROPHONE_SLASH                     0xf131
#define FA_MICROSCOPE                           0xf610
#define FA_MILL_SIGN                            0xe1ed
#define FA_MINIMIZE                             0xf78c
#define FA_MINUS                                0xf068
#define FA_MITTEN                               0xf7b5
#define FA_MOBILE                               0xf3ce
#define FA_MOBILE_BUTTON                        0xf10b
#define FA_MOBILE_RETRO                         0xe527
#define FA_MOBILE_SCREEN                        0xf3cf
#define FA_MOBILE_SCREEN_BUTTON                 0xf3cd
#define FA_MONEY_BILL                           0xf0d6
#define FA_MONEY_BILL_1                         0xf3d1
#define FA_MONEY_BILL_1_WAVE                    0xf53b
#define FA_MONEY_BILL_TRANSFER                  0xe528
#define FA_MONEY_BILL_TREND_UP                  0xe529
#define FA_MONEY_BILL_WAVE                      0xf53a
#define FA_MONEY_BILL_WHEAT                     0xe52a
#define FA_MONEY_BILLS                          0xe1f3
#define FA_MONEY_CHECK                          0xf53c
#define FA_MONEY_CHECK_DOLLAR                   0xf53d
#define FA_MONUMENT                             0xf5a6
#define FA_MOON                                 0xf186
#define FA_MORTAR_PESTLE                        0xf5a7
#define FA_MOSQUE                               0xf678
#define FA_MOSQUITO                             0xe52b
#define FA_MOSQUITO_NET                         0xe52c
#define FA_MOTORCYCLE                           0xf21c
#define FA_MOUND                                0xe52d
#define FA_MOUNTAIN                             0xf6fc
#define FA_MOUNTAIN_CITY                        0xe52e
#define FA_MOUNTAIN_SUN                         0xe52f
#define FA_MUG_HOT                              0xf7b6
#define FA_MUG_SAUCER                           0xf0f4
#define FA_MUSIC                                0xf001
#define FA_N                                    0x4e
#define FA_NAIRA_SIGN                           0xe1f6
#define FA_NETWORK_WIRED                        0xf6ff
#define FA_NEUTER                               0xf22c
#define FA_NEWSPAPER                            0xf1ea
#define FA_NOT_EQUAL                            0xf53e
#define FA_NOTDEF                               0xe1fe
#define FA_NOTE_STICKY                          0xf249
#define FA_NOTES_MEDICAL                        0xf481
#define FA_O                                    0x4f
#define FA_OBJECT_GROUP                         0xf247
#define FA_OBJECT_UNGROUP                       0xf248
#define FA_OIL_CAN                              0xf613
#define FA_OIL_WELL                             0xe532
#define FA_OM                                   0xf679
#define FA_OTTER                                0xf700
#define FA_OUTDENT                              0xf03b
#define FA_P                                    0x50
#define FA_PAGER                                0xf815
#define FA_PAINT_ROLLER                         0xf5aa
#define FA_PAINTBRUSH                           0xf1fc
#define FA_PALETTE                              0xf53f
#define FA_PALLET                               0xf482
#define FA_PANORAMA                             0xe209
#define FA_PAPER_PLANE                          0xf1d8
#define FA_PAPERCLIP                            0xf0c6
#define FA_PARACHUTE_BOX                        0xf4cd
#define FA_PARAGRAPH                            0xf1dd
#define FA_PASSPORT                             0xf5ab
#define FA_PASTE                                0xf0ea
#define FA_PAUSE                                0xf04c
#define FA_PAW                                  0xf1b0
#define FA_PEACE                                0xf67c
#define FA_PEN                                  0xf304
#define FA_PEN_CLIP                             0xf305
#define FA_PEN_FANCY                            0xf5ac
#define FA_PEN_NIB                              0xf5ad
#define FA_PEN_RULER                            0xf5ae
#define FA_PEN_TO_SQUARE                        0xf044
#define FA_PENCIL                               0xf303
#define FA_PEOPLE_ARROWS                        0xe068
#define FA_PEOPLE_CARRY_BOX                     0xf4ce
#define FA_PEOPLE_GROUP                         0xe533
#define FA_PEOPLE_LINE                          0xe534
#define FA_PEOPLE_PULLING                       0xe535
#define FA_PEOPLE_ROBBERY                       0xe536
#define FA_PEOPLE_ROOF                          0xe537
#define FA_PEPPER_HOT                           0xf816
#define FA_PERCENT                              0x25
#define FA_PERSON                               0xf183
#define FA_PERSON_ARROW_DOWN_TO_LINE            0xe538
#define FA_PERSON_ARROW_UP_FROM_LINE            0xe539
#define FA_PERSON_BIKING                        0xf84a
#define FA_PERSON_BOOTH                         0xf756
#define FA_PERSON_BREASTFEEDING                 0xe53a
#define FA_PERSON_BURST                         0xe53b
#define FA_PERSON_CANE                          0xe53c
#define FA_PERSON_CHALKBOARD                    0xe53d
#define FA_PERSON_CIRCLE_CHECK                  0xe53e
#define FA_PERSON_CIRCLE_EXCLAMATION            0xe53f
#define FA_PERSON_CIRCLE_MINUS                  0xe540
#define FA_PERSON_CIRCLE_PLUS                   0xe541
#define FA_PERSON_CIRCLE_QUESTION               0xe542
#define FA_PERSON_CIRCLE_XMARK                  0xe543
#define FA_PERSON_DIGGING                       0xf85e
#define FA_PERSON_DOTS_FROM_LINE                0xf470
#define FA_PERSON_DRESS                         0xf182
#define FA_PERSON_DRESS_BURST                   0xe544
#define FA_PERSON_DROWNING                      0xe545
#define FA_PERSON_FALLING                       0xe546
#define FA_PERSON_FALLING_BURST                 0xe547
#define FA_PERSON_HALF_DRESS                    0xe548
#define FA_PERSON_HARASSING                     0xe549
#define FA_PERSON_HIKING                        0xf6ec
#define FA_PERSON_MILITARY_POINTING             0xe54a
#define FA_PERSON_MILITARY_RIFLE                0xe54b
#define FA_PERSON_MILITARY_TO_PERSON            0xe54c
#define FA_PERSON_PRAYING                       0xf683
#define FA_PERSON_PREGNANT                      0xe31e
#define FA_PERSON_RAYS                          0xe54d
#define FA_PERSON_RIFLE                         0xe54e
#define FA_PERSON_RUNNING                       0xf70c
#define FA_PERSON_SHELTER                       0xe54f
#define FA_PERSON_SKATING                       0xf7c5
#define FA_PERSON_SKIING                        0xf7c9
#define FA_PERSON_SKIING_NORDIC                 0xf7ca
#define FA_PERSON_SNOWBOARDING                  0xf7ce
#define FA_PERSON_SWIMMING                      0xf5c4
#define FA_PERSON_THROUGH_WINDOW                0xe5a9
#define FA_PERSON_WALKING                       0xf554
#define FA_PERSON_WALKING_ARROW_LOOP_LEFT       0xe551
#define FA_PERSON_WALKING_ARROW_RIGHT           0xe552
#define FA_PERSON_WALKING_DASHED_LINE_ARROW_RIGHT0xe553
#define FA_PERSON_WALKING_LUGGAGE               0xe554
#define FA_PERSON_WALKING_WITH_CANE             0xf29d
#define FA_PESETA_SIGN                          0xe221
#define FA_PESO_SIGN                            0xe222
#define FA_PHONE                                0xf095
#define FA_PHONE_FLIP                           0xf879
#define FA_PHONE_SLASH                          0xf3dd
#define FA_PHONE_VOLUME                         0xf2a0
#define FA_PHOTO_FILM                           0xf87c
#define FA_PIGGY_BANK                           0xf4d3
#define FA_PILLS                                0xf484
#define FA_PIZZA_SLICE                          0xf818
#define FA_PLACE_OF_WORSHIP                     0xf67f
#define FA_PLANE                                0xf072
#define FA_PLANE_ARRIVAL                        0xf5af
#define FA_PLANE_CIRCLE_CHECK                   0xe555
#define FA_PLANE_CIRCLE_EXCLAMATION             0xe556
#define FA_PLANE_CIRCLE_XMARK                   0xe557
#define FA_PLANE_DEPARTURE                      0xf5b0
#define FA_PLANE_LOCK                           0xe558
#define FA_PLANE_SLASH                          0xe069
#define FA_PLANE_UP                             0xe22d
#define FA_PLANT_WILT                           0xe5aa
#define FA_PLATE_WHEAT                          0xe55a
#define FA_PLAY                                 0xf04b
#define FA_PLUG                                 0xf1e6
#define FA_PLUG_CIRCLE_BOLT                     0xe55b
#define FA_PLUG_CIRCLE_CHECK                    0xe55c
#define FA_PLUG_CIRCLE_EXCLAMATION              0xe55d
#define FA_PLUG_CIRCLE_MINUS                    0xe55e
#define FA_PLUG_CIRCLE_PLUS                     0xe55f
#define FA_PLUG_CIRCLE_XMARK                    0xe560
#define FA_PLUS                                 0x2b
#define FA_PLUS_MINUS                           0xe43c
#define FA_PODCAST                              0xf2ce
#define FA_POO                                  0xf2fe
#define FA_POO_STORM                            0xf75a
#define FA_POOP                                 0xf619
#define FA_POWER_OFF                            0xf011
#define FA_PRESCRIPTION                         0xf5b1
#define FA_PRESCRIPTION_BOTTLE                  0xf485
#define FA_PRESCRIPTION_BOTTLE_MEDICAL          0xf486
#define FA_PRINT                                0xf02f
#define FA_PUMP_MEDICAL                         0xe06a
#define FA_PUMP_SOAP                            0xe06b
#define FA_PUZZLE_PIECE                         0xf12e
#define FA_Q                                    0x51
#define FA_QRCODE                               0xf029
#define FA_QUESTION                             0x3f
#define FA_QUOTE_LEFT                           0xf10d
#define FA_QUOTE_RIGHT                          0xf10e
#define FA_R                                    0x52
#define FA_RADIATION                            0xf7b9
#define FA_RADIO                                0xf8d7
#define FA_RAINBOW                              0xf75b
#define FA_RANKING_STAR                         0xe561
#define FA_RECEIPT                              0xf543
#define FA_RECORD_VINYL                         0xf8d9
#define FA_RECTANGLE_AD                         0xf641
#define FA_RECTANGLE_LIST                       0xf022
#define FA_RECTANGLE_XMARK                      0xf410
#define FA_RECYCLE                              0xf1b8
#define FA_REGISTERED                           0xf25d
#define FA_REPEAT                               0xf363
#define FA_REPLY                                0xf3e5
#define FA_REPLY_ALL                            0xf122
#define FA_REPUBLICAN                           0xf75e
#define FA_RESTROOM                             0xf7bd
#define FA_RETWEET                              0xf079
#define FA_RIBBON                               0xf4d6
#define FA_RIGHT_FROM_BRACKET                   0xf2f5
#define FA_RIGHT_LEFT                           0xf362
#define FA_RIGHT_LONG                           0xf30b
#define FA_RIGHT_TO_BRACKET                     0xf2f6
#define FA_RING                                 0xf70b
#define FA_ROAD                                 0xf018
#define FA_ROAD_BARRIER                         0xe562
#define FA_ROAD_BRIDGE                          0xe563
#define FA_ROAD_CIRCLE_CHECK                    0xe564
#define FA_ROAD_CIRCLE_EXCLAMATION              0xe565
#define FA_ROAD_CIRCLE_XMARK                    0xe566
#define FA_ROAD_LOCK                            0xe567
#define FA_ROAD_SPIKES                          0xe568
#define FA_ROBOT                                0xf544
#define FA_ROCKET                               0xf135
#define FA_ROTATE                               0xf2f1
#define FA_ROTATE_LEFT                          0xf2ea
#define FA_ROTATE_RIGHT                         0xf2f9
#define FA_ROUTE                                0xf4d7
#define FA_RSS                                  0xf09e
#define FA_RUBLE_SIGN                           0xf158
#define FA_RUG                                  0xe569
#define FA_RULER                                0xf545
#define FA_RULER_COMBINED                       0xf546
#define FA_RULER_HORIZONTAL                     0xf547
#define FA_RULER_VERTICAL                       0xf548
#define FA_RUPEE_SIGN                           0xf156
#define FA_RUPIAH_SIGN                          0xe23d
#define FA_S                                    0x53
#define FA_SACK_DOLLAR                          0xf81d
#define FA_SACK_XMARK                           0xe56a
#define FA_SAILBOAT                             0xe445
#define FA_SATELLITE                            0xf7bf
#define FA_SATELLITE_DISH                       0xf7c0
#define FA_SCALE_BALANCED                       0xf24e
#define FA_SCALE_UNBALANCED                     0xf515
#define FA_SCALE_UNBALANCED_FLIP                0xf516
#define FA_SCHOOL                               0xf549
#define FA_SCHOOL_CIRCLE_CHECK                  0xe56b
#define FA_SCHOOL_CIRCLE_EXCLAMATION            0xe56c
#define FA_SCHOOL_CIRCLE_XMARK                  0xe56d
#define FA_SCHOOL_FLAG                          0xe56e
#define FA_SCHOOL_LOCK                          0xe56f
#define FA_SCISSORS                             0xf0c4
#define FA_SCREWDRIVER                          0xf54a
#define FA_SCREWDRIVER_WRENCH                   0xf7d9
#define FA_SCROLL                               0xf70e
#define FA_SCROLL_TORAH                         0xf6a0
#define FA_SD_CARD                              0xf7c2
#define FA_SECTION                              0xe447
#define FA_SEEDLING                             0xf4d8
#define FA_SERVER                               0xf233
#define FA_SHAPES                               0xf61f
#define FA_SHARE                                0xf064
#define FA_SHARE_FROM_SQUARE                    0xf14d
#define FA_SHARE_NODES                          0xf1e0
#define FA_SHEET_PLASTIC                        0xe571
#define FA_SHEKEL_SIGN                          0xf20b
#define FA_SHIELD                               0xf132
#define FA_SHIELD_CAT                           0xe572
#define FA_SHIELD_DOG                           0xe573
#define FA_SHIELD_HALVED                        0xf3ed
#define FA_SHIELD_HEART                         0xe574
#define FA_SHIELD_VIRUS                         0xe06c
#define FA_SHIP                                 0xf21a
#define FA_SHIRT                                0xf553
#define FA_SHOE_PRINTS                          0xf54b
#define FA_SHOP                                 0xf54f
#define FA_SHOP_LOCK                            0xe4a5
#define FA_SHOP_SLASH                           0xe070
#define FA_SHOWER                               0xf2cc
#define FA_SHRIMP                               0xe448
#define FA_SHUFFLE                              0xf074
#define FA_SHUTTLE_SPACE                        0xf197
#define FA_SIGN_HANGING                         0xf4d9
#define FA_SIGNAL                               0xf012
#define FA_SIGNATURE                            0xf5b7
#define FA_SIGNS_POST                           0xf277
#define FA_SIM_CARD                             0xf7c4
#define FA_SINK                                 0xe06d
#define FA_SITEMAP                              0xf0e8
#define FA_SKULL                                0xf54c
#define FA_SKULL_CROSSBONES                     0xf714
#define FA_SLASH                                0xf715
#define FA_SLEIGH                               0xf7cc
#define FA_SLIDERS                              0xf1de
#define FA_SMOG                                 0xf75f
#define FA_SMOKING                              0xf48d
#define FA_SNOWFLAKE                            0xf2dc
#define FA_SNOWMAN                              0xf7d0
#define FA_SNOWPLOW                             0xf7d2
#define FA_SOAP                                 0xe06e
#define FA_SOCKS                                0xf696
#define FA_SOLAR_PANEL                          0xf5ba
#define FA_SORT                                 0xf0dc
#define FA_SORT_DOWN                            0xf0dd
#define FA_SORT_UP                              0xf0de
#define FA_SPA                                  0xf5bb
#define FA_SPAGHETTI_MONSTER_FLYING             0xf67b
#define FA_SPELL_CHECK                          0xf891
#define FA_SPIDER                               0xf717
#define FA_SPINNER                              0xf110
#define FA_SPLOTCH                              0xf5bc
#define FA_SPOON                                0xf2e5
#define FA_SPRAY_CAN                            0xf5bd
#define FA_SPRAY_CAN_SPARKLES                   0xf5d0
#define FA_SQUARE                               0xf0c8
#define FA_SQUARE_ARROW_UP_RIGHT                0xf14c
#define FA_SQUARE_CARET_DOWN                    0xf150
#define FA_SQUARE_CARET_LEFT                    0xf191
#define FA_SQUARE_CARET_RIGHT                   0xf152
#define FA_SQUARE_CARET_UP                      0xf151
#define FA_SQUARE_CHECK                         0xf14a
#define FA_SQUARE_ENVELOPE                      0xf199
#define FA_SQUARE_FULL                          0xf45c
#define FA_SQUARE_H                             0xf0fd
#define FA_SQUARE_MINUS                         0xf146
#define FA_SQUARE_NFI                           0xe576
#define FA_SQUARE_PARKING                       0xf540
#define FA_SQUARE_PEN                           0xf14b
#define FA_SQUARE_PERSON_CONFINED               0xe577
#define FA_SQUARE_PHONE                         0xf098
#define FA_SQUARE_PHONE_FLIP                    0xf87b
#define FA_SQUARE_PLUS                          0xf0fe
#define FA_SQUARE_POLL_HORIZONTAL               0xf682
#define FA_SQUARE_POLL_VERTICAL                 0xf681
#define FA_SQUARE_ROOT_VARIABLE                 0xf698
#define FA_SQUARE_RSS                           0xf143
#define FA_SQUARE_SHARE_NODES                   0xf1e1
#define FA_SQUARE_UP_RIGHT                      0xf360
#define FA_SQUARE_VIRUS                         0xe578
#define FA_SQUARE_XMARK                         0xf2d3
#define FA_STAFF_SNAKE                          0xe579
#define FA_STAIRS                               0xe289
#define FA_STAMP                                0xf5bf
#define FA_STAPLER                              0xe5af
#define FA_STAR                                 0xf005
#define FA_STAR_AND_CRESCENT                    0xf699
#define FA_STAR_HALF                            0xf089
#define FA_STAR_HALF_STROKE                     0xf5c0
#define FA_STAR_OF_DAVID                        0xf69a
#define FA_STAR_OF_LIFE                         0xf621
#define FA_STERLING_SIGN                        0xf154
#define FA_STETHOSCOPE                          0xf0f1
#define FA_STOP                                 0xf04d
#define FA_STOPWATCH                            0xf2f2
#define FA_STOPWATCH_20                         0xe06f
#define FA_STORE                                0xf54e
#define FA_STORE_SLASH                          0xe071
#define FA_STREET_VIEW                          0xf21d
#define FA_STRIKETHROUGH                        0xf0cc
#define FA_STROOPWAFEL                          0xf551
#define FA_SUBSCRIPT                            0xf12c
#define FA_SUITCASE                             0xf0f2
#define FA_SUITCASE_MEDICAL                     0xf0fa
#define FA_SUITCASE_ROLLING                     0xf5c1
#define FA_SUN                                  0xf185
#define FA_SUN_PLANT_WILT                       0xe57a
#define FA_SUPERSCRIPT                          0xf12b
#define FA_SWATCHBOOK                           0xf5c3
#define FA_SYNAGOGUE                            0xf69b
#define FA_SYRINGE                              0xf48e
#define FA_T                                    0x54
#define FA_TABLE                                0xf0ce
#define FA_TABLE_CELLS                          0xf00a
#define FA_TABLE_CELLS_LARGE                    0xf009
#define FA_TABLE_COLUMNS                        0xf0db
#define FA_TABLE_LIST                           0xf00b
#define FA_TABLE_TENNIS_PADDLE_BALL             0xf45d
#define FA_TABLET                               0xf3fb
#define FA_TABLET_BUTTON                        0xf10a
#define FA_TABLET_SCREEN_BUTTON                 0xf3fa
#define FA_TABLETS                              0xf490
#define FA_TACHOGRAPH_DIGITAL                   0xf566
#define FA_TAG                                  0xf02b
#define FA_TAGS                                 0xf02c
#define FA_TAPE                                 0xf4db
#define FA_TARP                                 0xe57b
#define FA_TARP_DROPLET                         0xe57c
#define FA_TAXI                                 0xf1ba
#define FA_TEETH                                0xf62e
#define FA_TEETH_OPEN                           0xf62f
#define FA_TEMPERATURE_ARROW_DOWN               0xe03f
#define FA_TEMPERATURE_ARROW_UP                 0xe040
#define FA_TEMPERATURE_EMPTY                    0xf2cb
#define FA_TEMPERATURE_FULL                     0xf2c7
#define FA_TEMPERATURE_HALF                     0xf2c9
#define FA_TEMPERATURE_HIGH                     0xf769
#define FA_TEMPERATURE_LOW                      0xf76b
#define FA_TEMPERATURE_QUARTER                  0xf2ca
#define FA_TEMPERATURE_THREE_QUARTERS           0xf2c8
#define FA_TENGE_SIGN                           0xf7d7
#define FA_TENT                                 0xe57d
#define FA_TENT_ARROW_DOWN_TO_LINE              0xe57e
#define FA_TENT_ARROW_LEFT_RIGHT                0xe57f
#define FA_TENT_ARROW_TURN_LEFT                 0xe580
#define FA_TENT_ARROWS_DOWN                     0xe581
#define FA_TENTS                                0xe582
#define FA_TERMINAL                             0xf120
#define FA_TEXT_HEIGHT                          0xf034
#define FA_TEXT_SLASH                           0xf87d
#define FA_TEXT_WIDTH                           0xf035
#define FA_THERMOMETER                          0xf491
#define FA_THUMBS_DOWN                          0xf165
#define FA_THUMBS_UP                            0xf164
#define FA_THUMBTACK                            0xf08d
#define FA_TICKET                               0xf145
#define FA_TICKET_SIMPLE                        0xf3ff
#define FA_TIMELINE                             0xe29c
#define FA_TOGGLE_OFF                           0xf204
#define FA_TOGGLE_ON                            0xf205
#define FA_TOILET                               0xf7d8
#define FA_TOILET_PAPER                         0xf71e
#define FA_TOILET_PAPER_SLASH                   0xe072
#define FA_TOILET_PORTABLE                      0xe583
#define FA_TOILETS_PORTABLE                     0xe584
#define FA_TOOLBOX                              0xf552
#define FA_TOOTH                                0xf5c9
#define FA_TORII_GATE                           0xf6a1
#define FA_TORNADO                              0xf76f
#define FA_TOWER_BROADCAST                      0xf519
#define FA_TOWER_CELL                           0xe585
#define FA_TOWER_OBSERVATION                    0xe586
#define FA_TRACTOR                              0xf722
#define FA_TRADEMARK                            0xf25c
#define FA_TRAFFIC_LIGHT                        0xf637
#define FA_TRAILER                              0xe041
#define FA_TRAIN                                0xf238
#define FA_TRAIN_SUBWAY                         0xf239
#define FA_TRAIN_TRAM                           0xe5b4
#define FA_TRANSGENDER                          0xf225
#define FA_TRASH                                0xf1f8
#define FA_TRASH_ARROW_UP                       0xf829
#define FA_TRASH_CAN                            0xf2ed
#define FA_TRASH_CAN_ARROW_UP                   0xf82a
#define FA_TREE                                 0xf1bb
#define FA_TREE_CITY                            0xe587
#define FA_TRIANGLE_EXCLAMATION                 0xf071
#define FA_TROPHY                               0xf091
#define FA_TROWEL                               0xe589
#define FA_TROWEL_BRICKS                        0xe58a
#define FA_TRUCK                                0xf0d1
#define FA_TRUCK_ARROW_RIGHT                    0xe58b
#define FA_TRUCK_DROPLET                        0xe58c
#define FA_TRUCK_FAST                           0xf48b
#define FA_TRUCK_FIELD                          0xe58d
#define FA_TRUCK_FIELD_UN                       0xe58e
#define FA_TRUCK_FRONT                          0xe2b7
#define FA_TRUCK_MEDICAL                        0xf0f9
#define FA_TRUCK_MONSTER                        0xf63b
#define FA_TRUCK_MOVING                         0xf4df
#define FA_TRUCK_PICKUP                         0xf63c
#define FA_TRUCK_PLANE                          0xe58f
#define FA_TRUCK_RAMP_BOX                       0xf4de
#define FA_TTY                                  0xf1e4
#define FA_TURKISH_LIRA_SIGN                    0xe2bb
#define FA_TURN_DOWN                            0xf3be
#define FA_TURN_UP                              0xf3bf
#define FA_TV                                   0xf26c
#define FA_U                                    0x55
#define FA_UMBRELLA                             0xf0e9
#define FA_UMBRELLA_BEACH                       0xf5ca
#define FA_UNDERLINE                            0xf0cd
#define FA_UNIVERSAL_ACCESS                     0xf29a
#define FA_UNLOCK                               0xf09c
#define FA_UNLOCK_KEYHOLE                       0xf13e
#define FA_UP_DOWN                              0xf338
#define FA_UP_DOWN_LEFT_RIGHT                   0xf0b2
#define FA_UP_LONG                              0xf30c
#define FA_UP_RIGHT_AND_DOWN_LEFT_FROM_CENTER   0xf424
#define FA_UP_RIGHT_FROM_SQUARE                 0xf35d
#define FA_UPLOAD                               0xf093
#define FA_USER                                 0xf007
#define FA_USER_ASTRONAUT                       0xf4fb
#define FA_USER_CHECK                           0xf4fc
#define FA_USER_CLOCK                           0xf4fd
#define FA_USER_DOCTOR                          0xf0f0
#define FA_USER_GEAR                            0xf4fe
#define FA_USER_GRADUATE                        0xf501
#define FA_USER_GROUP                           0xf500
#define FA_USER_INJURED                         0xf728
#define FA_USER_LARGE                           0xf406
#define FA_USER_LARGE_SLASH                     0xf4fa
#define FA_USER_LOCK                            0xf502
#define FA_USER_MINUS                           0xf503
#define FA_USER_NINJA                           0xf504
#define FA_USER_NURSE                           0xf82f
#define FA_USER_PEN                             0xf4ff
#define FA_USER_PLUS                            0xf234
#define FA_USER_SECRET                          0xf21b
#define FA_USER_SHIELD                          0xf505
#define FA_USER_SLASH                           0xf506
#define FA_USER_TAG                             0xf507
#define FA_USER_TIE                             0xf508
#define FA_USER_XMARK                           0xf235
#define FA_USERS                                0xf0c0
#define FA_USERS_BETWEEN_LINES                  0xe591
#define FA_USERS_GEAR                           0xf509
#define FA_USERS_LINE                           0xe592
#define FA_USERS_RAYS                           0xe593
#define FA_USERS_RECTANGLE                      0xe594
#define FA_USERS_SLASH                          0xe073
#define FA_USERS_VIEWFINDER                     0xe595
#define FA_UTENSILS                             0xf2e7
#define FA_V                                    0x56
#define FA_VAN_SHUTTLE                          0xf5b6
#define FA_VAULT                                0xe2c5
#define FA_VECTOR_SQUARE                        0xf5cb
#define FA_VENUS                                0xf221
#define FA_VENUS_DOUBLE                         0xf226
#define FA_VENUS_MARS                           0xf228
#define FA_VEST                                 0xe085
#define FA_VEST_PATCHES                         0xe086
#define FA_VIAL                                 0xf492
#define FA_VIAL_CIRCLE_CHECK                    0xe596
#define FA_VIAL_VIRUS                           0xe597
#define FA_VIALS                                0xf493
#define FA_VIDEO                                0xf03d
#define FA_VIDEO_SLASH                          0xf4e2
#define FA_VIHARA                               0xf6a7
#define FA_VIRUS                                0xe074
#define FA_VIRUS_COVID                          0xe4a8
#define FA_VIRUS_COVID_SLASH                    0xe4a9
#define FA_VIRUS_SLASH                          0xe075
#define FA_VIRUSES                              0xe076
#define FA_VOICEMAIL                            0xf897
#define FA_VOLCANO                              0xf770
#define FA_VOLLEYBALL                           0xf45f
#define FA_VOLUME_HIGH                          0xf028
#define FA_VOLUME_LOW                           0xf027
#define FA_VOLUME_OFF                           0xf026
#define FA_VOLUME_XMARK                         0xf6a9
#define FA_VR_CARDBOARD                         0xf729
#define FA_W                                    0x57
#define FA_WALKIE_TALKIE                        0xf8ef
#define FA_WALLET                               0xf555
#define FA_WAND_MAGIC                           0xf0d0
#define FA_WAND_MAGIC_SPARKLES                  0xe2ca
#define FA_WAND_SPARKLES                        0xf72b
#define FA_WAREHOUSE                            0xf494
#define FA_WATER                                0xf773
#define FA_WATER_LADDER                         0xf5c5
#define FA_WAVE_SQUARE                          0xf83e
#define FA_WEIGHT_HANGING                       0xf5cd
#define FA_WEIGHT_SCALE                         0xf496
#define FA_WHEAT_AWN                            0xe2cd
#define FA_WHEAT_AWN_CIRCLE_EXCLAMATION         0xe598
#define FA_WHEELCHAIR                           0xf193
#define FA_WHEELCHAIR_MOVE                      0xe2ce
#define FA_WHISKEY_GLASS                        0xf7a0
#define FA_WIFI                                 0xf1eb
#define FA_WIND                                 0xf72e
#define FA_WINDOW_MAXIMIZE                      0xf2d0
#define FA_WINDOW_MINIMIZE                      0xf2d1
#define FA_WINDOW_RESTORE                       0xf2d2
#define FA_WINE_BOTTLE                          0xf72f
#define FA_WINE_GLASS                           0xf4e3
#define FA_WINE_GLASS_EMPTY                     0xf5ce
#define FA_WON_SIGN                             0xf159
#define FA_WORM                                 0xe599
#define FA_WRENCH                               0xf0ad
#define FA_X                                    0x58
#define FA_X_RAY                                0xf497
#define FA_XMARK                                0xf00d
#define FA_XMARKS_LINES                         0xe59a
#define FA_Y                                    0x59
#define FA_YEN_SIGN                             0xf157
#define FA_YIN_YANG                             0xf6ad
#define FA_Z                                    0x5a

#endif // DOXYGEN_SHOULD_SKIP_THIS
