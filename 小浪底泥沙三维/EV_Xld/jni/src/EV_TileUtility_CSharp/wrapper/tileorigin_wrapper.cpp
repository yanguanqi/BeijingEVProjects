/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tileorigin.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileOrigin_getX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileOrigin_getY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileOrigin_getWidth_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileOrigin_getHeight_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CTileOrigin_getOriginPosition_EVOriginPositionType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				EarthView::World::Spatial::EVOriginPositionType objXXXX = ptrNativeObject->getOriginPosition();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileOrigin_setX_void_ev_real64(void *pObjectXXXX, _in ev_real64 dValue )
			{
				EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				ptrNativeObject->setX(dValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileOrigin_setY_void_ev_real64(void *pObjectXXXX, _in ev_real64 dValue )
			{
				EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				ptrNativeObject->setY(dValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileOrigin_setWidth_void_ev_real64(void *pObjectXXXX, _in ev_real64 dWidth )
			{
				EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				ptrNativeObject->setWidth(dWidth);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileOrigin_setHeight_void_ev_real64(void *pObjectXXXX, _in ev_real64 dHeight )
			{
				EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				ptrNativeObject->setHeight(dHeight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileOrigin_setOriginPosition_void_EVOriginPositionType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				ptrNativeObject->setOriginPosition((EarthView::World::Spatial::EVOriginPositionType)type);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileOrigin_getGeographicExtent_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& left, _out ev_real64& top, _out ev_real64& right, _out ev_real64& bottom )
			{
				EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				ptrNativeObject->getGeographicExtent(left, top, right, bottom);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileOrigin*  _stdcall EarthView_World_Spatial_CTileOrigin_clone_CTileOrigin(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileOrigin* ptrNativeObject = (EarthView::World::Spatial::CTileOrigin*) pObjectXXXX;
				EarthView::World::Spatial::CTileOrigin* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
		}
	}
}
