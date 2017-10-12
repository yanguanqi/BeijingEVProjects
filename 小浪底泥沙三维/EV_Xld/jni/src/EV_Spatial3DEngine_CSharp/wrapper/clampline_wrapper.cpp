/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/clampline.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CClampLineExtension_load_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				ptrNativeObject->load();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CClampLineExtension_appendGeoObject_void_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				ptrNativeObject->appendGeoObject(ref_geoObject);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CClampLineExtension_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CClampLineExtension_getVisible_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CClampLineExtension_destroy_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				ptrNativeObject->destroy();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CClampLineExtension_setRenderingMinDistance_void_ev_real32(void *pObjectXXXX, _in ev_real32 min )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				ptrNativeObject->setRenderingMinDistance(min);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CClampLineExtension_setRenderingMaxDistance_void_ev_real32(void *pObjectXXXX, _in ev_real32 max )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				ptrNativeObject->setRenderingMaxDistance(max);
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial3D_CClampLineExtension_getRenderingMinDistance_ev_real32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getRenderingMinDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial3D_CClampLineExtension_getRenderingMaxDistance_ev_real32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getRenderingMaxDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CMultiGeometry3DExtension*  _stdcall EarthView_World_Spatial3D_CClampLineExtension_getRealExtension_CMultiGeometry3DExtension(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension* objXXXX = ptrNativeObject->getRealExtension();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CClampLineExtension_setSelectionColor_void_CColourValue(void *pObjectXXXX, _in void* color )
			{
				EarthView::World::Spatial3D::CClampLineExtension* ptrNativeObject = (EarthView::World::Spatial3D::CClampLineExtension*) pObjectXXXX;
				ptrNativeObject->setSelectionColor(*(EarthView::World::Graphic::CColourValue*)color);
			}
		}
	}
}
