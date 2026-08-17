#include "../system.hpp"

#ifdef __GCC_COMPAT__
#   define always_inline __attribute__((always_inline))
#elifdef __MSVC__
#   define always_inline __forceinline
#else
#   define always_inline
#endif