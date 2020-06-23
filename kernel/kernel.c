#include <kernel/core/stdint.h>
#include <kernel/core/stddef.h>
#include <kernel/core/stdio.h>
#include <kernel/core/string.h>
#include <kernel/core/memory.h>

int kernel_main()
{

    const char *str = "Horus OS\0";

    char *msg;

    strcpy(msg, str);

    write(msg, strlen(msg));

    return 0;
}
