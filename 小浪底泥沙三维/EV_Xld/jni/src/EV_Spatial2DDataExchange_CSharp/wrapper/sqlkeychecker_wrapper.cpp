/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/sqlkeychecker.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Convertor::CSQLKeyChecker*  _stdcall EarthView_World_Spatial_Convertor_CSQLKeyChecker_getInstance_CSQLKeyChecker( )
				{
					EarthView::World::Spatial::Convertor::CSQLKeyChecker* objXXXX = EarthView::World::Spatial::Convertor::CSQLKeyChecker::getInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Convertor_CSQLKeyChecker_reloadKeyValue_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CSQLKeyChecker* ptrNativeObject = (EarthView::World::Spatial::Convertor::CSQLKeyChecker*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->reloadKeyValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Convertor_CSQLKeyChecker_isNameConflict_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial::Convertor::CSQLKeyChecker* ptrNativeObject = (EarthView::World::Spatial::Convertor::CSQLKeyChecker*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNameConflict(name1);
					return objXXXX;
				}
			}
		}
	}
}
