/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2datlas/grouplayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer_Callback)(_in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32_Callback)(_in ev_uint32 oldIndex, _in ev_uint32 newIndex);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32_Callback)(_in ev_uint32 index);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& name);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CGroupLayerProxy : public EarthView::World::Spatial2D::Atlas::CGroupLayer
				{
				private:
					EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream_Callback;
				public:
					CGroupLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGroupLayer(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CGroupLayerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer(EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer(EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32(EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void(EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32(EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32(EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32(EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset(EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString(EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer(EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer(EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset(EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void(EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString(EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString(EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString(EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer(EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString(EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CGroupLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CGroupLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CGroupLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CGroupLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::isValid();
					}
					virtual ev_bool isSelected() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::isSelected();
					}
					virtual void setSelected(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool_Callback(selected);
						}
						else
							return this->CGroupLayer::setSelected(selected);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CGroupLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64_Callback(value);
						}
						else
							return this->CGroupLayer::setDisplayMaxScale(value);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64_Callback(value);
						}
						else
							return this->CGroupLayer::setDisplayMinScale(value);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->CGroupLayer::setSpatialReference(sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CGroupLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGroupLayer::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CGroupLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::toXmlElement();
					}
					virtual void add(_in EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer_Callback(ref_layer);
						}
						else
							return this->CGroupLayer::add(ref_layer);
					}
					virtual void insert(_in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer_Callback(index, ref_layer);
						}
						else
							return this->CGroupLayer::insert(index, ref_layer);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* remove(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CGroupLayer::remove(index);
					}
					virtual void removeAll()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void_Callback();
						}
						else
							return this->CGroupLayer::removeAll();
					}
					virtual void move(_in ev_uint32 oldIndex, _in ev_uint32 newIndex)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32_Callback(oldIndex, newIndex);
						}
						else
							return this->CGroupLayer::move(oldIndex, newIndex);
					}
					virtual ev_uint32 getCount() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getCount();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CGroupLayer::getLayer(index);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getRelatedLayer(_in const EarthView::World::Spatial::GeoDataset::IDataset* dataset) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset_Callback(dataset);
							return returnValue;
						}
						else
							return this->CGroupLayer::getRelatedLayer(dataset);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& name) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback(ds, name_Char);
							return returnValue;
						}
						else
							return this->CGroupLayer::getDataset(ds, name);
					}
					virtual ev_uint32 indexOfLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CGroupLayer::indexOfLayer(layer);
					}
					virtual ev_bool isExist(_in const EarthView::World::Spatial::Atlas::ILayer* layer) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CGroupLayer::isExist(layer);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CGroupLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getTransparentValue();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CGroupLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void_Callback();
						}
						else
							return this->CGroupLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CGroupLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::getLayerSelection();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CGroupLayer::setCanEdit(can);
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CGroupLayer::setSelectable(selectable);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CGroupLayer::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayer::toXML();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CGroupLayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CGroupLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setDescription(value1);
					else
						ptrNativeObject->setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setSelected(selected);
					else
						ptrNativeObject->setSelected(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setSelected(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getDisplayMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getDisplayMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setDisplayMaxScale(value);
					else
						ptrNativeObject->setDisplayMaxScale(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setDisplayMaxScale(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getDisplayMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDisplayMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getDisplayMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setDisplayMinScale(value);
					else
						ptrNativeObject->setDisplayMinScale(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setDisplayMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setDisplayMinScale(value);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setSpatialReference(sr);
					else
						ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::add(ref_layer);
					else
						ptrNativeObject->add(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_add_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::add(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::insert(index, ref_layer);
					else
						ptrNativeObject->insert(index, ref_layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_insert_void_ev_uint32_ILayer_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::insert(index, ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::remove(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->remove(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_remove_ILayer_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::remove(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::removeAll();
					else
						ptrNativeObject->removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_removeAll_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::removeAll();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::move(oldIndex, newIndex);
					else
						ptrNativeObject->move(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_move_void_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::move(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getLayer(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayer_ILayer_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getRelatedLayer(dataset);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getRelatedLayer(dataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getRelatedLayer_ILayer_IDataset_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getRelatedLayer(dataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getDataset(ds, name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset(ds, name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getDataset(ds, name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::indexOfLayer(layer);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->indexOfLayer(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_indexOfLayer_ev_uint32_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::indexOfLayer(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::isExist(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExist(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_isExist_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::isExist(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CGroupLayerProxy* ptr = dynamic_cast<CGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CGroupLayerFactoryProxy : public EarthView::World::Spatial2D::Atlas::CGroupLayerFactory
				{
				private:
					EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CGroupLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CGroupLayerFactory(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer(EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CGroupLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGroupLayerFactory::createInstance(element);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGroupLayerFactory::createInstance();
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CGroupLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CGroupLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CGroupLayerFactoryProxy* ptr = dynamic_cast<CGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CGroupLayerFactoryProxy* ptr = dynamic_cast<CGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayerFactory::createInstance();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CGroupLayerFactoryProxy* ptr = dynamic_cast<CGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayerFactory::createInstance();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CGroupLayerFactoryProxy* ptr = dynamic_cast<CGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CGroupLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CGroupLayerFactoryProxy* ptr = dynamic_cast<CGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CGroupLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
