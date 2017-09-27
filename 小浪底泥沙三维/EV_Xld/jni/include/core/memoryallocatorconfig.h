#ifndef __MemoryAllocatorConfig_H__
#define __MemoryAllocatorConfig_H__

/**** @file

	This file configures EV_World's memory allocators. You can modify this
	file to alter the allocation routines used for EV_World's main objects.

	When customising memory allocation, all you need to do is provide one or
	more custom allocation policy classes. These classes need to implement:

	@code
	// Allocate bytes - file/line/func information should be optional,
	// will be provided when available but not everywhere (e.g. release mode, STL allocations)
	static inline void* allocateBytes(ev_size_t count, const ev_char* file = 0, ev_int32 line = 0, const ev_char* func = 0);
	// Free bytes
	static inline void deallocateBytes(void* ptr);
	// Return the max number of bytes available to be allocated in a single allocation
	static inline ev_size_t getMaxAllocationSize();
	@endcode

	Policies are then used as implementations for the wrapper classes and macros
	which call them. CPolicyatedObject for example provides the hooks to override
	the new and delete operators for a class and redirect the functionality to the
	policy. CSTLAllocator is a class which is provided to STL containers in order
	to hook up allocation of the containers members to the allocation policy.
	@par
	In addition to linking allocations to policies, this class also defines
	a number of macros to allow debugging information to be passed along with
	allocations, such as the file and line number they originate from. It's
	important to realise that we do not redefine the 'new' and 'delete' symbols
	with macros, because that's very difficult to consistently do when other
	libraries are also trying to do the same thing; instead we use dedicated
	'EV_' prefixed macros. See EV_NEW and related items.
	@par
	The base macros you can use are listed below, in order of preference and
	with their conditions stated:
	<ul>
	<li>EV_NEW - use to allocate an object which have custom new/delete operators
		to handle custom allocations, usually this means it's derived from CPolicyatedObject.
		for these classes but you won't get any line number debugging if you do.
		The memory category is automatically derived for these classes; for all other
		allocations you have to specify it.
	</li>
	<li>EV_NEW_T - use to allocate a single class / struct that does not have custom
		new/delete operators, either because it is non-virtual (CVector3, CQuaternion),
		or because it is from an external library (e.g. STL). You must
		deallocate with EV_DELETE_T if you expect the destructor to be called.
		is no destructor to be called.
		These macros ensure that constructors and destructors are called correctly
		even though the memory originates externally (via placement new). Also note
		that you have to specify the type and memory category so that the correct
		allocator can be derived, when both allocating
		and freeing.
	</li>
	<li>EV_NEW_ARRAY_T - as EV_NEW_T except with an extra parameter to construct
		multiple instances in contiguous memory. Again constructors and destructors
		are called. Free with EV_DELETE_ARRAY_T.
	</li>
	<li>EV_ALLOC_T - use to allocate a set of primitive types conveniently with type safety.
	This <i>can</i> also be used for classes and structs but it is <b>imperative</b> that
	you understand that neither the constructor nor the destructor will be called.
	Sometimes you want this because it's more efficient just to grab/free a chunk of
	memory without having to iterate over each element constructing / destructing.
	Free the memory with EV_FREE. </li>
	<li>EV_MALLOC - the most raw form of allocation, just a set of bytes.
		Use EV_FREE to release.</li>
	<li>_SIMD and _ALIGN variants - all of the above have variations which allow
		aligned memory allocations. The _SIMD versions align automatically to the
		SIMD requirements of your platform, the _ALIGN variants allow user-defined
		alignment to be specified. </li>
	</ul>
	Here are some examples:
	@code
	/// CPolicyatedObject subclass, with custom operator new / delete
	AllocatedClass* obj = EV_NEW AllocatedClass();
	EV_DELETE obj;
	AllocatedClass* array = EV_NEW AllocatedClass[10];
	EV_DELETE [] obj;
	/// Non-virtual or external class, constructors / destructors called
	ExternalClass* obj = EV_NEW_T(ExternalClass)(constructorArgs);
	EV_DELETE_T(obj, ExternalClass);
	ExternalClass* obj = EV_NEW_ARRAY_T(ExternalClass, 10);
	EV_DELETE_ARRAY_T(obj, NonVirtualClass, 10);
	/// Primitive types
	ev_int32* pLong = EV_ALLOC_T(ev_int32, 10);
	EV_FREE(pLong);
	/// Primitive type with constructor (you can mismatch EV_NEW_T and EV_FREE because no destructor)
	ev_int32* pLong = EV_NEW_T(ev_int32)(0);
	EV_FREE(pLong);
	/// Raw memory
	void* pVoid = EV_MALLOC(1024);
	EV_FREE(pVoid);
	@endcode
	EV_ALLOC_T is also the route to go for allocating real primitive types like
	and custom alignment variants.
****/

