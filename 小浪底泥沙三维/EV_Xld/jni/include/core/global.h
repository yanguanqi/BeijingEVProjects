///#pragma warning(disable:4819)
/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
*
* 文件名称：global.h -- global
* 摘    要：该文件的主要内容为EV_Core项目内核宏定义，变量类型定义以及全局函数的声明
*
* 当前版本：1.0
* 作    者：陈 超
* 完成日期：2011年12月20日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]     [修改内容]
*    1         2011-12-20     陈 超      1.0.0版本的内容声明
*
**/
#ifndef EV_CORE_GLOBAL_H
#define EV_CORE_GLOBAL_H
#pragma once
#include <stdlib.h>
#include <math.h>
#include "core/config.h"
#include "core/platform.h"
///----------------------------------------------------------------------全局宏相关-开始------------------------------------------------------------------------
///内核版本信息标识宏定义
#define EV_VERSION_STR  "1.0.0"   ///字符串形式的版本标识符
#define EV_VERSION      0x010000  ///十六进制形式的版本标识符
#ifdef EV_OS_IOS
#include <string.h>
#else
#include <string>
#endif
#ifdef EV_OS_WIN
#include <WinSock2.h>	/// 该头文件必须加在Windows.h头文件前面
#include <Windows.h>
#endif

#ifndef EV_OS_WIN
#define _stdcall
#define __stdcall
#endif
///外部释放的标记
#define _extfree
///不释放内存的标记：用于导出方法的参数前面表示二次开发人员不用释放内存，底层会自动管理内存
#define _nofree
///动态库及函数调用约定相关宏定义--开始
#if  (defined(_WINDLL) || defined(DLL) || defined(__DLL) || defined(EV_DLL)) && (!defined(EV_DLL_BULID))
#define EV_DLL_BULID   ///动态库编译标识宏，当此宏被定义时核心库会以动态库的形式编译
#endif
#ifdef EV_DLL_BULID
#ifdef EV_CC_MSVC                               ///MSVC才需要的导入导出符号
#define EV_DLL_EXPORT    __declspec(dllexport)  ///动态库导出符
#define EV_DLL_EXPORT_C  extern "C"             ///以兼容的C风格符号形式导出指定函数的动态库导出符
#define EV_DLL_IMPORT    __declspec(dllimport)  ///动态库导入符
#define EV_KERNEL_IMPORT __declspec(dllimport)  ///项目核心库的导入符号
#define EV_DLL_IMPORT_C  extern "C"             ///以兼并容的C风格符号形式导入指定函数的动态库导入符
#else
#define EV_DLL_EXPORT    __attribute__ ((visibility("default")))   ///动态库导出符
#define EV_DLL_EXPORT_C   ///以兼并容的C风格符号形式导出指定函数
#define EV_DLL_IMPORT                           ///动态库导入符
#define EV_KERNEL_IMPORT                        ///项目核心库的导入符号
#define EV_DLL_IMPORT_C                         ///以兼并容的C风格符号形式导入指定函数的动态库导入符
#endif
#else

