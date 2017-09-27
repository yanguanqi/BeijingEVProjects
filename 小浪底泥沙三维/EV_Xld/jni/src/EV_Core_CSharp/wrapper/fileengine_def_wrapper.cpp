/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/fileengine_def.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Core_FileAttributes_bIsDirectory( void *pObjectXXXX )
			{
				EarthView::World::Core::FileAttributes* ptrNativeObject = (EarthView::World::Core::FileAttributes*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->bIsDirectory;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileAttributes_bIsDirectory( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Core::FileAttributes*)pObjectXXXX)->bIsDirectory = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Core_FileAttributes_bIsHidden( void *pObjectXXXX )
			{
				EarthView::World::Core::FileAttributes* ptrNativeObject = (EarthView::World::Core::FileAttributes*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->bIsHidden;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileAttributes_bIsHidden( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Core::FileAttributes*)pObjectXXXX)->bIsHidden = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Core_FileAttributes_bIsReadOnly( void *pObjectXXXX )
			{
				EarthView::World::Core::FileAttributes* ptrNativeObject = (EarthView::World::Core::FileAttributes*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->bIsReadOnly;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileAttributes_bIsReadOnly( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Core::FileAttributes*)pObjectXXXX)->bIsReadOnly = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Core_FileAttributes_strCreateTime( void *pObjectXXXX )
			{
				EarthView::World::Core::FileAttributes* ptrNativeObject = (EarthView::World::Core::FileAttributes*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->strCreateTime;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileAttributes_strCreateTime( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Core::FileAttributes*)pObjectXXXX)->strCreateTime = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Core_FileAttributes_strLastAccessTime( void *pObjectXXXX )
			{
				EarthView::World::Core::FileAttributes* ptrNativeObject = (EarthView::World::Core::FileAttributes*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->strLastAccessTime;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileAttributes_strLastAccessTime( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Core::FileAttributes*)pObjectXXXX)->strLastAccessTime = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Core_FileAttributes_strLastWriteTime( void *pObjectXXXX )
			{
				EarthView::World::Core::FileAttributes* ptrNativeObject = (EarthView::World::Core::FileAttributes*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->strLastWriteTime;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileAttributes_strLastWriteTime( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Core::FileAttributes*)pObjectXXXX)->strLastWriteTime = value1;
			}
		}
	}
}
