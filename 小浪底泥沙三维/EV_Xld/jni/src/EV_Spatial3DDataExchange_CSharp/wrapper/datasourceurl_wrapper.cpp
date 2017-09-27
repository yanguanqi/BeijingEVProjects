/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/datasourceurl.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CDataSourceUrl_setURL_void_EVString(void *pObjectXXXX, _in const char* url )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial3D::DataExchange::CDataSourceUrl* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*) pObjectXXXX;
					ptrNativeObject->setURL(url1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_CDataSourceUrl_getURL_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CDataSourceUrl* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getURL();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_DataExchange_CDataSourceUrl_medium_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CDataSourceUrl* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->medium();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_DataExchange_CDataSourceUrl_connectParameter_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CDataSourceUrl* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->connectParameter();
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
