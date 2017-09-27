/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmlgrouplayer.h"
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
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer_Callback)(_in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer_Callback)(_in ev_uint32 index, _in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer_Callback)(_in const EarthView::World::Spatial3D::Atlas::CKmlLayer* layer);
				typedef EarthView::World::Spatial3D::Atlas::CKmlLayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback)(_in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout void* tile);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback)(_in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout void* tile);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CKmlGroupLayerProxy : public EarthView::World::Spatial3D::Atlas::CKmlGroupLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream_Callback;
				public:
					CKmlGroupLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlGroupLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getType();
					}
					virtual ev_bool getTile(_in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout EarthView::World::Spatial::CTileData& tile)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback(level, row, col, &tile);
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getTile(level, row, col, tile);
					}
					virtual ev_bool getTile(_in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout EarthView::World::Spatial::CTileData& tile)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback(minX, minY, maxX, maxY, &tile);
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getTile(minX, minY, maxX, maxY, tile);
					}
					virtual ev_bool addLayer(_in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer_Callback(ref_layer);
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::addLayer(ref_layer);
					}
					virtual ev_bool insertLayer(_in ev_uint32 index, _in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer_Callback(index, ref_layer);
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::insertLayer(index, ref_layer);
					}
					virtual ev_bool removeLayer(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::removeLayer(index);
					}
					virtual ev_uint32 getLayerCount() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getLayerCount();
					}
					virtual ev_int32 getLayerIndex(_in const EarthView::World::Spatial3D::Atlas::CKmlLayer* layer) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getLayerIndex(layer);
					}
					virtual EarthView::World::Spatial3D::Atlas::CKmlLayer* getLayer(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Atlas::CKmlLayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getLayer(index);
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CKmlGroupLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CKmlGroupLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->CKmlGroupLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->CKmlGroupLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::toXmlElement();
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CKmlGroupLayer::setVisible(visible);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CKmlGroupLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getDataset();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CKmlGroupLayer::toStream(stream);
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CKmlGroupLayer::setSelectable(selectable);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CKmlGroupLayer::fromStream(stream);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CKmlGroupLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CKmlGroupLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CKmlGroupLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CKmlGroupLayer::setEditing(editing);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::isValid();
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getMaxY();
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getSceneManager();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::toXML();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CKmlGroupLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void_Callback();
						}
						else
							return this->CKmlGroupLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CKmlGroupLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getLayerSelection();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CKmlGroupLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CKmlGroupLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CKmlGroupLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CKmlGroupLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CKmlGroupLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CKmlGroupLayer::draw(display, type);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlGroupLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getTile(level, row, col, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getTile(level, row, col, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_NoVirtual(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getTile(level, row, col, *(EarthView::World::Spatial::CTileData*)tile);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData(void *pObjectXXXX, _in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getTile(minX, minY, maxX, maxY, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getTile(minX, minY, maxX, maxY, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_NoVirtual(void *pObjectXXXX, _in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getTile(minX, minY, maxX, maxY, *(EarthView::World::Spatial::CTileData*)tile);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::addLayer(ref_layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addLayer(ref_layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_addLayer_ev_bool_CKmlLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::addLayer(ref_layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::insertLayer(index, ref_layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->insertLayer(index, ref_layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_insertLayer_ev_bool_ev_uint32_CKmlLayer_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::insertLayer(index, ref_layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::removeLayer(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeLayer(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::removeLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_removeLayer_ev_bool_CKmlLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CKmlLayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeLayer(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getLayerCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getLayerCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer(void *pObjectXXXX, _in const EarthView::World::Spatial3D::Atlas::CKmlLayer* layer )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getLayerIndex(layer);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getLayerIndex(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerIndex_ev_int32_CKmlLayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial3D::Atlas::CKmlLayer* layer )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getLayerIndex(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CKmlLayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Atlas::CKmlLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getLayer(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::CKmlLayer* objXXXX = ptrNativeObject->getLayer(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CKmlLayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayer_CKmlLayer_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CKmlLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::getLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_moveLayer_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 pos )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->moveLayer(index, pos);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::_notifyLayerAdd(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerAdd_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::_notifyLayerRemoved(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyLayerRemoved_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
					else
						ptrNativeObject->_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
					else
						ptrNativeObject->_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyDataChanged_void_EVString_EVString_CEvent_NoVirtual(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CKmlGroupLayerProxy* ptr = dynamic_cast<CKmlGroupLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CKmlGroupLayerFactoryProxy : public EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CKmlGroupLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlGroupLayerFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer(EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CKmlGroupLayerFactory::createInstance(element);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CKmlGroupLayerFactory::createInstance();
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CKmlGroupLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlGroupLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CKmlGroupLayerFactoryProxy* ptr = dynamic_cast<CKmlGroupLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CKmlGroupLayerFactoryProxy* ptr = dynamic_cast<CKmlGroupLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CKmlGroupLayerFactoryProxy* ptr = dynamic_cast<CKmlGroupLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlGroupLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CKmlGroupLayerFactoryProxy* ptr = dynamic_cast<CKmlGroupLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_mKmlGroupLayerFactoryName()
				{
					const EVString objXXXX = EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory::mKmlGroupLayerFactoryName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CKmlGroupLayerFactoryProxy* ptr = dynamic_cast<CKmlGroupLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlGroupLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
