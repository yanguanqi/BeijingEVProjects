/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/modeldatadriver.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_DataExchange_CModelDataDriver_getType_EVModelDataDriverType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelDataDriver* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelDataDriver*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::EVModelDataDriverType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
			}
		}
	}
}
