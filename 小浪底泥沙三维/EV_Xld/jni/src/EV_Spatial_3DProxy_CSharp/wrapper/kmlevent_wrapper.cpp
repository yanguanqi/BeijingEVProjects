/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/kmlevent.h"
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
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerEvent_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerEvent_getLayer_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerEvent_setGeoObject_void_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjectXXXX;
					ptrNativeObject->setGeoObject(ref_geoObj);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerEvent_getGeoObject_CGeoObjectExtension(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = ptrNativeObject->getGeoObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool response )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(response);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerEvent_setParent_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjectXXXX;
					ptrNativeObject->setParent(ref_parent);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerEvent_getParent_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getParent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerObjectEvent_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerObjectEvent_getLayer_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerObjectEvent_setGeoObject_void_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjectXXXX;
					ptrNativeObject->setGeoObject(ref_geoObj);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerObjectEvent_getGeoObject_CGeoObjectExtension(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = ptrNativeObject->getGeoObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerObjectEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool response )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(response);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerObjectEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerObjectEvent_setSaveFilePath_void_EVString(void *pObjectXXXX, _in char* savePath )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjectXXXX;
					ptrNativeObject->setSaveFilePath(savePath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlLayerObjectEvent_getSaveFilePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSaveFilePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlAddFolderEvent_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlAddFolderEvent_getLayer_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlAddFolderEvent_setFolder_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_folder )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjectXXXX;
					ptrNativeObject->setFolder(ref_folder);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlAddFolderEvent_getFolder_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getFolder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlAddFolderEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool response )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(response);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlAddFolderEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlAddFolderEvent_setParent_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjectXXXX;
					ptrNativeObject->setParent(ref_parent);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlAddFolderEvent_getParent_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getParent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlAddFolderEvent_setSaveFilePath_void_EVString(void *pObjectXXXX, _in char* savePath )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjectXXXX;
					ptrNativeObject->setSaveFilePath(savePath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlAddFolderEvent_getSaveFilePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSaveFilePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFileEvent_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFileEvent_getLayer_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFileEvent_setFilePath_void_EVString(void *pObjectXXXX, _in char* filePath )
				{
					EarthView::World::Core::ev_string filePath1 = filePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjectXXXX;
					ptrNativeObject->setFilePath(filePath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFileEvent_getFilePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFilePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFileEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool response )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(response);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFileEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFileEvent_setParent_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjectXXXX;
					ptrNativeObject->setParent(ref_parent);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFileEvent_getParent_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getParent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFileEvent_setSaveFilePath_void_EVString(void *pObjectXXXX, _in char* savePath )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjectXXXX;
					ptrNativeObject->setSaveFilePath(savePath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFileEvent_getSaveFilePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSaveFilePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlEvent_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlEvent_getLayer_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlEvent_setSaveFilePath_void_EVString(void *pObjectXXXX, _in char* savePath )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjectXXXX;
					ptrNativeObject->setSaveFilePath(savePath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlEvent_getSaveFilePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSaveFilePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlEvent_setParent_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjectXXXX;
					ptrNativeObject->setParent(ref_parent);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlEvent_getParent_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getParent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlEvent_setFilePath_void_EVString(void *pObjectXXXX, _in char* filePath )
				{
					EarthView::World::Core::ev_string filePath1 = filePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjectXXXX;
					ptrNativeObject->setFilePath(filePath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlEvent_getFilePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFilePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_setTreeNodeType_void_EVKmlTreeNodeType(void *pObjectXXXX, _in int nodeType )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					ptrNativeObject->setTreeNodeType((EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent::EVKmlTreeNodeType)nodeType);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_getTreeNodeType_EVKmlTreeNodeType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent::EVKmlTreeNodeType objXXXX = ptrNativeObject->getTreeNodeType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_setChildObject_void_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					ptrNativeObject->setChildObject(ref_geoObj);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_getChildObject_CGeoObjectExtension(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = ptrNativeObject->getChildObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_setTour_void_CTour(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CTour* ref_tour )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					ptrNativeObject->setTour(ref_tour);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTour*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_getTour_CTour(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTour* objXXXX = ptrNativeObject->getTour();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_getLayer_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_setSaveFilePath_void_EVString(void *pObjectXXXX, _in char* savePath )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					ptrNativeObject->setSaveFilePath(savePath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_getSaveFilePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSaveFilePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_setFolder_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_folder )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					ptrNativeObject->setFolder(ref_folder);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_getFolder_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getFolder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_setParentObject_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_folder )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					ptrNativeObject->setParentObject(ref_folder);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_getParentObject_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getParentObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_setFilePath_void_EVString(void *pObjectXXXX, _in char* filePath )
				{
					EarthView::World::Core::ev_string filePath1 = filePath;
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					ptrNativeObject->setFilePath(filePath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_getFilePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFilePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlNetworkLink*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_getKmlNetLink_CKmlNetworkLink(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* objXXXX = ptrNativeObject->getKmlNetLink();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_setKmlNetLink_void_CKmlNetworkLink(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* ref_netLink )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					ptrNativeObject->setKmlNetLink(ref_netLink);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_setNetLinkReleativeParent_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_releativeParent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					ptrNativeObject->setNetLinkReleativeParent(ref_releativeParent);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlTreeNodeEvent_getNetLinkReleativeParent_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getNetLinkReleativeParent();
					return objXXXX;
				}
			}
		}
	}
}
