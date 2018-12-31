#pragma once

XENUS_BEGIN_C
    #if !defined(DEFINED__InterlockedIncrement)
    #define DEFINED__InterlockedIncrement
        extern long _InterlockedIncrement(
            long *Addend
        );
    #endif
    
    #if !defined(DEFINED__InterlockedDecrement)
    #define DEFINED__InterlockedDecrement
        extern long _InterlockedDecrement(
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
    
    #if !defined(DEFINED__bittestandset64)
        #define DEFINED__bittestandset64
        unsigned char _bittestandset64(__int64 *a, __int64 b);
    #endif

    #if !defined(DEFINED__ReadWriteBarrier)
        #define DEFINED__ReadWriteBarrier
        extern void _ReadWriteBarrier(void);
    #endif
        
    #if !defined(DEFINED___faststorefence)
        #define DEFINED___faststorefence
        extern void __faststorefence(void);
    #endif
        
    #if !defined(DEFINED__InterlockedExchangeAdd)
        #define DEFINED__InterlockedExchangeAdd
        extern long _InterlockedExchangeAdd(
            long volatile *Addend,
            long          Value
            );
    #endif
        
    #if !defined(DEFINED__InterlockedExchange)
        #define DEFINED__InterlockedExchange
        extern long _InterlockedExchange(
            long *Addend,
            long Value
            );
    #endif
XENUS_END_C