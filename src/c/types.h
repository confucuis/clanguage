// C99 int type 
// int8_t -> i8
// int16_t -> i16
// int32_t -> i32 
// int64_t -> i64
// uint8_t -> u8
// uint16_t -> u16
// uint32_t -> u32 
// uint64_t -> u64
// float -> f32
// double -> f64
// char* -> string

#ifndef _C99_TYPES_
#define _C99_TYPES_

#include <inttypes.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

typedef char* string;

#endif // _C99_TYPES_
