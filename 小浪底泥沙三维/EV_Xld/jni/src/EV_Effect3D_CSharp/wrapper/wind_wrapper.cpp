/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/wind.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CWind_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CWind_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CWind_isWindEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isWindEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CWind_setWindEnabled_void_bool(void *pObjectXXXX, _in bool enabled )
				{
					EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					ptrNativeObject->setWindEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CWind_getWindSpeed_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getWindSpeed();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CWind_setWindSpeed_void_CVector3(void *pObjectXXXX, _in const void* speed )
				{
					EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					ptrNativeObject->setWindSpeed(*(EarthView::World::Spatial::Math::CVector3*)speed);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CWind_getHeightRange_CHeightRange(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CHeightRange objXXXX = ptrNativeObject->getHeightRange();
					EarthView::World::Spatial::Effect3D::CHeightRange *pXXXX = new EarthView::World::Spatial::Effect3D::CHeightRange(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CWind_setHeightRange_void_CHeightRange(void *pObjectXXXX, _in void* height )
				{
					EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					ptrNativeObject->setHeightRange(*(EarthView::World::Spatial::Effect3D::CHeightRange*)height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CWind_setWindDirection_void_EVWindDirection(void *pObjectXXXX, _in int direction )
				{
					EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					ptrNativeObject->setWindDirection((EarthView::World::Spatial::Effect3D::EVWindDirection)direction);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CWind_getWindDirection_EVWindDirection(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::EVWindDirection objXXXX = ptrNativeObject->getWindDirection();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CWind_setWindVelocity_void_Real(void *pObjectXXXX, _in const Real& velocity )
				{
					EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					ptrNativeObject->setWindVelocity(velocity);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CWind_getWindVelocity_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getWindVelocity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CWind*  _stdcall EarthView_World_Spatial_Effect3D_CWind_clone_CWind(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CWind* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWind*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CWind* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
		}
	}
}
