
#pragma once

#include "config_common.h"

#define PRODUCT           Tektronix 4120 keyboard converter
#define DESCRIPTION       Tektronix 4120 keyboard converter

#define MATRIX_ROWS       8
#define MATRIX_COLS       16

#define SERIAL_UART_BAUD 1200
#define SERIAL_UART_INIT_CUSTOM \
    /* open collector */ \
    PORTD |= (1 << 2); \
    /* enable TX and RX with interrupt */ \
    UCSR1B = _BV(TXEN1) | _BV(RXEN1) | _BV(RXCIE1); \
    /* 8-bit data */ \
    UCSR1C = _BV(UCSZ11) | _BV(UCSZ10);
