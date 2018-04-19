/*
 *  Created on: 9 Jul 2017
 *      Author: laarman
 */

#ifndef UTIL_H
#define UTIL_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#include <errno.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CACHE_LINE 6
#define CACHE_LINE_SIZE    64

#define VERBOSE 1

#define expect_false(e) __builtin_expect(e, 0)
#define expect_true(e) __builtin_expect(e, 1)
#ifndef min
    #define min(x,y) (x < y ? x : y)
#endif
#ifndef max
    #define max(x,y) (x > y ? x : y)
#endif
#ifndef swap
    #define swap(a,b) ({ \
        typeof(a) tmp = a; \
        a = b; \
        b = tmp; \
    })
#endif

// PRINTING AND DEBUGGING CODE

#if !defined(DEBUG) || defined(NDEBUG) || DEBUG==0
#undef DEBUG
#define DEBUG 0
#else
#undef DEBUG
#define DEBUG 1
#endif

#define Print0(...)  do { printf(__VA_ARGS__); } while (0)
#define Print(...)  do { printf(__VA_ARGS__); printf("\n"); } while (0)
#define Error(...)  do { fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n"); } while (0)
#define Verbose(...) do { if (DEBUG) Error(__VA_ARGS__); } while (0)
#define Trace(...) do { if (DEBUG) Error(__VA_ARGS__); } while (0)
#define Debug(...) do { if (DEBUG) Error(__VA_ARGS__); } while (0)
#define Exit(e,...) do { Error(__VA_ARGS__); exit(e); } while (0)
#define Abort(...) Exit(1, __VA_ARGS__)
#define AbortCall(...) {\
    Error("ERROR at %s:%d (errno: %d)", __FILE__,__LINE__,errno);\
    Abort(__VA_ARGS__);\
}
#define __assume(cond) do { if (!(cond)) __builtin_unreachable(); } while (0)

#define Assert(e,...) \
    do { if (DEBUG) {\
        if (expect_false(!(e))) {\
        char buf[4096];\
        if (#__VA_ARGS__[0])\
            snprintf(buf, 4096, ": " __VA_ARGS__);\
        else\
            buf[0] = '\0';\
        Exit(EXIT_FAILURE, "assertion \"%s\" failed%s", #e, buf);\
    }}} while (0)

static inline size_t
INT_SIZE (size_t size)
{
    return (size + 3) / 4;
}

static inline bool
has_suffix(const char *str, const char *suffix)
{
    if (!str || !suffix)
        return 0;
    size_t lenstr = strlen(str);
    size_t lensuffix = strlen(suffix);
    if (lensuffix >  lenstr)
        return 0;
    return strncmp(str + lenstr - lensuffix, suffix, lensuffix) == 0;
}

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* UTIL_H */
