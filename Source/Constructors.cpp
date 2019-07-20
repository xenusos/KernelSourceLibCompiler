/*
    Purpose:
    Author: 
    License: 
*/
#include <xenus_lazy.h>

typedef void(__cdecl *_PVFV)(void);
typedef int(__cdecl *_PIFV)(void);

#pragma section(".CRT$XIA",long,read)
#pragma section(".CRT$XIZ",long,read)
#pragma section(".CRT$XCA",long,read)
#pragma section(".CRT$XCZ",long,read)
#pragma section(".CRT$XPA",long,read)
#pragma section(".CRT$XPZ",long,read)
#pragma section(".CRT$XTA",long,read)
#pragma section(".CRT$XTZ",long,read)

#pragma comment(linker, "/merge:.CRT=.rdata")

__declspec(allocate(".CRT$XIA")) _PIFV __xi_a[] = { 0 };
__declspec(allocate(".CRT$XIZ")) _PIFV __xi_z[] = { 0 };

__declspec(allocate(".CRT$XCA")) _PVFV __xc_a[] = { 0 };
__declspec(allocate(".CRT$XCZ")) _PVFV __xc_z[] = { 0 };

__declspec(allocate(".CRT$XPA")) _PVFV __xp_a[] = { 0 };
__declspec(allocate(".CRT$XPZ")) _PVFV __xp_z[] = { 0 };

__declspec(allocate(".CRT$XTA")) _PVFV __xt_a[] = { 0 };
__declspec(allocate(".CRT$XTZ")) _PVFV __xt_z[] = { 0 };

#pragma data_seg();


static int InitC()
{
    int ret = 0;

    for (_PIFV * cur = __xi_a; cur < __xi_z; cur++)
    {
        _PIFV function = *cur;

        if (!function)
            continue;

        ret = function();

        if (ret != 0)
            break;
    }

    return ret;
}


static void InitCPP()
{
    for (_PVFV * cur = __xc_a; cur < __xc_z; cur++)
    {
        _PVFV function = *cur;
        if (!function)
            continue;
        function();
    }
}

static void DestroyCPre()
{
    for (_PVFV * cur = __xp_a; cur < __xp_z; cur++)
    {
        _PVFV function = *cur;
        if (!function)
            continue;
        function();
    }
}

static void DestroyC()
{
    for (_PVFV * cur = __xt_a; cur < __xt_z; cur++)
    {
        _PVFV function = *cur;
        if (!function)
            continue;
        function();
    }
}

int RuntimeCallConstructors()
{
    int ret;
    
    ret = InitC();
    if (ret)
        return ret;
    
    InitCPP();

    return 0;
}

void RuntimeCallDeconstructors()
{
    DestroyCPre();
    DestroyC();
}