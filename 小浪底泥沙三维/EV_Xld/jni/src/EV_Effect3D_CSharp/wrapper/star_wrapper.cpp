/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/star.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CStars_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Effect3D::CStars* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CStars*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CStars_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CStars* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CStars*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CStars_setStarsBrightness_void_Real(void *pObjectXXXX, _in Real brightness )
				{
					EarthView::World::Spatial::Effect3D::CStars* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CStars*) pObjectXXXX;
					ptrNativeObject->setStarsBrightness(brightness);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CStars_getStarsBrightness_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CStars* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CStars*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getStarsBrightness();
					return objXXXX;
				}
			}
		}
	}
}
