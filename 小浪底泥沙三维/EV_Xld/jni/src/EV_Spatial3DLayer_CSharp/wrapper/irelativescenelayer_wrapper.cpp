/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/irelativescenelayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Geometry3D
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
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer_Callback)();
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class IRelativeSceneLayerProxy : public EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream_Callback;
				public:
					IRelativeSceneLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : IRelativeSceneLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::rebulidSpatialIndex();
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getType();
					}
					virtual void attachLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IRelativeSceneLayer::attachLayer(layer);
					}
					virtual void detachLayer()
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void_Callback();
						}
						else
							return this->IRelativeSceneLayer::detachLayer();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getLayer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getDataset();
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getTheme();
					}
					virtual void setTheme(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme_Callback(theme);
						}
						else
							return this->IRelativeSceneLayer::setTheme(theme);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getExtent();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getSpatialReference();
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getMaxY();
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::toXmlElement();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IRelativeSceneLayer::fromXmlElement(element);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IRelativeSceneLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->IRelativeSceneLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->IRelativeSceneLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->IRelativeSceneLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->IRelativeSceneLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->IRelativeSceneLayer::setSelectable(selectable);
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->IRelativeSceneLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->IRelativeSceneLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->IRelativeSceneLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_Callback(camera);
						}
						else
							return this->IRelativeSceneLayer::_notifyRefreshed(camera);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->IRelativeSceneLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getSceneManager();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IRelativeSceneLayer::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IRelativeSceneLayer::fromStream(stream);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->IRelativeSceneLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void_Callback();
						}
						else
							return this->IRelativeSceneLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->IRelativeSceneLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getLayerSelection();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->IRelativeSceneLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->IRelativeSceneLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->IRelativeSceneLayer::setDisplayMinScale(scale);
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->IRelativeSceneLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->IRelativeSceneLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::getTransparentValue();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IRelativeSceneLayer::clone();
					}
				};
				REGISTER_FACTORY_CLASS(IRelativeSceneLayerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX;
					if (dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer::rebulidSpatialIndex();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->rebulidSpatialIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_rebulidSpatialIndex_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer::rebulidSpatialIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_attachLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_detachLayer_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayer_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTheme_void_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					IRelativeSceneLayerProxy* ptr = dynamic_cast<IRelativeSceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_IRelativeSceneLayer_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
