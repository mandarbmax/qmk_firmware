
#pragma once

#include "quantum.h"

/*
 *               +---+---+---+---+     +---+---+---+---+     +---+---+---+---+    +---+---+
 *               |RST|050|070|100|     |110|120|130|140|     |157|147|137|127|    |117|107|
 *               +---+---+---+---+     +---+---+---+---+     +---+---+---+---+    +---+---+
 *               +---+---+---+---+     +---+       +---+     +---+---+---+---+    +---+---+
 *               |010|020|030|040|     |111|       |150|     |027|037|047|057|    |067|077|
 *               +---+---+---+---+     +---+       +---+     +---+---+---+---+    +---+---+
 * +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+ +---+---+---+ +---+---+---+
 * |001|011|021|031|041|051|061|071|101|121|131|141|151|017|007| |136|126|116| |106|076|066|
 * +-----------------------------------------------------------+ +-----------+ +-----------+
 *   |002|012|022|032|042|052|062|072|102|112|122|132|142|152|   |006|016|026| |036|046|056|
 *   +-------------------------------------------------------+   +-----------+ +-----------+
 *    |000|154|144|134|124|114|104|074|064|054|044|034|024|014|  |005|015|025| |035|045|055|
 *    +---------------------------------------------------|   |  +-----------+ +-----------+
 *    | 003 |013|023|033|043|053|073|103|113|123|133| 004 +---+  |  125  |115| |105|075|065|
 *    +---------------------------------------------------+      +-----------+ +-----------+
 *              |            063                |
 *              +-------------------------------+
 */
#define LAYOUT( \
    K050, K070, K100, K110, K120, K130, K140, K157, K147, K137, K127, K117, K107, \
    K010, K020, K030, K040, K111, K150, K027, K037, K047, K057, K067, K077, \
    K001, K011, K021, K031, K041, K051, K061, K071, K101, K121, K131, K141, K151, K017, K007, K136, K126, K116, K106, K076, K066, \
    K002, K012, K022, K032, K042, K052, K062, K072, K102, K112, K122, K132, K142, K152, K006, K016, K026, K036, K046, K056, \
    K000, K154, K144, K134, K124, K114, K104, K074, K064, K054, K044, K034, K024, K014, K005, K015, K025, K035, K045, K055, \
    K003, K013, K023, K033, K043, K053, K073, K103, K113, K123, K133, K004, K125, K115, K105, K075, K065, \
    K063) { \
    { K000, K001, K002, K003, K004, K005, K006, K007 }, \
    { K010, K011, K012, K013, K014, K015, K016, K017 }, \
    { K020, K021, K022, K023, K024, K025, K026, K027 }, \
    { K030, K031, K032, K033, K034, K035, K036, K037 }, \
    { K040, K041, K042, K043, K044, K045, K046, K047 }, \
    { K050, K051, K052, K053, K054, K055, K056, K057 }, \
    { KC_NO, K061, K062, K063, K064, K065, K066, K067 }, \
    { K070, K071, K072, K073, K074, K075, K076, K077 }, \
    { K100, K101, K102, K103, K104, K105, K106, K107 }, \
    { K110, K111, K112, K113, K114, K115, K116, K117 }, \
    { K120, K121, K122, K123, K124, K125, K126, K127 }, \
    { K130, K131, K132, K133, K134, KC_NO, K136, K137 }, \
    { K140, K141, K142, KC_NO, K144, KC_NO, KC_NO, K147 }, \
    { K150, K151, K152, KC_NO, K154, KC_NO, KC_NO, K157 } \
}
