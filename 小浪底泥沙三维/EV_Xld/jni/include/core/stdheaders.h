#ifndef __StdHeaders_H__
#define __StdHeaders_H__
#pragma once
#include "platform.h"
#include "memoryallocatorconfig.h"
#include "memorystlallocator.h"
#ifdef __BORLANDC__
#define __STD_ALGORITHM
#endif
#if defined ( EV_GCC_VISIBILITY ) && (EV_PLATFORM != EV_PLATFORM_APPLE && EV_PLATFORM != EV_PLATFORM_APPLE_IOS)
/* Until libstdc++ for gcc 4.2 is released, we have to declare all
 * symbols in libstdc++.so externally visible, otherwise we end up
 * with them marked as hidden by -fvisible=hidden.
 *
 * See http://gcc.gnu.org/bugzilla/show_bug.cgi?id=20218
 *
 * Due to a more strict linker included with Xcode 4, this is disabled on Mac OS X and iOS.
 * The reason? It changes the visibility of Boost functions.  The mismatch between visibility Boost when used in EV_World (default)
 * and Boost when compiled (hidden) results in mysterious link errors such as "Bad codegen, pointer diff".
 */
#pragma GCC visibility push(default)
#endif
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cstdarg>
#include <cmath>
/// STL containers
#include <vector>
#include <map>
#include <string>
#include <set>
#include <list>
#include <deque>
#include <queue>
#include <bitset>
/// Note - not in the original STL, but exists in SGI STL and STLport
/// For gcc 4.3 see http://gcc.gnu.org/gcc-4.3/changes.html
#if (EV_COMPILER == EV_COMPILER_GNUC) && !defined(STLPORT)
//#if EV_COMP_VER >= 430
//#include <ext/hash_map>
//#include <tr1/unordered_map>
//#include <tr1/unordered_set>
//#else
#include <ext/hash_map>
#include <ext/hash_set>
using namespace __gnu_cxx;
//#endif
#else
//#if (EV_COMPILER == EV_COMPILER_MSVC) && !defined(STLPORT) && EV_COMP_VER >= 1600 /// VC++ 10.0
//#include <unordered_map>
//#include <unordered_set>
//#else
#include <hash_set>
#include <hash_map>
//#endif
#endif

/// STL algorithms & functions
#include <algorithm>
#include <functional>
#include <limits>
/// C++ CStream stuff
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#ifdef __BORLANDC__
using namespace std;
#endif
extern "C" {
#include <sys/types.h>
#include <sys/stat.h>
}
#if EV_PLATFORM == EV_PLATFORM_WIN32
#undef min
#undef max
#if defined( __MINGW32__ )
#include <unistd.h>
#endif
#endif
#if EV_PLATFORM == EV_PLATFORM_LINUX || EV_PLATFORM == EV_PLATFORM_ANDROID
extern "C" {
#include <unistd.h>
#include <dlfcn.h>
}
#endif
#if EV_PLATFORM == EV_PLATFORM_APPLE || EV_PLATFORM == EV_PLATFORM_APPLE_IOS
extern "C" {
#include <unistd.h>
#include <sys/param.h>
#include <CoreFoundation/CoreFoundation.h>
}
#endif
#if defined ( EV_GCC_VISIBILITY ) && (EV_PLATFORM != EV_PLATFORM_APPLE && EV_PLATFORM != EV_PLATFORM_APPLE_IOS)
#pragma GCC visibility pop
#endif
#ifdef EV_OS_CYGWIN

namespace std
{

    typedef basic_string<ev_wchar, char_traits<ev_wchar>, allocator<ev_wchar> >  wstring;
    typedef basic_iostream<ev_wchar, char_traits<ev_wchar> >                     wostream;
}

#endif
#ifdef EV_OS_IOS
#include <string>
#endif
typedef std::basic_string<ev_wchar> wchar_string;

