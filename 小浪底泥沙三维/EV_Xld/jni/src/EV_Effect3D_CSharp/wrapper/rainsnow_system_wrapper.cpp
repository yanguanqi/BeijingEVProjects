/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/rainsnow_system.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setType_void_EVPrecipitationType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setType((EarthView::World::Spatial::Effect3D::EVPrecipitationType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getType_EVPrecipitationType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::EVPrecipitationType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getIntensity_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getIntensity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setIntensity_void_Real(void *pObjectXXXX, _in const Real& intensity )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setIntensity(intensity);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getMaxVelocity_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getMaxVelocity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setMaxVelocity_void_Real(void *pObjectXXXX, _in const Real& maxVelocity )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setMaxVelocity(maxVelocity);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getMinVelocity_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getMinVelocity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setMinVelocity_void_Real(void *pObjectXXXX, _in const Real& minVelocity )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setMinVelocity(minVelocity);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getVelocity_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getVelocity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setVelocity_void_Real(void *pObjectXXXX, _in const Real& velocity )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setVelocity(velocity);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getParticleWidth_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getParticleWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setParticleWidth_void_Real(void *pObjectXXXX, _in const Real& width )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setParticleWidth(width);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getParticleHeight_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getParticleHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setParticleHeight_void_Real(void *pObjectXXXX, _in const Real& height )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setParticleHeight(height);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getWorldPosition_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getWorldPosition();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setWorldPosition_void_CVector3(void *pObjectXXXX, _in const void* pos )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setWorldPosition(*(EarthView::World::Spatial::Math::CVector3*)pos);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getWindSpeed_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getWindSpeed();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setWindSpeed_void_CVector3(void *pObjectXXXX, _in const void* speed )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setWindSpeed(*(EarthView::World::Spatial::Math::CVector3*)speed);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_getHeight_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_setHeight_void_Real(void *pObjectXXXX, _in const Real& height )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->setHeight(height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_update_void_CVector3(void *pObjectXXXX, _in const void* cameraPos )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->update(*(EarthView::World::Spatial::Math::CVector3*)cameraPos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRainSnowSystem_destroy_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRainSnowSystem*) pObjectXXXX;
					ptrNativeObject->destroy();
				}
			}
		}
	}
}
