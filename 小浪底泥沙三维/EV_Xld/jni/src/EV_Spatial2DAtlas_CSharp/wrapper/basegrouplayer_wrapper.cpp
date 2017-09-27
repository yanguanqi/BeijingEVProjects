/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2datlas/basegrouplayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer_Callback)(_in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32_Callback)(_in ev_uint32 oldIndex, _in ev_uint32 newIndex);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32_Callback)(_in ev_uint32 index);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& name);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CBaseGroupLayerProxy : public EarthView::World::Spatial2D::Atlas::CBaseGroupLayer
				{
				private:
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream_Callback;
				public:
					CBaseGroupLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CBaseGroupLayer(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CBaseGroupLayerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getType();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->CBaseGroupLayer::setSpatialReference(sr);
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CBaseGroupLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::toXmlElement();
					}
					virtual void add(_in EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer_Callback(ref_layer);
						}
						else
							return this->CBaseGroupLayer::add(ref_layer);
					}
					virtual void insert(_in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer_Callback(index, ref_layer);
						}
						else
							return this->CBaseGroupLayer::insert(index, ref_layer);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* remove(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::remove(index);
					}
					virtual void removeAll()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void_Callback();
						}
						else
							return this->CBaseGroupLayer::removeAll();
					}
					virtual void move(_in ev_uint32 oldIndex, _in ev_uint32 newIndex)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32_Callback(oldIndex, newIndex);
						}
						else
							return this->CBaseGroupLayer::move(oldIndex, newIndex);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CBaseGroupLayer::setTransparentValue(transparent);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CBaseGroupLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CBaseGroupLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CBaseGroupLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CBaseGroupLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::isValid();
					}
					virtual ev_bool isSelected() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::isSelected();
					}
					virtual void setSelected(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool_Callback(selected);
						}
						else
							return this->CBaseGroupLayer::setSelected(selected);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CBaseGroupLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64_Callback(value);
						}
						else
							return this->CBaseGroupLayer::setDisplayMaxScale(value);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64_Callback(value);
						}
						else
							return this->CBaseGroupLayer::setDisplayMinScale(value);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getSpatialReference();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getExtent();
					}
					virtual ev_uint32 getCount() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getCount();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getLayer(index);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getRelatedLayer(_in const EarthView::World::Spatial::GeoDataset::IDataset* dataset) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset_Callback(dataset);
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getRelatedLayer(dataset);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& name) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback(ds, name_Char);
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getDataset(ds, name);
					}
					virtual ev_uint32 indexOfLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::indexOfLayer(layer);
					}
					virtual ev_bool isExist(_in const EarthView::World::Spatial::Atlas::ILayer* layer) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::isExist(layer);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getTransparentValue();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CBaseGroupLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void_Callback();
						}
						else
							return this->CBaseGroupLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CBaseGroupLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::getLayerSelection();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CBaseGroupLayer::setCanEdit(can);
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CBaseGroupLayer::setSelectable(selectable);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CBaseGroupLayer::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayer::toXML();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CBaseGroupLayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CBaseGroupLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::setSpatialReference(sr);
					else
						ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_startDrawBaseMap_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->startDrawBaseMap(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_drawBaseMap_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->drawBaseMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_endDrawBaseMap_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->endDrawBaseMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_makeMapping_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type, _in ev_bool bAddRequst )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->makeMapping(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type, bAddRequst);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCacheTileSize_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 size )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setCacheTileSize(size);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCacheTileSize_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCacheTileSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCacheTileCount_void_ev_int32(void *pObjectXXXX, _in ev_int32 count )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ptrNativeObject->setCacheTileCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCacheTileCount_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCacheTileCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::add(ref_layer);
					else
						ptrNativeObject->add(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_add_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::add(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::insert(index, ref_layer);
					else
						ptrNativeObject->insert(index, ref_layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_insert_void_ev_uint32_ILayer_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::insert(index, ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::remove(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->remove(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_remove_ILayer_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::remove(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::removeAll();
					else
						ptrNativeObject->removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_removeAll_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::removeAll();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::move(oldIndex, newIndex);
					else
						ptrNativeObject->move(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_move_void_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::move(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearTileCache_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX;
					ptrNativeObject->clearTileCache();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayer_ILayer_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getRelatedLayer_ILayer_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_IDataSource_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_indexOfLayer_ev_uint32_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isExist_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CBaseGroupLayerProxy* ptr = dynamic_cast<CBaseGroupLayerProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CBaseGroupLayerFactoryProxy : public EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory
				{
				private:
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CBaseGroupLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CBaseGroupLayerFactory(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer(EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CBaseGroupLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CBaseGroupLayerFactory::createInstance(element);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CBaseGroupLayerFactory::createInstance();
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CBaseGroupLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CBaseGroupLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CBaseGroupLayerFactoryProxy* ptr = dynamic_cast<CBaseGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CBaseGroupLayerFactoryProxy* ptr = dynamic_cast<CBaseGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory::createInstance();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CBaseGroupLayerFactoryProxy* ptr = dynamic_cast<CBaseGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory::createInstance();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CBaseGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CBaseGroupLayerFactoryProxy* ptr = dynamic_cast<CBaseGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CBaseGroupLayerFactoryProxy* ptr = dynamic_cast<CBaseGroupLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CBaseGroupLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
