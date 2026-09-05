#pragma once

// these may need to be defined depending on the system:
// #define PREFETCHW_SUPPORTED // default: Not Defined
// #define PREFETCHW1_SUPPORTED // default: Not Defined
// #define __X87__ // default: Not Defined
// #define __APX__ // default: Not Defined

// these may need to be set depending on the system and compiler:
// #define __SSE_VER__ // default: "SSE2" (AMD64), "None" (Other)


#if defined(_MSC_VER)
#   define __MSVC__

#   if defined(_M_AMD64)
#       define __AMD64__
#       define __SSE_VER__ 2

#   elif defined(_M_IX86)
#       define __I386__

#       if (_M_IX86_FP == 0)&&defined(_M_IX86_FP)
#           define __SSE_VER__ "None"
#       elif (_M_IX86_FP == 1)&&defined(_M_IX86_FP)
#           define __SSE_VER__ "SSE1"
#       elif (_M_IX86_FP == 2)&&defined(_M_IX86_FP)
#           define __SSE_VER__ "SSE2"
#       endif

#   elif defined(_M_ARM64)||defined(_M_ARM64EC)
#       define __ARM64__

#   elif defined(_M_ARM)
#       define __ARM32__

#   endif

#elif defined(__GNUC__)||defined(__clang__)
#   define __GCC_COMPAT__

#   if defined(__MINGW32__) || defined(__MINGW64__)
#       define __MINGW__
#   endif

#   if defined(__GNUC__)
#       define __GCC__
#   elif defined(__clang__)
#       define __CLANG__
#   endif

#   if defined(__x86_64__)
#       define __AMD64__

#       if defined(__SSE3__)
#           define __SSE_VER__ "SSE3"

#       elif defined(__SSE4__)
#           define __SSE_VER__ "SSE4"

#       elif defined(__SSE4_1__)
#           define __SSE_VER__ "SSE4.1"

#       elif defined(__SSE4_2__)
#           define __SSE_VER__ "SSE4.2"

#       elif defined(__SSE4A__)
#           define __SSE_VER__ "SSE4a"

#       elif defined(__AVX__)
#           define __SSE_VER__ "AVX"

#       elif defined(__AVX2__)
#           define __SSE_VER__ "AVX2"

#       elif defined(__AVX512F__)
#           define __SSE_VER__ "AVX512"

#       else
#           define __SSE_VER__ "SSE2"

#       endif

#   elif defined(__i386__)
#       define __I386__

#       if defined(__SSE__)
#           define __SSE_VER__ "SSE1"

#       elif defined(__SSE2__)
#           define __SSE_VER__ "SSE2"

#       else
#           define __SSE_VER__ "None"

#       endif

#   elif defined(__aarch64__)
#       define __ARM64__

#   elif defined(__arm__)
#       define __ARM32__

#   endif

#else

#error "ERROR: Compiler or architecture not supported"

#endif