#if EV_COMPILER == EV_COMPILER_GNUC && EV_COMP_VER >= 310 && !defined(STLPORT)
//#if EV_COMP_VER >= 430
//#define NEW_HASHMAP 1
//#define HashMap ::std::tr1::unordered_map
//#define HashSet ::std::tr1::unordered_set
//#else
#define HashMap ::__gnu_cxx::hash_map
#define HashSet ::__gnu_cxx::hash_set
using namespace __gnu_cxx;
//#endif
#else
#if EV_COMPILER == EV_COMPILER_MSVC
//#if EV_COMP_VER >= 1600 /// VC++ 10.0
//#define NEW_HASHMAP 1
//#define HashMap ::std::tr1::unordered_map
//#define HashSet ::std::tr1::unordered_set
//#elif EV_COMP_VER > 1300 && !defined(_STLP_MSVC)
#if EV_COMP_VER >= 1300
#define HashMap ::stdext::hash_map
#define HashSet ::stdext::hash_set
#else
#define HashMap ::std::hash_map
#define HashSet ::std::hash_set
#endif
#else
#define HashMap ::std::hash_map
#define HashSet ::std::hash_set
#endif
#endif
using namespace std;
#if defined (EV_OS_LINUX)
typedef ev_size_t size_type;
#endif
//////for stl containter
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            template < class T, class A =
#if EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR
            CSTLAllocator<T, CPolicy>
#else
            std::allocator<T>
#endif
            >
            class ev_deque : public deque<T, A>
            {
            public:
                typedef ev_deque<T, A> Myt;
                typedef deque<T, A> _Base;
                ev_deque()
                    : _Base()
                {
                    /// construct empty deque
                }
                explicit ev_deque(const A &_Al)
                    : _Base(_Al)
                {
                    /// construct empty deque with allocator
                }
                explicit ev_deque(size_type _Count)
                    : _Base(_Count)
                {
                    /// construct from _Count * _Ty()
                }
                ev_deque(size_type _Count, const T &_Val)
                    : _Base(_Count, _Val)
                {
                    /// construct from _Count * _Val
                }
                ev_deque(size_type _Count, const T &_Val, const A &_Al)
                    : _Base(_Count, _Val, _Al)
                {
                    /// construct from _Count * _Val with allocator
                }
                ev_deque(const Myt &_Right)
                    : _Base(_Right)
                {
                    /// construct by copying _Right
                }
                template<class _It>
                ev_deque(_It _First, _It _Last)
                    : _Base(_First, _Last)
                {
                    /// construct from [_First, _Last)
                }
                template<class _It>
                ev_deque(_It _First, _It _Last, const A &_Al)
                    : _Base(_First, _Last, _Al)
                {
                    /// construct from [_First, _Last) with allocator
                }
            };
            template < class T, class A =
#if EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR
            CSTLAllocator<T, CPolicy>
#else
            std::allocator<T>
#endif
            >
            class ev_vector : public std::vector<T, A>
            {
            public:
                typedef ev_vector<T, A> Myt;
                typedef vector<T, A> _Base;
                ev_vector()
                    : _Base()
                {
                    /// construct empty vector
                }
                explicit ev_vector(const A &_Al)
                    : _Base(_Al)
                {
                    /// construct empty vector with allocator
                }
                explicit ev_vector(size_type _Count)
                    : _Base(_Count)
                {
                    /// construct from _Count * _Ty()
                }
                ev_vector(size_type _Count, const T &_Val)
                    : _Base(_Count, _Val)
                {
                    /// construct from _Count * _Val
                }
                ev_vector(size_type _Count, const T &_Val, const A &_Al)
                    : _Base(_Count, _Val, _Al)
                {
                    /// construct from _Count * _Val, with allocator
                }
                ev_vector(const Myt &_Right)
                    : _Base(_Right)
                {
                    /// construct by copying _Right
                }
                template<class _Iter>
                ev_vector(_Iter _First, _Iter _Last)
                    : _Base(_First, _Last)
                {
                    /// construct from [_First, _Last)
                }
                template<class _Iter>
                ev_vector(_Iter _First, _Iter _Last, const A &_Al)
                    : _Base(_First, _Last, _Al)
                {
                    /// construct from [_First, _Last), with allocator
                }
            };

            template < class T, class A =