#include "core/global.h"
#include "core/memorystlallocator.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class EV_CORE_DLL CPolicy
            {
            public:
                static  void *allocateBytes(ev_size_t count,
                                            const ev_char *file = 0, ev_int32 line = 0, const ev_char *func = 0);
                static  void deallocateBytes(void *ptr);
                //// Get the maximum size of a single allocation
                static  ev_size_t getMaxAllocationSize();
            private:
                //// No instantiation
                CPolicy();
            };
            class EV_CORE_DLL CAlignPolicy
            {
            public:
                static  void *allocateBytes(ev_size_t count, Alignment align = ALIGNMENT_16,
                                            const ev_char *file = 0, ev_int32 line = 0, const ev_char *func = 0 );
                static  void deallocateBytes(void *ptr,  Alignment align = ALIGNMENT_16);
                //// Get the maximum size of a single allocation
                static  ev_size_t getMaxAllocationSize();
            private:
                //// no instantiation allowed
                CAlignPolicy();
            };
        }
    }
}
/// configure memory tracking
#ifndef EV_OS_LINUX

/*
#if EV_DEBUG
#if EV_MEMORY_TRACKER_DEBUG_MODE
#define EV_MEMORY_TRACKER 1
#else
#define EV_MEMORY_TRACKER 0
#endif
#endif
*/

#else
#define EV_MEMORY_TRACKER 0
#endif



#if EV_MEMORY_TRACKER
#define DEBUG_CLIENTBLOCK new(_CLIENT_BLOCK,__FILE__,__LINE__)
#else
#define DEBUG_CLIENTBlOCK new
#endif

#define _CRTDBG_MAP_ALLOC
#include<stdlib.h>
#ifdef _WIN32
#include<crtdbg.h>
#endif
#include <iostream>

#if EV_MEMORY_TRACKER
#define new DEBUG_CLIENTBLOCK
#endif

#ifndef EV_CORE_UNWARP_EXPORT
#define EV_CORE_UNWARP_EXPORT EV_CORE_DLL
#endif

class EV_CORE_UNWARP_EXPORT CrtMemCheck
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="automatic">当值为true时为生命周期模式，构造时设定开始检查点，析构时设定结束检查点并输出检查结果</param>
	/// <returns></returns>
	CrtMemCheck(bool automatic = true);
	/// <summary>
	/// 析构函数，当mAutomatic为true时，析构时设定结束检查点并输出检查结果
	/// </summary>
	/// <returns></returns>
	~CrtMemCheck();
	/// <summary>
	/// 设定为自动检查模式（生命周期模式）
	/// </summary>
	/// <param name="automatic">当值为true时为生命周期模式，析构时设定结束检查点并输出检查结果</param>
	/// <returns></returns>
	void setAuto(bool automatic);
	/// <summary>
	/// 设定开始检查点
	/// </summary>
	/// <returns></returns>
	void begin();
	/// <summary>
	/// 设定结束检查点并输出检查结果
	/// </summary>
	/// <returns></returns>
	void end();
private:
#if EV_MEMORY_TRACKER
	_CrtMemState s1,s2,s3;
#endif
	bool mAutomatic;
};


#ifndef new
namespace EarthView
{
	namespace World
	{
		namespace Core
		{

			template<typename T>
			T *constructN(T *basePtr, size_t count)
			{
				for (size_t i = 0; i < count; ++i)
				{
					new ((void *)(basePtr + i)) T();
				}
				return basePtr;
			}
		}
	}
}
#endif

