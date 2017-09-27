/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/igrouplayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer_Callback)(_in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32_Callback)(_in ev_uint32 oldIndex, _in ev_uint32 newIndex);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32_Callback)(_in ev_uint32 index);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& name);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class IGroupLayerProxy : public EarthView::World::Spatial::Atlas::IGroupLayer
				{
				private:
					EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream_Callback;
				public:
					IGroupLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : IGroupLayer(pList)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IGroupLayerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer(EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer(EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32(EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void(EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32(EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32(EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32(EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset(EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString(EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer(EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer(EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType(EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset(EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString(EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource(EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void(EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString(EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString(EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString(EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString(EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope(EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer(EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream(EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString(EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream(EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void add(_in EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer_Callback(ref_layer);
						}
						else
							return this->IGroupLayer::add(ref_layer);
					}
					virtual void insert(_in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer_Callback(index, ref_layer);
						}
						else
							return this->IGroupLayer::insert(index, ref_layer);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* remove(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IGroupLayer::remove(index);
					}
					virtual void removeAll()
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void_Callback();
						}
						else
							return this->IGroupLayer::removeAll();
					}
					virtual void move(_in ev_uint32 oldIndex, _in ev_uint32 newIndex)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32_Callback(oldIndex, newIndex);
						}
						else
							return this->IGroupLayer::move(oldIndex, newIndex);
					}
					virtual ev_uint32 getCount() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getCount();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IGroupLayer::getLayer(index);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getRelatedLayer(_in const EarthView::World::Spatial::GeoDataset::IDataset* dataset) const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset_Callback(dataset);
							return returnValue;
						}
						else
							return this->IGroupLayer::getRelatedLayer(dataset);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& name) const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback(ds, name_Char);
							return returnValue;
						}
						else
							return this->IGroupLayer::getDataset(ds, name);
					}
					virtual ev_uint32 indexOfLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer) const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->IGroupLayer::indexOfLayer(layer);
					}
					virtual ev_bool isExist(_in const EarthView::World::Spatial::Atlas::ILayer* layer) const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->IGroupLayer::isExist(layer);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->IGroupLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getTransparentValue();
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getType();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->IGroupLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void_Callback();
						}
						else
							return this->IGroupLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->IGroupLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getLayerSelection();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IGroupLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->IGroupLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->IGroupLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->IGroupLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->IGroupLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->IGroupLayer::setSelectable(selectable);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->IGroupLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->IGroupLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->IGroupLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->IGroupLayer::setSpatialReference(ref_sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->IGroupLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IGroupLayer::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IGroupLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IGroupLayer::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IGroupLayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IGroupLayerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::add(ref_layer);
					else
						ptrNativeObject->add(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_add_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::add(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::insert(index, ref_layer);
					else
						ptrNativeObject->insert(index, ref_layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_insert_void_ev_uint32_ILayer_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::insert(index, ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::remove(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->remove(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_remove_ILayer_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::remove(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::removeAll();
					else
						ptrNativeObject->removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_removeAll_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::removeAll();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::move(oldIndex, newIndex);
					else
						ptrNativeObject->move(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_move_void_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::move(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::getCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::getLayer(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getLayer_ILayer_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::getLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::getRelatedLayer(dataset);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getRelatedLayer(dataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getRelatedLayer_ILayer_IDataset_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::getRelatedLayer(dataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::getDataset(ds, name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset(ds, name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::getDataset(ds, name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::indexOfLayer(layer);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->indexOfLayer(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_indexOfLayer_ev_uint32_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::indexOfLayer(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::isExist(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExist(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_isExist_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::isExist(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					if (dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial_Atlas_IGroupLayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IGroupLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IGroupLayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					IGroupLayerProxy* ptr = dynamic_cast<IGroupLayerProxy*>((EarthView::World::Spatial::Atlas::IGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IGroupLayer_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
