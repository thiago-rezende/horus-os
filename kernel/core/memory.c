#include <kernel/core/memory.h>

void *memcpy(void *dest, const void *src, size_t n)
{
    uint8_t *pdest = (uint8_t *)dest;
    const uint8_t *psrc = (const uint8_t *)src;

    for (int i = 0; i < n; i++)
    {
        pdest[i] = psrc[i];
    }

    return pdest;
}

void *memset(void *dest, int data, size_t n)
{
    uint8_t *pdest = (uint8_t *)dest;

    for (int i = 0; i <= n; i++)
    {
        pdest[i] = data;
    }

    return dest;
}