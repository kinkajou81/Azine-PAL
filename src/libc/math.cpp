#include "math.hpp"

#include <math.h>
#include <cmath>

namespace azine {
const float huge_valf = HUGE_VALF;
const double huge_val = HUGE_VAL;
const long double huge_vall = HUGE_VALL;

const float infinity = INFINITY;

const float nan = NAN;

const int math_error_handling = math_errhandling;
const int math_errno = MATH_ERRNO;
const int math_errexcept = MATH_ERREXCEPT;

constexpr float acos(float x) {
    return std::acosf(x);
}

constexpr double acos(double x) {
    return std::acos(x);
}

constexpr long double acos(long double x) {
    return std::acosl(x);
}

constexpr float acosh(float x) {
    return std::acoshf(x);
}

constexpr double acosh(double x) {
    return std::acosh(x);
}

constexpr long double acosh(long double x) {
    return std::acoshl(x);
}

constexpr float asin(float x) {
    return std::asinf(x);
}

constexpr double asin(double x) {
    return std::asin(x);
}

constexpr long double asin(long double x) {
    return std::asinl(x);
}

constexpr float asinh(float x) {
    return std::asinhf(x);
}

constexpr double asinh(double x) {
    return std::asinh(x);
}

constexpr long double asinh(long double x) {
    return std::asinhl(x);
}

constexpr float atan(float x) {
    return std::atanf(x);
}

constexpr double atan(double x) {
    return std::atan(x);
}

constexpr long double atan(long double x) {
    return std::atanl(x);
}

constexpr float atanh(float x) {
    return std::atanhf(x);
}

constexpr double atanh(double x) {
    return std::atanh(x);
}

constexpr long double atanh(long double x) {
    return std::atanhl(x);
}

constexpr float atan2(float x, float y) {
    return std::atan2f(x, y);
}

constexpr double atan2(double x, double y) {
    return std::atan2(x, y);
}

constexpr long double atan2(long double x, long double y) {
    return std::atan2l(x, y);
}

constexpr float cbrt(float x) {
    return std::cbrtf(x);
}

constexpr double cbrt(double x) {
    return std::cbrt(x);
}

constexpr long double cbrt(long double x) {
    return std::cbrtl(x);
}

constexpr float ceil(float x) {
    return std::ceilf(x);
}

constexpr double ceil(double x) {
    return std::ceil(x);
}

constexpr long double cail(long double x) {
    return std::ceill(x);
}

constexpr float copysign(float x, float y) {
    return std::copysignf(x, y);
}

constexpr double copysign(double x, double y) {
    return std::copysign(x, y);
}

constexpr long double copysign(long double x, long double y) {
    return std::copysignl(x, y);
}

constexpr float cos(float x) {
    return std::cosf(x);
}

constexpr double cos(double x) {
    return std::cos(x);
}

constexpr long double cos(long double x) {
    return std::cosl(x);
}

constexpr float cosh(float x) {
    return std::coshf(x);
}

constexpr double cosh(double x) {
    return std::cosh(x);
}

constexpr long double cosh(long double x) {
    return std::coshl(x);
}

constexpr float erf(float x) {
    return std::erff(x);
}

constexpr double erf(double x) {
    return std::erf(x);
}

constexpr long double erf(long double x) {
    return std::erfl(x);
}

constexpr float erfc(float x) {
    return std::erfcf(x);
}

constexpr double erfc(double x) {
    return std::erfc(x);
}

constexpr long double erfc(long double x) {
    return std::erfcl(x);
}

constexpr float exp(float x) {
    return std::expf(x);
}

constexpr double exp(double x) {
    return std::exp(x);
}

constexpr long double exp(long double x) {
    return std::expl(x);
}

constexpr float exp2(float x) {
    return std::exp2f(x);
}

constexpr double exp2(double x) {
    return std::exp2(x);
}

constexpr long double exp2(long double x) {
    return std::exp2l(x);
}

constexpr float expm1(float x) {
    return std::expm1f(x);
}

constexpr double expm1(double x) {
    return std::expm1(x);
}

constexpr long double expm1(long double x) {
    return std::expm1l(x);
}

constexpr float abs(float x) {
    return std::fabsf(x);
}

constexpr double abs(double x) {
    return std::fabs(x);
}

constexpr long double abs(long double x) {
    return std::fabsl(x);
}

constexpr float dim(float x, float y) {
    return std::fdimf(x, y);
}

constexpr double dim(double x, double y) {
    return std::fdim(x, y);
}

constexpr long double dim(long double x, long double y) {
    return std::fdiml(x, y);
}

constexpr float floor(float x) {
    return std::floorf(x);
}

constexpr double floor(double x) {
    return std::floor(x);
}

constexpr long double floor(long double x) {
    return std::floorl(x);
}

constexpr float fma(float x, float y, float z) {
    return std::fmaf(x, y, z);
}

constexpr double fma(double x, double y, double z) {
    return std::fma(x, y, z);
}

constexpr long double fma(long double x, long double y, long double z) {
    return std::fmal(x, y, z);
}

constexpr float max(float x, float y) {
    return std::fmaxf(x, y);
}

constexpr double max(double x, double y) {
    return std::fmax(x, y);
}

constexpr long double max(long double x, long double y) {
    return std::fmaxl(x, y);
}

constexpr float min(float x, float y) {
    return std::fminf(x, y);
}

constexpr double min(double x, double y) {
    return std::fmin(x, y);
}

constexpr long double min(long double x, long double y) {
    return std::fminl(x, y);
}

constexpr float mod(float x, float y) {
    return std::fmodf(x, y);
}

constexpr double mod(double x, double y) {
    return std::fmod(x, y);
}

constexpr long double mod(long double x, long double y) {
    return std::fmodl(x, y);
}

constexpr float frexp(float x, int* y) {
    return std::frexpf(x, y);
}

constexpr double frexp(double x, int* y) {
    return std::frexp(x, y);
}

constexpr long double frexp(long double x, int* y) {
    return std::frexpl(x, y);
}

constexpr float hypot(float x, float y) {
    return std::hypotf(x, y);
}

constexpr double hypot(double x, float y) {
    return std::hypot(x, y);
}

constexpr long double hypot(long double x, long double y) {
    return std::hypotl(x, y);
}

constexpr int ilogb(float x) {
    return std::ilogbf(x);
}

constexpr int ilogb(double x) {
    return std::ilogb(x);
}

constexpr int ilogb(long double x) {
    return std::ilogbl(x);
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
    return std::ldexpf(x, y);
}

constexpr double ldexp(double x, double y) {
    return std::ldexp(x, y);
}

constexpr long double ldexp(long double x, long double y) {
    return std::ldexpl(x, y);
}

constexpr float lgamma(float x) {
    return std::lgammaf(x);
}

constexpr double lgamma(double x) {
    return std::lgamma(x);
}

constexpr long double lgamma(long double x) {
    return std::lgammal(x);
}

constexpr long long llrint(float x) {
    return std::llrintf(x);
}

constexpr long long llrint(double x) {
    return std::llrint(x);
}

constexpr long long llrint(long double x) {
    return std::llrintl(x);
}

constexpr long long llround(float x) {
    return std::llroundf(x);
}

constexpr long long llround(double x) {
    return std::llround(x);
}

constexpr long long llround(long double x) {
    return std::llroundl(x);
}

constexpr float log(float x) {
    return std::logf(x);
}

constexpr double log(double x) {
    return std::log(x);
}

constexpr long double log(long double x) {
    return std::logl(x);
}

constexpr float log10(float x) {
    return std::log10f(x);
}

constexpr double log10(double x) {
    return std::log10(x);
}

constexpr long double log10(long double x) {
    return std::log10l(x);
}


constexpr float log1p(float x) {
    return std::log1pf(x);
}

constexpr double log1p(double x) {
    return std::log1p(x);
}

constexpr long double log1p(long double x) {
    return std::log1pl(x);
}


constexpr float log2(float x) {
    return std::log2f(x);
}

constexpr double log2(double x) {
    return std::log2(x);
}

constexpr long double log2(long double x) {
    return std::log2l(x);
}

constexpr float logb(float x) {
    return std::logbf(x);
}

constexpr double logb(double x) {
    return std::logb(x);
}

constexpr long double logb(long double x) {
    return std::logbl(x);
}

constexpr float lrint(float x) {
    return std::lrintf(x);
}

constexpr double lrint(double x) {
    return std::lrint(x);
}

constexpr long double lrint(long double x) {
    return std::lrintl(x);
}

constexpr float lround(float x) {
    return std::lroundf(x);
}

constexpr double lround(double x) {
    return std::lround(x);
}

constexpr long double lround(long double x) {
    return std::lroundl(x);
}

constexpr float modf(float x, float* y) {
    return std::modff(x, y);
}

constexpr double modf(double x, double* y) {
    return std::modf(x, y);
}

constexpr long double modf(long double x, long double* y) {
    return std::modfl(x, y);
}

constexpr float nanf(const char* x) {
    return std::nanf(x);
}

constexpr double nan(const char* x) {
    return std::nan(x);
}

constexpr long double nanl(const char* x) {
    return std::nanl(x);
}

constexpr float nearbyint(float x) {
    return std::nearbyintf(x);
}

constexpr double nearbyint(double x) {
    return std::nearbyint(x);
}

constexpr long double nearbyint(long double x) {
    return std::nearbyintl(x);
}

constexpr float nextafter(float x, float y) {
    return std::nextafterf(x, y);
}

constexpr double nextafter(double x, double y) {
    return std::nextafter(x, y);
}

constexpr long double nextafter(long double x, long double y) {
    return std::nextafterl(x, y);
}

constexpr float nexttoward(float x, float y) {
    return std::nexttowardf(x, y);
}

constexpr double nexttoward(double x, double y) {
    return std::nexttoward(x, y);
}

constexpr long double nexttoward(long double x, long double y) {
    return std::nexttowardl(x, y);
}

constexpr float pow(float x, float y) {
    return std::powf(x, y);
}

constexpr double pow(double x, double y) {
    return std::pow(x, y);
}

constexpr long double pow(long double x, long double y) {
    return std::powl(x, y);
}

constexpr float remainder(float x, float y) {
    return std::remainderf(x, y);
}

constexpr double remainder(double x, double y) {
    return std::remainder(x, y);
}

constexpr long double remainder(long double x, long double y) {
    return std::remainderl(x, y);
}

constexpr float remquo(float x, float y, int* z) {
    return std::remquof(x, y, z);
}

constexpr double remquo(double x, double y, int* z) {
    return std::remquo(x, y, z);
}

constexpr long double remquo(long double x, long double y, int* z) {
    return std::remquol(x, y, z);
}

constexpr float rint(float x) {
    return std::rintf(x);
}

constexpr double rint(double x) {
    return std::rint(x);
}

constexpr long double rint(long double x) {
    return std::rintl(x);
}

constexpr float round(float x) {
    return std::roundf(x);
}

constexpr double round(double x) {
    return std::round(x);
}

constexpr long double round(long double x) {
    return std::roundl(x);
}

constexpr float scalbln(float x, long y) {
    return std::scalblnf(x, y);
}

constexpr double scalbln(double x, long y) {
    return std::scalbln(x, y);
}

constexpr long double scalbln(long double x, long y) {
    return std::scalblnl(x, y);
}

constexpr float scalbn(float x, int y) {
    return std::scalbnf(x, y);
}

constexpr double scalbn(double x, int y) {
    return std::scalbn(x, y);
}

constexpr long double scalbn(long double x, int y) {
    return std::scalbnl(x, y);
}

constexpr float sin(float x) {
    return std::sinf(x);
}

constexpr double sin(double x) {
    return std::sin(x);
}

constexpr long double sin(long double x) {
    return std::sinl(x);
}

constexpr float sinh(float x) {
    return std::sinhf(x);
}

constexpr double sinh(double x) {
    return std::sinh(x);
}

constexpr long double sinh(long double x) {
    return std::sinhl(x);
}

constexpr float sqrt(float x) {
    return std::sqrtf(x);
}

constexpr double sqrt(double x) {
    return std::sqrt(x);
}

constexpr long double sqrt(long double x) {
    return std::sqrtl(x);
}

constexpr float tan(float x) {
    return std::tanf(x);
}

constexpr double tan(double x) {
    return std::tan(x);
}

constexpr long double tan(long double x) {
    return std::tanl(x);
}

constexpr float tanh(float x) {
    return std::tanhf(x);
}

constexpr double tanh(double x) {
    return std::tanh(x);
}

constexpr long double tanh(long double x) {
    return std::tanhl(x);
}

constexpr float tgamma(float x) {
    return std::tgammaf(x);
}

constexpr double tgamma(double x) {
    return std::tgamma(x);
}

constexpr long double tgamma(long double x) {
    return std::tgammal(x);
}

constexpr float trunc(float x) {
    return std::truncf(x);
}

constexpr double trunc(double x) {
    return std::trunc(x);
}

constexpr long double trunc(long double x) {
    return std::truncl(x);
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