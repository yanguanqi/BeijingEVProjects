/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/evserverlayerex.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CEVServerLayerExProxy : public EarthView::World::Spatial2D::Atlas::CEVServerLayerEx
				{
				private:
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream_Callback;
				public:
					CEVServerLayerExProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVServerLayerEx(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getDataset();
					}
					virtual void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset_Callback(dataset);
						}
						else
							return this->CEVServerLayerEx::setDataset(dataset);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CEVServerLayerEx::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getTransparentValue();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::draw(display, type);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getExtent();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CEVServerLayerEx::setSpatialReference(ref_sr);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CEVServerLayerEx::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::toXmlElement();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CEVServerLayerEx::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CEVServerLayerEx::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CEVServerLayerEx::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CEVServerLayerEx::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::isValid();
					}
					virtual ev_bool isSelected() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::isSelected();
					}
					virtual void setSelected(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool_Callback(selected);
						}
						else
							return this->CEVServerLayerEx::setSelected(selected);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CEVServerLayerEx::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CEVServerLayerEx::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CEVServerLayerEx::setDisplayMinScale(scale);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::toXML();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CEVServerLayerEx::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void_Callback();
						}
						else
							return this->CEVServerLayerEx::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CEVServerLayerEx::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::getLayerSelection();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CEVServerLayerEx::setCanEdit(can);
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerEx::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CEVServerLayerEx::setSelectable(selectable);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEVServerLayerEx::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEVServerLayerEx::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CEVServerLayerExProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::setDataset(dataset);
					else
						ptrNativeObject->setDataset(dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDataset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::setDataset(dataset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setTheme_void_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					ptrNativeObject->setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerEx* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerEx::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream_Callback* pCallback )
				{
					CEVServerLayerExProxy* ptr = dynamic_cast<CEVServerLayerExProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerEx*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerEx_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CEVServerLayerExFactoryProxy : public EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory
				{
				private:
					EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CEVServerLayerExFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVServerLayerExFactory(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer(EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_EVString(EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerExFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CEVServerLayerExFactory::createInstance();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CEVServerLayerExFactory::createInstance(element);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CEVServerLayerExFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CEVServerLayerExFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType_Callback* pCallback )
				{
					CEVServerLayerExFactoryProxy* ptr = dynamic_cast<CEVServerLayerExFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_Callback* pCallback )
				{
					CEVServerLayerExFactoryProxy* ptr = dynamic_cast<CEVServerLayerExFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX;
					if (dynamic_cast<CEVServerLayerExFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CEVServerLayerExFactoryProxy* ptr = dynamic_cast<CEVServerLayerExFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CEVServerLayerExFactoryProxy* ptr = dynamic_cast<CEVServerLayerExFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CEVServerLayerExFactoryProxy* ptr = dynamic_cast<CEVServerLayerExFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CEVServerLayerExFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
			}
		}
	}
}
