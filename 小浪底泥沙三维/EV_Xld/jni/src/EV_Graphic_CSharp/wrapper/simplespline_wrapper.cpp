/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/simplespline.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSimpleSpline_addPoint_void_CVector3(void *pObjectXXXX, _in const void* p )
			{
				EarthView::World::Graphic::CSimpleSpline* ptrNativeObject = (EarthView::World::Graphic::CSimpleSpline*) pObjectXXXX;
				ptrNativeObject->addPoint(*(EarthView::World::Spatial::Math::CVector3*)p);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSimpleSpline_getPoint_CVector3_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CSimpleSpline* ptrNativeObject = (EarthView::World::Graphic::CSimpleSpline*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getPoint(index);
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSimpleSpline_getNumPoints_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSimpleSpline* ptrNativeObject = (EarthView::World::Graphic::CSimpleSpline*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumPoints();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSimpleSpline_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSimpleSpline* ptrNativeObject = (EarthView::World::Graphic::CSimpleSpline*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSimpleSpline_updatePoint_void_ev_uint16_CVector3(void *pObjectXXXX, _in ev_uint16 index, _in const void* value )
			{
				EarthView::World::Graphic::CSimpleSpline* ptrNativeObject = (EarthView::World::Graphic::CSimpleSpline*) pObjectXXXX;
				ptrNativeObject->updatePoint(index, *(EarthView::World::Spatial::Math::CVector3*)value);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSimpleSpline_interpolate_CVector3_Real(void *pObjectXXXX, _in Real t )
			{
				const EarthView::World::Graphic::CSimpleSpline* ptrNativeObject = (EarthView::World::Graphic::CSimpleSpline*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->interpolate(t);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSimpleSpline_interpolate_CVector3_ev_uint32_Real(void *pObjectXXXX, _in ev_uint32 fromIndex, _in Real t )
			{
				const EarthView::World::Graphic::CSimpleSpline* ptrNativeObject = (EarthView::World::Graphic::CSimpleSpline*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->interpolate(fromIndex, t);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSimpleSpline_setAutoCalculate_void_ev_bool(void *pObjectXXXX, _in ev_bool autoCalc )
			{
				EarthView::World::Graphic::CSimpleSpline* ptrNativeObject = (EarthView::World::Graphic::CSimpleSpline*) pObjectXXXX;
				ptrNativeObject->setAutoCalculate(autoCalc);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSimpleSpline_recalcTangents_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSimpleSpline* ptrNativeObject = (EarthView::World::Graphic::CSimpleSpline*) pObjectXXXX;
				ptrNativeObject->recalcTangents();
			}
		}
	}
}
