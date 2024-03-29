#pragma once
// Contains standard typedefs for the project

#include <stdint.h>

// Used for simpler code typing
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

// Tells compiler to unsafely check values
typedef volatile u32 reg32;