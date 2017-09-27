/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "annotation/annolayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString_Callback)(_in char*& fieldName);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool_Callback)(_in ev_bool show);
				typedef EarthView::World::Spatial::Display::ILabelProperty*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString_Callback)(_in char*& filter);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CAnnoLayerProxy : public EarthView::World::Spatial2D::Atlas::CAnnoLayer
				{
				private:
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream_Callback;
				public:
					CAnnoLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnnoLayer(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void(EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer(EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getDataset();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CAnnoLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void_Callback();
						}
						else
							return this->CAnnoLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CAnnoLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getLayerSelection();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CAnnoLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CAnnoLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CAnnoLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CAnnoLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CAnnoLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CAnnoLayer::setSelectable(selectable);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CAnnoLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CAnnoLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CAnnoLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CAnnoLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CAnnoLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CAnnoLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::clone();
					}
					virtual void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset_Callback(dataset);
						}
						else
							return this->CAnnoLayer::setDataset(dataset);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CAnnoLayer::toStream(stream);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CAnnoLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::toXmlElement();
					}
					virtual void setDisplayFilter(_in const EVString& filter)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* filter_Char = filter.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString_Callback(filter_Char);
						}
						else
							return this->CAnnoLayer::setDisplayFilter(filter);
					}
					virtual EVString getDisplayFilter() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getDisplayFilter();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CAnnoLayer::fromStream(stream);
					}
					virtual EVString getDisplayField() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getDisplayField();
					}
					virtual void setDisplayField(_in const EVString& fieldName)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString_Callback(fieldName_Char);
						}
						else
							return this->CAnnoLayer::setDisplayField(fieldName);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getTheme();
					}
					virtual void setTheme(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme_Callback(theme);
						}
						else
							return this->CAnnoLayer::setTheme(theme);
					}
					virtual ev_bool isShowTip() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::isShowTip();
					}
					virtual void setShowTip(_in ev_bool show)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool_Callback(show);
						}
						else
							return this->CAnnoLayer::setShowTip(show);
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* getLayerLabelProperty() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelProperty* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::getLayerLabelProperty();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayer::toXML();
					}
				};
				REGISTER_FACTORY_CLASS(CAnnoLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDatasetName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDatasetName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDatasetName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDatasetName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDataSource();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSource();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDataSource_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDataSource();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setLayerSelection(selection);
					else
						ptrNativeObject->setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setLayerSelection_void_ILayerSelection_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setDescription(value1);
					else
						ptrNativeObject->setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool(void *pObjectXXXX, _in ev_bool can )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setCanEdit(can);
					else
						ptrNativeObject->setCanEdit(can);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setCanEdit_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool can )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setCanEdit(can);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setSelectable(selectable);
					else
						ptrNativeObject->setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDisplayMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDisplayMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setDisplayMaxScale(scale);
					else
						ptrNativeObject->setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDisplayMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDisplayMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setDisplayMinScale(scale);
					else
						ptrNativeObject->setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setDataset(dataset);
					else
						ptrNativeObject->setDataset(dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDataset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setDataset(dataset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString(void *pObjectXXXX, _in const char* filter )
				{
					EarthView::World::Core::ev_string filter1 = filter;
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setDisplayFilter(filter1);
					else
						ptrNativeObject->setDisplayFilter(filter1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayFilter_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* filter )
				{
					EarthView::World::Core::ev_string filter1 = filter;
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::setDisplayFilter(filter1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDisplayFilter();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDisplayFilter();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayFilter_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::getDisplayFilter();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayer_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getDisplayField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setDisplayField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setTheme_void_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_isShowTip_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_setShowTip_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_getLayerLabelProperty_ILabelProperty(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString_Callback* pCallback )
				{
					CAnnoLayerProxy* ptr = dynamic_cast<CAnnoLayerProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayer_toXML_EVString(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CAnnoLayerFactoryProxy : public EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory
				{
				private:
					EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CAnnoLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnnoLayerFactory(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CAnnoLayerFactoryProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer(EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CAnnoLayerFactory::createInstance();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CAnnoLayerFactory::createInstance(element);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CAnnoLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CAnnoLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CAnnoLayerFactoryProxy* ptr = dynamic_cast<CAnnoLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory::createInstance();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CAnnoLayerFactoryProxy* ptr = dynamic_cast<CAnnoLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory::createInstance();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CAnnoLayerFactoryProxy* ptr = dynamic_cast<CAnnoLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CAnnoLayerFactoryProxy* ptr = dynamic_cast<CAnnoLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CAnnoLayerFactoryProxy* ptr = dynamic_cast<CAnnoLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
