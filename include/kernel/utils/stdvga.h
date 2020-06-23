#ifndef _HORUS_STDVGA_H
#define _HORUS_STDVGA_H

#include <kernel/core/stdint.h>

/**
 * @brief VGA colors list
 * 
 */
typedef enum
{
    VGA_COLOR_BLACK = 0,
    VGA_COLOR_BLUE = 1,
    VGA_COLOR_GREEN = 2,
    VGA_COLOR_CYAN = 3,
    VGA_COLOR_RED = 4,
    VGA_COLOR_MAGENTA = 5,
    VGA_COLOR_BROWN = 6,
    VGA_COLOR_LIGHT_GREY = 7,
    VGA_COLOR_DARK_GREY = 8,
    VGA_COLOR_LIGHT_BLUE = 9,
    VGA_COLOR_LIGHT_GREEN = 10,
    VGA_COLOR_LIGHT_CYAN = 11,
    VGA_COLOR_LIGHT_RED = 12,
    VGA_COLOR_LIGHT_MAGENTA = 13,
    VGA_COLOR_LIGHT_BROWN = 14,
    VGA_COLOR_WHITE = 15
} vga_color;

#ifndef STD_VGA_COLOR
#define STD_VGA_COLOR (VGA_COLOR_WHITE | VGA_COLOR_BLACK << 4)
#endif // _HORUS_STD_VGACOLOR

/**
 * @brief Returns a vga color entry with giver fg and bg
 * 
 * @param fg foreground
 * @param bg background
 * @return uint8_t vga entry
 */
uint8_t vga_entry_color(uint8_t fg, uint8_t bg);

/**
 * @brief Returns a vga entry with a given vga color
 * 
 * @param uc character
 * @param color vga color
 * @return uint6_t vga entry
 */
uint16_t vga_entry(unsigned char uc, uint8_t color);

#endif // _HORUS_STDVGA_H