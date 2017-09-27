/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/modeldatadriverfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::DataExchange::CModelDataDriver*  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataDriverFactory_createDriver_CModelDataDriver_EVModelDataDriverType(_in int type )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataDriver* objXXXX = EarthView::World::Spatial3D::DataExchange::CModelDataDriverFactory::createDriver((EarthView::World::Spatial3D::DataExchange::EVModelDataDriverType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataDriverFactory_disposeDriver_void_CModelDataDriver(_in const EarthView::World::Spatial3D::DataExchange::CModelDataDriver* driver )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataDriverFactory::disposeDriver(driver);
				}
			}
		}
	}
}
