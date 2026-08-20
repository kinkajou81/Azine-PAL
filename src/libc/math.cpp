#include "math.hpp"

#include <math.h>

namespace azine {
constexpr float acos(float x) {
    return acosf(x);
}

constexpr double acos(double x) {
    return ::acos(x);
}

constexpr long double acos(long double x) {
    return acosl(x);
}

constexpr float acosh(float x) {
    return acoshf(x);
}

constexpr double acosh(double x) {
    return ::acosh(x);
}

constexpr long double acosh(long double x) {
    return acoshl(x);
}

constexpr float asin(float x) {
    return asinf(x);
}

constexpr double asin(double x) {
    return ::asin(x);
}

constexpr long double asin(long double x) {
    return asinl(x);
}

constexpr float asinh(float x) {
    return asinhf(x);
}

constexpr double asinh(double x) {
    return ::asinh(x);
}

constexpr long double asinh(long double x) {
    return asinhl(x);
}

constexpr float atan(float x) {
    return atanf(x);
}

constexpr double atan(double x) {
    return ::atan(x);
}

constexpr long double atan(long double x) {
    return atanl(x);
}

constexpr float atanh(float x) {
    return atanhf(x);
}

constexpr double atanh(double x) {
    return ::atanh(x);
}

constexpr long double atanh(long double x) {
    return atanhl(x);
}

constexpr float atan2(float x, float y) {
    return atan2f(x, y);
}

constexpr double atan2(double x, double y) {
    return ::atan2(x, y);
}

constexpr long double atan2(long double x, long double y) {
    return atan2l(x, y);
}

constexpr float cbrt(float x) {
    return cbrtf(x);
}

constexpr double cbrt(double x) {
    return ::cbrt(x);
}

constexpr long double cbrt(long double x) {
    return cbrtl(x);
}

constexpr float ceil(float x) {
    return ceilf(x);
}

constexpr double ceil(double x) {
    return ::ceil(x);
}

constexpr long double cail(long double x) {
    return ceill(x);
}

constexpr float copysign(float x, float y) {
    return copysignf(x, y);
}

constexpr double copysign(double x, double y) {
    return ::copysign(x, y);
}

constexpr long double copysign(long double x, long double y) {
    return copysignl(x, y);
}

constexpr float cos(float x) {
    return cosf(x);
}

constexpr double cos(double x) {
    return ::cos(x);
}

constexpr long double cos(long double x) {
    return cosl(x);
}

constexpr float cosh(float x) {
    return coshf(x);
}

constexpr double cosh(double x) {
    return ::cosh(x);
}

constexpr long double cosh(long double x) {
    return coshl(x);
}

constexpr float erf(float x) {
    return erff(x);
}

constexpr double erf(double x) {
    return ::erf(x);
}

constexpr long double erf(long double x) {
    return erfl(x);
}

constexpr float erfc(float x) {
    return erfcf(x);
}

constexpr double erfc(double x) {
    return ::erfc(x);
}

constexpr long double erfc(long double x) {
    return erfcl(x);
}

constexpr float exp(float x) {
    return expf(x);
}

constexpr double exp(double x) {
    return ::exp(x);
}

constexpr long double exp(long double x) {
    return expl(x);
}

constexpr float exp2(float x) {
    return exp2f(x);
}

constexpr double exp2(double x) {
    return ::exp2(x);
}

constexpr long double exp2(long double x) {
    return exp2l(x);
}

constexpr float expm1(float x) {
    return expm1f(x);
}

constexpr double expm1(double x) {
    return ::expm1(x);
}

constexpr long double expm1(long double x) {
    return expm1l(x);
}

constexpr float abs(float x) {
    return fabsf(x);
}

constexpr double abs(double x) {
    return fabs(x);
}

constexpr long double abs(long double x) {
    return fabsl(x);
}

constexpr float dim(float x, float y) {
    return fdimf(x, y);
}

constexpr double dim(double x, double y) {
    return fdim(x, y);
}

constexpr long double dim(long double x, long double y) {
    return fdiml(x, y);
}

constexpr float floor(float x) {
    return floorf(x);
}

constexpr double floor(double x) {
    return ::floor(x);
}

constexpr long double floor(long double x) {
    return floorl(x);
}

constexpr float fma(float x, float y, float z) {
    return fmaf(x, y, z);
}

constexpr double fma(double x, double y, double z) {
    return ::fma(x, y, z);
}

constexpr long double fma(long double x, long double y, long double z) {
    return fmal(x, y, z);
}

constexpr float max(float x, float y) {
    return fmaxf(x, y);
}

constexpr double max(double x, double y) {
    return fmax(x, y);
}

constexpr long double max(long double x, long double y) {
    return fmaxl(x, y);
}

constexpr float min(float x, float y) {
    return fminf(x, y);
}

constexpr double min(double x, double y) {
    return fmin(x, y);
}

constexpr long double min(long double x, long double y) {
    return fminl(x, y);
}

constexpr float mod(float x, float y) {
    return fmodf(x, y);
}

constexpr double mod(double x, double y) {
    return fmod(x, y);
}

constexpr long double mod(long double x, long double y) {
    return fmodl(x, y);
}

constexpr float frexp(float x, int* y) {
    return frexpf(x, y);
}

constexpr double frexp(double x, int* y) {
    return ::frexp(x, y);
}

constexpr long double frexp(long double x, int* y) {
    return frexpl(x, y);
}

constexpr float hypot(float x, float y) {
    return hypotf(x, y);
}

constexpr double hypot(double x, float y) {
    return ::hypot(x, y);
}

constexpr long double hypot(long double x, long double y) {
    return hypotl(x, y);
}

constexpr int ilogb(float x) {
    return ilogbf(x);
}

constexpr int ilogb(double x) {
    return ::ilogb(x);
}

constexpr int ilogb(long double x) {
    return ilogbl(x);
}

constexpr double j0(double x) {
    return ::j0(x);
}

constexpr double j1(double x) {
    return ::j1(x);
}

constexpr double jn(int x, double y) {
    return ::jn(x, y);
}

constexpr float ldexp(float x, float y) {
    return ldexpf(x, y);
}

constexpr double ldexp(double x, double y) {
    return ::ldexp(x, y);
}

constexpr long double ldexp(long double x, long double y) {
    return ldexpl(x, y);
}

constexpr float lgamma(float x) {
    return lgammaf(x);
}

constexpr double lgamma(double x) {
    return ::lgamma(x);
}

constexpr long double lgamma(long double x) {
    return lgammal(x);
}

constexpr long long llrint(float x) {
    return llrintf(x);
}

constexpr long long llrint(double x) {
    return ::llrint(x);
}

constexpr long long llrint(long double x) {
    return llrintl(x);
}

constexpr long long llround(float x) {
    return llroundf(x);
}

constexpr long long llround(double x) {
    return ::llround(x);
}

constexpr long long llround(long double x) {
    return llroundl(x);
}

constexpr float log(float x) {
    return logf(x);
}

constexpr double log(double x) {
    return ::log(x);
}

constexpr long double log(long double x) {
    return logl(x);
}

constexpr float log10(float x) {
    return log10f(x);
}

constexpr double log10(double x) {
    return ::log10(x);
}

constexpr long double log10(long double x) {
    return log10l(x);
}


constexpr float log1p(float x) {
    return log1pf(x);
}

constexpr double log1p(double x) {
    return ::log1p(x);
}

constexpr long double log1p(long double x) {
    return log1pl(x);
}


constexpr float log2(float x) {
    return log2f(x);
}

constexpr double log2(double x) {
    return ::log2(x);
}

constexpr long double log2(long double x) {
    return log2l(x);
}

constexpr float logb(float x) {
    return logbf(x);
}

constexpr double logb(double x) {
    return ::logb(x);
}

constexpr long double logb(long double x) {
    return logbl(x);
}

constexpr float lrint(float x) {
    return lrintf(x);
}

constexpr double lrint(double x) {
    return ::lrint(x);
}

constexpr long double lrint(long double x) {
    return lrintl(x);
}

constexpr float lround(float x) {
    return lroundf(x);
}

constexpr double lround(double x) {
    return ::lround(x);
}

constexpr long double lround(long double x) {
    return lroundl(x);
}

constexpr float modf(float x, float* y) {
    return modff(x, y);
}

constexpr double modf(double x, double* y) {
    return ::modf(x, y);
}

constexpr long double modf(long double x, long double* y) {
    return modfl(x, y);
}

constexpr float nanf(const char* x) {
    return nanf(x);
}

constexpr double nan(const char* x) {
    return ::nan(x);
}

constexpr long double nanl(const char* x) {
    return nanl(x);
}

constexpr float nearbyint(float x) {
    return nearbyintf(x);
}

constexpr double nearbyint(double x) {
    return ::nearbyint(x);
}

constexpr long double nearbyint(long double x) {
    return nearbyintl(x);
}

constexpr float nextafter(float x, float y) {
    return nextafterf(x, y);
}

constexpr double nextafter(double x, double y) {
    return ::nextafter(x, y);
}

constexpr long double nextafter(long double x, long double y) {
    return nextafterl(x, y);
}

constexpr float nexttoward(float x, float y) {
    return nexttowardf(x, y);
}

constexpr double nexttoward(double x, double y) {
    return ::nexttoward(x, y);
}

constexpr long double nexttoward(long double x, long double y) {
    return nexttowardl(x, y);
}

constexpr float pow(float x, float y) {
    return powf(x, y);
}

constexpr double pow(double x, double y) {
    return ::pow(x, y);
}

constexpr long double pow(long double x, long double y) {
    return powl(x, y);
}

constexpr float remainder(float x, float y) {
    return remainderf(x, y);
}

constexpr double remainder(double x, double y) {
    return ::remainder(x, y);
}

constexpr long double remainder(long double x, long double y) {
    return remainderl(x, y);
}

constexpr float remquo(float x, float y, int* z) {
    return remquof(x, y, z);
}

constexpr double remquo(double x, double y, int* z) {
    return ::remquo(x, y, z);
}

constexpr long double remquo(long double x, long double y, int* z) {
    return remquol(x, y, z);
}

constexpr float rint(float x) {
    return rintf(x);
}

constexpr double rint(double x) {
    return ::rint(x);
}

constexpr long double rint(long double x) {
    return rintl(x);
}

constexpr float round(float x) {
    return roundf(x);
}

constexpr double round(double x) {
    return ::round(x);
}

constexpr long double round(long double x) {
    return roundl(x);
}

constexpr float scalbln(float x, long y) {
    return scalblnf(x, y);
}

constexpr double scalbln(double x, long y) {
    return ::scalbln(x, y);
}

constexpr long double scalbln(long double x, long y) {
    return scalblnl(x, y);
}

constexpr float scalbn(float x, int y) {
    return scalbnf(x, y);
}

constexpr double scalbn(double x, int y) {
    return ::scalbn(x, y);
}

constexpr long double scalbn(long double x, int y) {
    return scalbnl(x, y);
}

constexpr float sin(float x) {
    return sinf(x);
}

constexpr double sin(double x) {
    return ::sin(x);
}

constexpr long double sin(long double x) {
    return sinl(x);
}

constexpr float sinh(float x) {
    return sinhf(x);
}

constexpr double sinh(double x) {
    return ::sinh(x);
}

constexpr long double sinh(long double x) {
    return sinhl(x);
}

constexpr float sqrt(float x) {
    return sqrtf(x);
}

constexpr double sqrt(double x) {
    return ::sqrt(x);
}

constexpr long double sqrt(long double x) {
    return sqrtl(x);
}

constexpr float tan(float x) {
    return tanf(x);
}

constexpr double tan(double x) {
    return ::tan(x);
}

constexpr long double tan(long double x) {
    return tanl(x);
}

constexpr float tanh(float x) {
    return tanhf(x);
}

constexpr double tanh(double x) {
    return ::tanh(x);
}

constexpr long double tanh(long double x) {
    return tanhl(x);
}

constexpr float tgamma(float x) {
    return tgammaf(x);
}

constexpr double tgamma(double x) {
    return ::tgamma(x);
}

constexpr long double tgamma(long double x) {
    return tgammal(x);
}

constexpr float trunc(float x) {
    return truncf(x);
}

constexpr double trunc(double x) {
    return ::trunc(x);
}

constexpr long double trunc(long double x) {
    return truncl(x);
}

constexpr double y0(double x) {
    return ::y0(x);
}

constexpr double y1(double x) {
    return ::y1(x);
}

constexpr double yn(int x, double y) {
    return ::yn(x, y);
}
}