#ifndef _STRING_DEFINES_H_
#define _STRING_DEFINES_H_

#pragma once

#include "core/global.h"
#include "core/multibytestring.h"
#include "core/unicodestring.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

#if EV_STRING_USE_CUSTOM_MEMORY_ALLOCATOR
#if EV_WCHAR_T_STRINGS
            typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, CSTLAllocator<wchar_t, CPolicy > >	_StringBase;
#else
            typedef std::basic_string<ev_char, std::char_traits<ev_char>, CSTLAllocator<ev_char, CPolicy > >	_StringBase;
#endif
#if EV_WCHAR_T_STRINGS
            typedef std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, CSTLAllocator<wchar_t, CPolicy >> _StringStreamBase;
#else
            typedef std::basic_stringstream<ev_char, std::char_traits<ev_char>, CSTLAllocator<ev_char, CPolicy > > _StringStreamBase;
#endif
#define StdStringT(T) std::basic_string<T, std::char_traits<T>, std::allocator<T> >
#define CustomMemoryStringT(T) std::basic_string<T, std::char_traits<T>, CSTLAllocator<T,CPolicy> >

            template<typename T>
            ev_bool operator <(const CustomMemoryStringT(T)& l, const StdStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) < 0;
            }
            template<typename T>
            ev_bool operator <(const StdStringT(T)& l, const CustomMemoryStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) < 0;
            }
            template<typename T>
            ev_bool operator <=(const CustomMemoryStringT(T)& l, const StdStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) <= 0;
            }
            template<typename T>
            ev_bool operator <=(const StdStringT(T)& l, const CustomMemoryStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) <= 0;
            }
            template<typename T>
            ev_bool operator >(const CustomMemoryStringT(T)& l, const StdStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) > 0;
            }
            template<typename T>
            ev_bool operator >(const StdStringT(T)& l, const CustomMemoryStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) > 0;
            }
            template<typename T>
            ev_bool operator >=(const CustomMemoryStringT(T)& l, const StdStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) >= 0;
            }
            template<typename T>
            ev_bool operator >=(const StdStringT(T)& l, const CustomMemoryStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) >= 0;
            }
            template<typename T>
            ev_bool operator ==(const CustomMemoryStringT(T)& l, const StdStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) == 0;
            }
            template<typename T>
            ev_bool operator ==(const StdStringT(T)& l, const CustomMemoryStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) == 0;
            }
            template<typename T>
            ev_bool operator !=(const CustomMemoryStringT(T)& l, const StdStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) != 0;
            }
            template<typename T>
            ev_bool operator !=(const StdStringT(T)& l, const CustomMemoryStringT(T)& o)
            {
                return l.compare(0, l.length(), o.c_str(), o.length()) != 0;
            }
            template<typename T>
            CustomMemoryStringT(T) operator +=(const CustomMemoryStringT(T)& l, const StdStringT(T)& o)
            {
                return CustomMemoryStringT(T)(l) += o.c_str();
            }
            template<typename T>
            CustomMemoryStringT(T) operator +=(const StdStringT(T)& l, const CustomMemoryStringT(T)& o)
            {
                return CustomMemoryStringT(T)(l.c_str()) += o.c_str();
            }
            template<typename T>
            CustomMemoryStringT(T) operator +(const CustomMemoryStringT(T)& l, const StdStringT(T)& o)
            {
                return CustomMemoryStringT(T)(l) += o.c_str();
            }
            template<typename T>
            CustomMemoryStringT(T) operator +(const StdStringT(T)& l, const CustomMemoryStringT(T)& o)
            {
                return CustomMemoryStringT(T)(l.c_str()) += o.c_str();
            }
            template<typename T>
            CustomMemoryStringT(T) operator +(const T *l, const CustomMemoryStringT(T)& o)
            {
                return CustomMemoryStringT(T)(l) += o;
            }
#undef StdStringT
#undef CustomMemoryStringT
#else
#if EV_WCHAR_T_STRINGS
            typedef EarthView::World::Core::ev_wstring _StringBase;
#else
            typedef EarthView::World::Core::ev_string  _StringBase;
#endif
#if EV_WCHAR_T_STRINGS
            typedef std::basic_stringstream<ev_wchar, std::char_traits<ev_wchar>, std::allocator<ev_wchar>> _StringStreamBase;
#else
            typedef std::basic_stringstream<ev_char, std::char_traits<ev_char>, std::allocator<ev_char> > _StringStreamBase;
#endif
#endif
            typedef _StringBase EVString;
            typedef _StringStreamBase StringStream;
            typedef StringStream stringstream;
#define EVString EarthView::World::Core::EVString
#define stringstream EarthView::World::Core::stringstream
            typedef EVString DisplayString;
#define EV_DEREF_DISPLAYSTRING_ITERATOR(it) *it
        }
    }
}

#if EV_COMPILER == EV_COMPILER_GNUC && EV_COMP_VER >= 310 && !defined(STLPORT)

namespace __gnu_cxx
{
    template <>
    struct hash< EarthView::World::Core::_StringBase >
    {
        ev_size_t operator()( const EarthView::World::Core::_StringBase _stringBase ) const
        {
            /* This is the PRO-STL way, but it seems to cause problems with VC7.1
             and in some other cases (although I can't recreate it)
             hash<const ev_char*> H;
             return H(_stringBase.c_str());
             */
            /** This is our custom way */
            register ev_size_t ret = 0;
            for( EarthView::World::Core::_StringBase::const_iterator it = _stringBase.begin(); it != _stringBase.end(); ++it )
                ret = 5 * ret + *it;
            
            return ret;
        }
    };
}
#endif            
#if EV_COMPILER == EV_COMPILER_GNUC && EV_COMP_VER >= 310 && !defined(STLPORT)
typedef ::__gnu_cxx::hash< EarthView::World::Core::_StringBase > _StringHash;
#elif EV_COMPILER == EV_COMPILER_MSVC && EV_COMP_VER >= 1600 && !defined(STLPORT) /// VC++ 10.0
typedef ::std::tr1::hash< EarthView::World::Core::_StringBase > _StringHash;
#elif !defined( _STLP_HASH_FUN_H )
typedef stdext::hash_compare< EarthView::World::Core::_StringBase, std::less< EarthView::World::Core::_StringBase > > _StringHash;
#else
typedef std::hash< EarthView::World::Core::_StringBase > _StringHash;
#endif

#endif
