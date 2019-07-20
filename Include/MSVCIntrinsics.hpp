#pragma once

XENUS_BEGIN_C
void __addgsbyte(
    unsigned long Offset,
    unsigned char Data
);
void __addgsword(
    unsigned long Offset,
    unsigned short Data
);
void __addgsdword(
    unsigned long Offset,
    unsigned long Data
);
void __addgsqword(
    unsigned long Offset,
    unsigned __int64 Data
);
unsigned char _BitScanForward(
    unsigned long * Index,
    unsigned long Mask
);
unsigned char _BitScanForward64(
    unsigned long * Index,
    unsigned __int64 Mask
);
unsigned char _BitScanReverse(
    unsigned long * Index,
    unsigned long Mask
);
unsigned char _BitScanReverse64(
    unsigned long * Index,
    unsigned __int64 Mask
);
unsigned char _bittest(
    long const *a,
    long b
);
unsigned char _bittest64(
    __int64 const *a,
    __int64 b
);
unsigned char _bittestandcomplement(
    long *a,
    long b
);
unsigned char _bittestandcomplement64(
    __int64 *a,
    __int64 b
);
unsigned char _bittestandreset(
    long *a,
    long b
);
unsigned char _bittestandreset64(
    __int64 *a,
    __int64 b
);
unsigned char _bittestandset(
    long *a,
    long b
);
unsigned char _bittestandset64(
    __int64 *a,
    __int64 b
);
void __cpuid(
    int cpuInfo[4],
    int function_id
);

void __cpuidex(
    int cpuInfo[4],
    int function_id,
    int subfunction_id
);
void __debugbreak();
void __faststorefence();
long _InterlockedAdd(
    long volatile * Addend,
    long Value
);
__int64 _InterlockedAdd64(
    __int64 volatile * Addend,
    __int64 Value
);
long _InterlockedAnd(
    long volatile * value,
    long mask
);
long _InterlockedAnd_HLEAcquire(
    long volatile * value,
    long mask
);
long _InterlockedAnd_HLERelease(
    long volatile * value,
    long mask
);
long _InterlockedAnd_np(
    long volatile * value,
    long mask
);
char _InterlockedAnd8(
    char volatile * value,
    char mask
);
char _InterlockedAnd8_np(
    char volatile * value,
    char mask
);
short _InterlockedAnd16(
    short volatile * value,
    short mask
);
short _InterlockedAnd16_np(
    short volatile * value,
    short mask
);
__int64 _InterlockedAnd64(
    __int64 volatile* value,
    __int64 mask
);
__int64 _InterlockedAnd64_HLEAcquire(
    __int64 volatile* value,
    __int64 mask
);
__int64 _InterlockedAnd64_HLERelease(
    __int64 volatile* value,
    __int64 mask
);
unsigned char _interlockedbittestandreset(
    long *a,
    long b
);
unsigned char _interlockedbittestandreset_HLEAcquire(
    long *a,
    long b
);
unsigned char _interlockedbittestandreset_HLERelease(
    long *a,
    long b
);
unsigned char _interlockedbittestandreset64(
    __int64 *a,
    __int64 b
);
unsigned char _interlockedbittestandreset64_HLEAcquire(
    __int64 *a,
    __int64 b
);
unsigned char _interlockedbittestandreset64_HLERelease(
    __int64 *a,
    __int64 b
);
unsigned char _interlockedbittestandset(
    long *a,
    long b
);
unsigned char _interlockedbittestandset_HLEAcquire(
    long *a,
    long b
);
unsigned char _interlockedbittestandset_HLERelease(
    long *a,
    long b
);
unsigned char _interlockedbittestandset64(
    __int64 *a,
    __int64 b
);
unsigned char _interlockedbittestandset64_HLEAcquire(
    __int64 *a,
    __int64 b
);
unsigned char _interlockedbittestandset64_HLERelease(
    __int64 *a,
    __int64 b
);
long _InterlockedCompareExchange(
    long volatile * Destination,
    long Exchange,
    long Comparand
);
long _InterlockedCompareExchange_HLEAcquire(
    long volatile * Destination,
    long Exchange,
    long Comparand
);
long _InterlockedCompareExchange_HLERelease(
    long volatile * Destination,
    long Exchange,
    long Comparand
);
long _InterlockedCompareExchange_np(
    long volatile * Destination,
    long Exchange,
    long Comparand
);
char _InterlockedCompareExchange8(
    char volatile * Destination,
    char Exchange,
    char Comparand
);
short _InterlockedCompareExchange16(
    short volatile * Destination,
    short Exchange,
    short Comparand
);
short _InterlockedCompareExchange16_np(
    short volatile * Destination,
    short Exchange,
    short Comparand
);
__int64 _InterlockedCompareExchange64(
    __int64 volatile * Destination,
    __int64 Exchange,
    __int64 Comparand
);
__int64 _InterlockedCompareExchange64_HLEAcquire(
    __int64 volatile * Destination,
    __int64 Exchange,
    __int64 Comparand
);
__int64 _InterlockedCompareExchange64_HLERelease(
    __int64 volatile * Destination,
    __int64 Exchange,
    __int64 Comparand
);
__int64 _InterlockedCompareExchange64_np(
    __int64 volatile * Destination,
    __int64 Exchange,
    __int64 Comparand
);
long _InterlockedDecrement(
    long * lpAddend
);
short _InterlockedDecrement16(
    short * lpAddend
);
__int64 _InterlockedDecrement64(
    __int64 * lpAddend
);
long _InterlockedExchange(
    long volatile * Target,
    long Value
);
long _InterlockedExchange_HLEAcquire(
    long volatile * Target,
    long Value
);
long _InterlockedExchange_HLERelease(
    long volatile * Target,
    long Value
);
char _InterlockedExchange8(
    char volatile * Target,
    char Value
);
short _InterlockedExchange16(
    short volatile * Target,
    short Value
);
__int64 _InterlockedExchange64(
    __int64 volatile * Target,
    __int64 Value
);
__int64 _InterlockedExchange64_HLEAcquire(
    __int64 volatile * Target,
    __int64 Value
);
__int64 _InterlockedExchange64_HLERelease(
    __int64 volatile * Target,
    __int64 Value
);
long _InterlockedExchangeAdd(
    long volatile * Addend,
    long Value
);
long _InterlockedExchangeAdd_HLEAcquire(
    long volatile * Addend,
    long Value
);
long _InterlockedExchangeAdd_HLERelease(
    long volatile * Addend,
    long Value
);
char _InterlockedExchangeAdd8(
    char volatile * Addend,
    char Value
);
short _InterlockedExchangeAdd16(
    short volatile * Addend,
    short Value
);
__int64 _InterlockedExchangeAdd64(
    __int64 volatile * Addend,
    __int64 Value
);
__int64 _InterlockedExchangeAdd64_HLERelease(
    __int64 volatile * Addend,
    __int64 Value
);
long _InterlockedIncrement(
    long * lpAddend
);
short _InterlockedIncrement16(
    short * lpAddend
);
__int64 _InterlockedIncrement64(
    __int64 * lpAddend
);
void __incgsbyte(
    unsigned long Offset
);
void __incgsword(
    unsigned long Offset
);
void __incgsdword(
    unsigned long Offset
);
void __incgsqword(
    unsigned long Offset
);
unsigned __int64 __readeflags(void);
void _ReadBarrier(void);
void _ReadWriteBarrier(void);
void __writemsr(
    unsigned long Register,
    unsigned __int64 Value
);
unsigned __int64 __readmsr(
    int regs
);
XENUS_END_C