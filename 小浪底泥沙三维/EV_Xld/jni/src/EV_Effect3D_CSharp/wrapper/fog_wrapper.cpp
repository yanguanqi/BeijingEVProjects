/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/fog.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_getDomeMaterialName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDomeMaterialName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_getDomeEntityName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDomeEntityName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_setGroundFogColourMultiplier_void_CColourValue(void *pObjectXXXX, _in const void* colour )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjectXXXX;
					ptrNativeObject->setGroundFogColourMultiplier(*(EarthView::World::Graphic::CColourValue*)colour);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_getGroundFogColourMultiplier_CColourValue(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getGroundFogColourMultiplier();
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_setGroundFogDensityMultiplier_void_Real(void *pObjectXXXX, _in Real value )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjectXXXX;
					ptrNativeObject->setGroundFogDensityMultiplier(value);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_getGroundFogDensityMultiplier_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CGroundFog* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getGroundFogDensityMultiplier();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_setGroundLevel_void_Real(void *pObjectXXXX, _in Real GroundLevela )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjectXXXX;
					ptrNativeObject->setGroundLevel(GroundLevela);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_getGroundLevel_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CGroundFog* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGroundFog*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getGroundLevel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_OperatorEquals_ev_bool_CGroundFog(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog& objXXXX = *(EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CGroundFog& objXXXX1 = *(EarthView::World::Spatial::Effect3D::CGroundFog*)other;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CGroundFog_OperatorNotEquals_ev_bool_CGroundFog(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Effect3D::CGroundFog& objXXXX = *(EarthView::World::Spatial::Effect3D::CGroundFog*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CGroundFog& objXXXX1 = *(EarthView::World::Spatial::Effect3D::CGroundFog*)other;
					return objXXXX != objXXXX1;
				}
			}
		}
	}
}
