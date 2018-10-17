#ifndef _PATTERN_H
#define _PATTERN_H
#ifdef NO_CTYPES
typedef unsigned char       uint8_t;
typedef unsigned short      uint16_t;
typedef unsigned int        uint32_t;
typedef signed int          int32_t;
// typedef unsigned long long  uint64_t;
#endif

enum patterns{
    PTRN_CONST=0,
    PTRN_DEFAULT=254,
    PTRN_NONE=255 ///< Constant color
}; ///< Special patterns for connected LEDs

uint64_t HSVtoHEX( float hue, float sat, float value );

uint32_t hex_pattern( uint8_t pattern, uint16_t light, uint16_t lights, uint32_t frame, uint8_t clr[3] );

#endif
