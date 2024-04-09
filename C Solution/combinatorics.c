#include "combinatorics.h"

char charvalues[16] = {
  48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 45, 42, 47, 63, 33
};

int swap[7] = {
  0x0123, 0x1023, 0x2103, 0x3210, 0x0213, 0x0321, 0x0132
};

int constcombs[24] = {
  0x0123, 0x0132, 0x0213, 0x0231, 0x0312, 0x0321, 
  0x1023, 0x1032, 0x1203, 0x1230, 0x1302, 0x1320, 
  0x2013, 0x2031, 0x2103, 0x2130, 0x2301, 0x2310,
  0x3012, 0x3021, 0x3102, 0x3120, 0x3201, 0x3210
};

unsigned int opcombs[64] = {
  0xa0a0a00, 0xa0a0b00, 0xa0a0c00, 0xa0a0d00,
  0xa0b0a00, 0xa0b0b00, 0xa0b0c00, 0xa0b0d00,
  0xa0c0a00, 0xa0c0b00, 0xa0c0c00, 0xa0c0d00,
  0xa0d0a00, 0xa0d0b00, 0xa0d0c00, 0xa0d0d00,
  0xb0a0a00, 0xb0a0b00, 0xb0a0c00, 0xb0a0d00,
  0xb0b0a00, 0xb0b0b00, 0xb0b0c00, 0xb0b0d00,
  0xb0c0a00, 0xb0c0b00, 0xb0c0c00, 0xb0c0d00,
  0xb0d0a00, 0xb0d0b00, 0xb0d0c00, 0xb0d0d00,
  0xc0a0a00, 0xc0a0b00, 0xc0a0c00, 0xc0a0d00,
  0xc0b0a00, 0xc0b0b00, 0xc0b0c00, 0xc0b0d00,
  0xc0c0a00, 0xc0c0b00, 0xc0c0c00, 0xc0c0d00,
  0xc0d0a00, 0xc0d0b00, 0xc0d0c00, 0xc0d0d00,
  0xd0a0a00, 0xd0a0b00, 0xd0a0c00, 0xd0a0d00,
  0xd0b0a00, 0xd0b0b00, 0xd0b0c00, 0xd0b0d00,
  0xd0c0a00, 0xd0c0b00, 0xd0c0c00, 0xd0c0d00,
  0xd0d0a00, 0xd0d0b00, 0xd0d0c00, 0xd0d0d00,
};
