#include <kernel/core/stdint.h>
#include <kernel/core/stddef.h>
#include <kernel/core/stdio.h>
#include <kernel/core/string.h>
#include <kernel/core/memory.h>
#include <kernel/utils/stdvga.h>

int kernel_main()
{
    vga_clear_console_bufferc(vga_entry_color(VGA_COLOR_LIGHT_GREY, VGA_COLOR_BLACK));

    const char *str = "Horus OS\0";

    write(str, strlen(str));

    return 0;
}
