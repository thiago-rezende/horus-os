#include <kernel/utils/stdvga.h>
#include <kernel/core/stdio.h>
#include <kernel/core/stddef.h>

uint8_t vga_entry_color(uint8_t fg, uint8_t bg)
{
    return fg | bg << 4;
}

uint16_t vga_entry(unsigned char uc, uint8_t color)
{
    return uc | color << 8;
}

uint8_t vga_clear_console_buffer()
{
    for (size_t y = 0; y < VGA_MAX_ROWS; y++)
    {
        for (size_t x = 0; x < VGA_MAX_COLS; x++)
        {
            stdout.buffer[y * VGA_MAX_COLS + x] = vga_entry(' ', STD_VGA_COLOR);
        }
    }

    return 0;
}

uint8_t vga_clear_console_bufferc(uint8_t color)
{
    for (size_t y = 0; y < VGA_MAX_ROWS; y++)
    {
        for (size_t x = 0; x < VGA_MAX_COLS; x++)
        {
            stdout.buffer[y * VGA_MAX_COLS + x] = vga_entry(' ', color);
        }
    }

    return 0;
}

uint8_t vga_clear_console_buffercc(unsigned char uc, uint8_t color)
{
    for (size_t y = 0; y < VGA_MAX_ROWS; y++)
    {
        for (size_t x = 0; x < VGA_MAX_COLS; x++)
        {
            stdout.buffer[y * VGA_MAX_COLS + x] = vga_entry(uc, color);
        }
    }

    return 0;
}

uint8_t vga_clear_console_buffers(uint16_t rows, uint16_t cols)
{
    for (size_t y = 0; y < rows; y++)
    {
        for (size_t x = 0; x < cols; x++)
        {
            stdout.buffer[y * cols + x] = vga_entry(' ', STD_VGA_COLOR);
        }
    }

    return 0;
}

uint8_t vga_clear_console_buffersc(uint16_t rows, uint16_t cols, uint8_t color)
{
    for (size_t y = 0; y < rows; y++)
    {
        for (size_t x = 0; x < cols; x++)
        {
            stdout.buffer[y * cols + x] = vga_entry(' ', color);
        }
    }

    return 0;
}

uint8_t vga_clear_console_bufferscc(uint16_t rows, uint16_t cols, unsigned char uc, uint8_t color)
{
    for (size_t y = 0; y < rows; y++)
    {
        for (size_t x = 0; x < cols; x++)
        {
            stdout.buffer[y * cols + x] = vga_entry(uc, color);
        }
    }

    return 0;
}