#if EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR
            CSTLAllocator<T, CPolicy>
#else
            std::allocator<T>
#endif
            >
            class ev_list : public std::list<T, A>
            {
            public:
                typedef ev_list<T, A> Myt;
                typedef list<T, A> _Base;
                ev_list()
                    : _Base()
                {
                    /// construct empty list
                }
                explicit ev_list(const A &_Al)
                    : _Base(_Al)
                {
                    /// construct empty list, allocator
                }
                explicit ev_list(size_type _Count)
                    : _Base(_Count)
                {
                    /// construct list from _Count * _Ty()
                }
                ev_list(size_type _Count, const T &_Val)
                    : _Base(_Count, _Val)
                {
                    /// construct list from _Count * _Val
                }
                ev_list(size_type _Count, const T &_Val, const A &_Al)
                    : _Base(_Count, _Val, _Al)
                {
                    /// construct list, allocator from _Count * _Val
                }
                ev_list(const Myt &_Right)
                    : _Base(_Right)
                {
                    /// construct list by copying _Right
                }
                template<class _Iter>
                ev_list(_Iter _First, _Iter _Last)
                    : _Base(_First, _Last)
                {
                    /// construct list from [_First, _Last)
                }
                template<class _Iter>
                ev_list(_Iter _First, _Iter _Last, const A &_Al)
                    : _Base(_First, _Last, _Al)
                {
                    /// construct list, allocator from [_First, _Last)
                }
            };

            template < class T, class P = std::less<T>, class A =
#if EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR
            CSTLAllocator<T, CPolicy>
#else
            std::allocator<T>
#endif
            >
            class ev_set : public std::set<T, P, A>
            {
            public:
                typedef ev_set<T, P, A> Myt;
                typedef set<T, P, A> _Base;
                template <class _Iter>
                class _Pairib : public pair<_Iter, bool>
                {
                public:
                    _Pairib(const pair<_Iter, bool>& _Right)
                        : pair<_Iter, bool>(_Right)
                    {
                        /// construct set by copying _Right
                    }
                };
                ev_set()
                    : _Base()
                {
                    /// construct empty set from defaults
                }
                ev_set(const Myt &_Right)
                    : _Base(_Right)
                {
                    /// construct set by copying _Right
                }
                explicit ev_set(const P &_Pred)
                    : _Base(_Pred)
                {
                    /// construct empty set from comparator
                }
                ev_set(const P &_Pred, const A &_Al)
                    : _Base(_Pred, _Al)
                {
                    /// construct empty set from comparator and allocator
                }
                template<class _Iter>
                ev_set(_Iter _First, _Iter _Last)
                    : _Base(_First, _Last)
                {
                    /// construct set from [_First, _Last), defaults
                }
                template<class _Iter>
                ev_set(_Iter _First, _Iter _Last, const P &_Pred)
                    : _Base(_First, _Last, _Pred)
                {
                    /// construct set from [_First, _Last), comparator
                }
                template<class _Iter>
                ev_set(_Iter _First, _Iter _Last, const P &_Pred, const A &_Al)
                    : _Base(_First, _Last, _Pred, _Al)
                {
                    /// construct set from [_First, _Last), defaults, and allocator
                }
            };

            template < class K, class V, class P = std::less<K>, class A =
#if EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR
            CSTLAllocator<std::pair<const K, V>, CPolicy>
#else
            std::allocator<std::pair<const K, V> >
