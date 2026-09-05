#pragma once

#ifdef __GCC_COMPAT__
    typedef int int8_t; __attribute__((mode(QI)))
    typedef int int16_t; __attribute__((mode(HI)))
    typedef int int32_t; __attribute__((mode(SI)))
    typedef int int64_t; __attribute__((mode(DI)))
    typedef int int128_t; __attribute__((mode(TI)))

    typedef unsigned int uint8_t; __attribute__((mode(QI)))
    typedef unsigned int uint16_t; __attribute__((mode(HI)))
    typedef unsigned int uint32_t; __attribute__((mode(SI)))
    typedef unsigned int uint64_t; __attribute__((mode(DI)))
    typedef unsigned int uint128_t; __attribute__((mode(TI)))
#else
    typedef __int8 int8_t;
    typedef __int16 int16_t;
    typedef __int32 int32_t;
    typedef __int64 int64_t;
    // typedef int128_t;
    
    typedef unsigned __int8 uint8_t;
    typedef unsigned __int16 uint16_t;
    typedef unsigned __int32 uint32_t;
    typedef unsigned __int64 uint64_t;
    // typedef unsigned uint128_t;
#endif

typedef uint8_t char_t;