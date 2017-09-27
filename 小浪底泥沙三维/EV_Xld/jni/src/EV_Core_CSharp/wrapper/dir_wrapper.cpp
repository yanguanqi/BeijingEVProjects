/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/dir.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_create_ev_bool_ev_string(_in const char* strDir )
			{
				EarthView::World::Core::ev_string strDir1 = strDir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::create(strDir1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_remove_ev_bool_ev_string(_in const char* strDir )
			{
				EarthView::World::Core::ev_string strDir1 = strDir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::remove(strDir1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_exists_ev_bool_ev_string(_in const char* strDir )
			{
				EarthView::World::Core::ev_string strDir1 = strDir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::exists(strDir1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_copy_ev_bool_ev_string_ev_string_ev_bool(_in const char* strSrcDir, _in const char* strDstDir, _in ev_bool bOverWrite )
			{
				EarthView::World::Core::ev_string strSrcDir1 = strSrcDir;
				EarthView::World::Core::ev_string strDstDir1 = strDstDir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::copy(strSrcDir1, strDstDir1, bOverWrite);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_move_ev_bool_ev_string_ev_string_ev_bool(_in const char* strSrcDir, _in const char* strDstDir, _in ev_bool bOverWrite )
			{
				EarthView::World::Core::ev_string strSrcDir1 = strSrcDir;
				EarthView::World::Core::ev_string strDstDir1 = strDstDir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::move(strSrcDir1, strDstDir1, bOverWrite);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_getFiles_ev_bool_ev_string_CStringArray_ev_bool(_in const char* strDir, _inout void* files, _in ev_bool bSubDir )
			{
				EarthView::World::Core::ev_string strDir1 = strDir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::getFiles(strDir1, *(EarthView::World::Core::CStringArray*)files, bSubDir);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_getFiles_ev_bool_ev_string_CStringArray_ev_bool_ev_string(_in const char* strDir, _inout void* files, _in ev_bool bSubDir, _in const char* strWildcard )
			{
				EarthView::World::Core::ev_string strDir1 = strDir;
				EarthView::World::Core::ev_string strWildcard1 = strWildcard;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::getFiles(strDir1, *(EarthView::World::Core::CStringArray*)files, bSubDir, strWildcard1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_getDirectories_ev_bool_ev_string_CStringArray_ev_bool(_in const char* strDir, _inout void* dirs, _in ev_bool bSubDir )
			{
				EarthView::World::Core::ev_string strDir1 = strDir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::getDirectories(strDir1, *(EarthView::World::Core::CStringArray*)dirs, bSubDir);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_getAttributes_ev_bool_ev_string_FileAttributes(_in const char* strDir, _inout void* attrs )
			{
				EarthView::World::Core::ev_string strDir1 = strDir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::getAttributes(strDir1, *(EarthView::World::Core::FileAttributes*)attrs);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_getCurrentDirectory_ev_bool_ev_string(_out char*& dir )
			{
				EarthView::World::Core::ev_string dir1 = dir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::getCurrentDirectory(dir1);
				dir=dir1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_setCurrentDirectory_ev_bool_ev_string(_in const char* dir )
			{
				EarthView::World::Core::ev_string dir1 = dir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::setCurrentDirectory(dir1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_getTempDirectory_ev_bool_ev_string(_out char*& dir )
			{
				EarthView::World::Core::ev_string dir1 = dir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::getTempDirectory(dir1);
				dir=dir1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_getSystemDirectory_ev_bool_ev_string(_out char*& dir )
			{
				EarthView::World::Core::ev_string dir1 = dir;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::getSystemDirectory(dir1);
				dir=dir1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDirectory_getModuleName_ev_bool_ev_string(_out char*& module )
			{
				EarthView::World::Core::ev_string module1 = module;
				ev_bool objXXXX = EarthView::World::Core::CDirectory::getModuleName(module1);
				module=module1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CDirectory_formatPath_EVString_EVString(_in const char* path )
			{
				EarthView::World::Core::ev_string path1 = path;
				EVString objXXXX = EarthView::World::Core::CDirectory::formatPath(path1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CDirectory_formatPath_EVString_EVString_EVString(_in const char* path, _in const char* file )
			{
				EarthView::World::Core::ev_string path1 = path;
				EarthView::World::Core::ev_string file1 = file;
				EVString objXXXX = EarthView::World::Core::CDirectory::formatPath(path1, file1);
				return objXXXX.makeBuffer();
			}
		}
	}
}
