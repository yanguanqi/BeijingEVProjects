#ifndef EV_CORE_CONFIG_H
#define EV_CORE_CONFIG_H
#pragma once
#define EV_DOUBLE_PRECISION 1
/************************************************************************/
/* 三角函数                                                             */
/************************************************************************/
///#define NO_CORE_SIN
///#define NO_CORE_COS
///#define NO_CORE_ATAN
///#define NO_CORE_ATAN2
///#define NO_CORE_ASIN
///#define NO_CORE_ACOS
///#define NO_CORE_TAN
///#define NO_CORE_CTAN
///#define NO_CORE_ACTAN
/************************************************************************/
/* 开方函数                                                             */
/************************************************************************/
///#define NO_CORE_FSQRT
/************************************************************************/
/* 3D相关                                                               */
/************************************************************************/
#ifdef NO_CORE_3D
///#define NO_3D_SINXTABLE
#define NO_3D_ACOSXTABLE
#else
///#define NO_3D_SINXTABLE
///#define NO_3D_ACOSXTABLE
#endif
/************************************************************************/
/* 内存相关                                                             */
/************************************************************************/
/************************************************************************/
/* 字符编码                                                             */
/************************************************************************/
#define NO_CORE_CODECS
/************************************************************************/
/* 插件                                                                 */
/************************************************************************/
#define NO_CORE_PLUGIN
/************************************************************************/
/* 日志                                                                 */
/************************************************************************/
///#define NO_CORE_LOG
#define EV_LOG_ENABLE
/************************************************************************/
/* 网络                                                                 */
/************************************************************************/
#define NO_CORE_NETWORK
/************************************************************************/
/* 字体                                                                 */
/************************************************************************/
#define NO_CORE_TTF
/************************************************************************/
/* 电源管理                                                             */
/************************************************************************/
#define NO_CORE_POWERMANAGE
/************************************************************************/
/* 内存管理                                                             */
/************************************************************************/
///#define NO_CORE_MEMMANAGE

/// define the memory allocator configuration to use
#define EV_MEMORY_ALLOCATOR_STD 1
#define EV_MEMORY_ALLOCATOR_NED 2
#define EV_MEMORY_ALLOCATOR_USER 3
#define EV_MEMORY_ALLOCATOR_NEDPOOLING 4
#ifndef EV_MEMORY_ALLOCATOR
#define EV_MEMORY_ALLOCATOR EV_MEMORY_ALLOCATOR_STD
#endif
/// Whether to use the custom memory allocator in STL containers
#ifndef EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR
#define EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR 1
#endif
///if you want to make EVString use the custom memory allocator then set:
///#define EV_STRING_USE_CUSTOM_MEMORY_ALLOCATOR 1
/// Doing this will mean EV_World's strings will not be compatible with std::string however
#ifndef EV_STRING_USE_CUSTOM_MEMORY_ALLOCATOR
#define EV_STRING_USE_CUSTOM_MEMORY_ALLOCATOR 0
#endif
/// enable or disable the memory tracker, recording the memory allocations & tracking leaks
/// default is to disable since it's expensive, but you can enable if needed per build target
#ifndef EV_MEMORY_TRACKER_DEBUG_MODE
#define EV_MEMORY_TRACKER_DEBUG_MODE 1
#endif
#ifndef EV_MEMORY_TRACKER_RELEASE_MODE
#define EV_MEMORY_TRACKER_RELEASE_MODE 0
#endif
/** Define max number of multiple render targets (MRTs) to render to at once.
*/
#define EV_MAX_MULTIPLE_RENDER_TARGETS 8
/** Support for multithreading, there are 3 options

EV_THREAD_SUPPORT = 0
	No support for threading.
EV_THREAD_SUPPORT = 1
	Thread support for background loading, by both loading and constructing resources
	in a background thread. CResource management and CSharedPtr handling becomes
	thread-safe, and resources may be completely loaded in the background.
	The places where threading is available are clearly
	marked, you should assume state is NOT thread safe unless otherwise
	stated in relation to this flag.
EV_THREAD_SUPPORT = 2
	Thread support for background resource preparation. This means that resource
	data can streamed into memory in the background, but the final resource
	construction (including CRenderSystem dependencies) is still done in the primary
	thread. Has a lower synchronisation primitive overhead than full threading
	while still allowing the major blocking aspects of resource management (I/O)
	to be done in the background.
*/
#ifndef EV_THREAD_SUPPORT
#define EV_THREAD_SUPPORT 1
#endif
#if EV_THREAD_SUPPORT != 0 && EV_THREAD_SUPPORT != 1 && EV_THREAD_SUPPORT != 2
#define EV_THREAD_SUPPORT 0
#endif
/** Provider for threading functionality, there are 4 options.

EV_THREAD_PROVIDER = 0
	No support for threading.
EV_THREAD_PROVIDER = 1
	Boost libraries provide threading functionality.
EV_THREAD_PROVIDER = 2
	Poco libraries provide threading functionality.
EV_THREAD_PROVIDER = 3
	TBB library provides threading functionality.
*/
#ifndef EV_THREAD_PROVIDER
#define EV_THREAD_PROVIDER 0
#endif

#endif///#ifndef EV_CORE_CONFIG_H
