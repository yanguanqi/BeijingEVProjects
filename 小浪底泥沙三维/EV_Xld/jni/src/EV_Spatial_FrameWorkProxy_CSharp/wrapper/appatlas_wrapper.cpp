/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/appatlas.h"
namespace EarthView
{
	namespace World
	{
		namespace Utilities
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_create3DLayer_ILayer_EVString_EVString_EVString_LayerType3D(void *pObjectXXXX, _in const char* sceneName, _in const char* dataSourceAliasName, _in const char* datasetName, _in int type )
			{
				EarthView::World::Core::ev_string sceneName1 = sceneName;
				EarthView::World::Core::ev_string dataSourceAliasName1 = dataSourceAliasName;
				EarthView::World::Core::ev_string datasetName1 = datasetName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->create3DLayer(sceneName1, dataSourceAliasName1, datasetName1, (EarthView::World::Utilities::AppAtlas::LayerType3D)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_create3DLayer_ILayer_EVString_EVString_ILayer(void *pObjectXXXX, _in const char* dataSourceAliasName, _in const char* datasetName, _in EarthView::World::Spatial::Atlas::ILayer* parentLayer )
			{
				EarthView::World::Core::ev_string dataSourceAliasName1 = dataSourceAliasName;
				EarthView::World::Core::ev_string datasetName1 = datasetName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->create3DLayer(dataSourceAliasName1, datasetName1, parentLayer);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_create3DGroupLayer_ILayer_EVString_EVString_LayerType3D(void *pObjectXXXX, _in const char* sceneName, _in const char* groupName, _in int type )
			{
				EarthView::World::Core::ev_string sceneName1 = sceneName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->create3DGroupLayer(sceneName1, groupName1, (EarthView::World::Utilities::AppAtlas::LayerType3D)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_create3DGroupLayer_ILayer_EVString_ILayer(void *pObjectXXXX, _in const char* groupName, _in EarthView::World::Spatial::Atlas::ILayer* parentLayer )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->create3DGroupLayer(groupName1, parentLayer);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_get3DLayer_ILayer_EVString_EVString_LayerType3D(void *pObjectXXXX, _in const char* sceneName, _in const char* layerName, _in int type )
			{
				EarthView::World::Core::ev_string sceneName1 = sceneName;
				EarthView::World::Core::ev_string layerName1 = layerName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->get3DLayer(sceneName1, layerName1, (EarthView::World::Utilities::AppAtlas::LayerType3D)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_get3DLayer_ILayer_EVString_ILayer(void *pObjectXXXX, _in const char* layerName, _in const EarthView::World::Spatial::Atlas::ILayer* parentLayer )
			{
				EarthView::World::Core::ev_string layerName1 = layerName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->get3DLayer(layerName1, parentLayer);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppAtlas_delete3DLayer_bool_EVString_ILayer_LayerType3D(void *pObjectXXXX, _in const char* sceneName, _in const EarthView::World::Spatial::Atlas::ILayer* layer, _in int type )
			{
				EarthView::World::Core::ev_string sceneName1 = sceneName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->delete3DLayer(sceneName1, layer, (EarthView::World::Utilities::AppAtlas::LayerType3D)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppAtlas_delete3DLayer_bool_ILayer_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer, _in const EarthView::World::Spatial::Atlas::ILayer* parentLayer )
			{
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->delete3DLayer(layer, parentLayer);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_create2DLayer_ILayer_EVString_EVString_EVString(void *pObjectXXXX, _in const char* mapName, _in const char* dataSourceAliasName, _in const char* datasetName )
			{
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Core::ev_string dataSourceAliasName1 = dataSourceAliasName;
				EarthView::World::Core::ev_string datasetName1 = datasetName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->create2DLayer(mapName1, dataSourceAliasName1, datasetName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_create2DLayer_ILayer_EVString_EVString_ILayer_EVString(void *pObjectXXXX, _in const char* dataSourceAliasName, _in const char* datasetName, _in EarthView::World::Spatial::Atlas::ILayer* parentLayer, _in const char* mapName )
			{
				EarthView::World::Core::ev_string dataSourceAliasName1 = dataSourceAliasName;
				EarthView::World::Core::ev_string datasetName1 = datasetName;
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->create2DLayer(dataSourceAliasName1, datasetName1, parentLayer, mapName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_create2DGroupLayer_ILayer_EVString_EVString(void *pObjectXXXX, _in const char* mapName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->create2DGroupLayer(mapName1, groupName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_create2DBaseGroupLayer_ILayer_EVString_EVString(void *pObjectXXXX, _in const char* mapName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->create2DBaseGroupLayer(mapName1, groupName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_create2DGroupLayer_ILayer_EVString_EVString_ILayer(void *pObjectXXXX, _in const char* mapName, _in const char* groupName, _in EarthView::World::Spatial::Atlas::ILayer* parentLayer )
			{
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->create2DGroupLayer(mapName1, groupName1, parentLayer);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Utilities_AppAtlas_get2DLayer_ILayer_EVString_EVString(void *pObjectXXXX, _in const char* mapName, _in const char* layerName )
			{
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Core::ev_string layerName1 = layerName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->get2DLayer(mapName1, layerName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppAtlas_delete2DLayer_bool_EVString_ILayer_ILayer(void *pObjectXXXX, _in const char* mapName, _in const EarthView::World::Spatial::Atlas::ILayer* layer, _in EarthView::World::Spatial::Atlas::ILayer* parentLayer )
			{
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->delete2DLayer(mapName1, layer, parentLayer);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Utilities_AppAtlas_createScene_IScene_EVString_TileType(void *pObjectXXXX, _in const char* sceneName, _in int tileType )
			{
				EarthView::World::Core::ev_string sceneName1 = sceneName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->createScene(sceneName1, (EarthView::World::Utilities::AppAtlas::TileType)tileType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Utilities_AppAtlas_getScene_IScene_EVString(void *pObjectXXXX, _in const char* sceneName )
			{
				EarthView::World::Core::ev_string sceneName1 = sceneName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->getScene(sceneName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppAtlas_deleteScene_bool_EVString(void *pObjectXXXX, _in const char* sceneName )
			{
				EarthView::World::Core::ev_string sceneName1 = sceneName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->deleteScene(sceneName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Utilities_AppAtlas_createMap_IMap_EVString(void *pObjectXXXX, _in const char* mapName )
			{
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->createMap(mapName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Utilities_AppAtlas_getMap_IMap_EVString(void *pObjectXXXX, _in const char* mapName )
			{
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap(mapName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppAtlas_deleteMap_bool_EVString(void *pObjectXXXX, _in const char* mapName )
			{
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->deleteMap(mapName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Utilities_AppAtlas_createLayout_IPageLayout_EVString(void *pObjectXXXX, _in const char* layoutName )
			{
				EarthView::World::Core::ev_string layoutName1 = layoutName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->createLayout(layoutName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppAtlas_deleteLayout_bool_EVString(void *pObjectXXXX, _in const char* layoutName )
			{
				EarthView::World::Core::ev_string layoutName1 = layoutName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->deleteLayout(layoutName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppAtlas_setLayerVisible_bool_ILayer_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in bool visible )
			{
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->setLayerVisible(layer, visible);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppAtlas_setLayerTheme_bool_ILayer_ITheme(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in EarthView::World::Spatial::Theme::ITheme* theme )
			{
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->setLayerTheme(layer, theme);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Utilities_AppAtlas_move3DLayer_void_EVString_EVString_LayerType3D_int_int(void *pObjectXXXX, _in const char* sceneName, _in const char* layerName, _in int type, _in int index, _in int newIndex )
			{
				EarthView::World::Core::ev_string sceneName1 = sceneName;
				EarthView::World::Core::ev_string layerName1 = layerName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				ptrNativeObject->move3DLayer(sceneName1, layerName1, (EarthView::World::Utilities::AppAtlas::LayerType3D)type, index, newIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Utilities_AppAtlas_move3DLayer_void_ILayer_int_int(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* parentLayer, _in int index, _in int newIndex )
			{
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				ptrNativeObject->move3DLayer(parentLayer, index, newIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Utilities_AppAtlas_move2DLayer_void_EVString_int_int(void *pObjectXXXX, _in const char* mapName, _in int index, _in int newIndex )
			{
				EarthView::World::Core::ev_string mapName1 = mapName;
				EarthView::World::Utilities::AppAtlas* ptrNativeObject = (EarthView::World::Utilities::AppAtlas*) pObjectXXXX;
				ptrNativeObject->move2DLayer(mapName1, index, newIndex);
			}
		}
	}
}