#endif
            >
            class ev_map : public std::map<K, V, P, A>
            {
            public:
                typedef ev_map<K, V, P, A> Myt;
                typedef map<K, V, P, A> _Base;
                template <class _Iter>
                class _Pairib : public pair<_Iter, bool>
                {
                public:
                    _Pairib(const pair<_Iter, bool>& _Right)
                        : pair<_Iter, bool>(_Right)
                    {
                        /// construct set by copying _Right
                    }
                };
                ev_map()
                    : _Base()
                {
                    /// construct empty map from defaults
                }
                ev_map(const Myt &_Right)
                    : _Base(_Right)
                {
                    /// construct map by copying _Right
                }
                explicit ev_map(const P &_Pred)
                    : _Base(_Pred)
                {
                    /// construct empty map from comparator
                }
                ev_map(const P &_Pred, const A &_Al)
                    : _Base(_Pred, _Al)
                {
                    /// construct empty map from comparator and allocator
                }
                template<class _Iter>
                ev_map(_Iter _First, _Iter _Last)
                    : _Base(_First, _Last)
                {
                    /// construct map from [_First, _Last), defaults
                }
                template<class _Iter>
                ev_map(_Iter _First, _Iter _Last, const P &_Pred)
                    : _Base(_First, _Last, _Pred)
                {
                    /// construct map from [_First, _Last), comparator
                }
                template<class _Iter>
                ev_map(_Iter _First, _Iter _Last, const P &_Pred, const A &_Al)
                    : _Base(_First, _Last, _Pred, _Al)
                {
                    /// construct map from [_First, _Last), comparator, and allocator
                }
            };

            template < class K, class V, class P = std::less<K>, class A =
#if EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR
            CSTLAllocator<std::pair<const K, V>, CPolicy>
#else
            std::allocator<std::pair<const K, V> >
#endif
            >
            class ev_multimap : public std::multimap<K, V, P, A>
            {
            public:
                typedef ev_multimap<K, V, P, A> Myt;
                typedef multimap<K, V, P, A> _Base;
                template <class _Iter>
                class _Pairib : public pair<_Iter, bool>
                {
                public:
                    _Pairib(const pair<_Iter, bool>& _Right)
                        : pair<_Iter, bool>(_Right)
                    {
                        /// construct set by copying _Right
                    }
                };
                ev_multimap()
                    : _Base()
                {
                    /// construct empty map from defaults
                }
                ev_multimap(const Myt &_Right)
                    : _Base(_Right)
                {
                    /// construct map by copying _Right
                }
                explicit ev_multimap(const P &_Pred)
                    : _Base(_Pred)
                {
                    /// construct empty map from comparator
                }
                ev_multimap(const P &_Pred, const A &_Al)
                    : _Base(_Pred, _Al)
                {
                    /// construct empty map from comparator and allocator
                }
                template<class _Iter>
                ev_multimap(_Iter _First, _Iter _Last)
                    : _Base(_First, _Last)
                {
                    /// construct map from [_First, _Last), defaults
                }
                template<class _Iter>
                ev_multimap(_Iter _First, _Iter _Last, const P &_Pred)
                    : _Base(_First, _Last, _Pred)
                {
                    /// construct map from [_First, _Last), comparator
                }
                template<class _Iter>
                ev_multimap(_Iter _First, _Iter _Last, const P &_Pred, const A &_Al)
                    : _Base(_First, _Last, _Pred, _Al)
                {
                    /// construct map from [_First, _Last), comparator, and allocator
                }
            };

