#ifndef __Win32MinGWSupport_H__
#define __Win32MinGWSupport_H__
/// This header provides a compatibility layer for some MSVC symbols
/// notably the DirectX SDK.
#ifdef __MINGW32__
#include <stdint.h>
/// define a number of symbols MSVC uses for annotation.
#include <specstrings.h>
#define __in_z
#define __in_z_opt
#ifdef __MINGW64_VERSION_MAJOR
#define __in
#endif
#define UINT8 uint8_t
#define WINAPI_INLINE inline
#define __uuidof(Object) IID_##Object
#endif

#endif
