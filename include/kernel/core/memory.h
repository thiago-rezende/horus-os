/**
 * @file memory.h
 * @author Thiago Rezende (horus.he4rt@gmail.com)
 * @brief kernel memory
 * @version 0.1
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef _HORUS_MEMORY_H
#define _HORUS_MEMORY_H

#include <kernel/core/stddef.h>

/**
 * @brief copy n bytes of memory form dest to src
 * 
 * @param dest destination
 * @param src source
 * @param n number of bytes
 */
void *memcpy(void *dest, const void *src, size_t n);

/**
 * @brief set n bytes from data to dest
 * 
 * @param dest destitanion
 * @param data data to set
 * @param n number of bytes
 * @return void* 
 */
void *memset(void *dest, int data, size_t n);

#endif // _HORUS_MEMORY_H