//#ifdef NEW_HASHMAP
//            template < class K, class V, class H = ::std::tr1::hash<K>, class P = ::std::equal_to<K>, class A =
//#if EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR
//            CSTLAllocator<std::pair<const K, V>, CPolicy>
//#else
//            std::allocator<std::pair<const K, V> >
//#endif
//            >
//            class ev_hashmap : public HashMap<K, V, H, P, A>
//            {
//            public:
//                typedef ev_hashmap<K, V, H, P, A> Myt;
//                typedef HashMap<K, V, H, P, A> _Base;
//                template <class _Iter>
//                class _Pairib : public pair<_Iter, bool>
//                {
//                public:
//                    _Pairib(const pair<_Iter, bool>& _Right)
//                        : pair<_Iter, bool>(_Right)
//                    {
//                        /// construct set by copying _Right
//                    }
//                };
//                ev_hashmap()
//                    : _Base()
//                {
//                    /// construct empty map from defaults
//                }
//                ev_hashmap(const Myt &_Right)
//                    : _Base(_Right)
//                {
//                    /// construct map by copying _Right
//                }
//                explicit ev_hashmap(const P &_Pred)
//                    : _Base(_Pred)
//                {
//                    /// construct empty map from comparator
//                }
//                ev_hashmap(const P &_Pred, const A &_Al)
//                    : _Base(_Pred, _Al)
//                {
//                    /// construct empty map from comparator and allocator
//                }
//                template<class _Iter>
//                ev_hashmap(_Iter _First, _Iter _Last)
//                    : _Base(_First, _Last)
//                {
//                    /// construct map from [_First, _Last), defaults
//                }
//                template<class _Iter>
//                ev_hashmap(_Iter _First, _Iter _Last, const P &_Pred)
//                    : _Base(_First, _Last, _Pred)
//                {
//                    /// construct map from [_First, _Last), comparator
//                }
//                template<class _Iter>
//                ev_hashmap(_Iter _First, _Iter _Last, const P &_Pred, const A &_Al)
//                    : _Base(_First, _Last, _Pred, _Al)
//                {
//                    /// construct map from [_First, _Last), comparator, and allocator
//                }
//            };
//#else
//#ifdef EV_OS_IOS
//            template < class K, class V, class H = __gnu_cxx::hash<K>, class E = equal_to<K>, class A =
//#if EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR
//            CSTLAllocator<std::pair<const K, V>, CPolicy>
//#else
//            std::allocator<std::pair<const K, V> >
//#endif
//            >
//            class ev_hashmap : public HashMap<K, V, H, E, A>
//            {
//            public:
//                typedef ev_hashmap<K, V, H, E, A> Myt;
//                typedef HashMap<K, V, H, E, A> _Base;
//                template <class _Iter>
//                class _Pairib : public pair<_Iter, bool>
//                {
//                public:
//                    _Pairib(const pair<_Iter, bool>& _Right)
//                        : pair<_Iter, bool>(_Right)
//                    {
//                        /// construct set by copying _Right
//                    }
//                };
//                ev_hashmap()
//                    : _Base()
//                {
//                    /// construct empty map from defaults
//                }
//                ev_hashmap(const Myt &_Right)
//                    : _Base(_Right)
//                {
//                    /// construct map by copying _Right
//                }
//
//                explicit
//                ev_hashmap(size_type __n)
//                    : _Base(__n)
//                {
//                }
//
//                ev_hashmap(size_type __n, const H &__hf)
//                    : _Base(__n, __hf)
//                {
//                }
//
//                ev_hashmap(size_type __n, const H &__hf, const E &__eql, const A &__a = _Base::allocator_type())
//                    : _Base(__n, __hf, __eql, __a)
//                {
//                }
//
//                template<class _InputIterator>
//                ev_hashmap(_InputIterator __f, _InputIterator __l)
//                    : _Base(__f, __l)
//                {
//                }
//
//                template<class _InputIterator>
//                ev_hashmap(_InputIterator __f, _InputIterator __l, size_type __n)
//                    : _Base(__f, __l, __n)
//                {
//                }
//
//                template<class _InputIterator>
//                ev_hashmap(_InputIterator __f, _InputIterator __l, size_type __n, const H &__hf)
//                    : _Base(__f, __l, __n, __hf)
//                {
//                }
//
//                template<class _InputIterator>
//                ev_hashmap(_InputIterator __f, _InputIterator __l, size_type __n,
//                           const H &__hf, const E &__eql,
//                           const A &__a = _Base::allocator_type())
//                    : _Base(__f, __l, __n, __hf, __eql, __a)
//                {
//                }
//            };
//#else
//            template < class K, class V, class P = std::hash_compare<K, std::less<K> >, class A =
//#if EV_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR
//            CSTLAllocator<std::pair<const K, V>, CPolicy>
//#else
//            std::allocator<std::pair<const K, V> >
//#endif
//            >
//            class ev_hashmap : public HashMap<K, V, P, A>
//            {
//            public:
//                typedef ev_hashmap<K, V, P, A> Myt;
//                typedef HashMap<K, V, P, A> _Base;
//
//                template <class _Iter>
//                class _Pairib : public pair<_Iter, bool>
//                {
//                public:
//                    _Pairib(const pair<_Iter, bool>& _Right)
//                        : pair<_Iter, bool>(_Right)
//                    {
//                        /// construct set by copying _Right
//                    }
//                };
//
//                ev_hashmap()
//                    : _Base()
//                {
//                    /// construct empty map from defaults
//                }
//
//                ev_hashmap(const Myt &_Right)
//                    : _Base(_Right)
//                {
//                    /// construct map by copying _Right
//                }
//
//                explicit ev_hashmap(const P &_Pred)
//                    : _Base(_Pred)
//                {
//                    /// construct empty map from comparator
//                }
//
//                ev_hashmap(const P &_Pred, const A &_Al)
//                    : _Base(_Pred, _Al)
//                {
//                    /// construct empty map from comparator and allocator
//                }
//
//                template<class _Iter>
//                ev_hashmap(_Iter _First, _Iter _Last)
//                    : _Base(_First, _Last)
//                {
//                    /// construct map from [_First, _Last), defaults
//                }
//
//                template<class _Iter>
//                ev_hashmap(_Iter _First, _Iter _Last, const P &_Pred)
//                    : _Base(_First, _Last, _Pred)
//                {
//                    /// construct map from [_First, _Last), comparator
//                }
//
//                template<class _Iter>
//                ev_hashmap(_Iter _First, _Iter _Last, const P &_Pred, const A &_Al)
//                    : _Base(_First, _Last, _Pred, _Al)
//                {
//                    /// construct map from [_First, _Last), comparator, and allocator
//                }
//            };
//#endif
//#endif

  template<class Value, class Hash> 
  class hash_traits {
    Hash hash_value;
    std::less<Value> comp;
  public:
    enum {
        bucket_size = 4,
        min_buckets = 8
    };
    // hash _Keyval to size_t value
    size_t operator()(const Value& v) const {
        return ((size_t)hash_value(v));
    }
    // test if _Keyval1 ordered before _Keyval2
    bool operator()(const Value& v1, const Value& v2) const {
        return (comp(v1, v2));
    }
    };