#ifdef EV_CC_MSVC
#define EV_DLL_EXPORT                            ///动态库导出符
#define EV_DLL_EXPORT_C   extern "C"             ///以兼并容的C风格符号形式导出指定函数
#define EV_DLL_IMPORT                            ///动态库导入符
#define EV_DLL_IMPORT_C   extern "C"             ///以兼并容的C风格符号形式导入指定函数的动态库导入符
#else
#define EV_DLL_EXPORT   __attribute__ ((visibility("default")))                         ///动态库导出符
#define EV_DLL_EXPORT_C    extern "C"                     ///以兼并容的C风格符号形式导出指定函数
#define EV_DLL_IMPORT                           ///动态库导入符
#define EV_DLL_IMPORT_C    extern "C"            ///以兼并容的C风格符号形式导入指定函数的动态库导入符
#endif
#endif
#ifdef EV_BUILD_CORE
#define EV_CORE_DLL EV_DLL_EXPORT
#else
#define EV_CORE_DLL EV_DLL_IMPORT
#endif
///END
#if defined(EV_CC_MSVC)
#define EV_API       __stdcall                  ///EV内核库提供的用户接口函数的修饰符
#pragma warning(disable: 4251)
#pragma warning(disable: 4098)
#else
#define EV_API
#endif
#define ev_internal public
#define ev_private  public
///动态库及函数调用约定相关宏定义--结束
///参数修饰标识宏定义--开始
#ifndef _in
#define _in          ///输入参数的标识宏
#endif
#ifndef _out
#define _out         ///输出参数的标识宏
#endif
#ifndef _inout
#define _inout       ///既输入又输出参数的标识宏
#endif
///参数修饰标识宏定义--结束
///调试信息相关标识宏定义--开始
#if  (defined(_DEBUG) || defined(DEBUG) || defined(__DEBUG)) && (!defined(EV_DEBUG))
#define EV_DEBUG   1///调试信息标识宏，当此宏被定义时核心库才会允许产生调试信息
#else
#define EV_DEBUG   0
#endif
///调试信息相识标识宏定义--结束
///全局常量宏定义--开始
#ifndef NULL
#define NULL (0)                    ///宏值为0，可用于指针初始化
#endif
#define EV_UINT32_MAXLENGTH       10  ///ev_uint32转化成字符串时的最大长度
#ifndef __FILE__
#define __FILE__  0                 ///当前代码行所在的文件名
#endif
#ifndef __LINE__
#define __LINE__  0                 ///当前代码行的行序号
#endif
#ifndef __FUNCTION__
#define __FUNCTION__  "Unknow Function"             ///当前代码所在的函数
#endif
///全局常量宏定义--结束
///接口关键字定义
#define  EV_INTERFACE  class
///#if EV_DEBUG
///#define ev_outputDebugMsg(pDebugMsg, enumMsgType)    EV::ev_outputDebugMsgHandler(pDebugMsg, enumMsgType, __FILE__, __LINE__)
///#else
///#define ev_outputDebugMsg(pDebugMsg, enumMsgType)
///#endif
#if defined(EV_OS_WIN32) && _MSC_VER >= 1400

#define ev_fopen(pFile, filename, mode)    fopen_s(&pFile, filename, mode);
#define ev_fread(pFile, pDst, nDstSize, nElementSize, nCount)  fread_s(pDst, nDstSize, nElementSize, nCount, pFile);
#define ev_fwrite(pFile, pBuffer, nElementSize, nCount)  fwrite(pBuffer, nElementSize, nCount, pFile);
#define ev_strcpy(pDst, nDstSize, pSrc)    strcpy_s(pDst, nDstSize, pSrc);

#else
#define ev_fopen(pFile, filename, mode)    pFile = fopen(filename, mode);
#define ev_fread(pFile, pDst, nDstSize, nElementSize, nCount)  fread(pDst, nElementSize, nCount, pFile);
#define ev_fwrite(pFile, pBuffer, nElementSize, nCount)  fwrite(pBuffer, nElementSize, nCount, pFile);
#define ev_strcpy(pDst, nDstSize, pSrc)    strcpy(pDst, pSrc);
#endif
#define ev_max(a,b)            (((a) > (b)) ? (a) : (b))
#define ev_min(a,b)            (((a) < (b)) ? (a) : (b))
#define ev_abs(a)              ((a) > 0 ? (a) : (-(a)))
#define ev_isBound(a, refer, bound)   ( (a) >= ((refer) - bound) && (a) <= ((refer) + bound) ) ///判断a值是否在参考值refer的bound值上下波动范围内
///函数相关宏定义--结束

///断言宏定义--开始
#ifdef EV_OS_WIN32
#include <crtdbg.h>
#define EV_ASSERT(bool_exp)  _ASSERT(bool_exp);
#elif  defined(EV_OS_WINCE)
#include <Dbgapi.h>
#define EV_ASSERT(bool_exp)  ASSERT(bool_exp);
#else
#if EV_DEBUG
#include <assert.h>
#define EV_ASSERT(bool_exp)  assert(bool_exp);
#else
#define EV_ASSERT(bool_exp)
#endif
#endif

