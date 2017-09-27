/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/filemapping.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFileMapping_open_ev_bool_ev_string_FILEACCESS_ev_uint64_ev_string(void *pObjectXXXX, _in const char* strFileName, _in const int& access, _in ev_uint64 nMaxSize, _in const char* strShareName )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				EarthView::World::Core::ev_string strShareName1 = strShareName;
				EarthView::World::Core::CFileMapping* ptrNativeObject = (EarthView::World::Core::CFileMapping*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->open(strFileName1, (EarthView::World::Core::FILEACCESS&)access, nMaxSize, strShareName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFileMapping_isOpen_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CFileMapping* ptrNativeObject = (EarthView::World::Core::CFileMapping*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isOpen();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileMapping_close_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CFileMapping* ptrNativeObject = (EarthView::World::Core::CFileMapping*) pObjectXXXX;
				ptrNativeObject->close();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CFileMapping_mapViewOfFile_void_ev_uint64_ev_uint64(void *pObjectXXXX, _in ev_uint64 nOffset, _in ev_uint64 nBytes )
			{
				EarthView::World::Core::CFileMapping* ptrNativeObject = (EarthView::World::Core::CFileMapping*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->mapViewOfFile(nOffset, nBytes);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFileMapping_flushMapViewOfFile_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CFileMapping* ptrNativeObject = (EarthView::World::Core::CFileMapping*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->flushMapViewOfFile();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFileMapping_unMapViewOfFile_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CFileMapping* ptrNativeObject = (EarthView::World::Core::CFileMapping*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->unMapViewOfFile();
				return objXXXX;
			}
		}
	}
}
