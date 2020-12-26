
#pragma once

// TODO: some problem with GPIO macros
//#include "config_common.h"

#define VENDOR_ID         0xFEED
#define PRODUCT_ID        0x004D
#define DEVICE_VER        1
#define MANUFACTURER      QMK
#define PRODUCT           SGI IRIS4D keyboard converter
#define DESCRIPTION       SGI IRIS4D keyboard converter

#define MATRIX_ROWS       16
#define MATRIX_COLS       8

#define CUSTOM_MATRIX 2
#define DIODE_DIRECTION CUSTOM_MATRIX
#define init_pins() NULL