#define EV_MEMALLOC_ASSERT(p)  EV_ASSERT(p != NULL && "memory allocate assert failed")
///断言宏定义--结束
///硬件平台标识宏定义--开始
#if defined(ARCH_ARM) || EV_PLATFORM == EV_PLATFORM_APPLE_IOS
#define EV_ARCH_ARM
#elif defined(ARCH_ALPHA) 
#define EV_ARCH_ALPHA 
#elif defined(ARCH_I386) 
#define EV_ARCH_I386 
#elif defined(ARCH_X86_64) 
#define EV_ARCH_X86_64
#elif defined(ARCH_MACOSX) || EV_PLATFORM == EV_PLATFORM_APPLE 
#define EV_ARCH_MACOSX
#elif defined(ARCH_MIPS) 
#define EV_ARCH_MIPS
#endif
///硬件平台标识宏定义--结束
///应用程序入口宏定义--开始
#if defined(EV_OS_WIN32) || defined(EV_OS_LINUX)
#define ev_main main
#elif defined(EV_OS_WINCE)
#define ev_main wmain
#endif
///应用程序入口宏定义--结束
///数学计算常用变量值定义--开始
/* Definitions of useful mathematical constants
* EV_M_E        - e
* EV_M_LOG2E    - log2(e)
* EV_M_LOG10E   - log10(e)
* EV_M_LN2      - ln(2)
* EV_M_LN10     - ln(10)
* EV_M_PI       - pi
* EV_M_PI_2     - pi/2
* EV_M_PI_4     - pi/4
* EV_M_1_PI     - 1/pi
* EV_M_2_PI     - 2/pi
* EV_M_180_PI   - 180/pi
* EV_M_2_SQRTPI - 2/sqrt(pi)
* EV_M_SQRT2    - sqrt(2)
* EV_M_SQRT1_2  - 1/sqrt(2)
*/
#define EV_M_E                2.71828182845904523536
#define EV_M_LOG2E            1.44269504088896340736
#define EV_M_LOG10E           0.434294481903251827651
#define EV_M_LN2              0.693147180559945309417
#define EV_M_LN10             2.30258509299404568402
#define EV_M_PI               3.14159265358979323846
#define EV_M_PI_2             1.57079632679489661923
#define EV_M_PI_4             0.785398163397448309616
#define EV_M_PI_12            0.2617993877991494365385
#define EV_M_PI_36            0.0872664526997164788461
#define EV_M_PI_64            0.04908738521234051935097
#define EV_M_PI_72            0.04363323129985823942309
#define EV_M_PI_180           0.017453f ///0.01745329251994329576923f
#define EV_M_1_PI             0.318309886183790671538
#define EV_M_2_PI             0.636619772367581343076
#define EV_M_180_PI           57.295779513082323
#define EV_M_2_SQRTPI         1.12837916709551257390
#define EV_M_SQRT2            1.41421356237309504880
#define EV_M_SQRT1_2          0.707106781186547524401
///数学计算常用变量值定义--结束
///消除编译警告相关帮助宏定义--开始
#define EV_UNREFERENCED_PARAMETER(var)    (var);
///消除编译警告相关帮助宏定义--结束
///----------------------------------------------------------------------全局宏相关-结束------------------------------------------------------------------------

///----------------------------------------------------------------------全局变量类型相关-开始------------------------------------------------------------------
///变量类型的跨平台定义--开始
#if defined(EV_CC_MSVC)               ///MSVC++编译器的变量类型定义，只支持MSVC++6.0以上的编译器版本
typedef void                   ev_void;   ///空类型
typedef            char        ev_char;   ///有符号的字符类型，取值范围是-128～127
typedef unsigned   char        ev_uchar;  ///无符号的字符类型，取值范围是0～255
typedef wchar_t                ev_wchar;  ///Unicode字符
typedef unsigned   char        ev_byte;   ///字节类型，取值范围是0x00～0xff
typedef            bool         ev_bool;   ///布尔类型，取值范围是true或false
typedef signed     char        ev_int8;   ///有符号的单字节整型，取值范围是-128～127
typedef unsigned   char        ev_uint8;  ///无符号的单字节整型，取值范围是0～255
typedef signed     short       ev_int16;  ///有符号的双字节整型，取值范围是-32768～32767
typedef unsigned   short       ev_uint16; ///无符号的双字节整型，取值范围是0～65535
typedef signed     int         ev_int32;  ///有符号的四字节整形，取值范围是-2147483648～2147483647
typedef unsigned   int         ev_uint32; ///无符号的四字节整形，取值范围是0～4294967295
typedef signed     __int64     ev_int64;  ///有符号的八字节整形，取值范围是-9223372036854775808～9223372036854775807
typedef unsigned   __int64     ev_uint64; ///无符号的八字节整形，取值范围是0～18446744073509551615
typedef float                  ev_real32; ///四字节的浮点数，取值范围是1.175494351 E–38 ～ 3.402823466 E + 38，最大精度为7位
typedef double                 ev_real64; ///八字节的浮点数，取值范围是2.2250738585072014 E–308 ～ 1.7976931348623158 E + 308，最大精度为16位
typedef            size_t      ev_size_t; ///sizeof的返回值类型，用于与系统兼容的函数参数类型定义
///定义BOOL类型，注意这里的BOOL类型与Windows下定义的BOOL类型不一致，Windows下的BOOL类型其实为int32类型，而我们这里定义的类型为原始bool类型
///#ifndef BOOL
///#define BOOL ev_bool
///#endif
#ifndef TRUE
#define TRUE true
#endif
#ifndef FALSE
#define FALSE false
#endif
#elif defined(EV_CC_GNU)              ///GNU编译器中的变量类型定义

