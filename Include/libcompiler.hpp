#pragma once

#define LIB_COMPILER_PRESENT

#include "MSVCIntrinsics.hpp"

extern void* __cdecl operator new(size_t idc, void * placement);

extern int RuntimeCallConstructors();
extern void RuntimeCallDeconstructors();