#ifdef EV_OS_LINUX

  template<class _Key, class _Tp, class _HashFn = __gnu_cxx::hash<_Key>,
  	   class _EqualKey = __gnu_cxx::equal_to<_Key>, class _Alloc = allocator<_Tp> >
  class ev_hashmap
      : public __gnu_cxx::hash_map<_Key, _Tp, _HashFn, _EqualKey, _Alloc > {
          typedef __gnu_cxx::hash_map<_Key, _Tp, _HashFn, _EqualKey, _Alloc> super;
  public:
      ev_hashmap() : super() {}

      typedef typename super::const_iterator const_interator;
      typedef typename super::iterator iterator;

      typedef pair<iterator, bool> _Pairib;


  };

#else
  template <typename Key, typename T, typename Hash = stdext::hash_compare<Key, less<Key> >, typename Pred = std::equal_to<Key> >
  class ev_hashmap 
      : public stdext::hash_map<Key, T, hash_traits<Key, Hash> > {
          typedef stdext::hash_map<Key, T, hash_traits<Key, Hash> > super;
  public:
      ev_hashmap() : super() {}
  };
#endif



//#define deque ev_deque
//#define vector ev_vector
//#define list ev_list
//#define set ev_set
//#define map ev_map
//#define multimap ev_multimap
#define ev_vector vector
#define ev_list list
#define ev_map map
#define ev_set set
#define ev_deque deque
#define hashmap ev_hashmap
#if defined(EV_OS_WIN)
#define RESERVE_CONTAINER_FUNCTION(mList) \
    iterator begin()    { return mList.begin();}\
    iterator end()      { return mList.end(); }\
    const_iterator begin() const { return mList.begin(); }\
    const_iterator end() const { return mList.end(); }\
    reverse_iterator rbegin()    { return mList.rbegin();}\
    reverse_iterator rend()      { return mList.rend(); }\
    const_reverse_iterator rbegin() const { return mList.rbegin(); }\
    const_reverse_iterator rend() const { return mList.rend(); }\
    iterator erase(iterator pos){ return mList.erase(pos);}\
    iterator erase(iterator first, iterator last){ return mList.erase(first,last);}