#ifdef new
//// Allocate space for one primitive type, external type or non-virtual type with constructor parameters
#define EV_NEW_T(T) new T
//// Allocate space for one primitive type, external type or non-virtual type aligned to SIMD boundaries
#define EV_NEW_T_SIMD(T) new T
//// Allocate a block of raw memory, and indicate the category of usage
#define EV_MALLOC(bytes) (void *)(new ev_uint8[bytes])//EarthView::World::Core::CPolicy::allocateBytes(bytes)
//// Allocate a block of memory for a primitive type, and indicate the category of usage
#define EV_ALLOC_T(T, count) new T[count]//static_cast<T*>(EarthView::World::Core::CPolicy::allocateBytes(sizeof(T)*(count)))
//// Free the memory allocated with EV_World_MALLOC or EV_ALLOC_T. Category is required to be restated to ensure the matching policy is used
#define EV_FREE(ptr) delete[] (ev_uint8 *)(ptr)//EarthView::World::Core::CPolicy::deallocateBytes((void*)ptr)
//// Allocate a block of memory for 'count' primitive types - do not use for classes that inherit from CPolicyatedObject
#define EV_NEW_ARRAY_T(T, count) new T[count]//constructN(static_cast<T*>(EarthView::World::Core::CPolicy::allocateBytes(sizeof(T)*(count))), count)
//// Free the memory allocated with EV_World_NEW_T. Category is required to be restated to ensure the matching policy is used
#define EV_DELETE_T(ptr, T) delete ptr;
//// Free the memory allocated with EV_World_NEW_ARRAY_T. Category is required to be restated to ensure the matching policy is used, count and type to call destructor
#define EV_DELETE_ARRAY_T(ptr, T, count) delete[] ptr;//if(ptr){for (size_t b = 0; b < count; ++b) { (ptr)[b].~T();} EarthView::World::Core::CPolicy::deallocateBytes((void*)ptr);}
/// aligned allocation
//// Allocate a block of raw memory aligned to SIMD boundaries, and indicate the category of usage
#define EV_MALLOC_SIMD(bytes) (void *)(new ev_uint8[bytes])//EarthView::World::Core::CAlignPolicy::allocateBytes(bytes)
//// Allocate a block of raw memory aligned to user defined boundaries, and indicate the category of usage
#define EV_MALLOC_ALIGN(bytes, align) (void *)(new ev_uint8[bytes])//EarthView::World::Core::CAlignPolicy::allocateBytes(bytes, align)
//// Allocate a block of memory for a primitive type aligned to SIMD boundaries, and indicate the category of usage
#define EV_ALLOC_T_SIMD(T, count) new T[count]//static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count)))
//// Allocate a block of memory for a primitive type aligned to user defined boundaries, and indicate the category of usage
#define EV_ALLOC_T_ALIGN(T, count, align) new T[count]//static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count), align))
//// Free the memory allocated with either EV_World_MALLOC_SIMD. Category is required to be restated to ensure the matching policy is used
#define EV_FREE_SIMD(ptr) delete[] (ev_uint8 *)(ptr)//EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr)
//// Free the memory allocated with either EV_World_MALLOC_ALIGN. Category is required to be restated to ensure the matching policy is used
#define EV_FREE_ALIGN(ptr, align) delete[] (ev_uint8 *)(ptr)//EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr, align)
//// Allocate a block of memory for 'count' primitive types aligned to SIMD boundaries - do not use for classes that inherit from CPolicyatedObject
#define EV_NEW_ARRAY_T_SIMD(T, count) new T[count]//constructN(static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count))), count)
//// Free the memory allocated with EV_World_NEW_T_SIMD. Category is required to be restated to ensure the matching policy is used
#define EV_DELETE_T_SIMD(ptr, T) delete ptr//if(ptr){(ptr)->~T(); EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr);}
//// Free the memory allocated with EV_World_NEW_ARRAY_T_SIMD. Category is required to be restated to ensure the matching policy is used, count and type to call destructor
#define EV_DELETE_ARRAY_T_SIMD(ptr, T, count) delete[] ptr//if(ptr){for (size_t b = 0; b < count; ++b) { (ptr)[b].~T();} EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr);}
//// Allocate space for one primitive type, external type or non-virtual type aligned to user defined boundaries
#define EV_NEW_T_ALIGN(T, align) new T//new (EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T), align)) T
//// Allocate a block of memory for 'count' primitive types aligned to user defined boundaries - do not use for classes that inherit from CPolicyatedObject
#define EV_NEW_ARRAY_T_ALIGN(T, count, align) new T[count]//constructN(static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count), align)), count)
//// Free the memory allocated with EV_World_NEW_T_ALIGN. Category is required to be restated to ensure the matching policy is used
#define EV_DELETE_T_ALIGN(ptr, T, align) delete ptr//if(ptr){(ptr)->~T(); EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr, align);}
//// Free the memory allocated with EV_World_NEW_ARRAY_T_ALIGN. Category is required to be restated to ensure the matching policy is used, count and type to call destructor
#define EV_DELETE_ARRAY_T_ALIGN(ptr, T, count, align) delete[] ptr//if(ptr){for (size_t _b = 0; _b < count; ++_b) { (ptr)[_b].~T();} EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr, align);}
/// new / delete for classes deriving from CPolicyatedObject (alignment determined by per-class policy)
#define EV_NEW new
#define EV_DELETE delete
#define EV_SAFE_DELETE(p) do { if(NULL != (p)){delete (p);}} while (0);
#define EV_SAFE_DELETE_NULL(p) do { if(NULL != (p)){delete (p); (p) = NULL;}} while (0);

