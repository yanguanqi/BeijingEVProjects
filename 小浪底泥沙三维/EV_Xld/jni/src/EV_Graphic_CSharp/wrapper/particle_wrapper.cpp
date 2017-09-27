/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particle.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CParticle_mOwnDimensions( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mOwnDimensions;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_mOwnDimensions( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->mOwnDimensions = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CParticle_mWidth( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->mWidth;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_mWidth( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->mWidth = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CParticle_mHeight( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->mHeight;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_mHeight( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->mHeight = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CParticle_mRotation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRadian &objXXXX = ptrNativeObject->mRotation;
				EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_mRotation( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->mRotation = *(EarthView::World::Spatial::Math::CRadian*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CParticle_position( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->position;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_position( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->position = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CParticle_direction( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->direction;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_direction( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->direction = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CParticle_colour( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->colour;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_colour( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->colour = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CParticle_timeToLive( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->timeToLive;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_timeToLive( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->timeToLive = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CParticle_totalTimeToLive( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->totalTimeToLive;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_totalTimeToLive( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->totalTimeToLive = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CParticle_rotationSpeed( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRadian &objXXXX = ptrNativeObject->rotationSpeed;
				EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_rotationSpeed( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->rotationSpeed = *(EarthView::World::Spatial::Math::CRadian*)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CParticle_particleType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				EarthView::World::Graphic::CParticle::ParticleType objXXXX = ptrNativeObject->particleType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_particleType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->particleType = (EarthView::World::Graphic::CParticle::ParticleType)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CParticle_visible( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->visible;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticle_visible( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CParticle*)pObjectXXXX)->visible = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticle_setDimensions_void_Real_Real(void *pObjectXXXX, _in Real width, _in Real height )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				ptrNativeObject->setDimensions(width, height);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticle_hasOwnDimensions_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasOwnDimensions();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CParticle_getOwnWidth_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOwnWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CParticle_getOwnHeight_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOwnHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticle_setRotation_void_CRadian(void *pObjectXXXX, _in const void* rad )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				ptrNativeObject->setRotation(*(EarthView::World::Spatial::Math::CRadian*)rad);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticle_getRotation_CRadian(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->getRotation();
				const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticle__notifyOwner_void_CParticleSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* ref_owner )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				ptrNativeObject->_notifyOwner(ref_owner);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticle__notifyVisualData_void_CParticleVisualData(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleVisualData* ref_vis )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				ptrNativeObject->_notifyVisualData(ref_vis);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleVisualData*  _stdcall EarthView_World_Graphic_CParticle_getVisualData_CParticleVisualData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				EarthView::World::Graphic::CParticleVisualData* objXXXX = ptrNativeObject->getVisualData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticle_resetDimensions_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				ptrNativeObject->resetDimensions();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystem*  _stdcall EarthView_World_Graphic_CParticle_getParentSystem_CParticleSystem(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticle* ptrNativeObject = (EarthView::World::Graphic::CParticle*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystem* objXXXX = ptrNativeObject->getParentSystem();
				return objXXXX;
			}
		}
	}
}
