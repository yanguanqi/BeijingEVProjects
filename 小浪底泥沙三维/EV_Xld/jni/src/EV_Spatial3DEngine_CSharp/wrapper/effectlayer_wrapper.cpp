/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/effectlayer.h"
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
			namespace Dataset
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
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32_Callback)(_in ev_real32 distance);
				typedef ev_real32  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32_Callback)(_in int altitudeMode, _in ev_real32 altitudeValue);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32_Callback)(_out ev_int32& altitudeMode, _out ev_real32& altitudeValue);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback)(_in ev_uint32 id);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* pMovableObj);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeature* f);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeature* ref_f);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CEffectLayerProxy : public EarthView::World::Spatial3D::Atlas::CEffectLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream_Callback;
				public:
					CEffectLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void(EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32(EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32(EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32(EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32(EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope(EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32(EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject(EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature(EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature(EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CEffectLayer::setLayerSelection(selection);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CEffectLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void_Callback();
						}
						else
							return this->CEffectLayer::clearSelection();
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getLayerSelection();
					}
					virtual void refresh()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void_Callback();
						}
						else
							return this->CEffectLayer::refresh();
					}
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::CVisibleObjectPtr returnValue = *(EarthView::World::Geometry3D::CVisibleObjectPtr*)m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CEffectLayer::getVisibleObjectPtr(id);
					}
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(_in EarthView::World::Graphic::CMovableObject* pMovableObj)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::CVisibleObjectPtr returnValue = *(EarthView::World::Geometry3D::CVisibleObjectPtr*)m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback(pMovableObj);
							return returnValue;
						}
						else
							return this->CEffectLayer::getVisibleObjectPtr(pMovableObj);
					}
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(_in EarthView::World::Spatial::GeoDataset::IFeature* f)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::CVisibleObjectPtr returnValue = *(EarthView::World::Geometry3D::CVisibleObjectPtr*)m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback(f);
							return returnValue;
						}
						else
							return this->CEffectLayer::getVisibleObjectPtr(f);
					}
					virtual void setLayerVisibleDistance(_in ev_real32 distance)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32_Callback(distance);
						}
						else
							return this->CEffectLayer::setLayerVisibleDistance(distance);
					}
					virtual ev_real32 getLayerVisibleDistance()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_real32 returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getLayerVisibleDistance();
					}
					virtual void setAltitudeMode(_in EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode, _in ev_real32 altitudeValue)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32_Callback((int)altitudeMode, altitudeValue);
						}
						else
							return this->CEffectLayer::setAltitudeMode(altitudeMode, altitudeValue);
					}
					virtual void getAltitudeMode(_out ev_int32& altitudeMode, _out ev_real32& altitudeValue)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32_Callback(altitudeMode, altitudeValue);
						}
						else
							return this->CEffectLayer::getAltitudeMode(altitudeMode, altitudeValue);
					}
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr createVisibleObjectPtr(_in EarthView::World::Spatial::GeoDataset::IFeature* f)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::CVisibleObjectPtr returnValue = *(EarthView::World::Geometry3D::CVisibleObjectPtr*)m_EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback(f);
							return returnValue;
						}
						else
							return this->CEffectLayer::createVisibleObjectPtr(f);
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getSceneManager();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getDataset();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CEffectLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CEffectLayer::setDescription(value);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::clone();
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CEffectLayer::setVisible(visible);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CEffectLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CEffectLayer::setEditing(editing);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CEffectLayer::setSelectable(selectable);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getSceneName();
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getType();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelop()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getEnvelop();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CEffectLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::toXmlElement();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::toXML();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEffectLayer::toStream(stream);
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CEffectLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CEffectLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->CEffectLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEffectLayer::fromStream(stream);
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getMaxY();
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->CEffectLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->CEffectLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getDataSource();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CEffectLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CEffectLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CEffectLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CEffectLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CEffectLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CEffectLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CEffectLayer::draw(display, type);
					}
				};
				REGISTER_FACTORY_CLASS(CEffectLayerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectionColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getSelectionColour_CColourValue(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getSelectionColour();
					const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getAmbient_CColourValue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getAmbient();
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setAmbient_void_CColourValue(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->setAmbient(*(EarthView::World::Graphic::CColourValue*)val);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDiffuse_CColourValue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getDiffuse();
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setDiffuse_void_CColourValue(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->setDiffuse(*(EarthView::World::Graphic::CColourValue*)val);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpecular_CColourValue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getSpecular();
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpecular_void_CColourValue(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->setSpecular(*(EarthView::World::Graphic::CColourValue*)val);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getLightEnable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getLightEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setLightEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->setLightEnable(val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setLayerSelection(selection);
					else
						ptrNativeObject->setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerSelection_void_ILayerSelection_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::refresh();
					else
						ptrNativeObject->refresh();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_refresh_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::refresh();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtrVector_VisibleObjectPtrVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Geometry3D::VisibleObjectPtrVector& objXXXX = ptrNativeObject->getVisibleObjectPtrVector();
					EarthView::World::Geometry3D::VisibleObjectPtrVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getVisibleObjectPtr(id);
						EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->getVisibleObjectPtr(id);
						EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getVisibleObjectPtr(id);
					EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* pMovableObj )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getVisibleObjectPtr(pMovableObj);
						EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->getVisibleObjectPtr(pMovableObj);
						EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* pMovableObj )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getVisibleObjectPtr(pMovableObj);
					EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* f )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getVisibleObjectPtr(f);
						EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->getVisibleObjectPtr(f);
						EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibleObjectPtr_CVisibleObjectPtr_IFeature_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* f )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getVisibleObjectPtr(f);
					EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32(void *pObjectXXXX, _in ev_real32 distance )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setLayerVisibleDistance(distance);
					else
						ptrNativeObject->setLayerVisibleDistance(distance);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setLayerVisibleDistance_void_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_real32 distance )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setLayerVisibleDistance(distance);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						ev_real32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getLayerVisibleDistance();
						return objXXXX;
					}
					else
					{
						ev_real32 objXXXX = ptrNativeObject->getLayerVisibleDistance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getLayerVisibleDistance_ev_real32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getLayerVisibleDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32(void *pObjectXXXX, _in int altitudeMode, _in ev_real32 altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeValue);
					else
						ptrNativeObject->setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setAltitudeMode_void_EVAltitudeMode_ev_real32_NoVirtual(void *pObjectXXXX, _in int altitudeMode, _in ev_real32 altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32(void *pObjectXXXX, _out ev_int32& altitudeMode, _out ev_real32& altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getAltitudeMode(altitudeMode, altitudeValue);
					else
						ptrNativeObject->getAltitudeMode(altitudeMode, altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getAltitudeMode_void_ev_int32_ev_real32_NoVirtual(void *pObjectXXXX, _out ev_int32& altitudeMode, _out ev_real32& altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getAltitudeMode(altitudeMode, altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* f )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::createVisibleObjectPtr(f);
						EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->createVisibleObjectPtr(f);
						EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_createVisibleObjectPtr_CVisibleObjectPtr_IFeature_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* f )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Geometry3D::CVisibleObjectPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::createVisibleObjectPtr(f);
					EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = new EarthView::World::Geometry3D::CVisibleObjectPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_removeVisibleObject_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeVisibleObject(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getSceneManager();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneManager_CSceneManager_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getSceneManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CEffectDataSet*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getEffectDataset_CEffectDataSet(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* objXXXX = ptrNativeObject->getEffectDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setDescription(value1);
					else
						ptrNativeObject->setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool(void *pObjectXXXX, _in ev_bool can )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setCanEdit(can);
					else
						ptrNativeObject->setCanEdit(can);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setCanEdit_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool can )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setCanEdit(can);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setSelectable(selectable);
					else
						ptrNativeObject->setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getSceneName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSceneName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getSceneName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getSceneName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getEnvelop();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelop();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getEnvelop_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::getEnvelop();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::_notifyLayerAdd(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerAdd_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::_notifyLayerAdd(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::_notifyLayerRemoved(pSceneMgr);
					else
						ptrNativeObject->_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyLayerRemoved_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
					else
						ptrNativeObject->_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _in int updateType )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::_notifyRefreshed(camera, (EarthView::World::Spatial3D::Atlas::LayerRefreshFactor)updateType);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_setVisibilityFilter_ev_bool_ev_bool_IntVector(void *pObjectXXXX, _in ev_bool visible, _in const void* ids )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_getVisibilityFilter_ev_bool_ev_bool_IntVector(void *pObjectXXXX, _inout ev_bool& visible, _inout void* ids )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getVisibilityFilter(visible, *(EarthView::World::Core::IntVector*)ids);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					if (dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEffectLayer_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial3D::Atlas::CEffectLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEffectLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CEffectLayerProxy* ptr = dynamic_cast<CEffectLayerProxy*>((EarthView::World::Spatial3D::Atlas::CEffectLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEffectLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
			}
		}
	}
}
