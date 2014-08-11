#pragma once

#include <stdint.h>

int kprintf(const char *format, ...);

int utf8_to_utf16(const char *data, int srclen, uint16_t *outdata, int dstlen);
int utf16_to_utf8(const uint16_t *data, int srclen, char *outdata, int dstlen);
