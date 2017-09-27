/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rotationalspline.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRotationalSpline_addPoint_void_CQuaternion(void *pObjectXXXX, _in const void* p )
			{
				EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				ptrNativeObject->addPoint(*(EarthView::World::Spatial::Math::CQuaternion*)p);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRotationalSpline_getPoint_CQuaternion_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getPoint(index);
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRotationalSpline_getNumPoints_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumPoints();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRotationalSpline_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRotationalSpline_updatePoint_void_ev_uint16_CQuaternion(void *pObjectXXXX, _in ev_uint16 index, _in const void* value )
			{
				EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				ptrNativeObject->updatePoint(index, *(EarthView::World::Spatial::Math::CQuaternion*)value);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRotationalSpline_interpolate_CQuaternion_Real_ev_bool(void *pObjectXXXX, _in Real t, _in ev_bool useShortestPath )
			{
				EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->interpolate(t, useShortestPath);
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRotationalSpline_interpolate_CQuaternion_Real(void *pObjectXXXX, _in Real t )
			{
				EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->interpolate(t);
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRotationalSpline_interpolate_CQuaternion_ev_uint32_Real_ev_bool(void *pObjectXXXX, _in ev_uint32 fromIndex, _in Real t, _in ev_bool useShortestPath )
			{
				EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->interpolate(fromIndex, t, useShortestPath);
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRotationalSpline_interpolate_CQuaternion_ev_uint32_Real(void *pObjectXXXX, _in ev_uint32 fromIndex, _in Real t )
			{
				EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->interpolate(fromIndex, t);
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRotationalSpline_setAutoCalculate_void_ev_bool(void *pObjectXXXX, _in ev_bool autoCalc )
			{
				EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				ptrNativeObject->setAutoCalculate(autoCalc);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRotationalSpline_recalcTangents_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRotationalSpline* ptrNativeObject = (EarthView::World::Graphic::CRotationalSpline*) pObjectXXXX;
				ptrNativeObject->recalcTangents();
			}
		}
	}
}
