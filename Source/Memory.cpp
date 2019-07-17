/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson (See License.txt)
*/  
#include <xenus_lazy.h>

void* __cdecl operator new(size_t size)
{
#ifdef CONFIG_DBG_LIBCOM_MEM
    void * ptr;
    ptr = malloc(size);
    printf("[dbg libcompiler] allocate: %p (size: %zu)\n", ptr, size);
    return ptr;
#else
    return malloc(size);
#endif
}

void* __cdecl operator new(size_t size, unsigned long * AllocationContext)
{
    return ::operator new(size);
}

void* __cdecl operator new[](size_t size, int PoolType)
{
    return ::operator new(size);
}

void __cdecl operator delete(void* pObject)
{
#ifdef CONFIG_DBG_LIBCOM_MEM
    printf("[dbg libcompiler] deallocate: %p\n", pObject);
#endif
    free(pObject);
}

void __cdecl operator delete(void* pObject, size_t s)
{
    ::operator delete(pObject);
}

void __cdecl operator delete[](void* pObject)
{
    ::operator delete(pObject);
}

void* __cdecl operator new(size_t idc, void * placement)
{
    return placement;
}