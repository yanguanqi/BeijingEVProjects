/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/datadriverfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Convertor::CDataDriver*  _stdcall EarthView_World_Spatial_Convertor_CDataDriverFactory_createDriver_CDataDriver_EVDataDriverType(_in int type )
				{
					EarthView::World::Spatial::Convertor::CDataDriver* objXXXX = EarthView::World::Spatial::Convertor::CDataDriverFactory::createDriver((EarthView::World::Spatial::Convertor::EVDataDriverType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDataDriverFactory_disposeDriver_void_CDataDriver(_in const EarthView::World::Spatial::Convertor::CDataDriver* driver )
				{
					EarthView::World::Spatial::Convertor::CDataDriverFactory::disposeDriver(driver);
				}
			}
		}
	}
}
