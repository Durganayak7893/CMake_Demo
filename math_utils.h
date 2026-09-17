#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#ifdef _WIN32
    #ifdef MATHLIB_EXPORTS
        #define MATHLIB_API __declspec(dllexport)
    #else
        #define MATHLIB_API __declspec(dllimport)
    #endif
#else
    #define MATHLIB_API
#endif

MATHLIB_API int add(int a, int b);

#endif
