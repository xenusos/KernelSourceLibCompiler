/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson
*/  
#include <xenus_lazy.h>

void* __cdecl operator new(size_t Size)
{
	return malloc(Size);
}

void* __cdecl operator new(size_t Size, unsigned long * AllocationContext)
{
	return malloc(Size);
}

void* __cdecl operator new[](size_t Size, int PoolType)
{
	return malloc(Size);
}

void __cdecl operator delete(void* pObject)
{
	free(pObject);
}

void __cdecl operator delete(void* pObject, size_t s)
{
	::operator delete(pObject);
}

void __cdecl operator delete[](void* pObject)
{
	free(pObject);
}