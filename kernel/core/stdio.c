#include <kernel/core/stddef.h>
#include <kernel/core/stdio.h>

void write(const char *str, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        stdout.buffer[i] = vga_entry(str[i], stdout.std_color);
    }
}

void writec(const char *str, size_t size, uint8_t color)
{
    for (size_t i = 0; i < size; i++)
    {
        stdout.buffer[i] = vga_entry(str[i], color);
    }
}

void writecc(const char *str, size_t size, uint8_t fg, uint8_t bg)
{
    for (size_t i = 0; i < size; i++)
    {
        stdout.buffer[i] = vga_entry(str[i], vga_entry_color(fg, bg));
    }
}