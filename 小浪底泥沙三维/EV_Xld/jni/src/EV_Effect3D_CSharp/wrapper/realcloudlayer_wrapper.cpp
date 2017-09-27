/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/realcloudlayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_createRealCloud_void_CRegionAtmosphere(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CRegionAtmosphere* region )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->createRealCloud(region);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_destroyRealCloud_void_CRegionAtmosphere(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CRegionAtmosphere* region )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->destroyRealCloud(region);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_create_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->create();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_destroy_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->destroy();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CRealCloudLayer*  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_copy_CRealCloudLayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* objXXXX = ptrNativeObject->copy();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_setRealCloudMap_void_CImage(void *pObjectXXXX, _in const void* img )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->setRealCloudMap(*(EarthView::World::Graphic::CImage*)img);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_setEnable_void_bool(void *pObjectXXXX, _in bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->setEnable(enable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_setVisible_void_bool(void *pObjectXXXX, _in bool visible )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_setCloudFlow_void_bool(void *pObjectXXXX, _in bool flowable )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->setCloudFlow(flowable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_setRealCloudHeight_void_float(void *pObjectXXXX, _in float height )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->setRealCloudHeight(height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_setRealCloudAlpha_void_float(void *pObjectXXXX, _in float alpha )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->setRealCloudAlpha(alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_setRegionCloudMapAlpha_void_EVString_ev_real32(void *pObjectXXXX, _in const char* name, _in ev_real32 alpha )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->setRegionCloudMapAlpha(name1, alpha);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_getCloudType_EVCloudType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::EVCloudType objXXXX = ptrNativeObject->getCloudType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_addRegionCloudMap_void_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const char* name, _in const void* img, _in ev_real64 north, _in ev_real64 west, _in ev_real64 south, _in ev_real64 east, _in ev_real64 height )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->addRegionCloudMap(name1, *(EarthView::World::Graphic::CImage*)img, north, west, south, east, height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_removeRegionCloudMap_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->removeRegionCloudMap(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_setRegionCloudMapVisible_void_EVString_bool(void *pObjectXXXX, _in const char* name, _in bool visible )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->setRegionCloudMapVisible(name1, visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_setRegionCloudRotationInfomation_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const char* name, _in ev_real64 centerLat, _in ev_real64 centerLon, _in ev_real64 rotationAngleVelocity, _in ev_real64 rotationRegionRadius )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->setRegionCloudRotationInfomation(name1, centerLat, centerLon, rotationAngleVelocity, rotationRegionRadius);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_enableRotateRegionCloud_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->enableRotateRegionCloud(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_disableRotateRegionCloud_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->disableRotateRegionCloud(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_getRegionCloudMapVisible_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getRegionCloudMapVisible(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_setWindSpeed_void_CVector3(void *pObjectXXXX, _in const void* speed )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->setWindSpeed(*(EarthView::World::Spatial::Math::CVector3*)speed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_enableGetCloudColorFromImage_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->enableGetCloudColorFromImage(enable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRealCloudLayer_update_void_CCamera_double(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in double time )
				{
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRealCloudLayer*) pObjectXXXX;
					ptrNativeObject->update(cam, time);
				}
			}
		}
	}
}
