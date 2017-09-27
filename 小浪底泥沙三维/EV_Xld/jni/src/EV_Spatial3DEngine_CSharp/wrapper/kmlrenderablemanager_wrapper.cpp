/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmlrenderablemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
			}
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CKmlRequestData_mpGeoObject( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = ptrNativeObject->mpGeoObject;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CKmlRequestData_mpGeoObject( void *pObjectXXXX, EarthView::World::Spatial::Kml::CGeoObjectExtension*  value )
				{
					((EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjectXXXX)->mpGeoObject = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CKmlRequestData_mpKmlDoc( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->mpKmlDoc;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CKmlRequestData_mpKmlDoc( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlDocument*  value )
				{
					((EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjectXXXX)->mpKmlDoc = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CKmlRequestData_mpParentKmlDoc( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->mpParentKmlDoc;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CKmlRequestData_mpParentKmlDoc( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlDocument*  value )
				{
					((EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjectXXXX)->mpParentKmlDoc = value;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CCamera*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CKmlRequestData_mpCamera( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*) pObjectXXXX;
					const EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->mpCamera;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CKmlRequestData_mpCamera( void *pObjectXXXX, const EarthView::World::Graphic::CCamera*  value )
				{
					((EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjectXXXX)->mpCamera = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CKmlRequestData_mpLayer( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRequestData* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRequestData*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->mpLayer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CKmlRequestData_mpLayer( void *pObjectXXXX, EarthView::World::Spatial3D::Atlas::IGlobeLayer*  value )
				{
					((EarthView::World::Spatial3D::Atlas::CKmlRequestData*)pObjectXXXX)->mpLayer = value;
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CKmlRenderableManagerProxy : public EarthView::World::Spatial3D::Atlas::CKmlRenderableManager
				{
				private:
					EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent_Callback;
				public:
					CKmlRenderableManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlRenderableManager(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent(EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent(EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent(EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent_Callback = pCallback;
					}
					virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent_Callback(e);
						}
						else
							return this->CKmlRenderableManager::onTimerEvent(e);
					}
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CKmlRenderableManager::onEvent(e);
					}
					virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent_Callback(e);
						}
						else
							return this->CKmlRenderableManager::onCustomEvent(e);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlRenderableManagerProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_createRenderable_VisibleObjects_CGeoObjectExtension_CCamera(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->createRenderable(geoObj, camera);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_destoryRenderable_void_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->destoryRenderable(geoObj);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_getVisibleObjects_VisibleObjects_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->getVisibleObjects(geoObj);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_hasVisibleObjects_ev_bool_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasVisibleObjects(geoObj);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_addVisibleObject_void_CGeoObjectExtension_VisibleObjects(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _inout void* objs )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->addVisibleObject(geoObj, *(EarthView::World::Geometry3D::VisibleObjects*)objs);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_removeVisibleObject_void_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->removeVisibleObject(geoObj);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_disposeCGeoObject_void_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->disposeCGeoObject(geoObj);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_recreateRenderable_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->recreateRenderable(camera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_refreshVisible_void_ev_bool_CCamera(void *pObjectXXXX, _in ev_bool layerVisible, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->refreshVisible(layerVisible, camera);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_refreshImageOverlayer_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_int(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout void* tile, _inout int& flag )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->refreshImageOverlayer(level, row, col, *(EarthView::World::Spatial::CTileData*)tile, flag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_refreshImageOverlayer_ev_bool_Real_Real_Real_Real_CTileData_int(void *pObjectXXXX, _in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout void* tile, _inout int& flag )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->refreshImageOverlayer(minX, minY, maxX, maxY, *(EarthView::World::Spatial::CTileData*)tile, flag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_refreshSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->refreshSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_refreshSelectable_void_CGeoObjectExtension_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->refreshSelectable(geoObj, selectable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_iterateRefreshVisible_void_ev_bool_CCamera_CKmlDocument(void *pObjectXXXX, _in ev_bool layerVisible, _in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->iterateRefreshVisible(layerVisible, camera, kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_checkEmpty_ev_bool_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->checkEmpty(kmlDoc);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager__notifyDataChanged_void_EVString_EVString_CEvent(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_getPanoramaTiles_VisibleObjects(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->getPanoramaTiles();
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_processBatchObject_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->processBatchObject(kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_initBatchObject_void_CKmlDocument_CKmlDocument_CCamera(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc, _in EarthView::World::Spatial::Kml::CKmlDocument* rootDoc, _in const EarthView::World::Graphic::CCamera* cam )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->initBatchObject(kmlDoc, rootDoc, cam);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_destoryBatchObject_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->destoryBatchObject(kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_isBatchObject_ev_bool_CGeoObjectExtension_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo, _in ev_bool enableEditingCheck )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isBatchObject(ref_geo, enableEditingCheck);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_rebuild_void_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->rebuild(ref_geo);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_synDestoryBatchObject_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->synDestoryBatchObject(kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_isRunningInThread_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isRunningInThread();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_synBuildBatchObject_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->synBuildBatchObject(kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_initNewBatchObject_void_CKmlDocument_CKmlDocument_CCamera(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc, _in EarthView::World::Spatial::Kml::CKmlDocument* rootDoc, _in const EarthView::World::Graphic::CCamera* cam )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->initNewBatchObject(kmlDoc, rootDoc, cam);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_processNewObject_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->processNewObject(kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_destoryNewBatchObject_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->destoryNewBatchObject(kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_destoryRegionBatchObject_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->destoryRegionBatchObject(kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_synDestoryRegionBatchObject_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->synDestoryRegionBatchObject(kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_isSwitch_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSwitch();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_iterateRefreshBatchObjects_void_ev_bool_CCamera_CKmlDocument(void *pObjectXXXX, _in ev_bool layerVisible, _in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->iterateRefreshBatchObjects(layerVisible, camera, kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_iterateRefreshDynamicObjects_void_ev_bool_CCamera_CKmlDocument(void *pObjectXXXX, _in ev_bool layerVisible, _in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->iterateRefreshDynamicObjects(layerVisible, camera, kmlDoc);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_iterateRefreshBatchObjects_void_ev_bool_CCamera(void *pObjectXXXX, _in ev_bool layerVisible, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->iterateRefreshBatchObjects(layerVisible, camera);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_checkBatchVisible_ev_bool_ev_bool_CCamera_ev_bool(void *pObjectXXXX, _in ev_bool layerVisible, _in const EarthView::World::Graphic::CCamera* camera, _in ev_bool isBatch )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->checkBatchVisible(layerVisible, camera, isBatch);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_refreshDynamicBatchVisible_void_ev_bool_CCamera(void *pObjectXXXX, _in ev_bool layerVisible, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->refreshDynamicBatchVisible(layerVisible, camera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_refreshDynamicGeoObjectVisible_void_CKmlDocument_CGeoObjectExtension_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->refreshDynamicGeoObjectVisible(kmlDoc, ref_geo, visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_calculatePixel_void_CGeoObjectExtensionAttribute_CCamera_ev_real64(void *pObjectXXXX, _inout void* attribute, _in const EarthView::World::Graphic::CCamera* camera, _out ev_real64& num )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->calculatePixel(*(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)attribute, camera, num);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_checkPixelVisible_ev_bool_CGeoObjectExtensionAttribute_CCamera(void *pObjectXXXX, _inout void* attr, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->checkPixelVisible(*(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)attr, camera);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_findBatchDocument_CKmlDocument_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->findBatchDocument(kmlDoc);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_checkDocLodPass_ev_bool_CKmlDocument_CCamera(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->checkDocLodPass(kmlDoc, camera);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_checkNetLinkLodPass_ev_bool_CKmlNetworkLink_CCamera(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* netlink, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->checkNetLinkLodPass(netlink, camera);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_waitResponses_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->waitResponses();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent(void *pObjectXXXX, _in EarthView::World::Core::CTimerEvent* e )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					if (dynamic_cast<CKmlRenderableManagerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlRenderableManager::onTimerEvent(e);
					else
						ptrNativeObject->onTimerEvent(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent_Callback* pCallback )
				{
					CKmlRenderableManagerProxy* ptr = dynamic_cast<CKmlRenderableManagerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onTimerEvent_void_CTimerEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CTimerEvent* e )
				{
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlRenderableManager::onTimerEvent(e);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent_Callback* pCallback )
				{
					CKmlRenderableManagerProxy* ptr = dynamic_cast<CKmlRenderableManagerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onEvent_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent_Callback* pCallback )
				{
					CKmlRenderableManagerProxy* ptr = dynamic_cast<CKmlRenderableManagerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlRenderableManager_onCustomEvent_void_CEvent(pCallback);
					}
				}
			}
		}
	}
}
