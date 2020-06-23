/**
 * @file stdio.h
 * @author Thiago Rezende (horus.he4rt@gmail.com)
 * @brief Standard I/O
 * @version 0.1
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef _HORUS_STDIO_H
#define _HORUS_STDIO_H

#include <kernel/core/stdint.h>
#include <kernel/utils/stdvga.h>

typedef struct
{
    uint16_t *buffer;
    uint8_t std_color;
} io_buffer;

#ifndef _HORUS_STD_OUT
#define _HORUS_STD_OUT
static io_buffer stdout = {(uint16_t *)0xB8000, (uint8_t)STD_VGA_COLOR};
#endif // _HORUS_STD_OUT

/**
 * @brief write a string in stdout buffer
 * 
 * @param str string to write in stdout buffer
 * @param size sizo of the string
 */
void write(const char *str, size_t size);

/**
 * @brief write a string in stdout buffer with a given color
 * 
 * @param str string to write in stdout buffer
 * @param size sizo of the string
 * @param color vga color
 */
void writec(const char *str, size_t size, uint8_t color);

/**
 * @brief write a string in stdout buffer with a fg and bg color
 * 
 * @param str string to write in stdout buffer
 * @param size sizo of the string
 * @param fg foreground
 * @param bg background
 */
void writecc(const char *str, size_t size, uint8_t fg, uint8_t bg);

#endif // _HORUS_STDIO