/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/wfslayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString_Callback)(_in char*& fieldName);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool_Callback)(_in ev_bool show);
				typedef EarthView::World::Spatial::Display::ILabelProperty*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString_Callback)(_in char*& filter);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CWFSLayerProxy : public EarthView::World::Spatial2D::Atlas::CWFSLayer
				{
				private:
					EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream_Callback;
				public:
					CWFSLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSLayer(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CWFSLayerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset(EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme(EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme(EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty(EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset(EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void(EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer(EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getDataset();
					}
					virtual EVString getDisplayField() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getDisplayField();
					}
					virtual void setDisplayField(_in const EVString& fieldName)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString_Callback(fieldName_Char);
						}
						else
							return this->CWFSLayer::setDisplayField(fieldName);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getTheme();
					}
					virtual void setTheme(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme_Callback(theme);
						}
						else
							return this->CWFSLayer::setTheme(theme);
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* getLayerLabelProperty() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelProperty* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getLayerLabelProperty();
					}
					virtual void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset_Callback(dataset);
						}
						else
							return this->CWFSLayer::setDataset(dataset);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CWFSLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CWFSLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CWFSLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CWFSLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::isValid();
					}
					virtual ev_bool isSelected() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::isSelected();
					}
					virtual void setSelectable(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool_Callback(selected);
						}
						else
							return this->CWFSLayer::setSelectable(selected);
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::isSelectable();
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CWFSLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CWFSLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CWFSLayer::setDisplayMinScale(scale);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CWFSLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getTransparentValue();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CWFSLayer::draw(display, type);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getExtent();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CWFSLayer::setSpatialReference(ref_sr);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CWFSLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void_Callback();
						}
						else
							return this->CWFSLayer::clearSelection();
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getLayerSelection();
					}
					virtual void setDisplayFilter(_in const EVString& filter)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* filter_Char = filter.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString_Callback(filter_Char);
						}
						else
							return this->CWFSLayer::setDisplayFilter(filter);
					}
					virtual EVString getDisplayFilter() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getDisplayFilter();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CWFSLayer::clone();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CWFSLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::toXmlElement();
					}
					virtual ev_bool isShowTip() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::isShowTip();
					}
					virtual void setShowTip(_in ev_bool show)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool_Callback(show);
						}
						else
							return this->CWFSLayer::setShowTip(show);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayer::getDataSource();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CWFSLayer::setLayerSelection(selection);
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CWFSLayer::setCanEdit(can);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CWFSLayer::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CWFSLayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CWFSLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getCacheDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getCacheDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDisplayField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDisplayField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDisplayField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDisplayField(fieldName1);
					else
						ptrNativeObject->setDisplayField(fieldName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDisplayField(fieldName1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getTheme();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getTheme();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getTheme_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setTheme(theme);
					else
						ptrNativeObject->setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setTheme_void_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getLayerLabelProperty();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->getLayerLabelProperty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerLabelProperty_ILabelProperty_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getLayerLabelProperty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_loadFeatures_void_ev_int32(void *pObjectXXXX, _in ev_int32* finishNum )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->loadFeatures(finishNum);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDataset(dataset);
					else
						ptrNativeObject->setDataset(dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDataset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDataset(dataset);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDescription(value1);
					else
						ptrNativeObject->setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setSelectable(selected);
					else
						ptrNativeObject->setSelectable(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setSelectable(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDisplayMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDisplayMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDisplayMaxScale(scale);
					else
						ptrNativeObject->setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDisplayMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDisplayMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDisplayMinScale(scale);
					else
						ptrNativeObject->setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString(void *pObjectXXXX, _in const char* filter )
				{
					EarthView::World::Core::ev_string filter1 = filter;
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDisplayFilter(filter1);
					else
						ptrNativeObject->setDisplayFilter(filter1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_setDisplayFilter_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* filter )
				{
					EarthView::World::Core::ev_string filter1 = filter;
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::setDisplayFilter(filter1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDisplayFilter();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDisplayFilter();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_getDisplayFilter_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::getDisplayFilter();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_isShowTip_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setShowTip_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CWFSLayerProxy* ptr = dynamic_cast<CWFSLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerSelection_getSelection_IFeatureSelection(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayerSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayerSelection*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->getSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerSelection_getSelectionSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayerSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayerSelection*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSelectionSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerSelection_setSelectionSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayerSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayerSelection*) pObjectXXXX;
					ptrNativeObject->setSelectionSymbol(symbol);
				}
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CWFSLayerFactoryProxy : public EarthView::World::Spatial2D::Atlas::CWFSLayerFactory
				{
				private:
					EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CWFSLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSLayerFactory(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer(EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CWFSLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CWFSLayerFactory::createInstance();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CWFSLayerFactory::createInstance(element);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CWFSLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CWFSLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CWFSLayerFactoryProxy* ptr = dynamic_cast<CWFSLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayerFactory::createInstance();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CWFSLayerFactoryProxy* ptr = dynamic_cast<CWFSLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayerFactory::createInstance();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWFSLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CWFSLayerFactoryProxy* ptr = dynamic_cast<CWFSLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CWFSLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CWFSLayerFactoryProxy* ptr = dynamic_cast<CWFSLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CWFSLayerFactoryProxy* ptr = dynamic_cast<CWFSLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
			}
		}
	}
}
