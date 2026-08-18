#include <math.h>
#include "../compiler/always_inline.hpp"

namespace azine {
static always_inline float acos(float x) {
    return acosf(x);
}

static always_inline double acos(double x) {
    return ::acos(x);
}

static always_inline long double acos(long double x) {
    return acosl(x);
}

static always_inline float acosh(float x) {
    return acoshf(x);
}

static always_inline double acosh(double x) {
    return ::acosh(x);
}

static always_inline long double acosh(long double x) {
    return acoshl(x);
}

static always_inline float asin(float x) {
    return asinf(x);
}

static always_inline double asin(double x) {
    return ::asin(x);
}

static always_inline long double asin(long double x) {
    return asinl(x);
}

static always_inline float asinh(float x) {
    return asinhf(x);
}

static always_inline double asinh(double x) {
    return ::asinh(x);
}

static always_inline long double asinh(long double x) {
    return asinhl(x);
}

static always_inline float atan(float x) {
    return atanf(x);
}

static always_inline double atan(double x) {
    return ::atan(x);
}

static always_inline long double atan(long double x) {
    return atanl(x);
}

static always_inline float atanh(float x) {
    return atanhf(x);
}

static always_inline double atanh(double x) {
    return ::atanh(x);
}

static always_inline long double atanh(long double x) {
    return atanhl(x);
}

static always_inline float atan2(float x, float y) {
    return atan2f(x, y);
}

static always_inline double atan2(double x, double y) {
    return ::atan2(x, y);
}

static always_inline long double atan2(long double x, long double y) {
    return atan2l(x, y);
}

static always_inline float cbrt(float x) {
    return cbrtf(x);
}

static always_inline double cbrt(double x) {
    return ::cbrt(x);
}

static always_inline long double cbrt(long double x) {
    return cbrtl(x);
}

static always_inline float ceil(float x) {
    return ceilf(x);
}

static always_inline double ceil(double x) {
    return ::ceil(x);
}

static always_inline long double cail(long double x) {
    return ceill(x);
}

static always_inline float copysign(float x, float y) {
    return copysignf(x, y);
}

static always_inline double copysign(double x, double y) {
    return ::copysign(x, y);
}

static always_inline long double copysign(long double x, long double y) {
    return copysignl(x, y);
}

static always_inline float cos(float x) {
    return cosf(x);
}

static always_inline double cos(double x) {
    return ::cos(x);
}

static always_inline long double cos(long double x) {
    return cosl(x);
}

static always_inline float cosh(float x) {
    return coshf(x);
}

static always_inline double cosh(double x) {
    return ::cosh(x);
}

static always_inline long double cosh(long double x) {
    return coshl(x);
}

static always_inline float erf(float x) {
    return erff(x);
}

static always_inline double erf(double x) {
    return ::erf(x);
}

static always_inline long double erf(long double x) {
    return erfl(x);
}

static always_inline float erfc(float x) {
    return erfcf(x);
}

static always_inline double erfc(double x) {
    return ::erfc(x);
}

static always_inline long double erfc(long double x) {
    return erfcl(x);
}

static always_inline float exp(float x) {
    return expf(x);
}

static always_inline double exp(double x) {
    return ::exp(x);
}

static always_inline long double exp(long double x) {
    return expl(x);
}

static always_inline float exp2(float x) {
    return exp2f(x);
}

static always_inline double exp2(double x) {
    return ::exp2(x);
}

static always_inline long double exp2(long double x) {
    return exp2l(x);
}

static always_inline float expm1(float x) {
    return expm1f(x);
}

static always_inline double expm1(double x) {
    return ::expm1(x);
}

static always_inline long double expm1(long double x) {
    return expm1l(x);
}

static always_inline float abs(float x) {
    return fabsf(x);
}

static always_inline double abs(double x) {
    return fabs(x);
}

static always_inline long double abs(long double x) {
    return fabsl(x);
}

static always_inline float dim(float x, float y) {
    return fdimf(x, y);
}

static always_inline double dim(double x, double y) {
    return fdim(x, y);
}

static always_inline long double dim(long double x, long double y) {
    return fdiml(x, y);
}

static always_inline float floor(float x) {
    return floorf(x);
}

static always_inline double floor(double x) {
    return ::floor(x);
}

static always_inline long double floor(long double x) {
    return floorl(x);
}

static always_inline float fma(float x, float y, float z) {
    return fmaf(x, y, z);
}

static always_inline double fma(double x, double y, double z) {
    return ::fma(x, y, z);
}

static always_inline long double fma(long double x, long double y, long double z) {
    return fmal(x, y, z);
}

static always_inline float max(float x, float y) {
    return fmaxf(x, y);
}

static always_inline double max(double x, double y) {
    return fmax(x, y);
}

static always_inline long double max(long double x, long double y) {
    return fmaxl(x, y);
}

static always_inline float min(float x, float y) {
    return fminf(x, y);
}

static always_inline double min(double x, double y) {
    return fmin(x, y);
}

static always_inline long double min(long double x, long double y) {
    return fminl(x, y);
}

static always_inline float mod(float x, float y) {
    return fmodf(x, y);
}

static always_inline double mod(double x, double y) {
    return fmod(x, y);
}

static always_inline long double mod(long double x, long double y) {
    return fmodl(x, y);
}

static always_inline float frexp(float x, int* y) {
    return frexpf(x, y);
}

static always_inline double frexp(double x, int* y) {
    return ::frexp(x, y);
}

static always_inline long double frexp(long double x, int* y) {
    return frexpl(x, y);
}

static always_inline float hypot(float x, float y) {
    return hypotf(x, y);
}

static always_inline double hypot(double x, float y) {
    return ::hypot(x, y);
}

static always_inline long double hypot(long double x, long double y) {
    return hypotl(x, y);
}

static always_inline int ilogb(float x) {
    return ilogbf(x);
}

static always_inline int ilogb(double x) {
    return ::ilogb(x);
}

static always_inline int ilogb(long double x) {
    return ilogbl(x);
}

static always_inline double j0(double x) {
    return ::j0(x);
}

static always_inline double j1(double x) {
    return ::j1(x);
}

static always_inline double jn(int x, double y) {
    return ::jn(x, y);
}

static always_inline float ldexp(float x, float y) {
    return ldexpf(x, y);
}

static always_inline double ldexp(double x, double y) {
    return ::ldexp(x, y);
}

static always_inline long double ldexp(long double x, long double y) {
    return ldexpl(x, y);
}

static always_inline float lgamma(float x) {
    return lgammaf(x);
}

static always_inline double lgamma(double x) {
    return ::lgamma(x);
}

static always_inline long double lgamma(long double x) {
    return lgammal(x);
}

static always_inline long long llrint(float x) {
    return llrintf(x);
}

static always_inline long long llrint(double x) {
    return ::llrint(x);
}

static always_inline long long llrint(long double x) {
    return llrintl(x);
}

static always_inline long long llround(float x) {
    return llroundf(x);
}

static always_inline long long llround(double x) {
    return ::llround(x);
}

static always_inline long long llround(long double x) {
    return llroundl(x);
}

static always_inline float log(float x) {
    return logf(x);
}

static always_inline double log(double x) {
    return ::log(x);
}

static always_inline long double log(long double x) {
    return logl(x);
}

static always_inline float log10(float x) {
    return log10f(x);
}

static always_inline double log10(double x) {
    return ::log10(x);
}

static always_inline long double log10(long double x) {
    return log10l(x);
}


static always_inline float log1p(float x) {
    return log1pf(x);
}

static always_inline double log1p(double x) {
    return ::log1p(x);
}

static always_inline long double log1p(long double x) {
    return log1pl(x);
}


static always_inline float log2(float x) {
    return log2f(x);
}

static always_inline double log2(double x) {
    return ::log2(x);
}

static always_inline long double log2(long double x) {
    return log2l(x);
}

static always_inline float logb(float x) {
    return logbf(x);
}

static always_inline double logb(double x) {
    return ::logb(x);
}

static always_inline long double logb(long double x) {
    return logbl(x);
}

static always_inline float lrint(float x) {
    return lrintf(x);
}

static always_inline double lrint(double x) {
    return ::lrint(x);
}

static always_inline long double lrint(long double x) {
    return lrintl(x);
}

static always_inline float lround(float x) {
    return lroundf(x);
}

static always_inline double lround(double x) {
    return ::lround(x);
}

static always_inline long double lround(long double x) {
    return lroundl(x);
}

static always_inline float modf(float x, float* y) {
    return modff(x, y);
}

static always_inline double modf(double x, double* y) {
    return ::modf(x, y);
}

static always_inline long double modf(long double x, long double* y) {
    return modfl(x, y);
}

static always_inline float nanf(const char* x) {
    return nanf(x);
}

static always_inline double nan(const char* x) {
    return ::nan(x);
}

static always_inline long double nanl(const char* x) {
    return nanl(x);
}

static always_inline float nearbyint(float x) {
    return nearbyintf(x);
}

static always_inline double nearbyint(double x) {
    return ::nearbyint(x);
}

static always_inline long double nearbyint(long double x) {
    return nearbyintl(x);
}

static always_inline float nextafter(float x, float y) {
    return nextafterf(x, y);
}

static always_inline double nextafter(double x, double y) {
    return ::nextafter(x, y);
}

static always_inline long double nextafter(long double x, long double y) {
    return nextafterl(x, y);
}

static always_inline float nexttoward(float x, float y) {
    return nexttowardf(x, y);
}

static always_inline double nexttoward(double x, double y) {
    return ::nexttoward(x, y);
}

static always_inline long double nexttoward(long double x, long double y) {
    return nexttowardl(x, y);
}

static always_inline float pow(float x, float y) {
    return powf(x, y);
}

static always_inline double pow(double x, double y) {
    return ::pow(x, y);
}

static always_inline long double pow(long double x, long double y) {
    return powl(x, y);
}

static always_inline float remainder(float x, float y) {
    return remainderf(x, y);
}

static always_inline double remainder(double x, double y) {
    return ::remainder(x, y);
}

static always_inline long double remainder(long double x, long double y) {
    return remainderl(x, y);
}

static always_inline float remquo(float x, float y, int* z) {
    return remquof(x, y, z);
}

static always_inline double remquo(double x, double y, int* z) {
    return ::remquo(x, y, z);
}

static always_inline long double remquo(long double x, long double y, int* z) {
    return remquol(x, y, z);
}

static always_inline float rint(float x) {
    return rintf(x);
}

static always_inline double rint(double x) {
    return ::rint(x);
}

static always_inline long double rint(long double x) {
    return rintl(x);
}

static always_inline float round(float x) {
    return roundf(x);
}

static always_inline double round(double x) {
    return ::round(x);
}

static always_inline long double round(long double x) {
    return roundl(x);
}

static always_inline float scalbln(float x, long y) {
    return scalblnf(x, y);
}

static always_inline double scalbln(double x, long y) {
    return ::scalbln(x, y);
}

static always_inline long double scalbln(long double x, long y) {
    return scalblnl(x, y);
}

static always_inline float scalbn(float x, int y) {
    return scalbnf(x, y);
}

static always_inline double scalbn(double x, int y) {
    return ::scalbn(x, y);
}

static always_inline long double scalbn(long double x, int y) {
    return scalbnl(x, y);
}

static always_inline float sin(float x) {
    return sinf(x);
}

static always_inline double sin(double x) {
    return ::sin(x);
}

static always_inline long double sin(long double x) {
    return sinl(x);
}

static always_inline float sinh(float x) {
    return sinhf(x);
}

static always_inline double sinh(double x) {
    return ::sinh(x);
}

static always_inline long double sinh(long double x) {
    return sinhl(x);
}

static always_inline float sqrt(float x) {
    return sqrtf(x);
}

static always_inline double sqrt(double x) {
    return ::sqrt(x);
}

static always_inline long double sqrt(long double x) {
    return sqrtl(x);
}

static always_inline float tan(float x) {
    return tanf(x);
}

static always_inline double tan(double x) {
    return ::tan(x);
}

static always_inline long double tan(long double x) {
    return tanl(x);
}

static always_inline float tanh(float x) {
    return tanhf(x);
}

static always_inline double tanh(double x) {
    return ::tanh(x);
}

static always_inline long double tanh(long double x) {
    return tanhl(x);
}

static always_inline float tgamma(float x) {
    return tgammaf(x);
}

static always_inline double tgamma(double x) {
    return ::tgamma(x);
}

static always_inline long double tgamma(long double x) {
    return tgammal(x);
}

static always_inline float trunc(float x) {
    return truncf(x);
}

static always_inline double trunc(double x) {
    return ::trunc(x);
}

static always_inline long double trunc(long double x) {
    return truncl(x);
}

static always_inline double y0(double x) {
    return ::y0(x);
}

static always_inline double y1(double x) {
    return ::y1(x);
}

static always_inline double yn(int x, double y) {
    return ::yn(x, y);
}
}