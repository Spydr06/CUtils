#ifndef SPYDR06_CUTILS_DATATYPES_H
#define SPYDR06_CUTILS_DATATYPES_H

#include <stdint.h>
#include <stdbool.h>

// signed integer types
typedef int8_t  i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

// unsigned integer types
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

// float types
typedef float       f32;
typedef double      f64;
typedef long double f80;

// str_t type
typedef char* str_t;

// stack_t type
#include "stack.h"

#endif /* SPYDR06_CUTILS_DATATYPES_H */