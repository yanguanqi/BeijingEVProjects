/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/sun.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CSun_getResourceName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CSun* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CSun*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getResourceName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CSun_setScale_void_ev_real32(void *pObjectXXXX, _in ev_real32 scale )
				{
					EarthView::World::Spatial::Effect3D::CSun* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CSun*) pObjectXXXX;
					ptrNativeObject->setScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Effect3D_CSun_getScale_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CSun* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CSun*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CSun_getSunTextureAngularSize_CDegree(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CSun* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CSun*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getSunTextureAngularSize();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CSun_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Effect3D::CSun* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CSun*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CSun_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CSun* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CSun*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CSun_OperatorEquals_ev_bool_CSun(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Effect3D::CSun& objXXXX = *(EarthView::World::Spatial::Effect3D::CSun*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CSun& objXXXX1 = *(EarthView::World::Spatial::Effect3D::CSun*)other;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CSun_OperatorNotEquals_ev_bool_CSun(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Effect3D::CSun& objXXXX = *(EarthView::World::Spatial::Effect3D::CSun*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CSun& objXXXX1 = *(EarthView::World::Spatial::Effect3D::CSun*)other;
					return objXXXX != objXXXX1;
				}
			}
		}
	}
}
