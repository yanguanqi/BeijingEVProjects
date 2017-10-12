/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/localtileutility.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_CacheFile_DataSourceMetaFullName( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CacheFile* ptrNativeObject = (EarthView::World::Spatial3D::CacheFile*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->DataSourceMetaFullName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CacheFile_DataSourceMetaFullName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::CacheFile*)pObjectXXXX)->DataSourceMetaFullName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_CacheFile_DatasetName( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CacheFile* ptrNativeObject = (EarthView::World::Spatial3D::CacheFile*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->DatasetName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CacheFile_DatasetName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::CacheFile*)pObjectXXXX)->DatasetName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_CacheFile_CacheFileName( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CacheFile* ptrNativeObject = (EarthView::World::Spatial3D::CacheFile*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->CacheFileName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CacheFile_CacheFileName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::CacheFile*)pObjectXXXX)->CacheFileName = value1;
			}
		}
	}
}
