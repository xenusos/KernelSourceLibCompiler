#pragma once

XENUS_BEGIN_C
    #if !defined(DEFINED__InterlockedIncrement)
    #define DEFINED__InterlockedIncrement
        long _InterlockedIncrement(
            long *Addend
        );
    #endif
    
    #if !defined(DEFINED__InterlockedDecrement)
    #define DEFINED__InterlockedDecrement
        long _InterlockedDecrement(
            long *Addend
        );
    #endif 
    
    #if !defined(DEFINED__interlockedbittestandset)
        #define DEFINED__interlockedbittestandset
        unsigned char _interlockedbittestandset(
            long *a,
            long b
        );
    #endif
XENUS_END_C