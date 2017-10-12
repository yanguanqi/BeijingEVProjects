/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/richtextrender.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CRichTextRenderMeasure_measureRichText_void_EVString_ISymbol(void *pObjectXXXX, _in const char* str, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string str1 = str;
					EarthView::World::Spatial::Display::CRichTextRenderMeasure* ptrNativeObject = (EarthView::World::Spatial::Display::CRichTextRenderMeasure*) pObjectXXXX;
					ptrNativeObject->measureRichText(str1, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CRichTextRenderMeasure_getTextSize_void_double_double(void *pObjectXXXX, _inout double& w, _inout double& h )
				{
					EarthView::World::Spatial::Display::CRichTextRenderMeasure* ptrNativeObject = (EarthView::World::Spatial::Display::CRichTextRenderMeasure*) pObjectXXXX;
					ptrNativeObject->getTextSize(w, h);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CRichTextRenderMeasure_getTextSize_void_EarthView_World_Display_EVDeviceUnits_double_double(void *pObjectXXXX, _in void* unit, _inout double& w, _inout double& h )
				{
					EarthView::World::Spatial::Display::CRichTextRenderMeasure* ptrNativeObject = (EarthView::World::Spatial::Display::CRichTextRenderMeasure*) pObjectXXXX;
					ptrNativeObject->getTextSize(*(EarthView::World::Display::EVDeviceUnits*)unit, w, h);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CRichTextRender_startDraw_void_IDisplay2D_ISymbol(void *pObjectXXXX, _in EarthView::World::Display::IDisplay2D* display, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CRichTextRender* ptrNativeObject = (EarthView::World::Spatial::Display::CRichTextRender*) pObjectXXXX;
					ptrNativeObject->startDraw(display, pSymbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CRichTextRender_draw_void_ev_real64_ev_real64_ev_int32_ev_int32(void *pObjectXXXX, _in ev_real64* dx, _in ev_real64* dy, _in ev_int32* pSegments, _in ev_int32 nCount )
				{
					EarthView::World::Spatial::Display::CRichTextRender* ptrNativeObject = (EarthView::World::Spatial::Display::CRichTextRender*) pObjectXXXX;
					ptrNativeObject->draw(dx, dy, pSegments, nCount);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CRichTextRender_endDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CRichTextRender* ptrNativeObject = (EarthView::World::Spatial::Display::CRichTextRender*) pObjectXXXX;
					ptrNativeObject->endDraw();
				}
			}
		}
	}
}