#define RESERVE_CONTAINER_FUNCTION_SET(mList) RESERVE_CONTAINER_FUNCTION(mList)
#define RESERVE_CONTAINER_FUNCTION_LIST(mList) RESERVE_CONTAINER_FUNCTION(mList)
#define RESERVE_CONTAINER_FUNCTION_VECTOR(mList) RESERVE_CONTAINER_FUNCTION(mList)
#define RESERVE_CONTAINER_FUNCTION_MAP(mList) RESERVE_CONTAINER_FUNCTION(mList)
#define RESERVE_CONTAINER_FUNCTION_MULTIMAP(mList)\
    iterator begin()    { return mList.begin();}\
    iterator end()      { return mList.end(); }\
    const_iterator begin() const { return mList.begin(); }\
    const_iterator end() const { return mList.end(); }\
    iterator erase(iterator pos){ return mList.erase(pos);}\
    iterator erase(iterator first, iterator last){ return mList.erase(first,last);}
#define RESERVE_CONTAINER_FUNCTION_HASHMAP(mList)  \
    iterator begin()    { return mList.begin();}\
    iterator end()      { return mList.end(); }\
    const_iterator begin() const { return mList.begin(); }\
    const_iterator end() const { return mList.end(); }\
    iterator erase(iterator pos){ return mList.erase(pos);}\
    iterator erase(iterator first, iterator last){ return mList.erase(first,last);}
#elif defined(EV_OS_ANDROID)  			
#define RESERVE_CONTAINER_FUNCTION_SET(mList) \
	iterator begin()    { return mList.begin();}\
	iterator end()      { return mList.end(); }\
	const_iterator begin() const { return mList.begin(); }\
	const_iterator end() const { return mList.end(); }\
	reverse_iterator rbegin()    { return mList.rbegin();}\
	reverse_iterator rend()      { return mList.rend(); }\
	const_reverse_iterator rbegin() const { return mList.rbegin(); }\
	const_reverse_iterator rend() const { return mList.rend(); }\
	void erase(iterator pos){ /*return*/ mList.erase(pos);}\
	void erase(iterator first, iterator last){ /*return*/ mList.erase(first,last);}
#define RESERVE_CONTAINER_FUNCTION_LIST(mList) \
	iterator begin()    { return mList.begin();}\
	iterator end()      { return mList.end(); }\
	const_iterator begin() const { return mList.begin(); }\
	const_iterator end() const { return mList.end(); }\
	reverse_iterator rbegin()    { return mList.rbegin();}\
	reverse_iterator rend()      { return mList.rend(); }\
	const_reverse_iterator rbegin() const { return mList.rbegin(); }\
	const_reverse_iterator rend() const { return mList.rend(); }\
	iterator erase(iterator pos){ return mList.erase(pos);}\
	iterator erase(iterator first, iterator last){ return mList.erase(first,last);}
#ifdef NEW_HASHMAP
#define RESERVE_CONTAINER_FUNCTION_HASHMAP(mList) \
	iterator begin()    { return mList.begin();}\
	iterator end()      { return mList.end(); }\
	const_iterator begin() const { return mList.begin(); }\
	const_iterator end() const { return mList.end(); }\
	void erase(iterator pos){ /*return */mList.erase(pos);}\
	void erase(iterator first, iterator last){ /*return*/ mList.erase(first,last);}
