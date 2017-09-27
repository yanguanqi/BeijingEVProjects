/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/colorblend.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorBlend_setBlendOperationMode_void_EVColorBlendOperation(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::Display::CColorBlend* ptrNativeObject = (EarthView::World::Spatial::Display::CColorBlend*) pObjectXXXX;
					ptrNativeObject->setBlendOperationMode((EarthView::World::Spatial::Display::EVColorBlendOperation)mode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CColorBlend_getBlendOperationMode_EVColorBlendOperation(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorBlend* ptrNativeObject = (EarthView::World::Spatial::Display::CColorBlend*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVColorBlendOperation objXXXX = ptrNativeObject->getBlendOperationMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CColorBlend_getBlendResult_IColor_IColor_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* arg1, _in const EarthView::World::Spatial::Display::IColor* arg2 )
				{
					const EarthView::World::Spatial::Display::CColorBlend* ptrNativeObject = (EarthView::World::Spatial::Display::CColorBlend*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBlendResult(arg1, arg2);
					return objXXXX;
				}
			}
		}
	}
}