#include <stddef.h>
typedef void                   ev_void;   ///空类型
typedef            char        ev_char;   ///有符号的字符类型，取值范围是-128～127
typedef unsigned   char        ev_uchar;  ///无符号的字符类型，取值范围是0～255
typedef unsigned   short       ev_wchar;  ///Unicode字符
typedef unsigned   char        ev_byte;   ///字节类型，取值范围是0x00～0xff
typedef            bool        ev_bool;   ///原始布尔类型，取值范围是true或false
typedef signed     char        ev_int8;   ///有符号的单字节整型，取值范围是-128～127
typedef unsigned   char        ev_uint8;  ///无符号的单字节整型，取值范围是0～255
typedef signed     short       ev_int16;  ///有符号的双字节整型，取值范围是-32768～32767
typedef unsigned   short       ev_uint16; ///无符号的双字节整型，取值范围是0～65535
typedef signed     int         ev_int32;  ///有符号的四字节整形，取值范围是-2147483648～2147483647
typedef unsigned   int         ev_uint32; ///无符号的四字节整形，取值范围是0～4294967295
typedef signed     long long   ev_int64;  ///有符号的八字节整形，取值范围是-9223372036854775808～9223372036854775807
typedef unsigned   long long   ev_uint64; ///无符号的八字节整形，取值范围是0～18446744073509551615
typedef float                  ev_real32; ///四字节的浮点数，取值范围是1.175494351 E–38 ～ 3.402823466 E + 38，最大精度为7位
typedef double                 ev_real64; ///八字节的浮点数，取值范围是2.2250738585072014 E–308 ～ 1.7976931348623158 E + 308，最大精度为16位
typedef            size_t      ev_size_t; ///sizeof的返回值类型，用于与系统兼容的函数参数类型定义
#ifndef EV_OS_IOS
#define true   (1)
#define false  (0)
///定义BOOL类型，注意这里的BOOL类型与Windows下定义的BOOL类型不一致，Windows下的BOOL类型其实为int32类型，而我们这里定义的类型为原始bool类型
///#ifndef BOOL
///#define BOOL ev_bool
///#endif
#ifndef TRUE
#define TRUE true
#endif
#ifndef FALSE
#define FALSE false
#endif
#endif
#else    ///不支持的编译器类型
#error "nonsupport current code compiler"
#endif ///#if defined(EV_CC_MSVC) 

enum Alignment
{
    ALIGNMENT_4 = 4,
    ALIGNMENT_8 = 8,
    ALIGNMENT_16 = 16,
    ALIGNMENT_32 = 32,
    ALIGNMENT_64 = 64,
    ALIGNMENT_128 = 128
};
#include "stdheaders.h"
///变量类型的跨平台定义--结束
///----------------------------------------------------------------------全局变量类型相关-结束------------------------------------------------------------------
//#ifndef EV_ABS
//#define EV_ABS(a) ((a) < 0 ? -(a) : (a))
//#endif
inline ev_int32 ev_round(ev_real64 d)
{
    return d >= 0.0 ? ev_int32(d + 0.5) : ev_int32(d - ev_int32(d - 1) + 0.5) + ev_int32(d - 1);
}
static inline ev_bool fuzzyCompare(ev_real64 p1, ev_real64 p2)
{
    return ev_abs(p1 - p2) < 0.000001;
}
/*template <typename T>
inline const T &MIN(const T &a, const T &b) { if (a < b) return a; return b; }
template <typename T>
inline const T &MAX(const T &a, const T &b) { if (a < b) return b; return a; }
template <typename T>
inline const T &Bound(const T &min, const T &val, const T &max)
{ return MIN(min, MAX(max, val)); }*/
#ifdef EV_OS_WIN
#define EV_PATH_SEPARATOR "\\"
#elif defined(EV_OS_LINUX)
#define EV_PATH_SEPARATOR "/"
#endif
#define C_DISABLE_COPY(ClassName) \
	ClassName(const ClassName &); \
	ClassName &operator=(const ClassName &);
using namespace std;
#endif
