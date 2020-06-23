/**
 * @file stddef.h
 * @author Thiago Rezende (horus.he4rt@gmail.com)
 * @brief Standard kernel definitions
 * @version 0.1
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef _HORUS_STDDEF_H
#define _HORUS_STDDEF_H

#include <kernel/core/stdint.h>

#ifdef _HORUS64
typedef uint64_t size_t;
#else
typedef uint32_t size_t;
#endif

#ifndef NULL
#define NULL ((void *)0)
#endif

#endif // _HORUS_STDDEF_H