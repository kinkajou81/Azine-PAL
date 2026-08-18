#include "math.hpp"

#include <math.h>
#include "../compiler/always_inline.hpp"

namespace azine {
always_inline float acos(float x) {
    return acosf(x);
}

always_inline double acos(double x) {
    return ::acos(x);
}

always_inline long double acos(long double x) {
    return acosl(x);
}

always_inline float acosh(float x) {
    return acoshf(x);
}

always_inline double acosh(double x) {
    return ::acosh(x);
}

always_inline long double acosh(long double x) {
    return acoshl(x);
}

always_inline float asin(float x) {
    return asinf(x);
}

always_inline double asin(double x) {
    return ::asin(x);
}

always_inline long double asin(long double x) {
    return asinl(x);
}

always_inline float asinh(float x) {
    return asinhf(x);
}

always_inline double asinh(double x) {
    return ::asinh(x);
}

always_inline long double asinh(long double x) {
    return asinhl(x);
}

always_inline float atan(float x) {
    return atanf(x);
}

always_inline double atan(double x) {
    return ::atan(x);
}

always_inline long double atan(long double x) {
    return atanl(x);
}

always_inline float atanh(float x) {
    return atanhf(x);
}

always_inline double atanh(double x) {
    return ::atanh(x);
}

always_inline long double atanh(long double x) {
    return atanhl(x);
}

always_inline float atan2(float x, float y) {
    return atan2f(x, y);
}

always_inline double atan2(double x, double y) {
    return ::atan2(x, y);
}

always_inline long double atan2(long double x, long double y) {
    return atan2l(x, y);
}

always_inline float cbrt(float x) {
    return cbrtf(x);
}

always_inline double cbrt(double x) {
    return ::cbrt(x);
}

always_inline long double cbrt(long double x) {
    return cbrtl(x);
}

always_inline float ceil(float x) {
    return ceilf(x);
}

always_inline double ceil(double x) {
    return ::ceil(x);
}

always_inline long double cail(long double x) {
    return ceill(x);
}

always_inline float copysign(float x, float y) {
    return copysignf(x, y);
}

always_inline double copysign(double x, double y) {
    return ::copysign(x, y);
}

always_inline long double copysign(long double x, long double y) {
    return copysignl(x, y);
}

always_inline float cos(float x) {
    return cosf(x);
}

always_inline double cos(double x) {
    return ::cos(x);
}

always_inline long double cos(long double x) {
    return cosl(x);
}

always_inline float cosh(float x) {
    return coshf(x);
}

always_inline double cosh(double x) {
    return ::cosh(x);
}

always_inline long double cosh(long double x) {
    return coshl(x);
}

always_inline float erf(float x) {
    return erff(x);
}

always_inline double erf(double x) {
    return ::erf(x);
}

always_inline long double erf(long double x) {
    return erfl(x);
}

always_inline float erfc(float x) {
    return erfcf(x);
}

always_inline double erfc(double x) {
    return ::erfc(x);
}

always_inline long double erfc(long double x) {
    return erfcl(x);
}

always_inline float exp(float x) {
    return expf(x);
}

always_inline double exp(double x) {
    return ::exp(x);
}

always_inline long double exp(long double x) {
    return expl(x);
}

always_inline float exp2(float x) {
    return exp2f(x);
}

always_inline double exp2(double x) {
    return ::exp2(x);
}

always_inline long double exp2(long double x) {
    return exp2l(x);
}

always_inline float expm1(float x) {
    return expm1f(x);
}

always_inline double expm1(double x) {
    return ::expm1(x);
}

always_inline long double expm1(long double x) {
    return expm1l(x);
}

always_inline float abs(float x) {
    return fabsf(x);
}

always_inline double abs(double x) {
    return fabs(x);
}

always_inline long double abs(long double x) {
    return fabsl(x);
}

always_inline float dim(float x, float y) {
    return fdimf(x, y);
}

always_inline double dim(double x, double y) {
    return fdim(x, y);
}

always_inline long double dim(long double x, long double y) {
    return fdiml(x, y);
}

always_inline float floor(float x) {
    return floorf(x);
}

always_inline double floor(double x) {
    return ::floor(x);
}

always_inline long double floor(long double x) {
    return floorl(x);
}

always_inline float fma(float x, float y, float z) {
    return fmaf(x, y, z);
}

always_inline double fma(double x, double y, double z) {
    return ::fma(x, y, z);
}

always_inline long double fma(long double x, long double y, long double z) {
    return fmal(x, y, z);
}

always_inline float max(float x, float y) {
    return fmaxf(x, y);
}

always_inline double max(double x, double y) {
    return fmax(x, y);
}

always_inline long double max(long double x, long double y) {
    return fmaxl(x, y);
}

always_inline float min(float x, float y) {
    return fminf(x, y);
}

always_inline double min(double x, double y) {
    return fmin(x, y);
}

always_inline long double min(long double x, long double y) {
    return fminl(x, y);
}

always_inline float mod(float x, float y) {
    return fmodf(x, y);
}

always_inline double mod(double x, double y) {
    return fmod(x, y);
}

always_inline long double mod(long double x, long double y) {
    return fmodl(x, y);
}

always_inline float frexp(float x, int* y) {
    return frexpf(x, y);
}

always_inline double frexp(double x, int* y) {
    return ::frexp(x, y);
}

always_inline long double frexp(long double x, int* y) {
    return frexpl(x, y);
}

always_inline float hypot(float x, float y) {
    return hypotf(x, y);
}

always_inline double hypot(double x, float y) {
    return ::hypot(x, y);
}

always_inline long double hypot(long double x, long double y) {
    return hypotl(x, y);
}

always_inline int ilogb(float x) {
    return ilogbf(x);
}

always_inline int ilogb(double x) {
    return ::ilogb(x);
}

always_inline int ilogb(long double x) {
    return ilogbl(x);
}

always_inline double j0(double x) {
    return ::j0(x);
}

always_inline double j1(double x) {
    return ::j1(x);
}

always_inline double jn(int x, double y) {
    return ::jn(x, y);
}

always_inline float ldexp(float x, float y) {
    return ldexpf(x, y);
}

always_inline double ldexp(double x, double y) {
    return ::ldexp(x, y);
}

always_inline long double ldexp(long double x, long double y) {
    return ldexpl(x, y);
}

always_inline float lgamma(float x) {
    return lgammaf(x);
}

always_inline double lgamma(double x) {
    return ::lgamma(x);
}

always_inline long double lgamma(long double x) {
    return lgammal(x);
}

always_inline long long llrint(float x) {
    return llrintf(x);
}

always_inline long long llrint(double x) {
    return ::llrint(x);
}

always_inline long long llrint(long double x) {
    return llrintl(x);
}

always_inline long long llround(float x) {
    return llroundf(x);
}

always_inline long long llround(double x) {
    return ::llround(x);
}

always_inline long long llround(long double x) {
    return llroundl(x);
}

always_inline float log(float x) {
    return logf(x);
}

always_inline double log(double x) {
    return ::log(x);
}

always_inline long double log(long double x) {
    return logl(x);
}

always_inline float log10(float x) {
    return log10f(x);
}

always_inline double log10(double x) {
    return ::log10(x);
}

always_inline long double log10(long double x) {
    return log10l(x);
}


always_inline float log1p(float x) {
    return log1pf(x);
}

always_inline double log1p(double x) {
    return ::log1p(x);
}

always_inline long double log1p(long double x) {
    return log1pl(x);
}


always_inline float log2(float x) {
    return log2f(x);
}

always_inline double log2(double x) {
    return ::log2(x);
}

always_inline long double log2(long double x) {
    return log2l(x);
}

always_inline float logb(float x) {
    return logbf(x);
}

always_inline double logb(double x) {
    return ::logb(x);
}

always_inline long double logb(long double x) {
    return logbl(x);
}

always_inline float lrint(float x) {
    return lrintf(x);
}

always_inline double lrint(double x) {
    return ::lrint(x);
}

always_inline long double lrint(long double x) {
    return lrintl(x);
}

always_inline float lround(float x) {
    return lroundf(x);
}

always_inline double lround(double x) {
    return ::lround(x);
}

always_inline long double lround(long double x) {
    return lroundl(x);
}

always_inline float modf(float x, float* y) {
    return modff(x, y);
}

always_inline double modf(double x, double* y) {
    return ::modf(x, y);
}

always_inline long double modf(long double x, long double* y) {
    return modfl(x, y);
}

always_inline float nanf(const char* x) {
    return nanf(x);
}

always_inline double nan(const char* x) {
    return ::nan(x);
}

always_inline long double nanl(const char* x) {
    return nanl(x);
}

always_inline float nearbyint(float x) {
    return nearbyintf(x);
}

always_inline double nearbyint(double x) {
    return ::nearbyint(x);
}

always_inline long double nearbyint(long double x) {
    return nearbyintl(x);
}

always_inline float nextafter(float x, float y) {
    return nextafterf(x, y);
}

always_inline double nextafter(double x, double y) {
    return ::nextafter(x, y);
}

always_inline long double nextafter(long double x, long double y) {
    return nextafterl(x, y);
}

always_inline float nexttoward(float x, float y) {
    return nexttowardf(x, y);
}

always_inline double nexttoward(double x, double y) {
    return ::nexttoward(x, y);
}

always_inline long double nexttoward(long double x, long double y) {
    return nexttowardl(x, y);
}

always_inline float pow(float x, float y) {
    return powf(x, y);
}

always_inline double pow(double x, double y) {
    return ::pow(x, y);
}

always_inline long double pow(long double x, long double y) {
    return powl(x, y);
}

always_inline float remainder(float x, float y) {
    return remainderf(x, y);
}

always_inline double remainder(double x, double y) {
    return ::remainder(x, y);
}

always_inline long double remainder(long double x, long double y) {
    return remainderl(x, y);
}

always_inline float remquo(float x, float y, int* z) {
    return remquof(x, y, z);
}

always_inline double remquo(double x, double y, int* z) {
    return ::remquo(x, y, z);
}

always_inline long double remquo(long double x, long double y, int* z) {
    return remquol(x, y, z);
}

always_inline float rint(float x) {
    return rintf(x);
}

always_inline double rint(double x) {
    return ::rint(x);
}

always_inline long double rint(long double x) {
    return rintl(x);
}

always_inline float round(float x) {
    return roundf(x);
}

always_inline double round(double x) {
    return ::round(x);
}

always_inline long double round(long double x) {
    return roundl(x);
}

always_inline float scalbln(float x, long y) {
    return scalblnf(x, y);
}

always_inline double scalbln(double x, long y) {
    return ::scalbln(x, y);
}

always_inline long double scalbln(long double x, long y) {
    return scalblnl(x, y);
}

always_inline float scalbn(float x, int y) {
    return scalbnf(x, y);
}

always_inline double scalbn(double x, int y) {
    return ::scalbn(x, y);
}

always_inline long double scalbn(long double x, int y) {
    return scalbnl(x, y);
}

always_inline float sin(float x) {
    return sinf(x);
}

always_inline double sin(double x) {
    return ::sin(x);
}

always_inline long double sin(long double x) {
    return sinl(x);
}

always_inline float sinh(float x) {
    return sinhf(x);
}

always_inline double sinh(double x) {
    return ::sinh(x);
}

always_inline long double sinh(long double x) {
    return sinhl(x);
}

always_inline float sqrt(float x) {
    return sqrtf(x);
}

always_inline double sqrt(double x) {
    return ::sqrt(x);
}

always_inline long double sqrt(long double x) {
    return sqrtl(x);
}

always_inline float tan(float x) {
    return tanf(x);
}

always_inline double tan(double x) {
    return ::tan(x);
}

always_inline long double tan(long double x) {
    return tanl(x);
}

always_inline float tanh(float x) {
    return tanhf(x);
}

always_inline double tanh(double x) {
    return ::tanh(x);
}

always_inline long double tanh(long double x) {
    return tanhl(x);
}

always_inline float tgamma(float x) {
    return tgammaf(x);
}

always_inline double tgamma(double x) {
    return ::tgamma(x);
}

always_inline long double tgamma(long double x) {
    return tgammal(x);
}

always_inline float trunc(float x) {
    return truncf(x);
}

always_inline double trunc(double x) {
    return ::trunc(x);
}

always_inline long double trunc(long double x) {
    return truncl(x);
}

always_inline double y0(double x) {
    return ::y0(x);
}

always_inline double y1(double x) {
    return ::y1(x);
}

always_inline double yn(int x, double y) {
    return ::yn(x, y);
}
}