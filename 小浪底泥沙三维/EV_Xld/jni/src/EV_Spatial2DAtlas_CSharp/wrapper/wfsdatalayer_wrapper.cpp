/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2datlas/wfsdatalayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString_Callback)(_in char*& fieldName);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool_Callback)(_in ev_bool show);
				typedef EarthView::World::Spatial::Display::ILabelProperty*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString_Callback)(_in char*& filter);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CWFSDataLayerProxy : public EarthView::World::Spatial2D::Atlas::CWFSDataLayer
				{
				private:
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream_Callback;
				public:
					CWFSDataLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSDataLayer(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CWFSDataLayerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getType();
					}
					virtual void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset_Callback(ref_dataset);
						}
						else
							return this->CWFSDataLayer::setDataset(ref_dataset);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::toXmlElement();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CWFSDataLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CWFSDataLayer::clone();
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CWFSDataLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getTransparentValue();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CWFSDataLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CWFSDataLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CWFSDataLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CWFSDataLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool_Callback(selected);
						}
						else
							return this->CWFSDataLayer::setSelectable(selected);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CWFSDataLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 displayMaxScale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64_Callback(displayMaxScale);
						}
						else
							return this->CWFSDataLayer::setDisplayMaxScale(displayMaxScale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 displayMinScale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64_Callback(displayMinScale);
						}
						else
							return this->CWFSDataLayer::setDisplayMinScale(displayMinScale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->CWFSDataLayer::setSpatialReference(sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CWFSDataLayer::draw(display, type);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CWFSDataLayer::toStream(stream);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getDataset();
					}
					virtual EVString getDisplayField() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getDisplayField();
					}
					virtual void setDisplayField(_in const EVString& fieldName)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString_Callback(fieldName_Char);
						}
						else
							return this->CWFSDataLayer::setDisplayField(fieldName);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getTheme();
					}
					virtual void setTheme(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme_Callback(theme);
						}
						else
							return this->CWFSDataLayer::setTheme(theme);
					}
					virtual ev_bool isShowTip() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::isShowTip();
					}
					virtual void setShowTip(_in ev_bool show)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool_Callback(show);
						}
						else
							return this->CWFSDataLayer::setShowTip(show);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CWFSDataLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void_Callback();
						}
						else
							return this->CWFSDataLayer::clearSelection();
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getLayerSelection();
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* getLayerLabelProperty() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelProperty* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getLayerLabelProperty();
					}
					virtual void setDisplayFilter(_in const EVString& filter)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* filter_Char = filter.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString_Callback(filter_Char);
						}
						else
							return this->CWFSDataLayer::setDisplayFilter(filter);
					}
					virtual EVString getDisplayFilter() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getDisplayFilter();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CWFSDataLayer::fromStream(stream);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::getDataSource();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CWFSDataLayer::setLayerSelection(selection);
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CWFSDataLayer::setCanEdit(can);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayer::toXML();
					}
				};
				REGISTER_FACTORY_CLASS(CWFSDataLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getWFSDataset_IDataset(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getWFSDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayer::setDataset(ref_dataset);
					else
						ptrNativeObject->setDataset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDataset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayer::setDataset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					if (dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayer::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTheme_void_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isShowTip_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setShowTip_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerLabelProperty_ILabelProperty(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayFilter_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayFilter_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CWFSDataLayerProxy* ptr = dynamic_cast<CWFSDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CWFSDataLayerFactoryProxy : public EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory
				{
				private:
					EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CWFSDataLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSDataLayerFactory(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CWFSDataLayerFactoryProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer(EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CWFSDataLayerFactory::createInstance();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CWFSDataLayerFactory::createInstance(element);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CWFSDataLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CWFSDataLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWFSDataLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CWFSDataLayerFactoryProxy* ptr = dynamic_cast<CWFSDataLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWFSDataLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CWFSDataLayerFactoryProxy* ptr = dynamic_cast<CWFSDataLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWFSDataLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CWFSDataLayerFactoryProxy* ptr = dynamic_cast<CWFSDataLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CWFSDataLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CWFSDataLayerFactoryProxy* ptr = dynamic_cast<CWFSDataLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CWFSDataLayerFactoryProxy* ptr = dynamic_cast<CWFSDataLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CWFSDataLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
