/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/mapeagleeye.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
			}
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapEagleEye_setRectSymbol_void_CLineSymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::CLineSymbol* symbol )
				{
					EarthView::World::Spatial2D::Controls::CMapEagleEye* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjectXXXX;
					ptrNativeObject->setRectSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::CLineSymbol*  _stdcall EarthView_World_Spatial2D_Controls_CMapEagleEye_getRectSymbol_CLineSymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapEagleEye* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjectXXXX;
					const EarthView::World::Spatial::Display::CLineSymbol* objXXXX = ptrNativeObject->getRectSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapEagleEye_setIdleLayers_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32* index, _in ev_int32 count )
				{
					EarthView::World::Spatial2D::Controls::CMapEagleEye* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjectXXXX;
					ptrNativeObject->setIdleLayers(index, count);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapEagleEye_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CMapEagleEye* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapEagleEye_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CMapEagleEye* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapEagleEye_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CMapEagleEye* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapEagleEye_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag )
				{
					EarthView::World::Spatial2D::Controls::CMapEagleEye* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->onMouseWheel(delta, x, y, flag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapEagleEye_onResize_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial2D::Controls::CMapEagleEye* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->onResize(width, height);
					return objXXXX;
				}
			}
		}
	}
}
