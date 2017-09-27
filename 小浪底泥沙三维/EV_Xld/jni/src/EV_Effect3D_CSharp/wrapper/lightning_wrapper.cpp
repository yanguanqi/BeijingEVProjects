/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/lightning.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_remove_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->remove();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_update_void_Real_CVector3(void *pObjectXXXX, _in Real timeElapsed, _in const void* cameraPos )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->update(timeElapsed, *(EarthView::World::Spatial::Math::CVector3*)cameraPos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_setMaxTimeInterval_void_Real(void *pObjectXXXX, _in const Real& interval )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->setMaxTimeInterval(interval);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_getMaxTimeInterval_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getMaxTimeInterval();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_getIntensity_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getIntensity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_setIntensity_void_Real(void *pObjectXXXX, _in const Real& intensity )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->setIntensity(intensity);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_getMaxHeight_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getMaxHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_setMaxHeight_void_Real(void *pObjectXXXX, _in const Real& height )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->setMaxHeight(height);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_getMinHeight_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getMinHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_setMinHeight_void_Real(void *pObjectXXXX, _in const Real& height )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->setMinHeight(height);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_getMaxLightningCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getMaxLightningCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_setMaxLightningCount_void_ev_int32(void *pObjectXXXX, _in const ev_int32& count )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->setMaxLightningCount(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_setReflectable_void_ev_bool(void *pObjectXXXX, _in ev_bool reflect )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->setReflectable(reflect);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_setRefractable_void_ev_bool(void *pObjectXXXX, _in ev_bool refract )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->setRefractable(refract);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CLightningManager_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CLightningManager* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CLightningManager*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
