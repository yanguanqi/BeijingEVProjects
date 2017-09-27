/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmllayer.h"
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
		namespace Spatial3D
		{
			namespace KmlManager
			{
			}
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
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback)(_in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout void* tile);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback)(_in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout void* tile);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CKmlLayerProxy : public EarthView::World::Spatial3D::Atlas::CKmlLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream_Callback;
				public:
					CKmlLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData(EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData(EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getDataset();
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::clone();
					}
					virtual ev_bool getTile(_in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout EarthView::World::Spatial::CTileData& tile)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback(level, row, col, &tile);
							return returnValue;
						}
						else
							return this->CKmlLayer::getTile(level, row, col, tile);
					}
					virtual ev_bool getTile(_in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout EarthView::World::Spatial::CTileData& tile)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback(minX, minY, maxX, maxY, &tile);
							return returnValue;
						}
						else
							return this->CKmlLayer::getTile(minX, minY, maxX, maxY, tile);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CKmlLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::toXmlElement();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CKmlLayer::toStream(stream);
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CKmlLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CKmlLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->CKmlLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_Callback(camera);
						}
						else
							return this->CKmlLayer::_notifyRefreshed(camera);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->CKmlLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CKmlLayer::setVisible(visible);
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CKmlLayer::setSelectable(selectable);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CKmlLayer::fromStream(stream);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CKmlLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CKmlLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CKmlLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CKmlLayer::setEditing(editing);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::isValid();
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getMaxY();
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->CKmlLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getSceneManager();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::toXML();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CKmlLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void_Callback();
						}
						else
							return this->CKmlLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CKmlLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getLayerSelection();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CKmlLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CKmlLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CKmlLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CKmlLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CKmlLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CKmlLayer::draw(display, type);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlLayerProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerGotoParam_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& heading, _out ev_real64& tilt, _out ev_real64& altitude, _out ev_real64& moditifAltitude )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getLayerGotoParam(latitude, longitude, heading, tilt, altitude, moditifAltitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getKmlObjectGotoParam_ev_int32_CGeoObjectExtension_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* obj, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& heading, _out ev_real64& tilt, _out ev_real64& altitude, _out ev_real64& moditifAltitude )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getKmlObjectGotoParam(obj, latitude, longitude, heading, tilt, altitude, moditifAltitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getKmlDocumentGotoParam_ev_int32_CKmlDocument_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* obj, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& heading, _out ev_real64& tilt, _out ev_real64& altitude, _out ev_real64& moditifAltitude )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getKmlDocumentGotoParam(obj, latitude, longitude, heading, tilt, altitude, moditifAltitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getKmlNetlinkGotoParam_ev_int32_CKmlNetworkLink_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* obj, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& heading, _out ev_real64& tilt, _out ev_real64& altitude, _out ev_real64& moditifAltitude )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getKmlNetlinkGotoParam(obj, latitude, longitude, heading, tilt, altitude, moditifAltitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setLabelVisibleDistance_void_Real(void *pObjectXXXX, _in Real val )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->setLabelVisibleDistance(val);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getLabelVisibleDistance_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getLabelVisibleDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setReduceDistance_void_Real(void *pObjectXXXX, _in Real val )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->setReduceDistance(val);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getReduceDistance_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getReduceDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_update_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->update();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getEnvelopeRef_CEnvelope_ev_bool(void *pObjectXXXX, _inout ev_bool& hasData )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope objXXXX = ptrNativeObject->getEnvelopeRef(hasData);
					EarthView::World::Spatial::Geometry::CEnvelope *pXXXX = new EarthView::World::Spatial::Geometry::CEnvelope(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getFeatureCount_ev_uint64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->getFeatureCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataPath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDataPath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setDataPath_void_EVString(void *pObjectXXXX, _in char* path )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->setDataPath(path1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_Draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->Draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_refreshLayer_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->refreshLayer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_statisEntityForStaticGeometry_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->statisEntityForStaticGeometry();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::getTile(level, row, col, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getTile(level, row, col, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_ev_int32_ev_int32_ev_int32_CTileData_NoVirtual(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::getTile(level, row, col, *(EarthView::World::Spatial::CTileData*)tile);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData(void *pObjectXXXX, _in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::getTile(minX, minY, maxX, maxY, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getTile(minX, minY, maxX, maxY, *(EarthView::World::Spatial::CTileData*)tile);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getTile_ev_bool_Real_Real_Real_Real_CTileData_NoVirtual(void *pObjectXXXX, _in Real minX, _in Real minY, _in Real maxX, _in Real maxY, _inout void* tile )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::getTile(minX, minY, maxX, maxY, *(EarthView::World::Spatial::CTileData*)tile);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::_notifyLayerAdd(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerAdd_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::_notifyLayerRemoved(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyLayerRemoved_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
					else
						ptrNativeObject->_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::_notifyRefreshed(camera);
					else
						ptrNativeObject->_notifyRefreshed(camera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyRefreshed_void_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::_notifyRefreshed(camera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
					else
						ptrNativeObject->_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer__notifyDataChanged_void_EVString_EVString_CEvent_NoVirtual(void *pObjectXXXX, _in const char* strDataSourceName, _in const char* strDatasetName, _in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::Core::ev_string strDataSourceName1 = strDataSourceName;
					EarthView::World::Core::ev_string strDatasetName1 = strDatasetName;
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::_notifyDataChanged(strDataSourceName1, strDatasetName1, pEvent);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::setSelectable(selectable);
					else
						ptrNativeObject->setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CKmlRenderableManager*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_getRenderableManger_CKmlRenderableManager(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* objXXXX = ptrNativeObject->getRenderableManger();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CCamera*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CKmlLayer_mpCamera( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					const EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->mpCamera;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Atlas_CKmlLayer_mpCamera( void *pObjectXXXX, const EarthView::World::Graphic::CCamera*  value )
				{
					((EarthView::World::Spatial3D::Atlas::CKmlLayer*)pObjectXXXX)->mpCamera = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayer_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString_Callback* pCallback )
				{
					CKmlLayerProxy* ptr = dynamic_cast<CKmlLayerProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayer_toXML_EVString(pCallback);
					}
				}
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset_Callback)(_in char*& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CKmlLayerFactoryProxy : public EarthView::World::Spatial3D::Atlas::CKmlLayerFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CKmlLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlLayerFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset(EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer(EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset_Callback(name_Char, ds);
							return returnValue;
						}
						else
							return this->CKmlLayerFactory::createInstance(name, ds);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CKmlLayerFactory::createInstance(element);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CKmlLayerFactory::createInstance();
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CKmlLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getSingletonPtr_CKmlLayerFactory( )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* objXXXX = EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_releaseSingletonPtr_void( )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::releaseSingletonPtr();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CKmlLayerFactoryProxy* ptr = dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::createInstance(name1, ds);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(name1, ds);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback )
				{
					CKmlLayerFactoryProxy* ptr = dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_IDataset_NoVirtual(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::createInstance(name1, ds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CKmlLayerFactoryProxy* ptr = dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CKmlLayerFactoryProxy* ptr = dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CKmlLayerFactoryProxy* ptr = dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_msKmlLayerFactoryName()
				{
					const EVString objXXXX = EarthView::World::Spatial3D::Atlas::CKmlLayerFactory::msKmlLayerFactoryName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CKmlLayerFactoryProxy* ptr = dynamic_cast<CKmlLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CKmlLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CKmlLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
