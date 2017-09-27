/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/ev_string.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringUtil_trim_void_EVString(_in char* str )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::CStringUtil::trim(str1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringUtil_trim_void_EVString_ev_bool(_in char* str, _in ev_bool left )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::CStringUtil::trim(str1, left);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringUtil_trim_void_EVString_ev_bool_ev_bool(_in char* str, _in ev_bool left, _in ev_bool right )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::CStringUtil::trim(str1, left, right);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CStringUtil_split_StringVector_EVString(_in const char* str )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::StringVector objXXXX = EarthView::World::Core::CStringUtil::split(str1);
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CStringUtil_split_StringVector_EVString_EVString(_in const char* str, _in const char* delims )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string delims1 = delims;
				EarthView::World::Core::StringVector objXXXX = EarthView::World::Core::CStringUtil::split(str1, delims1);
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CStringUtil_split_StringVector_EVString_EVString_ev_uint32(_in const char* str, _in const char* delims, _in ev_uint32 maxSplits )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string delims1 = delims;
				EarthView::World::Core::StringVector objXXXX = EarthView::World::Core::CStringUtil::split(str1, delims1, maxSplits);
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CStringUtil_tokenise_StringVector_EVString(_in const char* str )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::StringVector objXXXX = EarthView::World::Core::CStringUtil::tokenise(str1);
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CStringUtil_tokenise_StringVector_EVString_EVString(_in const char* str, _in const char* delims )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string delims1 = delims;
				EarthView::World::Core::StringVector objXXXX = EarthView::World::Core::CStringUtil::tokenise(str1, delims1);
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CStringUtil_tokenise_StringVector_EVString_EVString_EVString(_in const char* str, _in const char* delims, _in const char* doubleDelims )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string delims1 = delims;
				EarthView::World::Core::ev_string doubleDelims1 = doubleDelims;
				EarthView::World::Core::StringVector objXXXX = EarthView::World::Core::CStringUtil::tokenise(str1, delims1, doubleDelims1);
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CStringUtil_tokenise_StringVector_EVString_EVString_EVString_ev_uint32(_in const char* str, _in const char* delims, _in const char* doubleDelims, _in ev_uint32 maxSplits )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string delims1 = delims;
				EarthView::World::Core::ev_string doubleDelims1 = doubleDelims;
				EarthView::World::Core::StringVector objXXXX = EarthView::World::Core::CStringUtil::tokenise(str1, delims1, doubleDelims1, maxSplits);
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringUtil_toLowerCase_void_EVString(_in char* str )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::CStringUtil::toLowerCase(str1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringUtil_toUpperCase_void_EVString(_in char* str )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::CStringUtil::toUpperCase(str1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringUtil_startsWith_ev_bool_EVString_EVString(_in const char* str, _in const char* pattern )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string pattern1 = pattern;
				ev_bool objXXXX = EarthView::World::Core::CStringUtil::startsWith(str1, pattern1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringUtil_startsWith_ev_bool_EVString_EVString_ev_bool(_in const char* str, _in const char* pattern, _in ev_bool lowerCase )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string pattern1 = pattern;
				ev_bool objXXXX = EarthView::World::Core::CStringUtil::startsWith(str1, pattern1, lowerCase);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringUtil_endsWith_ev_bool_EVString_EVString(_in const char* str, _in const char* pattern )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string pattern1 = pattern;
				ev_bool objXXXX = EarthView::World::Core::CStringUtil::endsWith(str1, pattern1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringUtil_endsWith_ev_bool_EVString_EVString_ev_bool(_in const char* str, _in const char* pattern, _in ev_bool lowerCase )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string pattern1 = pattern;
				ev_bool objXXXX = EarthView::World::Core::CStringUtil::endsWith(str1, pattern1, lowerCase);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CStringUtil_standardisePath_EVString_EVString(_in const char* init )
			{
				EarthView::World::Core::ev_string init1 = init;
				EVString objXXXX = EarthView::World::Core::CStringUtil::standardisePath(init1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringUtil_splitFilename_void_EVString_EVString_EVString(_in const char* qualifiedName, _out char*& outBasename, _out char*& outPath )
			{
				EarthView::World::Core::ev_string qualifiedName1 = qualifiedName;
				EarthView::World::Core::ev_string outBasename1 = outBasename;
				EarthView::World::Core::ev_string outPath1 = outPath;
				EarthView::World::Core::CStringUtil::splitFilename(qualifiedName1, outBasename1, outPath1);
				outBasename=outBasename1.makeBuffer();outPath=outPath1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringUtil_splitFullFilename_void_EVString_EVString_EVString_EVString(_in const char* qualifiedName, _out char*& outBasename, _out char*& outExtention, _out char*& outPath )
			{
				EarthView::World::Core::ev_string qualifiedName1 = qualifiedName;
				EarthView::World::Core::ev_string outBasename1 = outBasename;
				EarthView::World::Core::ev_string outExtention1 = outExtention;
				EarthView::World::Core::ev_string outPath1 = outPath;
				EarthView::World::Core::CStringUtil::splitFullFilename(qualifiedName1, outBasename1, outExtention1, outPath1);
				outBasename=outBasename1.makeBuffer();outExtention=outExtention1.makeBuffer();outPath=outPath1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringUtil_splitBaseFilename_void_EVString_EVString_EVString(_in const char* fullName, _out char*& outBasename, _out char*& outExtention )
			{
				EarthView::World::Core::ev_string fullName1 = fullName;
				EarthView::World::Core::ev_string outBasename1 = outBasename;
				EarthView::World::Core::ev_string outExtention1 = outExtention;
				EarthView::World::Core::CStringUtil::splitBaseFilename(fullName1, outBasename1, outExtention1);
				outBasename=outBasename1.makeBuffer();outExtention=outExtention1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringUtil_match_ev_bool_EVString_EVString(_in const char* str, _in const char* pattern )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string pattern1 = pattern;
				ev_bool objXXXX = EarthView::World::Core::CStringUtil::match(str1, pattern1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringUtil_match_ev_bool_EVString_EVString_ev_bool(_in const char* str, _in const char* pattern, _in ev_bool caseSensitive )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::ev_string pattern1 = pattern;
				ev_bool objXXXX = EarthView::World::Core::CStringUtil::match(str1, pattern1, caseSensitive);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Core_CStringUtil_replaceAll_EVString_EVString_EVString_EVString(_in const char* source, _in const char* replaceWhat, _in const char* replaceWithWhat )
			{
				EarthView::World::Core::ev_string source1 = source;
				EarthView::World::Core::ev_string replaceWhat1 = replaceWhat;
				EarthView::World::Core::ev_string replaceWithWhat1 = replaceWithWhat;
				const EVString objXXXX = EarthView::World::Core::CStringUtil::replaceAll(source1, replaceWhat1, replaceWithWhat1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall Get_EarthView_World_Core_CStringUtil_BLANK()
			{
				const EVString objXXXX = EarthView::World::Core::CStringUtil::BLANK;
				return objXXXX.makeBuffer();
			}
		}
	}
}
