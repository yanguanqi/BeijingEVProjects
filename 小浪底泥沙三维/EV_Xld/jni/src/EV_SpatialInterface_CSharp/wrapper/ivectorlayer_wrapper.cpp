/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ivectorlayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString_Callback)(_in char*& fieldName);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool_Callback)(_in ev_bool show);
				typedef EarthView::World::Spatial::Display::ILabelProperty*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString_Callback)(_in char*& filter);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class IVectorLayerProxy : public EarthView::World::Spatial::Atlas::IVectorLayer
				{
				private:
					EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream_Callback;
				public:
					IVectorLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : IVectorLayer(pList)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IVectorLayerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset(EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString(EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString(EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme(EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme(EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty(EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString(EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString(EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType(EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset(EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString(EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource(EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void(EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString(EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString(EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString(EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString(EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope(EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer(EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream(EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString(EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream(EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getDataset();
					}
					virtual void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset_Callback(ref_dataset);
						}
						else
							return this->IVectorLayer::setDataset(ref_dataset);
					}
					virtual EVString getDisplayField() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getDisplayField();
					}
					virtual void setDisplayField(_in const EVString& fieldName)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString_Callback(fieldName_Char);
						}
						else
							return this->IVectorLayer::setDisplayField(fieldName);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getTheme();
					}
					virtual void setTheme(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme_Callback(theme);
						}
						else
							return this->IVectorLayer::setTheme(theme);
					}
					virtual ev_bool isShowTip() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::isShowTip();
					}
					virtual void setShowTip(_in ev_bool show)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool_Callback(show);
						}
						else
							return this->IVectorLayer::setShowTip(show);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->IVectorLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void_Callback();
						}
						else
							return this->IVectorLayer::clearSelection();
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getLayerSelection();
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* getLayerLabelProperty() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelProperty* returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getLayerLabelProperty();
					}
					virtual void setDisplayFilter(_in const EVString& filter)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* filter_Char = filter.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString_Callback(filter_Char);
						}
						else
							return this->IVectorLayer::setDisplayFilter(filter);
					}
					virtual EVString getDisplayFilter() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getDisplayFilter();
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getType();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getDataSource();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->IVectorLayer::setLayerSelection(selection);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IVectorLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->IVectorLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->IVectorLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->IVectorLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->IVectorLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->IVectorLayer::setSelectable(selectable);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->IVectorLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->IVectorLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->IVectorLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->IVectorLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->IVectorLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->IVectorLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IVectorLayer::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IVectorLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IVectorLayer::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IVectorLayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IVectorLayerProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::setDataset(ref_dataset);
					else
						ptrNativeObject->setDataset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDataset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::setDataset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getDisplayField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDisplayField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getDisplayField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::setDisplayField(fieldName1);
					else
						ptrNativeObject->setDisplayField(fieldName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::setDisplayField(fieldName1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getTheme();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getTheme();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getTheme_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::setTheme(theme);
					else
						ptrNativeObject->setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setTheme_void_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::isShowTip();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isShowTip();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_isShowTip_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::isShowTip();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool(void *pObjectXXXX, _in ev_bool show )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::setShowTip(show);
					else
						ptrNativeObject->setShowTip(show);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setShowTip_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool show )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::setShowTip(show);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getLayerLabelProperty();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->getLayerLabelProperty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getLayerLabelProperty_ILabelProperty_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getLayerLabelProperty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString(void *pObjectXXXX, _in const char* filter )
				{
					EarthView::World::Core::ev_string filter1 = filter;
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::setDisplayFilter(filter1);
					else
						ptrNativeObject->setDisplayFilter(filter1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayFilter_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* filter )
				{
					EarthView::World::Core::ev_string filter1 = filter;
					EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::setDisplayFilter(filter1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					if (dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getDisplayFilter();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDisplayFilter();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayFilter_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IVectorLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IVectorLayer::getDisplayFilter();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					IVectorLayerProxy* ptr = dynamic_cast<IVectorLayerProxy*>((EarthView::World::Spatial::Atlas::IVectorLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IVectorLayer_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
