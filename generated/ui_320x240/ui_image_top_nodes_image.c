
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DUST
#define LV_ATTRIBUTE_IMG_DUST
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DUST
uint8_t img_top_nodes_image_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xc0,0xc0,0x00,0xde,0xde,0xde,0x00,0xdd,0xdd,0xdd,0x00,0xde,0xde,0xde,0x00,0xdc,0xdc,0xdc,0x00,0xdc,0xdc,0xdc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdc,0xdc,0xdc,0x00,0xdc,0xdc,0xdc,0x00,0xde,0xde,0xde,0x00,0xdd,0xdd,0xdd,0x00,0xde,0xde,0xde,0x00,0xc1,0xc1,0xc1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xdd,0xdd,0xdd,0x07,0xde,0xde,0xde,0x14,0xd9,0xd9,0xd9,0x01,0xda,0xda,0xda,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xda,0xda,0xda,0x00,0xd9,0xd9,0xd9,0x01,0xde,0xde,0xde,0x14,0xdd,0xdd,0xdd,0x07,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xdb,0xdb,0xdb,0x00,0xdd,0xdd,0xdd,0x00,0xdc,0xdc,0xdc,0x07,0xdf,0xdf,0xdf,0x8a,0xe0,0xe0,0xe0,0xcd,0xdf,0xdf,0xdf,0x30,0xdf,0xdf,0xdf,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x30,0xe0,0xe0,0xe0,0xcd,0xdf,0xdf,0xdf,0x8a,0xdc,0xdc,0xdc,0x07,0xdd,0xdd,0xdd,0x00,0xdb,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xc6,0xc6,0xc6,0x00,0xe2,0xe2,0xe2,0x00,0xdf,0xdf,0xdf,0x60,0xe0,0xe0,0xe0,0xfb,0xe0,0xe0,0xe0,0xe8,0xdf,0xdf,0xdf,0x31,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x00,0xe3,0xe3,0xe3,0x00,0xd8,0xd8,0xd8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0xd9,0xd9,0x00,0xe3,0xe3,0xe3,0x00,0xde,0xde,0xde,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x31,0xe0,0xe0,0xe0,0xe7,0xe0,0xe0,0xe0,0xfb,0xdf,0xdf,0xdf,0x60,0xe2,0xe2,0xe2,0x00,0xc6,0xc6,0xc6,0x00,0x00,0x00,0x00,0x00,
    0xd5,0xd5,0xd5,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x1a,0xe0,0xe0,0xe0,0xd1,0xe0,0xe0,0xe0,0xfe,0xdf,0xdf,0xdf,0x6c,0xe6,0xe6,0xe6,0x00,0xde,0xde,0xde,0x0e,0xde,0xde,0xde,0x0e,0xe1,0xe1,0xe1,0x00,0xe3,0xe3,0xe3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe4,0xe4,0xe4,0x00,0xe1,0xe1,0xe1,0x00,0xde,0xde,0xde,0x0e,0xde,0xde,0xde,0x0e,0xe5,0xe5,0xe5,0x00,0xdf,0xdf,0xdf,0x6c,0xe0,0xe0,0xe0,0xfe,0xe0,0xe0,0xe0,0xd1,0xde,0xde,0xde,0x1a,0xde,0xde,0xde,0x00,0xd5,0xd5,0xd5,0x00,
    0xe3,0xe3,0xe3,0x00,0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x62,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xbf,0xdd,0xdd,0xdd,0x0d,0xde,0xde,0xde,0x16,0xdf,0xdf,0xdf,0xb2,0xdf,0xdf,0xdf,0xac,0xde,0xde,0xde,0x0e,0xde,0xde,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x0e,0xdf,0xdf,0xdf,0xac,0xdf,0xdf,0xdf,0xb2,0xde,0xde,0xde,0x16,0xdd,0xdd,0xdd,0x0d,0xe0,0xe0,0xe0,0xbf,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x62,0xe0,0xe0,0xe0,0x00,0xe3,0xe3,0xe3,0x00,
    0xdc,0xdc,0xdc,0x00,0xd9,0xd9,0xd9,0x03,0xe0,0xe0,0xe0,0xa6,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x6b,0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x73,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xc0,0xdd,0xdd,0xdd,0x0e,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xdd,0xdd,0xdd,0x0e,0xe0,0xe0,0xe0,0xc0,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x73,0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x6b,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xa7,0xd9,0xd9,0xd9,0x03,0xdc,0xdc,0xdc,0x00,
    0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x11,0xe0,0xe0,0xe0,0xcf,0xe0,0xe0,0xe0,0xf4,0xdf,0xdf,0xdf,0x36,0xdc,0xdc,0xdc,0x07,0xe0,0xe0,0xe0,0xbf,0xe0,0xe0,0xe0,0xfe,0xdf,0xdf,0xdf,0x58,0xe0,0xe0,0xe0,0x00,0xe1,0xe1,0xe1,0x00,0xde,0xde,0xde,0x0e,0xde,0xde,0xde,0x0e,0xe1,0xe1,0xe1,0x00,0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x58,0xe0,0xe0,0xe0,0xfe,0xe0,0xe0,0xe0,0xbf,0xdc,0xdc,0xdc,0x07,0xdf,0xdf,0xdf,0x36,0xe0,0xe0,0xe0,0xf4,0xe0,0xe0,0xe0,0xcf,0xde,0xde,0xde,0x11,0xde,0xde,0xde,0x00,
    0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x1c,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe5,0xdf,0xdf,0xdf,0x20,0xde,0xde,0xde,0x19,0xe0,0xe0,0xe0,0xde,0xe0,0xe0,0xe0,0xe8,0xdf,0xdf,0xdf,0x25,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x0e,0xdf,0xdf,0xdf,0xab,0xdf,0xdf,0xdf,0xac,0xdd,0xdd,0xdd,0x0e,0xde,0xde,0xde,0x00,0xdf,0xdf,0xdf,0x25,0xe0,0xe0,0xe0,0xe8,0xe0,0xe0,0xe0,0xde,0xde,0xde,0xde,0x19,0xdf,0xdf,0xdf,0x20,0xe0,0xe0,0xe0,0xe5,0xe0,0xe0,0xe0,0xe0,0xde,0xde,0xde,0x1c,0xde,0xde,0xde,0x00,
    0xde,0xde,0xde,0x00,0xdf,0xdf,0xdf,0x1c,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe5,0xdf,0xdf,0xdf,0x20,0xde,0xde,0xde,0x19,0xe0,0xe0,0xe0,0xde,0xe0,0xe0,0xe0,0xe8,0xdf,0xdf,0xdf,0x26,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x1f,0xe0,0xe0,0xe0,0xe4,0xe0,0xe0,0xe0,0xe5,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x00,0xdf,0xdf,0xdf,0x26,0xe0,0xe0,0xe0,0xe8,0xe0,0xe0,0xe0,0xde,0xde,0xde,0xde,0x19,0xdf,0xdf,0xdf,0x20,0xe0,0xe0,0xe0,0xe5,0xe0,0xe0,0xe0,0xe0,0xde,0xde,0xde,0x1c,0xde,0xde,0xde,0x00,
    0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x11,0xe0,0xe0,0xe0,0xd0,0xe0,0xe0,0xe0,0xf6,0xdf,0xdf,0xdf,0x35,0xdc,0xdc,0xdc,0x07,0xe0,0xe0,0xe0,0xc0,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x51,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x1f,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xdd,0xdd,0xdd,0x1f,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x51,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xc0,0xdc,0xdc,0xdc,0x07,0xdf,0xdf,0xdf,0x35,0xe0,0xe0,0xe0,0xf6,0xe0,0xe0,0xe0,0xd1,0xde,0xde,0xde,0x11,0xde,0xde,0xde,0x00,
    0xdc,0xdc,0xdc,0x00,0xd9,0xd9,0xd9,0x02,0xdf,0xdf,0xdf,0x87,0xe0,0xe0,0xe0,0xc7,0xdf,0xdf,0xdf,0x26,0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x66,0xe0,0xe0,0xe0,0xd4,0xdf,0xdf,0xdf,0x44,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x1f,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xdd,0xdd,0xdd,0x1f,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x43,0xe0,0xe0,0xe0,0xd4,0xdf,0xdf,0xdf,0x66,0xe0,0xe0,0xe0,0x00,0xde,0xde,0xde,0x26,0xe0,0xe0,0xe0,0xc7,0xdf,0xdf,0xdf,0x87,0xd9,0xd9,0xd9,0x02,0xdc,0xdc,0xdc,0x00,
    0xdd,0xdd,0xdd,0x00,0xdf,0xdf,0xdf,0x00,0xdd,0xdd,0xdd,0x09,0xde,0xde,0xde,0x13,0xe2,0xe2,0xe2,0x00,0xde,0xde,0xde,0x00,0xdc,0xdc,0xdc,0x03,0xde,0xde,0xde,0x13,0xd0,0xd0,0xd0,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x1d,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xdd,0xdd,0xdd,0x1d,0xdd,0xdd,0xdd,0x00,0xd2,0xd2,0xd2,0x00,0xde,0xde,0xde,0x13,0xdc,0xdc,0xdc,0x03,0xde,0xde,0xde,0x00,0xe2,0xe2,0xe2,0x00,0xde,0xde,0xde,0x13,0xdd,0xdd,0xdd,0x09,0xdf,0xdf,0xdf,0x00,0xdd,0xdd,0xdd,0x00,
    0xcc,0xcc,0xcc,0x00,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x00,0xb7,0xb7,0xb7,0x00,0xde,0xde,0xde,0x16,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x1d,0xde,0xde,0xde,0x1e,0xdd,0xdd,0xdd,0x1d,0xde,0xde,0xde,0x3a,0xe0,0xe0,0xe0,0xe6,0xe0,0xe0,0xe0,0xe6,0xde,0xde,0xde,0x3a,0xde,0xde,0xde,0x1d,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x1d,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x16,0xb7,0xb7,0xb7,0x00,0xde,0xde,0xde,0x00,0xdf,0xdf,0xdf,0x00,0xcc,0xcc,0xcc,0x00,
    0xdd,0xdd,0xdd,0x00,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x14,0xdf,0xdf,0xdf,0x8c,0xe0,0xe0,0xe0,0xd6,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe6,0xe0,0xe0,0xe0,0xfd,0xe0,0xe0,0xe0,0xfe,0xe0,0xe0,0xe0,0xe6,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xd6,0xdf,0xdf,0xdf,0x8c,0xde,0xde,0xde,0x14,0xdf,0xdf,0xdf,0x00,0xdd,0xdd,0xdd,0x00,
    0xdc,0xdc,0xdc,0x00,0xd6,0xd6,0xd6,0x02,0xdf,0xdf,0xdf,0x8c,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xf4,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe1,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe1,0xe0,0xe0,0xe0,0xe1,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe3,0xe0,0xe0,0xe0,0xf4,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x8c,0xd6,0xd6,0xd6,0x02,0xdc,0xdc,0xdc,0x00,
    0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x15,0xe0,0xe0,0xe0,0xd6,0xe0,0xe0,0xe0,0xf4,0xdf,0xdf,0xdf,0x56,0xde,0xde,0xde,0x2c,0xde,0xde,0xde,0x2d,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x2d,0xde,0xde,0xde,0x2e,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x2d,0xde,0xde,0xde,0x2e,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1d,0xdf,0xdf,0xdf,0x57,0xe0,0xe0,0xe0,0xf4,0xe0,0xe0,0xe0,0xd6,0xde,0xde,0xde,0x16,0xde,0xde,0xde,0x00,
    0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x1e,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xde,0xde,0xde,0x2b,0xe0,0xe0,0xe0,0xa9,0xdf,0xdf,0xdf,0xac,0xde,0xde,0xde,0x1c,0xe0,0xe0,0xe0,0xab,0xe0,0xe0,0xe0,0xac,0xde,0xde,0xde,0x1c,0xe0,0xe0,0xe0,0xab,0xe0,0xe0,0xe0,0xad,0xde,0xde,0xde,0x0d,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x1d,0xe0,0xe0,0xe0,0xe3,0xe0,0xe0,0xe0,0xe2,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x00,
    0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x1e,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xde,0xde,0xde,0x2c,0xe0,0xe0,0xe0,0xaa,0xdf,0xdf,0xdf,0xac,0xde,0xde,0xde,0x1c,0xe0,0xe0,0xe0,0xab,0xe0,0xe0,0xe0,0xad,0xde,0xde,0xde,0x1c,0xe0,0xe0,0xe0,0xab,0xe0,0xe0,0xe0,0xad,0xde,0xde,0xde,0x0d,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x1d,0xe0,0xe0,0xe0,0xe3,0xe0,0xe0,0xe0,0xe2,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x00,
    0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x15,0xe0,0xe0,0xe0,0xd6,0xe0,0xe0,0xe0,0xf4,0xdf,0xdf,0xdf,0x56,0xde,0xde,0xde,0x2c,0xde,0xde,0xde,0x2d,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x2d,0xde,0xde,0xde,0x2d,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x2d,0xde,0xde,0xde,0x2d,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1d,0xdf,0xdf,0xdf,0x57,0xe0,0xe0,0xe0,0xf4,0xe0,0xe0,0xe0,0xd6,0xde,0xde,0xde,0x16,0xde,0xde,0xde,0x00,
    0xdc,0xdc,0xdc,0x00,0xd6,0xd6,0xd6,0x02,0xdf,0xdf,0xdf,0x8c,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xf4,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe1,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe1,0xe0,0xe0,0xe0,0xe1,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe1,0xe0,0xe0,0xe0,0xe1,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe3,0xe0,0xe0,0xe0,0xf4,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x8c,0xd6,0xd6,0xd6,0x02,0xdc,0xdc,0xdc,0x00,
    0xdd,0xdd,0xdd,0x00,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x14,0xdf,0xdf,0xdf,0x8c,0xe0,0xe0,0xe0,0xd6,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xd6,0xdf,0xdf,0xdf,0x8c,0xde,0xde,0xde,0x14,0xdf,0xdf,0xdf,0x00,0xdd,0xdd,0xdd,0x00,
    0xc4,0xc4,0xc4,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x00,0xd7,0xd7,0xd7,0x02,0xde,0xde,0xde,0x16,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1f,0xde,0xde,0xde,0x1e,0xde,0xde,0xde,0x16,0xd6,0xd6,0xd6,0x02,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x00,0xc5,0xc5,0xc5,0x00,
    0x00,0x00,0x00,0x00,0xc5,0xc5,0xc5,0x00,0xdd,0xdd,0xdd,0x00,0xdc,0xdc,0xdc,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xdc,0xdc,0xdc,0x00,0xdd,0xdd,0xdd,0x00,0xc5,0xc5,0xc5,0x00,0x00,0x00,0x00,0x00,

};

const lv_img_dsc_t img_top_nodes_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_ARGB8888,
  .header.flags = 0,
  .header.w = 24,
  .header.h = 24,
  .header.stride = 96,
  .data_size = 2304,
  .data = img_top_nodes_image_map,
};

