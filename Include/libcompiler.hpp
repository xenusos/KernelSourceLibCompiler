#pragma once

#define LIB_COMPILER_PRESENT


#include "MSVCIntrinsics.hpp"


static inline void* __cdecl operator new(size_t idc, void * placement)
{
    return placement;
}