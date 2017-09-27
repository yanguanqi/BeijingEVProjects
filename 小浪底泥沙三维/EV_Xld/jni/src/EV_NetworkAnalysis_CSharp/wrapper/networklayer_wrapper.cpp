/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "networkanalysis/networklayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString_Callback)(_in char*& fieldName);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool_Callback)(_in ev_bool show);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CNetworkLayerProxy : public EarthView::World::Spatial2D::Atlas::CNetworkLayer
				{
				private:
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream_Callback;
				public:
					CNetworkLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CNetworkLayer(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CNetworkLayerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void(EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer(EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString(EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CNetworkLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CNetworkLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CNetworkLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CNetworkLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool_Callback(selected);
						}
						else
							return this->CNetworkLayer::setSelectable(selected);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CNetworkLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CNetworkLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CNetworkLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CNetworkLayer::setSpatialReference(ref_sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CNetworkLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CNetworkLayer::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CNetworkLayer::toStream(stream);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CNetworkLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::toXmlElement();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getDataset();
					}
					virtual void setDateset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset_Callback(ref_dataset);
						}
						else
							return this->CNetworkLayer::setDateset(ref_dataset);
					}
					virtual EVString getDisplayField() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getDisplayField();
					}
					virtual void setDisplayField(_in const EVString& fieldName)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString_Callback(fieldName_Char);
						}
						else
							return this->CNetworkLayer::setDisplayField(fieldName);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getTheme();
					}
					virtual void setTheme(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme_Callback(theme);
						}
						else
							return this->CNetworkLayer::setTheme(theme);
					}
					virtual ev_bool isShowTip() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::isShowTip();
					}
					virtual void setShowTip(_in ev_bool show)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool_Callback(show);
						}
						else
							return this->CNetworkLayer::setShowTip(show);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CNetworkLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void_Callback();
						}
						else
							return this->CNetworkLayer::clearSelection();
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getLayerSelection();
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CNetworkLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getTransparentValue();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CNetworkLayer::fromStream(stream);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::getDataSource();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CNetworkLayer::setLayerSelection(selection);
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CNetworkLayer::setCanEdit(can);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayer::toXML();
					}
				};
				REGISTER_FACTORY_CLASS(CNetworkLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setDescription(value1);
					else
						ptrNativeObject->setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setSelectable(selected);
					else
						ptrNativeObject->setSelectable(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setSelectable(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getDisplayMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getDisplayMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setDisplayMaxScale(scale);
					else
						ptrNativeObject->setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getDisplayMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getDisplayMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setDisplayMinScale(scale);
					else
						ptrNativeObject->setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setDateset(ref_dataset);
					else
						ptrNativeObject->setDateset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDateset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setDateset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getDisplayField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDisplayField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDisplayField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getDisplayField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setDisplayField(fieldName1);
					else
						ptrNativeObject->setDisplayField(fieldName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setDisplayField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setDisplayField(fieldName1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getTheme();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getTheme();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTheme_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setTheme(theme);
					else
						ptrNativeObject->setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTheme_void_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::isShowTip();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isShowTip();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isShowTip_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::isShowTip();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool(void *pObjectXXXX, _in ev_bool show )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setShowTip(show);
					else
						ptrNativeObject->setShowTip(show);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setShowTip_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool show )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setShowTip(show);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setJunctionVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->setJunctionVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isJunctionVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isJunctionVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEdgeVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->setEdgeVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_isEdgeVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isEdgeVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setJunctionTheme_void_ITheme(void *pObjectXXXX, _in EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->setJunctionTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getJunctionTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getJunctionTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_setEdgeTheme_void_ITheme(void *pObjectXXXX, _in EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->setEdgeTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_getEdgeTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getEdgeTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayer_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString_Callback* pCallback )
				{
					CNetworkLayerProxy* ptr = dynamic_cast<CNetworkLayerProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayer_toXML_EVString(pCallback);
					}
				}
			}
		}
	}
}
