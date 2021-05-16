
#pragma once

#include "quantum.h"

/*
 * +-----+---+---+---+---+---+---+  +---+---+---+---+---+---+----+  +---+---+---+  +---+---+---+---+
 * |01   |02 |03 |04 |05 |06 |07 |  |08 |09 |0A |0B |0C |0D |0E  |  |0F |10 |11 |  |12 |13 |14 |15 |
 * +-----+---+---+---+---+---+---+  +---+---+---+---+---+---+----+  +---+---+---+  +---+---+---+---+
 * +---+---+---+---+---+---+---+---+---+---+---+---+---+---+-----+  +---+---+---+  +---+---+---+---+
 * |16 |17 |18 |19 |1A |1B |1C |1D |1E |1F |20 |21 |22 |23 |24   |  |25 |26 |27 |  |28 |29 |2A |2B |
 * +-------------------------------------------------------------+  +-----------+  +---------------+
 * |2C   |2D |2E |2F |30 |31 |32 |33 |34 |35 |36 |37 |38 |39 |3A |  |3B |3C |3D |  |3E |3F |40 |41 |
 * +-------------------------------------------------------------|  +---+---+---+  +---------------+
 * |42    |43 |44 |45 |46 |47 |48 |49 |4A |4B |4C |4D |4E |4F    |      |51 |      |53 |54 |55 |56 |
 * +-------------------------------------------------------------+  +---+---+---+  +---------------+
 * |58      |59 |5A |5B |5C |5D |5E |5F |60 |61 |62 |63      |65 |  |66 |67 |68 |  |69 |6A |6B |6C |
 * +--------+---------------------------------------+-----------++  +---+---+---+  +---------------|
 *          |6E   |6F                         |70   |     |72   |       |74 |      |76 |77 |78 |79 |
 *          +-----+---------------------------+-----+     +-----+       +---+      +-------+---+---+
 */

#define LAYOUT( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K10, K11, K12, K13, K14, K15, \
    K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
    K2C, K2D, K2E, K2F, K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K40, K41, \
    K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F, K51, K53, K54, K55, K56, \
    K58, K59, K5A, K5B, K5C, K5D, K5E, K5F, K60, K61, K62, K63, K65, K66, K67, K68, K69, K6A, K6B, K6C, \
    K6E, K6F, K70, K72, K74, K76, K77, K78, K79) { \
    { KC_NO, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
    { KC_NO, K51, KC_NO, K53, K54, K55, K56, KC_NO, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
    { K60, K61, K62, K63, KC_NO, K65, K66, K67, K68, K69, K6A, K6B, K6C, KC_NO, K6E, K6F }, \
    { K70, KC_NO, K72, KC_NO, K74, KC_NO, K76, K77, K78, K79, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO } \
}
