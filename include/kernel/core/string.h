/**
 * @file string.h
 * @author Thiago Rezende (horus.he4rt@gmail.com)
 * @brief kernel strings
 * @version 0.1
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef _HORUS_STRING_H
#define _HORUS_STRING_H

#include <kernel/core/stddef.h>

/**
 * @brief returns the size of a string
 * 
 * @param str string to mesure
 * @return size_t size of the mesured string
 */
size_t strlen(const char *str);

/**
 * @brief returns the pointer to dest populated with src
 * 
 * @param dest destination
 * @param src string to copy
 * @return char* pointer to destination
 */
char *strcpy(char *dest, const char *src);

#endif // _HORUS_STRING_H