/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/cloudlayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_getCloudType_EVCloudType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::EVCloudType objXXXX = ptrNativeObject->getCloudType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_setCloudType_void_EVCloudType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ptrNativeObject->setCloudType((EarthView::World::Spatial::Effect3D::EVCloudType)type);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_getHeightRange_CHeightRange(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CHeightRange objXXXX = ptrNativeObject->getHeightRange();
					EarthView::World::Spatial::Effect3D::CHeightRange *pXXXX = new EarthView::World::Spatial::Effect3D::CHeightRange(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_setHeightRange_void_CHeightRange(void *pObjectXXXX, _in void* heightRange )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ptrNativeObject->setHeightRange(*(EarthView::World::Spatial::Effect3D::CHeightRange*)heightRange);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_setArea_void_CEnvelope(void *pObjectXXXX, _inout void* envelope )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ptrNativeObject->setArea(*(EarthView::World::Spatial::Geometry::CEnvelope*)envelope);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_getArea_CEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope objXXXX = ptrNativeObject->getArea();
					EarthView::World::Spatial::Geometry::CEnvelope *pXXXX = new EarthView::World::Spatial::Geometry::CEnvelope(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_setDensity_void_Real(void *pObjectXXXX, _in Real density )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ptrNativeObject->setDensity(density);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_getDensity_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getDensity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_cloudTypeToString_EVString_EVCloudType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->cloudTypeToString((EarthView::World::Spatial::Effect3D::EVCloudType)type);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_stringToCloudType_EVCloudType_EVString(void *pObjectXXXX, _in const char* type )
				{
					EarthView::World::Core::ev_string type1 = type;
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::EVCloudType objXXXX = ptrNativeObject->stringToCloudType(type1);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_getLightningManagersCount_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getLightningManagersCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CLightningManager*  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_getLightningManager_CLightningManager_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CLightningManager* objXXXX = ptrNativeObject->getLightningManager(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_clearLightning_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ptrNativeObject->clearLightning();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CLightningManager*  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_createLightningManager_CLightningManager_CHeightRange(void *pObjectXXXX, _in const void* range )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CLightningManager* objXXXX = ptrNativeObject->createLightningManager(*(EarthView::World::Spatial::Effect3D::CHeightRange*)range);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_destroyLightningManager_void_CLightningManager(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CLightningManager* lightning )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ptrNativeObject->destroyLightningManager(lightning);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_updateToRender_void_CLightningManager(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CLightningManager* ref_lightning )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ptrNativeObject->updateToRender(ref_lightning);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CCloudLayer*  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_clone_CCloudLayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CCloudLayer* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_setAllowVolumeCloudMove_void_ev_bool(void *pObjectXXXX, _in ev_bool bol )
				{
					EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ptrNativeObject->setAllowVolumeCloudMove(bol);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_getAllowVolumeCloudMove_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getAllowVolumeCloudMove();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CRegionAtmosphere*  _stdcall EarthView_World_Spatial_Effect3D_CCloudLayer_getParent_CRegionAtmosphere(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CCloudLayer* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CCloudLayer*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* objXXXX = ptrNativeObject->getParent();
					return objXXXX;
				}
			}
		}
	}
}
