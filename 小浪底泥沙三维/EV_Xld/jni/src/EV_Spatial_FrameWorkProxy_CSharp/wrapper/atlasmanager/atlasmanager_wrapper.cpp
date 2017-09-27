/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/atlasmanager/atlasmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
			namespace GeoDataset
			{
			}
			namespace Theme
			{
			}
		}
		namespace Spatial2D
		{
			namespace Controls
			{
			}
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
			}
			namespace Controls
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_EVDatasetTypeSet_insert_void_EVDatasetType(void *pObjectXXXX, _in int& val )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjectXXXX;
					ptrNativeObject->insert((EarthView::World::Spatial::GeoDataset::EVDatasetType&)val);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_FrameWorkProxy_AtlasManager_EVDatasetTypeSet_size_ev_size_t(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_FrameWorkProxy_AtlasManager_EVDatasetTypeSet_erase_ev_size_t_EVDatasetType(void *pObjectXXXX, _in int& key )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->erase((EarthView::World::Spatial::GeoDataset::EVDatasetType&)key);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_EVDatasetTypeSet_empty_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_EVDatasetTypeSet_clear_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_FrameWorkProxy_AtlasManager_EVDatasetTypeSet_count_ev_size_t_EVDatasetType(void *pObjectXXXX, _in int& key )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->count((EarthView::World::Spatial::GeoDataset::EVDatasetType&)key);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_FrameWorkProxy_AtlasManager_EVDatasetTypeSet_max_size_ev_size_t(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->max_size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_EVDatasetTypeSet_swap_void_EVDatasetTypeSet(void *pObjectXXXX, _inout void* other )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*)other);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_EVDatasetTypeSet_get_EVDatasetType_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->get(index);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_push_back_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer*& t )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_front_ILayer(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_back_ILayer(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_insert_void_ev_uint32_ILayer(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial::Atlas::ILayer*& t )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_OperatorIndex_ILayer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector& objYYYY = *(EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_at_ILayer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_getSingleton_CAtlasManager( )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager& objXXXX = EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager::getSingleton();
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_getSingletonPtr_CAtlasManager( )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* objXXXX = EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createMap_IMap_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->createMap(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createScene_IScene_EVString_int(void *pObjectXXXX, _in const char* name, _in int tileType )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->createScene(name1, tileType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createLayout_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->createLayout(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_setCurrentMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->setCurrentMap(map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_setCurrentScene_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->setCurrentScene(scene);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeMap(map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeScene_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeScene(scene);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeLayout_void_IPageLayout(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IPageLayout* pLayout )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeLayout(pLayout);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_destroyMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->destroyMap(map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_destroyScene_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->destroyScene(scene);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_destroyLayout_void_IPageLayout(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IPageLayout* pLayout )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->destroyLayout(pLayout);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_setLayerEditable_void_ILayer_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in bool editable )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->setLayerEditable(layer, editable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_setLayerSelectable_void_ILayer_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in bool selectable )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->setLayerSelectable(layer, selectable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showAltitudeModeConfig_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showAltitudeModeConfig(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_refurbishModelLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->refurbishModelLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showLayerDetail_void_ILayer_ILayer_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in EarthView::World::Spatial::Atlas::ILayer* parentLayer, _in EarthView::World::Spatial::Atlas::IMap* imap )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showLayerDetail(layer, parentLayer, imap);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showLayerProperty_void_ILayer_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in EarthView::World::Spatial::Atlas::ILayer* parentLayer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showLayerProperty(layer, parentLayer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_clearProperty_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->clearProperty();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showKmlManager_void_ILayer_EVString_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in const char* datasourceName, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showKmlManager(layer, datasourceName1, datasetName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_clearKmlManager_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->clearKmlManager();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showSceneDetail_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showSceneDetail(scene);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showSceneProperty_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showSceneProperty(scene);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showMapDetail_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* imap )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showMapDetail(imap);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showMapProperty_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* imap )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showMapProperty(imap);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showMapLayerReord_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ilayer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showMapLayerReord(ilayer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showSceneLayerReord_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ilayer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showSceneLayerReord(ilayer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showHistoryImage_void_EVString(void *pObjectXXXX, _in const char* sceneName )
				{
					EarthView::World::Core::ev_string sceneName1 = sceneName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showHistoryImage(sceneName1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createMapLayer_ILayer_IMap_EVString_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in const char* datasourceName, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createMapLayer(map, datasourceName1, datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showTerrainSettings_void_EVString(void *pObjectXXXX, _in const char* sceneName )
				{
					EarthView::World::Core::ev_string sceneName1 = sceneName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showTerrainSettings(sceneName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_showAtmosphereTree_void_EVString(void *pObjectXXXX, _in const char* sceneName )
				{
					EarthView::World::Core::ev_string sceneName1 = sceneName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->showAtmosphereTree(sceneName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_destroyLayer_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->destroyLayer(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_getSupportedType_EVDatasetTypeSet_EVLayerType(void *pObjectXXXX, _in int grouplayerType )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet objXXXX = ptrNativeObject->getSupportedType((EarthView::World::Spatial::Atlas::EVLayerType)grouplayerType);
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createMapLayer_ILayer_EVString_EVString_IGroupLayer_IMap(void *pObjectXXXX, _in const char* datasourceName, _in const char* datasetName, _in EarthView::World::Spatial::Atlas::IGroupLayer* pParentGroup, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createMapLayer(datasourceName1, datasetName1, pParentGroup, map);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createMapLayer_ILayer_IGroupLayer_IDataset_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IGroupLayer* pParentGrouplayer, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createMapLayer(pParentGrouplayer, dataset, map);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_addMapLayer_void_IMap_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->addMapLayer(map, layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_addMapLayer_void_IGroupLayer_ILayer_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IGroupLayer* pParentGroupLayer, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->addMapLayer(pParentGroupLayer, layer, map);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IGroupLayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createMapGroupLayer_IGroupLayer_IMap_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in const char* groupName )
				{
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IGroupLayer* objXXXX = ptrNativeObject->createMapGroupLayer(map, groupName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IGroupLayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createBaseMapGroupLayer_IGroupLayer_IMap_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in const char* groupName )
				{
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IGroupLayer* objXXXX = ptrNativeObject->createBaseMapGroupLayer(map, groupName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IGroupLayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createMapGroupLayer_IGroupLayer_IGroupLayer_EVString_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IGroupLayer* pParentGrouplayer, _in const char* groupName, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IGroupLayer* objXXXX = ptrNativeObject->createMapGroupLayer(pParentGrouplayer, groupName1, map);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createMapLayer_ILayer_IMap_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createMapLayer(map, dataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_moveMapLayer_void_IMap_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->moveMapLayer(map, oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_moveMapLayer_void_IMap_IGroupLayer_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in EarthView::World::Spatial::Atlas::IGroupLayer* pParentGrouplayer, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->moveMapLayer(map, pParentGrouplayer, oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_moveMapLayer_void_IMap_IGroupLayer_ev_uint32_IGroupLayer_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* pMap, _in EarthView::World::Spatial::Atlas::IGroupLayer* dragGroupLayer, _in ev_uint32 dragIndex, _in EarthView::World::Spatial::Atlas::IGroupLayer* hoverGroupLayer, _in ev_uint32 hoverIndex )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->moveMapLayer(pMap, dragGroupLayer, dragIndex, hoverGroupLayer, hoverIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeMapLayer_void_IMap_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in ev_uint32 index )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeMapLayer(map, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeMapLayer_void_IGroupLayer_IMap_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IGroupLayer* pParentGrouplayer, _in EarthView::World::Spatial::Atlas::IMap* map, _in ev_uint32 index )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeMapLayer(pParentGrouplayer, map, index);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_changeMapName_ev_bool_IMap_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->changeMapName(map, name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_changeLayerName_void_ILayer_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->changeLayerName(layer, name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_changeLayerVisible_void_ILayer_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in ev_bool visible )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->changeLayerVisible(layer, visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_setMapMinScale_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->setMapMinScale(map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_setMapMaxScale_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->setMapMaxScale(map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_clearMapScale_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->clearMapScale(map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_setLayerMinScale_void_EVString_ILayer(void *pObjectXXXX, _in const char* spatialControlName, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Core::ev_string spatialControlName1 = spatialControlName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->setLayerMinScale(spatialControlName1, layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_setLayerMaxScale_void_EVString_ILayer(void *pObjectXXXX, _in const char* spatialControlName, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Core::ev_string spatialControlName1 = spatialControlName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->setLayerMaxScale(spatialControlName1, layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_clearLayerScale_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->clearLayerScale(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_zoomToLayer_void_EVString_ILayer(void *pObjectXXXX, _in const char* spatialControlName, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Core::ev_string spatialControlName1 = spatialControlName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->zoomToLayer(spatialControlName1, layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeMapLayersByDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeMapLayersByDataSource(pDataSource);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeMapLayersByDataset_void_IDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeMapLayersByDataset(pDataSource, datasetName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_isDatasetEditing_ev_bool_IDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDatasetEditing(ds, datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_isEditing_ev_bool_IGroupLayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IGroupLayer* groupLayer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isEditing(groupLayer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_isEditing_ev_bool_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isEditing(scene);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_isEditing_ev_bool_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* featureGroupLayer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isEditing(featureGroupLayer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_referenceDatasetInScene_ev_uint32_EVString_EVString_IScene(void *pObjectXXXX, _in const char* datasourceName, _in const char* datasetName, _in EarthView::World::Spatial::Atlas::IScene* pScene )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->referenceDatasetInScene(datasourceName1, datasetName1, pScene);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_referenceDatasetInMap_ev_uint32_EVString_EVString_IMap(void *pObjectXXXX, _in const char* datasourceName, _in const char* datasetName, _in EarthView::World::Spatial::Atlas::IMap* pMap )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->referenceDatasetInMap(datasourceName1, datasetName1, pMap);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createSceneLayer_IGlobeLayer_IGlobeLayer_EVString_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer, _in const char* datasourceName, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->createSceneLayer(grouplayer, datasourceName1, datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_createSceneGroupLayer_IGlobeLayer_IGlobeLayer_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer, _in const char* groupName )
				{
					EarthView::World::Core::ev_string groupName1 = groupName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->createSceneGroupLayer(pParentGrouplayer, groupName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_moveSceneLayer_void_IGlobeLayer_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer, _in ev_uint32 index, _in ev_uint32 pos )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->moveSceneLayer(pParentGrouplayer, index, pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_switchSceneLayer_void_IGlobeLayer_ev_uint32_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer, _in ev_uint32 index, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* newLayer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->switchSceneLayer(pParentGrouplayer, index, newLayer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeSceneLayer_void_IGlobeLayer_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer, _in ev_uint32 index )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeSceneLayer(pParentGrouplayer, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_setSceneLayerVisible_void_IGlobeLayer_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer, _in ev_bool visible )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->setSceneLayerVisible(layer, visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_setSceneLayerTheme_void_IGlobeLayer_ITheme(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer, _in EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->setSceneLayerTheme(layer, theme);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeContainedLayers_void_IMap_IGroupLayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map, _in EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeContainedLayers(map, grouplayer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeContainedLayers_void_IScene_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeContainedLayers(scene, grouplayer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeContainedLayers_void_IScene_IGlobeLayer_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* scene, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer, _in ev_bool updateScene )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeContainedLayers(scene, grouplayer, updateScene);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeSceneLayersByDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeSceneLayersByDataSource(pDataSource);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_removeSceneLayersByDataset_void_IDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ptrNativeObject->removeSceneLayersByDataset(pDataSource, datasetName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_clearVectorLayerCacheData_ev_bool_IDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clearVectorLayerCacheData(pDataSource, datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_getLayersByGroupLayer_CLayerVector_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector objXXXX = ptrNativeObject->getLayersByGroupLayer(grouplayer);
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CAtlasManager_openDataset_IDataset_EVString_EVString(void *pObjectXXXX, _in const char* datasourceName, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(datasourceName1, datasetName1);
					return objXXXX;
				}
			}
		}
	}
}
