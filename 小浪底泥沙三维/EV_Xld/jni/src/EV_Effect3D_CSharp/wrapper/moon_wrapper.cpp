/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/moon.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CMoon_getResourceName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CMoon* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CMoon*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getResourceName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CMoon_setScale_void_ev_real32(void *pObjectXXXX, _in ev_real32 scale )
				{
					EarthView::World::Spatial::Effect3D::CMoon* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CMoon*) pObjectXXXX;
					ptrNativeObject->setScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Effect3D_CMoon_getScale_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CMoon* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CMoon*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CMoon_getMoonTextureAngularSize_CDegree(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CMoon* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CMoon*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getMoonTextureAngularSize();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CMoon_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Effect3D::CMoon* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CMoon*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CMoon_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CMoon* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CMoon*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CMoon_OperatorEquals_ev_bool_CMoon(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Effect3D::CMoon& objXXXX = *(EarthView::World::Spatial::Effect3D::CMoon*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CMoon& objXXXX1 = *(EarthView::World::Spatial::Effect3D::CMoon*)other;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CMoon_OperatorNotEquals_ev_bool_CMoon(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Effect3D::CMoon& objXXXX = *(EarthView::World::Spatial::Effect3D::CMoon*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CMoon& objXXXX1 = *(EarthView::World::Spatial::Effect3D::CMoon*)other;
					return objXXXX != objXXXX1;
				}
			}
		}
	}
}
