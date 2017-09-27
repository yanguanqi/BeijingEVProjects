/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/tempgrouplayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback)(_in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout void* tile);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback)(_in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout void* tile);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer_Callback)(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer_Callback)(_in ev_uint32 index, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer_Callback)(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer_Callback)(_in const EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer);
				typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32_Callback)(_in ev_uint32 index);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CTempGroupLayerProxy : public EarthView::World::Spatial3D::Atlas::CTempGroupLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream_Callback;
				public:
					CTempGroupLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTempGroupLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getType();
					}
					virtual ev_bool getTile(_in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout EarthView::World::Spatial::CTileData& tile)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback(level, row, col, &tile);
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getTile(level, row, col, tile);
					}
					virtual ev_bool getTile(_in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout EarthView::World::Spatial::CTileData& tile)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback(minX, minY, maxX, maxY, &tile);
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getTile(minX, minY, maxX, maxY, tile);
					}
					virtual ev_bool addLayer(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer_Callback(ref_layer);
							return returnValue;
						}
						else
							return this->CTempGroupLayer::addLayer(ref_layer);
					}
					virtual ev_bool insertLayer(_in ev_uint32 index, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer_Callback(index, ref_layer);
							return returnValue;
						}
						else
							return this->CTempGroupLayer::insertLayer(index, ref_layer);
					}
					virtual ev_bool removeLayer(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CTempGroupLayer::removeLayer(index);
					}
					virtual ev_bool removeLayer(_in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CTempGroupLayer::removeLayer(layer);
					}
					virtual ev_uint32 getLayerCount() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getLayerCount();
					}
					virtual ev_int32 getLayerIndex(_in const EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getLayerIndex(layer);
					}
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getLayer(index);
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CTempGroupLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CTempGroupLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->CTempGroupLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->CTempGroupLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CTempGroupLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CTempGroupLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CTempGroupLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CTempGroupLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CTempGroupLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CTempGroupLayer::setSelectable(selectable);
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getMaxY();
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getSceneManager();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CTempGroupLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::toXmlElement();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::toXML();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CTempGroupLayer::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CTempGroupLayer::fromStream(stream);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getDataset();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CTempGroupLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void_Callback();
						}
						else
							return this->CTempGroupLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CTempGroupLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getLayerSelection();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CTempGroupLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CTempGroupLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CTempGroupLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CTempGroupLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CTempGroupLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CTempGroupLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CTempGroupLayer::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CTempGroupLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getTile(level, row, col, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getTile(level, row, col, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_NoVirtual(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getTile(level, row, col, *(EarthView::World::Spatial::CTileData*)tile);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData(void *pObjectXXXX, _in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getTile(minX, minY, maxX, maxY, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getTile(minX, minY, maxX, maxY, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_NoVirtual(void *pObjectXXXX, _in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getTile(minX, minY, maxX, maxY, *(EarthView::World::Spatial::CTileData*)tile);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::addLayer(ref_layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addLayer(ref_layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_addLayer_ev_bool_IGlobeLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::addLayer(ref_layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::insertLayer(index, ref_layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->insertLayer(index, ref_layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_insertLayer_ev_bool_ev_uint32_IGlobeLayer_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::insertLayer(index, ref_layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::removeLayer(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeLayer(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::removeLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::removeLayer(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeLayer(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_removeLayer_ev_bool_IGlobeLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::removeLayer(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getLayerCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getLayerCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer(void *pObjectXXXX, _in const EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer )
				{
					const EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getLayerIndex(layer);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getLayerIndex(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerIndex_ev_int32_IGlobeLayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer )
				{
					const EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getLayerIndex(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getLayer(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->getLayer(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayer_IGlobeLayer_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::getLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_moveLayer_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 pos )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->moveLayer(index, pos);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer_sortLayerDefault_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ptrNativeObject->sortLayerDefault();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::_notifyLayerAdd(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerAdd_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::_notifyLayerRemoved(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyLayerRemoved_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
					else
						ptrNativeObject->_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
					else
						ptrNativeObject->_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_NoVirtual(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CTempGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CTempGroupLayer::_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CTempGroupLayerProxy* ptr = dynamic_cast<CTempGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CTempGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CTempGroupLayer_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
