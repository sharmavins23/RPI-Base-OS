#pragma once
// Contains declarations for memory management/stack management functions

#include "common.h"

// Definitions for pages, page tables from Linux src
#define PAGE_SHIFT 12
#define TABLE_SHIFT 9
#define SECTION_SHIFT (PAGE_SHIFT + TABLE_SHIFT)
#define PAGE_SIZE (1 << PAGE_SHIFT)

#define LOW_MEMORY (2 * SECTION_SIZE)

// Assembler breaks if function definitions in C-style are included
#ifndef __ASSEMBLER__
// Stores N null bits(?) starting in a specified address
void memzero(u64 src, u32 n);
#endif