/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/smart3dlayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64_Callback)(_in ev_real64 altitudeValue);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback)(_in ev_bool bUpdateVectorTexture, _in ev_bool bUpdateKmlTexture, _in ev_bool bUpdateTemporaryTexture, _in ev_bool bUpdateTerrain);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* localScale, _out void* localRotate);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _out void* point);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_inout void* ambient, _inout void* diffuse, _inout void* specular);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback)(_in const EarthView::World::Graphic::CCamera* camera, _in int updateType);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback)(_in char*& strDataSourceName, _in char*& strDatasetName, _in EarthView::World::Core::CEvent* pEvent);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CSmart3DLayerProxy : public EarthView::World::Spatial3D::Atlas::CSmart3DLayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream_Callback;
				public:
					CSmart3DLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSmart3DLayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager(EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera(EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent(EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::clone();
					}
					virtual void setAltitudeValue(_in ev_real64 altitudeValue)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64_Callback(altitudeValue);
						}
						else
							return this->CSmart3DLayer::setAltitudeValue(altitudeValue);
					}
					virtual void setPosition(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback(lat, lon, alt);
						}
						else
							return this->CSmart3DLayer::setPosition(lat, lon, alt);
					}
					virtual void updateOBQ(_in ev_bool bUpdateVectorTexture, _in ev_bool bUpdateKmlTexture, _in ev_bool bUpdateTemporaryTexture, _in ev_bool bUpdateTerrain)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback(bUpdateVectorTexture, bUpdateKmlTexture, bUpdateTemporaryTexture, bUpdateTerrain);
						}
						else
							return this->CSmart3DLayer::updateOBQ(bUpdateVectorTexture, bUpdateKmlTexture, bUpdateTemporaryTexture, bUpdateTerrain);
					}
					virtual ev_bool getHeightAt(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback(lat, lon, targetSamplesPerDegrees, height);
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CSmart3DLayer::setSelectable(selectable);
					}
					virtual ev_bool getGotoParam(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback(latitude, longitude, altitude);
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getGotoParam(latitude, longitude, altitude);
					}
					virtual ev_real64 getAltitudeValue()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getAltitudeValue();
					}
					virtual void getPosition(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback(lat, lon, alt);
						}
						else
							return this->CSmart3DLayer::getPosition(lat, lon, alt);
					}
					virtual void getSpatialInfo(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out EarthView::World::Spatial::Math::CVector3& localScale, _out EarthView::World::Spatial::Math::CQuaternion& localRotate)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(lat, lon, alt, &localScale, &localRotate);
						}
						else
							return this->CSmart3DLayer::getSpatialInfo(lat, lon, alt, localScale, localRotate);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getDataset();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CSmart3DLayer::setVisible(visible);
					}
					virtual void _notifyLayerAdd(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CSmart3DLayer::_notifyLayerAdd(pSceneMgr);
					}
					virtual void _notifyLayerRemoved(_in EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager_Callback(pSceneMgr);
						}
						else
							return this->CSmart3DLayer::_notifyLayerRemoved(pSceneMgr);
					}
					virtual void _notifyRefreshed(_in const EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback(camera, (int)updateType);
						}
						else
							return this->CSmart3DLayer::_notifyRefreshed(camera, updateType);
					}
					virtual void _notifyDataChanged(_in const EVString& strDataSourceName, _in const EVString& strDatasetName, _in EarthView::World::Core::CEvent* pEvent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback != NULL && this->isCustomExtend())
						{
							char* strDataSourceName_Char = strDataSourceName.makeBuffer();
							char* strDatasetName_Char = strDatasetName.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback(strDataSourceName_Char, strDatasetName_Char, pEvent);
						}
						else
							return this->CSmart3DLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CSmart3DLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::toXmlElement();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::toXML();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSmart3DLayer::toStream(stream);
					}
					virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _out EarthView::World::Spatial::Math::CVector3& point)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback(&ray, viewport, &point);
							return returnValue;
						}
						else
							return this->CSmart3DLayer::selectBy(ray, viewport, point);
					}
					virtual void setEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CSmart3DLayer::setEnvParam(ambient, diffuse, specular);
					}
					virtual void getEnvParam(_inout EarthView::World::Graphic::CColourValue& ambient, _inout EarthView::World::Graphic::CColourValue& diffuse, _inout EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CSmart3DLayer::getEnvParam(ambient, diffuse, specular);
					}
					virtual EVString getSceneName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getSceneName();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CSmart3DLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CSmart3DLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CSmart3DLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CSmart3DLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::isVisible();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::isValid();
					}
					virtual ev_real64 getMinX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getMinX();
					}
					virtual ev_real64 getMaxX() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getMaxX();
					}
					virtual ev_real64 getMinY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getMinY();
					}
					virtual ev_real64 getMaxY() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getMaxY();
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getSceneManager();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSmart3DLayer::fromStream(stream);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CSmart3DLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void_Callback();
						}
						else
							return this->CSmart3DLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CSmart3DLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getLayerSelection();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CSmart3DLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CSmart3DLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CSmart3DLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CSmart3DLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CSmart3DLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CSmart3DLayer::draw(display, type);
					}
				};
				REGISTER_FACTORY_CLASS(CSmart3DLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::setAltitudeValue(altitudeValue);
					else
						ptrNativeObject->setAltitudeValue(altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setAltitudeValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::setAltitudeValue(altitudeValue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::setPosition(lat, lon, alt);
					else
						ptrNativeObject->setPosition(lat, lon, alt);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setPosition_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::setPosition(lat, lon, alt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool bUpdateVectorTexture, _in ev_bool bUpdateKmlTexture, _in ev_bool bUpdateTemporaryTexture, _in ev_bool bUpdateTerrain )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::updateOBQ(bUpdateVectorTexture, bUpdateKmlTexture, bUpdateTemporaryTexture, bUpdateTerrain);
					else
						ptrNativeObject->updateOBQ(bUpdateVectorTexture, bUpdateKmlTexture, bUpdateTemporaryTexture, bUpdateTerrain);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bUpdateVectorTexture, _in ev_bool bUpdateKmlTexture, _in ev_bool bUpdateTemporaryTexture, _in ev_bool bUpdateTerrain )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::updateOBQ(bUpdateVectorTexture, bUpdateKmlTexture, bUpdateTemporaryTexture, bUpdateTerrain);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getHeightAt(lat, lon, targetSamplesPerDegrees, height);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getHeightAt_ev_bool_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_real32 lat, _in ev_real32 lon, _in ev_real32 targetSamplesPerDegrees, _inout ev_real32& height )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayer::getHeightAt(lat, lon, targetSamplesPerDegrees, height);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_addTerrainRevisor_ev_bool_ITerrainRevisor(void *pObjectXXXX, _in EarthView::World::Spatial3D::ITerrainRevisor* ref_tr )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addTerrainRevisor(ref_tr);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_removeTerrainRevisor_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeTerrainRevisor(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_swapTerrainRevisor_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 front, _in ev_uint32 back )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->swapTerrainRevisor(front, back);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearTerrainRevisors_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					ptrNativeObject->clearTerrainRevisors();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTerrainRevisorCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getTerrainRevisorCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ITerrainRevisor*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTerrianRevisor_ITerrainRevisor_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					EarthView::World::Spatial3D::ITerrainRevisor* objXXXX = ptrNativeObject->getTerrianRevisor(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ITerrainRevisor*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTerrainRevisor_ITerrainRevisor_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::Atlas::CSmart3DLayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX;
					EarthView::World::Spatial3D::ITerrainRevisor* objXXXX = ptrNativeObject->getTerrainRevisor(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getGotoParam_ev_bool_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getAltitudeValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getPosition_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialInfo_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_selectBy_ev_bool_CRay_CViewport_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxX_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMinY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getMaxY_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerAdd_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyLayerRemoved_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_LayerRefreshFactor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyRefreshed_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer__notifyDataChanged_void_EVString_EVString_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CSmart3DLayerProxy* ptr = dynamic_cast<CSmart3DLayerProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset_Callback)(_in char*& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CSmart3DLayerFactoryProxy : public EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CSmart3DLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSmart3DLayerFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset(EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer(EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset_Callback(name_Char, ds);
							return returnValue;
						}
						else
							return this->CSmart3DLayerFactory::createInstance(name, ds);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CSmart3DLayerFactory::createInstance(element);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CSmart3DLayerFactory::createInstance();
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CSmart3DLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CSmart3DLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getSingletonPtr_CSmart3DLayerFactory( )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* objXXXX = EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_releaseSingletonPtr_void( )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::releaseSingletonPtr();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CSmart3DLayerFactoryProxy* ptr = dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::createInstance(name1, ds);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(name1, ds);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback )
				{
					CSmart3DLayerFactoryProxy* ptr = dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_IDataset_NoVirtual(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::createInstance(name1, ds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CSmart3DLayerFactoryProxy* ptr = dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CSmart3DLayerFactoryProxy* ptr = dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CSmart3DLayerFactoryProxy* ptr = dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall Get_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_msObqLayerFactoryName()
				{
					const EVString objXXXX = EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory::msObqLayerFactoryName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CSmart3DLayerFactoryProxy* ptr = dynamic_cast<CSmart3DLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSmart3DLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
