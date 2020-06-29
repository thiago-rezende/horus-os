#ifndef _HORUS_STDVGA_H
#define _HORUS_STDVGA_H

#include <kernel/core/stdint.h>
#include <kernel/core/stddef.h>

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

#ifndef STD_VGA_TERMINAL_SIZE
#define STD_VGA_TERMINAL_SIZE
#define VGA_MAX_COLS 80
#define VGA_MAX_ROWS 25
#endif // STD_VGA_TERMINAL_SIZE

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

/**
 * @brief clear the console buffer by the max rows and cols
 *
 * @return uint8_t status
 */
uint8_t vga_clear_console_buffer();

/**
 * @brief clear the console buffer by the max rows and cols with a given vga color
 *
 * @param color color
 * @return uint8_t status
 */
uint8_t vga_clear_console_bufferc(uint8_t color);

/**
 * @brief clear the console buffer by the max rows and cols with a given char and vga color
 *
 * @param uc character to be set in the buffer
 * @param color color
 * @return uint8_t status
 */
uint8_t vga_clear_console_buffercc(unsigned char uc, uint8_t color);

/**
 * @brief clear the console buffer by a given size
 *
 * @param rows rows
 * @param cols columns
 * @return uint8_t status
 */
uint8_t vga_clear_console_buffers(uint16_t rows, uint16_t cols);

/**
 * @brief clear the console buffer by a given size and color
 *
 * @param rows rows
 * @param cols columns
 * @param color color
 * @return uint8_t status
 */
uint8_t vga_clear_console_buffersc(uint16_t rows, uint16_t cols, uint8_t color);

/**
 * @brief clear the console buffer by a given size, color and char
 *
 * @param rows rows
 * @param cols columns
 * @param uc character to be set in the buffer
 * @param color color
 * @return uint8_t status
 */
uint8_t vga_clear_console_bufferscc(uint16_t rows, uint16_t cols, unsigned char uc, uint8_t color);

#endif // _HORUS_STDVGA_H
