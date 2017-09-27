/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "cachemanager/cachestrategy.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CacheStrategy_getType_CacheBaseType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CacheStrategy* ptrNativeObject = (EarthView::World::Spatial::CacheStrategy*) pObjectXXXX;
				EarthView::World::Spatial::CacheBaseType objXXXX = ptrNativeObject->getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CacheStrategy_setType_void_CacheBaseType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CacheStrategy* ptrNativeObject = (EarthView::World::Spatial::CacheStrategy*) pObjectXXXX;
				ptrNativeObject->setType((EarthView::World::Spatial::CacheBaseType)type);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CacheStrategy_getLimitedValue_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CacheStrategy* ptrNativeObject = (EarthView::World::Spatial::CacheStrategy*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLimitedValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CacheStrategy_setLimitedValue_void_ev_int32(void *pObjectXXXX, _in ev_int32 limitValue )
			{
				EarthView::World::Spatial::CacheStrategy* ptrNativeObject = (EarthView::World::Spatial::CacheStrategy*) pObjectXXXX;
				ptrNativeObject->setLimitedValue(limitValue);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CacheStrategy_getEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CacheStrategy* ptrNativeObject = (EarthView::World::Spatial::CacheStrategy*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CacheStrategy_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Spatial::CacheStrategy* ptrNativeObject = (EarthView::World::Spatial::CacheStrategy*) pObjectXXXX;
				ptrNativeObject->setEnabled(enable);
			}
		}
	}
}
