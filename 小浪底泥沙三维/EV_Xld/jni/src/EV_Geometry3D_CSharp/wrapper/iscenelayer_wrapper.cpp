/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/iscenelayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer_Callback)();
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class ISceneLayerProxy : public EarthView::World::Spatial3D::Atlas::ISceneLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream_Callback;
				public:
					ISceneLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : ISceneLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer(EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void(EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer(EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme(EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme(EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getType();
					}
					virtual void attachLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer_Callback(layer);
						}
						else
							return this->ISceneLayer::attachLayer(layer);
					}
					virtual void detachLayer()
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void_Callback();
						}
						else
							return this->ISceneLayer::detachLayer();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getLayer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getDataset();
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getTheme();
					}
					virtual void setTheme(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme_Callback(theme);
						}
						else
							return this->ISceneLayer::setTheme(theme);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getExtent();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getSpatialReference();
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getMaxY();
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::toXmlElement();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->ISceneLayer::fromXmlElement(element);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->ISceneLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->ISceneLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->ISceneLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->ISceneLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->ISceneLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->ISceneLayer::setSelectable(selectable);
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->ISceneLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->ISceneLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->ISceneLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->ISceneLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_Callback(camera);
						}
						else
							return this->ISceneLayer::_notifyRefreshed(camera);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->ISceneLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getSceneManager();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ISceneLayer::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ISceneLayer::fromStream(stream);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->ISceneLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void_Callback();
						}
						else
							return this->ISceneLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->ISceneLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getLayerSelection();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->ISceneLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->ISceneLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->ISceneLayer::setDisplayMinScale(scale);
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->ISceneLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->ISceneLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::getTransparentValue();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->ISceneLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->ISceneLayer::clone();
					}
				};
				REGISTER_FACTORY_CLASS(ISceneLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::attachLayer(layer);
					else
						ptrNativeObject->attachLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_attachLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::attachLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::detachLayer();
					else
						ptrNativeObject->detachLayer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_detachLayer_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::detachLayer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getLayer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayer_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getTheme();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getTheme();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getTheme_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::setTheme(theme);
					else
						ptrNativeObject->setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_setTheme_void_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getMinX();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinX();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinX_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getMinX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getMaxX();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxX();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxX_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getMaxX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getMinY();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinY();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMinY_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getMinY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getMaxY();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxY();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_getMaxY_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::getMaxY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_makeCacheName_EVString_EVString(_in const char* srcName )
				{
					EarthView::World::Core::ev_string srcName1 = srcName;
					EVString objXXXX = EarthView::World::Spatial3D::Atlas::ISceneLayer::makeCacheName(srcName1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					if (dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_ISceneLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::ISceneLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::ISceneLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					ISceneLayerProxy* ptr = dynamic_cast<ISceneLayerProxy*>((EarthView::World::Spatial3D::Atlas::ISceneLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_ISceneLayer_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