#else
#define RESERVE_CONTAINER_FUNCTION_HASHMAP(mList) \
	iterator begin()    { return mList.begin();}\
	iterator end()      { return mList.end(); }\
	const_iterator begin() const { return mList.begin(); }\
	const_iterator end() const { return mList.end(); }\
	void erase(iterator pos){/* return */mList.erase(pos);}\
	void erase(iterator first, iterator last){ /*return*/ mList.erase(first,last);}
#endif
#define RESERVE_CONTAINER_FUNCTION_VECTOR(mList) RESERVE_CONTAINER_FUNCTION_LIST(mList)
#define RESERVE_CONTAINER_FUNCTION_MAP(mList) RESERVE_CONTAINER_FUNCTION_SET(mList)
#define RESERVE_CONTAINER_FUNCTION_MULTIMAP(mList) RESERVE_CONTAINER_FUNCTION_HASHMAP(mList)
#define RESERVE_CONTAINER_FUNCTION(mList) RESERVE_CONTAINER_FUNCTION_SET(mList)
#elif defined(EV_OS_LINUX)
#define RESERVE_CONTAINER_FUNCTION_SET(mList) \
    iterator begin()    { return mList.begin();}\
    iterator end()      { return mList.end(); }\
    const_iterator begin() const { return mList.begin(); }\
    const_iterator end() const { return mList.end(); }\
    reverse_iterator rbegin()    { return mList.rbegin();}\
    reverse_iterator rend()      { return mList.rend(); }\
    const_reverse_iterator rbegin() const { return mList.rbegin(); }\
    const_reverse_iterator rend() const { return mList.rend(); }\
    void erase(iterator pos){ return mList.erase(pos);}\
    void erase(iterator first, iterator last){ return mList.erase(first,last);}
#define RESERVE_CONTAINER_FUNCTION_LIST(mList) \
	    iterator begin()    { return mList.begin();}\
	    iterator end()      { return mList.end(); }\
	    const_iterator begin() const { return mList.begin(); }\
	    const_iterator end() const { return mList.end(); }\
	    reverse_iterator rbegin()    { return mList.rbegin();}\
	    reverse_iterator rend()      { return mList.rend(); }\
	    const_reverse_iterator rbegin() const { return mList.rbegin(); }\
	    const_reverse_iterator rend() const { return mList.rend(); }\
	    iterator erase(iterator pos){ return mList.erase(pos);}\
	    iterator erase(iterator first, iterator last){ return mList.erase(first,last);}
#ifdef NEW_HASHMAP
#define RESERVE_CONTAINER_FUNCTION_HASHMAP(mList) \
	    iterator begin()    { return mList.begin();}\
	    iterator end()      { return mList.end(); }\
	    const_iterator begin() const { return mList.begin(); }\
	    const_iterator end() const { return mList.end(); }\
	    iterator erase(iterator pos){ return mList.erase(pos);}\
	    iterator erase(iterator first, iterator last){ return mList.erase(first,last);}
#else
#define RESERVE_CONTAINER_FUNCTION_HASHMAP(mList) \
	    iterator begin()    { return mList.begin();}\
	    iterator end()      { return mList.end(); }\
	    const_iterator begin() const { return mList.begin(); }\
	    const_iterator end() const { return mList.end(); }\
	    void erase(iterator pos){ return mList.erase(pos);}\
	    void erase(iterator first, iterator last){ return mList.erase(first,last);}
#endif
#define RESERVE_CONTAINER_FUNCTION_VECTOR(mList) RESERVE_CONTAINER_FUNCTION_LIST(mList)
#define RESERVE_CONTAINER_FUNCTION_MAP(mList) RESERVE_CONTAINER_FUNCTION_SET(mList)
#define RESERVE_CONTAINER_FUNCTION_MULTIMAP(mList) RESERVE_CONTAINER_FUNCTION_SET(mList)
#define RESERVE_CONTAINER_FUNCTION(mList) RESERVE_CONTAINER_FUNCTION_LIST(mList)

#endif

        }
    }
}

#endif
