/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/evlayers.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CEVWMTSLayerProxy : public EarthView::World::Spatial::CEVWMTSLayer
			{
			private:
				EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream_Callback;
			public:
				CEVWMTSLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMTSLayer(pList)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType(EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset(EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString(EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource(EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void(EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getName_EVString(EarthView_World_Spatial_CEVWMTSLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString(EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString(EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString(EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope(EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer(EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream(EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString(EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::draw(display, type);
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CEVWMTSLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CEVWMTSLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CEVWMTSLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CEVWMTSLayer::setVisible(visible);
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::isValid();
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CEVWMTSLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CEVWMTSLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVWMTSLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVWMTSLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CEVWMTSLayer::setSpatialReference(ref_sr);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getExtent();
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CEVWMTSLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CEVWMTSLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void_Callback();
					}
					else
						return this->CEVWMTSLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CEVWMTSLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CEVWMTSLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CEVWMTSLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CEVWMTSLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVWMTSLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVWMTSLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMTSLayerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMTSLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
			{
				EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				if (dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMTSLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
			{
				EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMTSLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMTSLayer_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(void *pObjectXXXX, _in const char* style, _in const char* format, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in ev_bool getoriginformat, _in ev_bool gettime, _out void* tileInfo )
			{
				EarthView::World::Core::ev_string style1 = style;
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTile(style1, format1, level, row, col, getoriginformat, gettime, *(EarthView::World::Spatial::CEVTileInfo*)tileInfo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMTSLayer_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in const char* fieldname, _out void* serverresult )
			{
				EarthView::World::Core::ev_string fieldname1 = fieldname;
				EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTileProperty(level, row, col, fieldname1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMTSLayer_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 tilerow, _in ev_uint32 tilecol, _in ev_int32 x, _in ev_int32 y, _in const char* infoformat, _out void* serverresult )
			{
				EarthView::World::Core::ev_string infoformat1 = infoformat;
				EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getFeatureInfo(level, tilerow, tilecol, x, y, infoformat1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSServerInfo*  _stdcall EarthView_World_Spatial_CEVWMTSLayer_getWMTSCapabilitiesRef_CWMTSServerInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSServerInfo* objXXXX = ptrNativeObject->getWMTSCapabilitiesRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVWMTSLayerInfo*  _stdcall EarthView_World_Spatial_CEVWMTSLayer_getLayerInfoRef_CEVWMTSLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				const EarthView::World::Spatial::CEVWMTSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMTSLayer_getCacheDataType_EVSSCCacheDataType(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCCacheDataType objXXXX = ptrNativeObject->getCacheDataType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMTSLayer_setRenderStyle_void_EVString(void *pObjectXXXX, _in const char* style )
			{
				EarthView::World::Core::ev_string style1 = style;
				EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				ptrNativeObject->setRenderStyle(style1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMTSLayer_getRenderStyle_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getRenderStyle();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getName_EVString_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CEVWMTSLayerProxy* ptr = dynamic_cast<CEVWMTSLayerProxy*>((EarthView::World::Spatial::CEVWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CEVWMSMapLayerProxy : public EarthView::World::Spatial::CEVWMSMapLayer
			{
			private:
				EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream_Callback;
			public:
				CEVWMSMapLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMSMapLayer(pList)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType(EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset(EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString(EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource(EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void(EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString(EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString(EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString(EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString(EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope(EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer(EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream(EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString(EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::draw(display, type);
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CEVWMSMapLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CEVWMSMapLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CEVWMSMapLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CEVWMSMapLayer::setVisible(visible);
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::isValid();
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CEVWMSMapLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CEVWMSMapLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVWMSMapLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVWMSMapLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CEVWMSMapLayer::setSpatialReference(ref_sr);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getExtent();
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CEVWMSMapLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CEVWMSMapLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void_Callback();
					}
					else
						return this->CEVWMSMapLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CEVWMSMapLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CEVWMSMapLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CEVWMSMapLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CEVWMSMapLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVWMSMapLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVWMSMapLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMSMapLayerProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMSServerInfo*  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getWMSCapabilitiesRef_CWMSServerInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				const EarthView::World::Spatial::CWMSServerInfo* objXXXX = ptrNativeObject->getWMSCapabilitiesRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
			{
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				if (dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSMapLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
			{
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSMapLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getMap_ev_int32_EVString_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVSSCImageType_ev_bool_ev_int32_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(void *pObjectXXXX, _in const char* layers, _in const char* styles, _in int srs, _in const EarthView::World::Spatial::Geometry::IEnvelope* maprect, _in ev_uint32 width, _in ev_uint32 height, _in int format, _in ev_bool transparent, _in ev_int32 red, _in ev_int32 green, _in ev_int32 blue, _in const char* time, _in const char* elevation, _out void* serverresult )
			{
				EarthView::World::Core::ev_string layers1 = layers;
				EarthView::World::Core::ev_string styles1 = styles;
				EarthView::World::Core::ev_string time1 = time;
				EarthView::World::Core::ev_string elevation1 = elevation;
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMap(layers1, styles1, (EarthView::World::Spatial::EVSSCSRS)srs, maprect, width, height, (EarthView::World::Spatial::EVSSCImageType)format, transparent, red, green, blue, time1, elevation1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getFeatureInfo_ev_int32_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString(void *pObjectXXXX, _in const char* layers, _in int srs, _in const EarthView::World::Spatial::Geometry::IEnvelope* maprect, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 featurecount, _in ev_int32 x, _in ev_int32 y, _out char*& value )
			{
				EarthView::World::Core::ev_string layers1 = layers;
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getFeatureInfo(layers1, (EarthView::World::Spatial::EVSSCSRS)srs, maprect, width, height, featurecount, x, y, value1);
				value=value1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getLayerLegend_ev_int32_EVString_ev_uint32_ev_uint32_CMemoryStreamResult(void *pObjectXXXX, _in const char* layer, _in ev_uint32 legendwidth, _in ev_uint32 legendheight, _out void* serverresult )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLayerLegend(layer1, legendwidth, legendheight, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getLayerInfoRef_IDataMetaInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setRenderLayers_void_EVString(void *pObjectXXXX, _in const char* layers )
			{
				EarthView::World::Core::ev_string layers1 = layers;
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ptrNativeObject->setRenderLayers(layers1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getRenderLayers_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getRenderLayers();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setRenderStyles_void_EVString(void *pObjectXXXX, _in const char* styles )
			{
				EarthView::World::Core::ev_string styles1 = styles;
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ptrNativeObject->setRenderStyles(styles1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getRenderStyles_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getRenderStyles();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setRenderDataTime_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ptrNativeObject->setRenderDataTime(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getRenderDataTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getRenderDataTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setRenderElevetion_void_EVString(void *pObjectXXXX, _in const char* elevation )
			{
				EarthView::World::Core::ev_string elevation1 = elevation;
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ptrNativeObject->setRenderElevetion(elevation1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getRenderElevation_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getRenderElevation();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setRenderBackColor_void_ev_bool_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_bool transparent, _in ev_int32 red, _in ev_int32 green, _in ev_int32 blue )
			{
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ptrNativeObject->setRenderBackColor(transparent, red, green, blue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_getRenderBackColor_void_ev_bool_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _out ev_bool& transparent, _out ev_int32& red, _out ev_int32& green, _out ev_int32& blue )
			{
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ptrNativeObject->getRenderBackColor(transparent, red, green, blue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSMapLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CEVWMSMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CEVWMSMapLayerProxy* ptr = dynamic_cast<CEVWMSMapLayerProxy*>((EarthView::World::Spatial::CEVWMSMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CEVWFSLayerProxy : public EarthView::World::Spatial::CEVWFSLayer
			{
			private:
				EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CEVWFSLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CEVWFSLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CEVWFSLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CEVWFSLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CEVWFSLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream_Callback;
			public:
				CEVWFSLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWFSLayer(pList)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool(EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType(EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset(EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString(EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource(EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_clearSelection_void(EarthView_World_Spatial_CEVWFSLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getName_EVString(EarthView_World_Spatial_CEVWFSLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString(EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString(EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString(EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool(EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool(EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool(EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool(EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool(EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope(EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_clone_ILayer(EarthView_World_Spatial_CEVWFSLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream(EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_toXML_EVString(EarthView_World_Spatial_CEVWFSLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CEVWFSLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CEVWFSLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CEVWFSLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CEVWFSLayer::setVisible(visible);
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::isValid();
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CEVWFSLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CEVWFSLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVWFSLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVWFSLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVWFSLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVWFSLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CEVWFSLayer::setSpatialReference(ref_sr);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getExtent();
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CEVWFSLayer::draw(display, type);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CEVWFSLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CEVWFSLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_clearSelection_void_Callback();
					}
					else
						return this->CEVWFSLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CEVWFSLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CEVWFSLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CEVWFSLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CEVWFSLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVWFSLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVWFSLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWFSLayerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWFSLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CEVWFSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWFSLayer_getQueryAttribute_ev_int32_EVString_CServerSearchCondition_ev_int32_ev_int32_CServerSet(void *pObjectXXXX, _in const char* layer, _in EarthView::World::Spatial::CServerSearchCondition* condition, _in ev_int32 startrecord, _in ev_int32 recordcount, _out void* recordset )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Spatial::CEVWFSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getQueryAttribute(layer1, condition, startrecord, recordcount, *(EarthView::World::Spatial::CServerSet*)recordset);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWFSLayer_getLayerAttributeValue_ev_int32_EVString_ev_uint32_ev_real64_ev_real64_EVString_CServerQueryResults(void *pObjectXXXX, _in const char* querylayers, _in ev_uint32 featurecount, _in ev_real64 x, _in ev_real64 y, _in const char* fieldname, _out void* queryresult )
			{
				EarthView::World::Core::ev_string querylayers1 = querylayers;
				EarthView::World::Core::ev_string fieldname1 = fieldname;
				EarthView::World::Spatial::CEVWFSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLayerAttributeValue(querylayers1, featurecount, x, y, fieldname1, *(EarthView::World::Spatial::CServerQueryResults*)queryresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWFSLayer_getUniqueFieldValue_ev_int32_EVString_EVString_CServerQueryResults(void *pObjectXXXX, _in const char* querylayer, _in const char* fieldname, _out void* queryresult )
			{
				EarthView::World::Core::ev_string querylayer1 = querylayer;
				EarthView::World::Core::ev_string fieldname1 = fieldname;
				EarthView::World::Spatial::CEVWFSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getUniqueFieldValue(querylayer1, fieldname1, *(EarthView::World::Spatial::CServerQueryResults*)queryresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWFSLayer_getLayerFeature_ev_int32_EVString_ev_bool_ev_bool_EVString_CEVWebFeature(void *pObjectXXXX, _in const char* layer, _in ev_bool hasgeometry, _in ev_bool hasattribute, _in const char* attributenames, _inout void* feature )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Core::ev_string attributenames1 = attributenames;
				EarthView::World::Spatial::CEVWFSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLayerFeature(layer1, hasgeometry, hasattribute, attributenames1, *(EarthView::World::Spatial::CEVWebFeature*)feature);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWFSLayer_getSearchGeometry_ev_int32_EVString_CServerSearchCondition_CGeometryList(void *pObjectXXXX, _in const char* layer, _in EarthView::World::Spatial::CServerSearchCondition* condition, _out void* geometrylist )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Spatial::CEVWFSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getSearchGeometry(layer1, condition, *(EarthView::World::Spatial::CGeometryList*)geometrylist);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CEVWFSLayer_getLayerInfoRef_IDataMetaInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSLayer* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX;
				const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_clearSelection_void_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getName_EVString_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_clone_ILayer_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_toXML_EVString_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CEVWFSLayerProxy* ptr = dynamic_cast<CEVWFSLayerProxy*>((EarthView::World::Spatial::CEVWFSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CEVGeoCodeLayerProxy : public EarthView::World::Spatial::CEVGeoCodeLayer
			{
			private:
				EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream_Callback;
			public:
				CEVGeoCodeLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVGeoCodeLayer(pList)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType(EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset(EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString(EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource(EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void(EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString(EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString(EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString(EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString(EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope(EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer(EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream(EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString(EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CEVGeoCodeLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CEVGeoCodeLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CEVGeoCodeLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CEVGeoCodeLayer::setVisible(visible);
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::isValid();
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CEVGeoCodeLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CEVGeoCodeLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVGeoCodeLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVGeoCodeLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CEVGeoCodeLayer::setSpatialReference(ref_sr);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getExtent();
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::draw(display, type);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CEVGeoCodeLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CEVGeoCodeLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void_Callback();
					}
					else
						return this->CEVGeoCodeLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CEVGeoCodeLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CEVGeoCodeLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CEVGeoCodeLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CEVGeoCodeLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVGeoCodeLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVGeoCodeLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CEVGeoCodeLayerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CEVGeoCodeLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getGeoCodeFile_ev_int32_EVString_CMemoryStreamResult(void *pObjectXXXX, _in const char* dataName, _out void* serverresult )
			{
				EarthView::World::Core::ev_string dataName1 = dataName;
				EarthView::World::Spatial::CEVGeoCodeLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getGeoCodeFile(dataName1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_queryPlacename_ev_int32_EVString_EVString_ev_bool_ev_int32_CPlaceNameList(void *pObjectXXXX, _in const char* namefield, _in const char* keyword, _in ev_bool blurquery, _in ev_int32 limitcount, _out void* resultlist )
			{
				EarthView::World::Core::ev_string namefield1 = namefield;
				EarthView::World::Core::ev_string keyword1 = keyword;
				EarthView::World::Spatial::CEVGeoCodeLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->queryPlacename(namefield1, keyword1, blurquery, limitcount, *(EarthView::World::Spatial::CPlaceNameList*)resultlist);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVGeoCodeLayerInfo*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayer_getLayerInfoRef_CEVGeoCodeLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX;
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CEVGeoCodeLayerProxy* ptr = dynamic_cast<CEVGeoCodeLayerProxy*>((EarthView::World::Spatial::CEVGeoCodeLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CEVDEMLayerProxy : public EarthView::World::Spatial::CEVDEMLayer
			{
			private:
				EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CEVDEMLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CEVDEMLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CEVDEMLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CEVDEMLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CEVDEMLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CEVDEMLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream_Callback;
			public:
				CEVDEMLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVDEMLayer(pList)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool(EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType(EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset(EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString(EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource(EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_clearSelection_void(EarthView_World_Spatial_CEVDEMLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getName_EVString(EarthView_World_Spatial_CEVDEMLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString(EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString(EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString(EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool(EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool(EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool(EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool(EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool(EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope(EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_clone_ILayer(EarthView_World_Spatial_CEVDEMLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream(EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_toXML_EVString(EarthView_World_Spatial_CEVDEMLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CEVDEMLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CEVDEMLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CEVDEMLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CEVDEMLayer::setVisible(visible);
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::isValid();
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CEVDEMLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CEVDEMLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVDEMLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVDEMLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVDEMLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVDEMLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CEVDEMLayer::setSpatialReference(ref_sr);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getExtent();
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CEVDEMLayer::draw(display, type);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVDEMLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CEVDEMLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CEVDEMLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_clearSelection_void_Callback();
					}
					else
						return this->CEVDEMLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CEVDEMLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CEVDEMLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CEVDEMLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CEVDEMLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVDEMLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVDEMLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CEVDEMLayerProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVDEMLayer_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _out void* serverresult )
			{
				EarthView::World::Spatial::CEVDEMLayer* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getDEMFile(level, row, col, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVDEMLayerInfo*  _stdcall EarthView_World_Spatial_CEVDEMLayer_getLayerInfoRef_CEVDEMLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayer* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX;
				const EarthView::World::Spatial::CEVDEMLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVDEMLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CEVDEMLayer* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_clearSelection_void_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getName_EVString_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_clone_ILayer_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_toXML_EVString_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CEVDEMLayerProxy* ptr = dynamic_cast<CEVDEMLayerProxy*>((EarthView::World::Spatial::CEVDEMLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CEVKMLLayerProxy : public EarthView::World::Spatial::CEVKMLLayer
			{
			private:
				EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CEVKMLLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CEVKMLLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CEVKMLLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CEVKMLLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CEVKMLLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CEVKMLLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream_Callback;
			public:
				CEVKMLLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVKMLLayer(pList)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool(EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType(EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset(EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString(EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource(EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_clearSelection_void(EarthView_World_Spatial_CEVKMLLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getName_EVString(EarthView_World_Spatial_CEVKMLLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString(EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString(EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString(EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool(EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool(EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool(EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool(EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool(EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope(EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_clone_ILayer(EarthView_World_Spatial_CEVKMLLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream(EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_toXML_EVString(EarthView_World_Spatial_CEVKMLLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CEVKMLLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CEVKMLLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CEVKMLLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CEVKMLLayer::setVisible(visible);
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::isValid();
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CEVKMLLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CEVKMLLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVKMLLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVKMLLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVKMLLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVKMLLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CEVKMLLayer::setSpatialReference(ref_sr);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getExtent();
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CEVKMLLayer::draw(display, type);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVKMLLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CEVKMLLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CEVKMLLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_clearSelection_void_Callback();
					}
					else
						return this->CEVKMLLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CEVKMLLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CEVKMLLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CEVKMLLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CEVKMLLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVKMLLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVKMLLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CEVKMLLayerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVKMLLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CEVKMLLayer* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVKMLLayer_getKMLFile_ev_int32_EVString_CMemoryStreamResult(void *pObjectXXXX, _in const char* dataName, _out void* serverresult )
			{
				EarthView::World::Core::ev_string dataName1 = dataName;
				EarthView::World::Spatial::CEVKMLLayer* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getKMLFile(dataName1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVKMLLayerInfo*  _stdcall EarthView_World_Spatial_CEVKMLLayer_getLayerInfoRef_CEVKMLLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVKMLLayer* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX;
				const EarthView::World::Spatial::CEVKMLLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_clearSelection_void_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getName_EVString_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_clone_ILayer_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_toXML_EVString_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CEVKMLLayerProxy* ptr = dynamic_cast<CEVKMLLayerProxy*>((EarthView::World::Spatial::CEVKMLLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CEVGeometryMapLayerProxy : public EarthView::World::Spatial::CEVGeometryMapLayer
			{
			private:
				EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream_Callback;
			public:
				CEVGeometryMapLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVGeometryMapLayer(pList)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType(EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset(EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString(EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource(EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void(EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString(EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString(EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString(EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString(EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope(EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer(EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream(EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString(EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CEVGeometryMapLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CEVGeometryMapLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CEVGeometryMapLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CEVGeometryMapLayer::setVisible(visible);
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::isValid();
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CEVGeometryMapLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CEVGeometryMapLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVGeometryMapLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVGeometryMapLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CEVGeometryMapLayer::setSpatialReference(ref_sr);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getExtent();
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::draw(display, type);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CEVGeometryMapLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CEVGeometryMapLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void_Callback();
					}
					else
						return this->CEVGeometryMapLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CEVGeometryMapLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CEVGeometryMapLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CEVGeometryMapLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CEVGeometryMapLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryMapLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVGeometryMapLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVGeometryMapLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CEVGeometryMapLayerProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_buffer_ev_int32_CGeometryList_ev_real64_ev_bool_CGeometryList(void *pObjectXXXX, _in void* geometrylist, _in ev_real64 distance, _in ev_bool isunion, _out void* result_geometrylist )
			{
				EarthView::World::Spatial::CEVGeometryMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->buffer(*(EarthView::World::Spatial::CGeometryList*)geometrylist, distance, isunion, *(EarthView::World::Spatial::CGeometryList*)result_geometrylist);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_contains_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->contains(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_crosses_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->crosses(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_disjoint_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->disjoint(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_distance_ev_int32_IGeometry_IGeometry_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_real64& result )
			{
				EarthView::World::Spatial::CEVGeometryMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->distance(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_intersects_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->intersects(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_overlaps_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->overlaps(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_touches_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->touches(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_within_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->within(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVGeometryMapLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CEVGeometryMapLayer* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CEVGeometryMapLayerProxy* ptr = dynamic_cast<CEVGeometryMapLayerProxy*>((EarthView::World::Spatial::CEVGeometryMapLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryMapLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CEVModelLayerProxy : public EarthView::World::Spatial::CEVModelLayer
			{
			private:
				EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CEVModelLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CEVModelLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVModelLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CEVModelLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CEVModelLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CEVModelLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CEVModelLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVModelLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CEVModelLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CEVModelLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CEVModelLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CEVModelLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream_Callback;
			public:
				CEVModelLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVModelLayer(pList)
				{
					m_EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool(EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType(EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset(EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString(EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource(EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_clearSelection_void(EarthView_World_Spatial_CEVModelLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getName_EVString(EarthView_World_Spatial_CEVModelLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setName_void_EVString(EarthView_World_Spatial_CEVModelLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getDescription_EVString(EarthView_World_Spatial_CEVModelLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString(EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool(EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool(EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool(EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool(EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool(EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope(EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_clone_ILayer(EarthView_World_Spatial_CEVModelLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream(EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_toXML_EVString(EarthView_World_Spatial_CEVModelLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CEVModelLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CEVModelLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CEVModelLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CEVModelLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CEVModelLayer::setVisible(visible);
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::isValid();
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CEVModelLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CEVModelLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVModelLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVModelLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVModelLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVModelLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CEVModelLayer::setSpatialReference(ref_sr);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getExtent();
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CEVModelLayer::draw(display, type);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CEVModelLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CEVModelLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_clearSelection_void_Callback();
					}
					else
						return this->CEVModelLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CEVModelLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CEVModelLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CEVModelLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CEVModelLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVModelLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVModelLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CEVModelLayerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CEVModelLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayer_getEntityObject_ev_int32_ev_int32_CServerEntityObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
			{
				EarthView::World::Spatial::CEVModelLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEntityObject(entityid, *(EarthView::World::Spatial::CServerEntityObject*)entityObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayer_getMesh_ev_int32_ev_int32_CServerMeshObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* meshObject )
			{
				EarthView::World::Spatial::CEVModelLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMesh(entityid, *(EarthView::World::Spatial::CServerMeshObject*)meshObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayer_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(void *pObjectXXXX, _in ev_int32 entityid, _in ev_bool needorigtexture, _out void* resObject )
			{
				EarthView::World::Spatial::CEVModelLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getResource(entityid, needorigtexture, *(EarthView::World::Spatial::CServerResourceObject*)resObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayer_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture(void *pObjectXXXX, _in ev_int32 entityid, _out void* origTexture )
			{
				EarthView::World::Spatial::CEVModelLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getOrigTexture(entityid, *(EarthView::World::Spatial::CServerOrigTexture*)origTexture);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVModelLayerInfo*  _stdcall EarthView_World_Spatial_CEVModelLayer_getLayerInfoRef_CEVModelLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX;
				const EarthView::World::Spatial::CEVModelLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_clearSelection_void_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getName_EVString_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setName_void_EVString_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getDescription_EVString_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_clone_ILayer_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_toXML_EVString_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CEVModelLayerProxy* ptr = dynamic_cast<CEVModelLayerProxy*>((EarthView::World::Spatial::CEVModelLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CEVModelTemplateLayerProxy : public EarthView::World::Spatial::CEVModelTemplateLayer
			{
			private:
				EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream_Callback;
			public:
				CEVModelTemplateLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVModelTemplateLayer(pList)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType(EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset(EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString(EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource(EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void(EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString(EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString(EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString(EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString(EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope(EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer(EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream(EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString(EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CEVModelTemplateLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CEVModelTemplateLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CEVModelTemplateLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CEVModelTemplateLayer::setVisible(visible);
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::isValid();
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CEVModelTemplateLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CEVModelTemplateLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVModelTemplateLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CEVModelTemplateLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CEVModelTemplateLayer::setSpatialReference(ref_sr);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getExtent();
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::draw(display, type);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CEVModelTemplateLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CEVModelTemplateLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void_Callback();
					}
					else
						return this->CEVModelTemplateLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CEVModelTemplateLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CEVModelTemplateLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CEVModelTemplateLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CEVModelTemplateLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVModelTemplateLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CEVModelTemplateLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CEVModelTemplateLayerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CEVModelTemplateLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getEntityObject_ev_int32_ev_int32_CServerEntityObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
			{
				EarthView::World::Spatial::CEVModelTemplateLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEntityObject(entityid, *(EarthView::World::Spatial::CServerEntityObject*)entityObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getMesh_ev_int32_ev_int32_CServerMeshObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* meshObject )
			{
				EarthView::World::Spatial::CEVModelTemplateLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMesh(entityid, *(EarthView::World::Spatial::CServerMeshObject*)meshObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(void *pObjectXXXX, _in ev_int32 entityid, _in ev_bool needorigtexture, _out void* resObject )
			{
				EarthView::World::Spatial::CEVModelTemplateLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getResource(entityid, needorigtexture, *(EarthView::World::Spatial::CServerResourceObject*)resObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture(void *pObjectXXXX, _in ev_int32 entityid, _out void* origTexture )
			{
				EarthView::World::Spatial::CEVModelTemplateLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getOrigTexture(entityid, *(EarthView::World::Spatial::CServerOrigTexture*)origTexture);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVModelLayerInfo*  _stdcall EarthView_World_Spatial_CEVModelTemplateLayer_getLayerInfoRef_CEVModelLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelTemplateLayer* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX;
				const EarthView::World::Spatial::CEVModelLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CEVModelTemplateLayerProxy* ptr = dynamic_cast<CEVModelTemplateLayerProxy*>((EarthView::World::Spatial::CEVModelTemplateLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CEVWMTSLayerFactoryProxy : public EarthView::World::Spatial::CEVWMTSLayerFactory
			{
			private:
				EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CEVWMTSLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMTSLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVWMTSLayerFactory::createInstance();
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerFactory::getType();
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CEVWMTSLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMTSLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMTSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CEVWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMTSLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMTSLayerFactory::createInstance();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CEVWMTSLayerFactoryProxy* ptr = dynamic_cast<CEVWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMTSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMTSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMTSLayerFactory::createInstance();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CEVWMTSLayerFactoryProxy* ptr = dynamic_cast<CEVWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMTSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CEVWMTSLayerFactoryProxy* ptr = dynamic_cast<CEVWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMTSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CEVWMTSLayerFactoryProxy* ptr = dynamic_cast<CEVWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMTSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CEVWMTSLayerFactoryProxy* ptr = dynamic_cast<CEVWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMTSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CEVWMSLayerFactoryProxy : public EarthView::World::Spatial::CEVWMSLayerFactory
			{
			private:
				EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CEVWMSLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMSLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
				{
					if(m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVWMSLayerFactory::createInstance();
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSLayerFactory::getType();
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CEVWMSLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMSLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVWMSLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CEVWMSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMSLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSLayerFactory::createInstance();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CEVWMSLayerFactoryProxy* ptr = dynamic_cast<CEVWMSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVWMSLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSLayerFactory::createInstance();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CEVWMSLayerFactoryProxy* ptr = dynamic_cast<CEVWMSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CEVWMSLayerFactoryProxy* ptr = dynamic_cast<CEVWMSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CEVWMSLayerFactoryProxy* ptr = dynamic_cast<CEVWMSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CEVWMSLayerFactoryProxy* ptr = dynamic_cast<CEVWMSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWMSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CEVWFSLayerFactoryProxy : public EarthView::World::Spatial::CEVWFSLayerFactory
			{
			private:
				EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CEVWFSLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWFSLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVWFSLayerFactory::createInstance();
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerFactory::getType();
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CEVWFSLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWFSLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWFSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CEVWFSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWFSLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSLayerFactory::createInstance();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CEVWFSLayerFactoryProxy* ptr = dynamic_cast<CEVWFSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWFSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWFSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSLayerFactory::createInstance();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CEVWFSLayerFactoryProxy* ptr = dynamic_cast<CEVWFSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWFSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CEVWFSLayerFactoryProxy* ptr = dynamic_cast<CEVWFSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWFSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CEVWFSLayerFactoryProxy* ptr = dynamic_cast<CEVWFSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWFSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CEVWFSLayerFactoryProxy* ptr = dynamic_cast<CEVWFSLayerFactoryProxy*>((EarthView::World::Spatial::CEVWFSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CEVDEMLayerFactoryProxy : public EarthView::World::Spatial::CEVDEMLayerFactory
			{
			private:
				EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CEVDEMLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVDEMLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
				{
					if(m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVDEMLayerFactory::createInstance();
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayerFactory::getType();
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CEVDEMLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CEVDEMLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVDEMLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CEVDEMLayerFactoryProxy*>((EarthView::World::Spatial::CEVDEMLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerFactory::createInstance();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CEVDEMLayerFactoryProxy* ptr = dynamic_cast<CEVDEMLayerFactoryProxy*>((EarthView::World::Spatial::CEVDEMLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVDEMLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerFactory::createInstance();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CEVDEMLayerFactoryProxy* ptr = dynamic_cast<CEVDEMLayerFactoryProxy*>((EarthView::World::Spatial::CEVDEMLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CEVDEMLayerFactoryProxy* ptr = dynamic_cast<CEVDEMLayerFactoryProxy*>((EarthView::World::Spatial::CEVDEMLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CEVDEMLayerFactoryProxy* ptr = dynamic_cast<CEVDEMLayerFactoryProxy*>((EarthView::World::Spatial::CEVDEMLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CEVDEMLayerFactoryProxy* ptr = dynamic_cast<CEVDEMLayerFactoryProxy*>((EarthView::World::Spatial::CEVDEMLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CEVKMLLayerFactoryProxy : public EarthView::World::Spatial::CEVKMLLayerFactory
			{
			private:
				EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CEVKMLLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVKMLLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
				{
					if(m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVKMLLayerFactory::createInstance();
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayerFactory::getType();
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CEVKMLLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CEVKMLLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVKMLLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CEVKMLLayerFactoryProxy*>((EarthView::World::Spatial::CEVKMLLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerFactory::createInstance();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CEVKMLLayerFactoryProxy* ptr = dynamic_cast<CEVKMLLayerFactoryProxy*>((EarthView::World::Spatial::CEVKMLLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVKMLLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerFactory::createInstance();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CEVKMLLayerFactoryProxy* ptr = dynamic_cast<CEVKMLLayerFactoryProxy*>((EarthView::World::Spatial::CEVKMLLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CEVKMLLayerFactoryProxy* ptr = dynamic_cast<CEVKMLLayerFactoryProxy*>((EarthView::World::Spatial::CEVKMLLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CEVKMLLayerFactoryProxy* ptr = dynamic_cast<CEVKMLLayerFactoryProxy*>((EarthView::World::Spatial::CEVKMLLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CEVKMLLayerFactoryProxy* ptr = dynamic_cast<CEVKMLLayerFactoryProxy*>((EarthView::World::Spatial::CEVKMLLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CEVGeoCodeLayerFactoryProxy : public EarthView::World::Spatial::CEVGeoCodeLayerFactory
			{
			private:
				EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CEVGeoCodeLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVGeoCodeLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayerFactory::createInstance();
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayerFactory::getType();
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CEVGeoCodeLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVGeoCodeLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CEVGeoCodeLayerFactoryProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerFactory::createInstance();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CEVGeoCodeLayerFactoryProxy* ptr = dynamic_cast<CEVGeoCodeLayerFactoryProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVGeoCodeLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerFactory::createInstance();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CEVGeoCodeLayerFactoryProxy* ptr = dynamic_cast<CEVGeoCodeLayerFactoryProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CEVGeoCodeLayerFactoryProxy* ptr = dynamic_cast<CEVGeoCodeLayerFactoryProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CEVGeoCodeLayerFactoryProxy* ptr = dynamic_cast<CEVGeoCodeLayerFactoryProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CEVGeoCodeLayerFactoryProxy* ptr = dynamic_cast<CEVGeoCodeLayerFactoryProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CGeometryLayerFactoryProxy : public EarthView::World::Spatial::CGeometryLayerFactory
			{
			private:
				EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CGeometryLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeometryLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
				{
					if(m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CGeometryLayerFactory::createInstance();
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CGeometryLayerFactory::getType();
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CGeometryLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CGeometryLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CGeometryLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CGeometryLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CGeometryLayerFactoryProxy*>((EarthView::World::Spatial::CGeometryLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CGeometryLayerFactory::createInstance();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CGeometryLayerFactoryProxy* ptr = dynamic_cast<CGeometryLayerFactoryProxy*>((EarthView::World::Spatial::CGeometryLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CGeometryLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CGeometryLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CGeometryLayerFactory::createInstance();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CGeometryLayerFactoryProxy* ptr = dynamic_cast<CGeometryLayerFactoryProxy*>((EarthView::World::Spatial::CGeometryLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CGeometryLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CGeometryLayerFactoryProxy* ptr = dynamic_cast<CGeometryLayerFactoryProxy*>((EarthView::World::Spatial::CGeometryLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CGeometryLayerFactoryProxy* ptr = dynamic_cast<CGeometryLayerFactoryProxy*>((EarthView::World::Spatial::CGeometryLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CGeometryLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CGeometryLayerFactoryProxy* ptr = dynamic_cast<CGeometryLayerFactoryProxy*>((EarthView::World::Spatial::CGeometryLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CGeometryLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CModelLayerFactoryProxy : public EarthView::World::Spatial::CModelLayerFactory
			{
			private:
				EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CModelLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
				{
					if(m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CModelLayerFactory::createInstance();
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CModelLayerFactory::getType();
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CModelLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CModelLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CModelLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CModelLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CModelLayerFactoryProxy*>((EarthView::World::Spatial::CModelLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CModelLayerFactory::createInstance();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CModelLayerFactoryProxy* ptr = dynamic_cast<CModelLayerFactoryProxy*>((EarthView::World::Spatial::CModelLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CModelLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CModelLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CModelLayerFactory::createInstance();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CModelLayerFactoryProxy* ptr = dynamic_cast<CModelLayerFactoryProxy*>((EarthView::World::Spatial::CModelLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CModelLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CModelLayerFactoryProxy* ptr = dynamic_cast<CModelLayerFactoryProxy*>((EarthView::World::Spatial::CModelLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CModelLayerFactoryProxy* ptr = dynamic_cast<CModelLayerFactoryProxy*>((EarthView::World::Spatial::CModelLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CModelLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CModelLayerFactoryProxy* ptr = dynamic_cast<CModelLayerFactoryProxy*>((EarthView::World::Spatial::CModelLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CModelLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
		}
	}
}
