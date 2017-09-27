/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/layoutsublinerender.h"
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutSublineRender_drawSubline_void_IGeometry_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* pGeometry, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Layout::Controls::CLayoutSublineRender* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutSublineRender*) pObjectXXXX;
					ptrNativeObject->drawSubline(pGeometry, pSymbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutSublineRender_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutSublineRender* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutSublineRender*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
