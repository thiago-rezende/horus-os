#include <kernel/core/stddef.h>
#include <kernel/core/string.h>

size_t strlen(const char *str)
{
    size_t len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    return len;
}

char *strcpy(char *dest, const char *src)
{
    for (size_t i = 0; i < strlen(src) + 1; i++)
    {
        dest[i] = src[i];
    }

    return dest;
}