#elif defined(EV_DEBUG_MODE)
//// Allocate a block of raw memory, and indicate the category of usage
#define EV_MALLOC(bytes) EarthView::World::Core::CPolicy::allocateBytes(bytes, __FILE__, __LINE__, __FUNCTION__)
//// Allocate a block of memory for a primitive type, and indicate the category of usage
#define EV_ALLOC_T(T, count) static_cast<T*>(EarthView::World::Core::CPolicy::allocateBytes(sizeof(T)*(count), __FILE__, __LINE__, __FUNCTION__))
//// Free the memory allocated with EV_World_MALLOC or EV_ALLOC_T. Category is required to be restated to ensure the matching policy is used
#define EV_FREE(ptr) EarthView::World::Core::CPolicy::deallocateBytes((void*)ptr)
//// Allocate space for one primitive type, external type or non-virtual type with constructor parameters
#define EV_NEW_T(T) new (EarthView::World::Core::CPolicy::allocateBytes(sizeof(T), __FILE__, __LINE__, __FUNCTION__)) T
//// Allocate a block of memory for 'count' primitive types - do not use for classes that inherit from CPolicyatedObject
#define EV_NEW_ARRAY_T(T, count) constructN(static_cast<T*>(EarthView::World::Core::CPolicy::allocateBytes(sizeof(T)*(count), __FILE__, __LINE__, __FUNCTION__)), count)
//// Free the memory allocated with EV_World_NEW_T. Category is required to be restated to ensure the matching policy is used
#define EV_DELETE_T(ptr, T) if(ptr){(ptr)->~T(); EarthView::World::Core::CPolicy::deallocateBytes((void*)ptr);}
//// Free the memory allocated with EV_World_NEW_ARRAY_T. Category is required to be restated to ensure the matching policy is used, count and type to call destructor
#define EV_DELETE_ARRAY_T(ptr, T, count) if(ptr){for (size_t b = 0; b < count; ++b) { (ptr)[b].~T();} EarthView::World::Core::CPolicy::deallocateBytes((void*)ptr);}
/// aligned allocation
//// Allocate a block of raw memory aligned to SIMD boundaries, and indicate the category of usage
#define EV_MALLOC_SIMD(bytes) EarthView::World::Core::CAlignPolicy::allocateBytes(bytes, ALIGNMENT_16, __FILE__, __LINE__, __FUNCTION__)
//// Allocate a block of raw memory aligned to user defined boundaries, and indicate the category of usage
#define EV_MALLOC_ALIGN(bytes, align) EarthView::World::Core::CAlignPolicy::allocateBytes(bytes, align, __FILE__, __LINE__, __FUNCTION__)
//// Allocate a block of memory for a primitive type aligned to SIMD boundaries, and indicate the category of usage
#define EV_ALLOC_T_SIMD(T, count) static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count), ALIGNMENT_16, __FILE__, __LINE__, __FUNCTION__))
//// Allocate a block of memory for a primitive type aligned to user defined boundaries, and indicate the category of usage
#define EV_ALLOC_T_ALIGN(T, count, align) static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count), align, __FILE__, __LINE__, __FUNCTION__))
//// Free the memory allocated with either EV_World_MALLOC_SIMD. Category is required to be restated to ensure the matching policy is used
#define EV_FREE_SIMD(ptr)  EarthView::World::Core::CAlignPolicy::deallocateBytes(ptr)
//// Free the memory allocated with either EV_World_MALLOC_ALIGN. Category is required to be restated to ensure the matching policy is used
#define EV_FREE_ALIGN(ptr, align) EarthView::World::Core::CAlignPolicy::deallocateBytes(ptr, align)
//// Allocate space for one primitive type, external type or non-virtual type aligned to SIMD boundaries
#define EV_NEW_T_SIMD(T) new (EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T), ALIGNMENT_16, __FILE__, __LINE__, __FUNCTION__)) T
//// Allocate a block of memory for 'count' primitive types aligned to SIMD boundaries - do not use for classes that inherit from CPolicyatedObject
#define EV_NEW_ARRAY_T_SIMD(T, count) constructN(static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count), ALIGNMENT_16, __FILE__, __LINE__, __FUNCTION__)), count)
//// Free the memory allocated with EV_World_NEW_T_SIMD. Category is required to be restated to ensure the matching policy is used
#define EV_DELETE_T_SIMD(ptr, T) if(ptr){(ptr)->~T(); EarthView::World::Core::CAlignPolicy::deallocateBytes(ptr);}
//// Free the memory allocated with EV_World_NEW_ARRAY_T_SIMD. Category is required to be restated to ensure the matching policy is used, count and type to call destructor
#define EV_DELETE_ARRAY_T_SIMD(ptr, T, count) if(ptr){for (size_t b = 0; b < count; ++b) { (ptr)[b].~T();} EarthView::World::Core::CAlignPolicy::deallocateBytes(ptr);}
//// Allocate space for one primitive type, external type or non-virtual type aligned to user defined boundaries
#define EV_NEW_T_ALIGN(T, align) new (EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T), align, __FILE__, __LINE__, __FUNCTION__)) T
//// Allocate a block of memory for 'count' primitive types aligned to user defined boundaries - do not use for classes that inherit from CPolicyatedObject
#define EV_NEW_ARRAY_T_ALIGN(T, count, align) constructN(static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count), align, __FILE__, __LINE__, __FUNCTION__)), count)
//// Free the memory allocated with EV_World_NEW_T_ALIGN. Category is required to be restated to ensure the matching policy is used
#define EV_DELETE_T_ALIGN(ptr, T, align) if(ptr){(ptr)->~T(); EarthView::World::Core::CAlignPolicy::deallocateBytes(ptr, align);}
//// Free the memory allocated with EV_World_NEW_ARRAY_T_ALIGN. Category is required to be restated to ensure the matching policy is used, count and type to call destructor
#define EV_DELETE_ARRAY_T_ALIGN(ptr, T, count, align) if(ptr){for (size_t _b = 0; _b < count; ++_b) { (ptr)[_b].~T();} EarthView::World::Core::CAlignPolicy::deallocateBytes(ptr, align);}
/// new / delete for classes deriving from CPolicyatedObject (alignment determined by per-class policy)
/// Also hooks up the file/line/function params
/// Can only be used with classes that derive from CPolicyatedObject since customised new/delete needed
#define EV_NEW new (__FILE__, __LINE__, __FUNCTION__)
#define EV_DELETE delete
#define EV_SAFE_DELETE(p) do { if(NULL != (p)){delete (p);}} while (0);
#define EV_SAFE_DELETE_NULL(p) do { if(NULL != (p)){delete (p); (p) = NULL;}} while (0);
#else
//// Allocate a block of raw memory, and indicate the category of usage
#define EV_MALLOC(bytes) EarthView::World::Core::CPolicy::allocateBytes(bytes)
//// Allocate a block of memory for a primitive type, and indicate the category of usage
#define EV_ALLOC_T(T, count) static_cast<T*>(EarthView::World::Core::CPolicy::allocateBytes(sizeof(T)*(count)))
//// Free the memory allocated with EV_World_MALLOC or EV_ALLOC_T. Category is required to be restated to ensure the matching policy is used
#define EV_FREE(ptr) EarthView::World::Core::CPolicy::deallocateBytes((void*)ptr)
//// Allocate space for one primitive type, external type or non-virtual type with constructor parameters
#define EV_NEW_T(T) new (EarthView::World::Core::CPolicy::allocateBytes(sizeof(T))) T
//// Allocate a block of memory for 'count' primitive types - do not use for classes that inherit from CPolicyatedObject
#define EV_NEW_ARRAY_T(T, count) constructN(static_cast<T*>(EarthView::World::Core::CPolicy::allocateBytes(sizeof(T)*(count))), count)
//// Free the memory allocated with EV_World_NEW_T. Category is required to be restated to ensure the matching policy is used
#define EV_DELETE_T(ptr, T) if(ptr){(ptr)->~T(); EarthView::World::Core::CPolicy::deallocateBytes((void*)ptr);}
//// Free the memory allocated with EV_World_NEW_ARRAY_T. Category is required to be restated to ensure the matching policy is used, count and type to call destructor
#define EV_DELETE_ARRAY_T(ptr, T, count) if(ptr){for (size_t b = 0; b < count; ++b) { (ptr)[b].~T();} EarthView::World::Core::CPolicy::deallocateBytes((void*)ptr);}
/// aligned allocation
//// Allocate a block of raw memory aligned to SIMD boundaries, and indicate the category of usage
#define EV_MALLOC_SIMD(bytes) EarthView::World::Core::CAlignPolicy::allocateBytes(bytes)
//// Allocate a block of raw memory aligned to user defined boundaries, and indicate the category of usage
#define EV_MALLOC_ALIGN(bytes, align) EarthView::World::Core::CAlignPolicy::allocateBytes(bytes, align)
//// Allocate a block of memory for a primitive type aligned to SIMD boundaries, and indicate the category of usage
#define EV_ALLOC_T_SIMD(T, count) static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count)))
//// Allocate a block of memory for a primitive type aligned to user defined boundaries, and indicate the category of usage
#define EV_ALLOC_T_ALIGN(T, count, align) static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count), align))
//// Free the memory allocated with either EV_World_MALLOC_SIMD. Category is required to be restated to ensure the matching policy is used
#define EV_FREE_SIMD(ptr) EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr)
//// Free the memory allocated with either EV_World_MALLOC_ALIGN. Category is required to be restated to ensure the matching policy is used
#define EV_FREE_ALIGN(ptr, align) EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr, align)
//// Allocate space for one primitive type, external type or non-virtual type aligned to SIMD boundaries
#define EV_NEW_T_SIMD(T) new EarthView::World::Core::(CAlignPolicy::allocateBytes(sizeof(T))) T
//// Allocate a block of memory for 'count' primitive types aligned to SIMD boundaries - do not use for classes that inherit from CPolicyatedObject
#define EV_NEW_ARRAY_T_SIMD(T, count) constructN(static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count))), count)
//// Free the memory allocated with EV_World_NEW_T_SIMD. Category is required to be restated to ensure the matching policy is used
#define EV_DELETE_T_SIMD(ptr, T) if(ptr){(ptr)->~T(); EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr);}
//// Free the memory allocated with EV_World_NEW_ARRAY_T_SIMD. Category is required to be restated to ensure the matching policy is used, count and type to call destructor
#define EV_DELETE_ARRAY_T_SIMD(ptr, T, count) if(ptr){for (size_t b = 0; b < count; ++b) { (ptr)[b].~T();} EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr);}
//// Allocate space for one primitive type, external type or non-virtual type aligned to user defined boundaries
#define EV_NEW_T_ALIGN(T, align) new (EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T), align)) T
//// Allocate a block of memory for 'count' primitive types aligned to user defined boundaries - do not use for classes that inherit from CPolicyatedObject
#define EV_NEW_ARRAY_T_ALIGN(T, count, align) constructN(static_cast<T*>(EarthView::World::Core::CAlignPolicy::allocateBytes(sizeof(T)*(count), align)), count)
//// Free the memory allocated with EV_World_NEW_T_ALIGN. Category is required to be restated to ensure the matching policy is used
#define EV_DELETE_T_ALIGN(ptr, T, align) if(ptr){(ptr)->~T(); EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr, align);}
//// Free the memory allocated with EV_World_NEW_ARRAY_T_ALIGN. Category is required to be restated to ensure the matching policy is used, count and type to call destructor
#define EV_DELETE_ARRAY_T_ALIGN(ptr, T, count, align) if(ptr){for (size_t _b = 0; _b < count; ++_b) { (ptr)[_b].~T();} EarthView::World::Core::CAlignPolicy::deallocateBytes((void*)ptr, align);}
/// new / delete for classes deriving from CPolicyatedObject (alignment determined by per-class policy)
#define EV_NEW new
#define EV_DELETE delete
#define EV_SAFE_DELETE(p) do { if(NULL != (p)){delete (p);}} while (0);
#define EV_SAFE_DELETE_NULL(p) do { if(NULL != (p)){delete (p); (p) = NULL;}} while (0);
#endif /// EV_DEBUG_MODE

#endif

