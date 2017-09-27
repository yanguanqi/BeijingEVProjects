/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/precipitation.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_setPresetType_void_EVPrecipitationType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					ptrNativeObject->setPresetType((EarthView::World::Spatial::Effect3D::EVPrecipitationType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_getPresetType_EVPrecipitationType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::EVPrecipitationType objXXXX = ptrNativeObject->getPresetType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_setSpeed_void_Real(void *pObjectXXXX, _in Real value )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					ptrNativeObject->setSpeed(value);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_getSpeed_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getSpeed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_setIntensity_void_Real(void *pObjectXXXX, _in Real value )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					ptrNativeObject->setIntensity(value);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_getIntensity_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getIntensity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_setFallingHeight_void_Real(void *pObjectXXXX, _in Real height )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					ptrNativeObject->setFallingHeight(height);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_getFallingHeight_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getFallingHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_OperatorEquals_ev_bool_CPrecipitation(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation& objXXXX = *(EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CPrecipitation& objXXXX1 = *(EarthView::World::Spatial::Effect3D::CPrecipitation*)other;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_OperatorNotEquals_ev_bool_CPrecipitation(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Effect3D::CPrecipitation& objXXXX = *(EarthView::World::Spatial::Effect3D::CPrecipitation*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CPrecipitation& objXXXX1 = *(EarthView::World::Spatial::Effect3D::CPrecipitation*)other;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_EVPrecipitationTypeToString_EVString_EVPrecipitationType(_in int type )
				{
					EVString objXXXX = EarthView::World::Spatial::Effect3D::CPrecipitation::EVPrecipitationTypeToString((EarthView::World::Spatial::Effect3D::EVPrecipitationType)type);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_EVPrecipitationTypeToStringCHS_EVString_EVPrecipitationType(_in int type )
				{
					EVString objXXXX = EarthView::World::Spatial::Effect3D::CPrecipitation::EVPrecipitationTypeToStringCHS((EarthView::World::Spatial::Effect3D::EVPrecipitationType)type);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_StringtoEVPrecipitationType_EVPrecipitationType_EVString(_in const char* type )
				{
					EarthView::World::Core::ev_string type1 = type;
					EarthView::World::Spatial::Effect3D::EVPrecipitationType objXXXX = EarthView::World::Spatial::Effect3D::CPrecipitation::StringtoEVPrecipitationType(type1);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CPrecipitation_StringtoEVPrecipitationTypeCHS_EVPrecipitationType_EVString(_in const char* type )
				{
					EarthView::World::Core::ev_string type1 = type;
					EarthView::World::Spatial::Effect3D::EVPrecipitationType objXXXX = EarthView::World::Spatial::Effect3D::CPrecipitation::StringtoEVPrecipitationTypeCHS(type1);
					return (int)objXXXX;
				}
			}
		}
	}
}
