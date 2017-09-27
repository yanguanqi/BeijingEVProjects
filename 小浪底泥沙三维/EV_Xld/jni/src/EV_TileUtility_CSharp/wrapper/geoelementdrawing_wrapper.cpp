/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/geoelementdrawing.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CGeoElementDrawing_startDrawing_void_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display )
			{
				EarthView::World::Spatial::CGeoElementDrawing* ptrNativeObject = (EarthView::World::Spatial::CGeoElementDrawing*) pObjectXXXX;
				ptrNativeObject->startDrawing(ref_display);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CGeoElementDrawing_endDrawing_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CGeoElementDrawing* ptrNativeObject = (EarthView::World::Spatial::CGeoElementDrawing*) pObjectXXXX;
				ptrNativeObject->endDrawing();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CGeoElementDrawing_setSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
			{
				EarthView::World::Spatial::CGeoElementDrawing* ptrNativeObject = (EarthView::World::Spatial::CGeoElementDrawing*) pObjectXXXX;
				ptrNativeObject->setSymbol(pSymbol);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CGeoElementDrawing_draw_void_CGeoElement(void *pObjectXXXX, _in const EarthView::World::Spatial::CGeoElement* geoElement )
			{
				EarthView::World::Spatial::CGeoElementDrawing* ptrNativeObject = (EarthView::World::Spatial::CGeoElementDrawing*) pObjectXXXX;
				ptrNativeObject->draw(geoElement);
			}
		}
	}
}
