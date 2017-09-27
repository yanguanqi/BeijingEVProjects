/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ilayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class ILayerProxy : public EarthView::World::Spatial::Atlas::ILayer
				{
				private:
					EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Callback* m_EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Callback* m_EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Callback;
					EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Callback* m_EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Callback;
					EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Callback;
				public:
					ILayerProxy(EarthView::World::Core::CNameValuePairList *pList) : ILayer(pList)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType(EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset(EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString(EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource(EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_clearSelection_void(EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getName_EVString(EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString(EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString(EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString(EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool(EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool(EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool(EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool(EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool(EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool(EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool(EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool(EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool(EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope(EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_clone_ILayer(EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream(EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_toXML_EVString(EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement(EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream(EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getDataset();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->ILayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Callback();
						}
						else
							return this->ILayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->ILayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getLayerSelection();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->ILayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->ILayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->ILayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->ILayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->ILayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->ILayer::setSelectable(selectable);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->ILayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->ILayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->ILayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->ILayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->ILayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->ILayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->ILayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->ILayer::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ILayer::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->ILayer::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->ILayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->ILayer::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ILayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(ILayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDatasetName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDatasetName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDatasetName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDataSource();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSource();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDataSource();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setLayerSelection(selection);
					else
						ptrNativeObject->setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerSelection* selection )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setLayerSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setDescription(value1);
					else
						ptrNativeObject->setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool(void *pObjectXXXX, _in ev_bool can )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setCanEdit(can);
					else
						ptrNativeObject->setCanEdit(can);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool can )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setCanEdit(can);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setSelectable(selectable);
					else
						ptrNativeObject->setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDisplayMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDisplayMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setDisplayMaxScale(scale);
					else
						ptrNativeObject->setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDisplayMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getDisplayMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setDisplayMinScale(scale);
					else
						ptrNativeObject->setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_ILayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ILayer_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					if (dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					ILayerProxy* ptr = dynamic_cast<ILayerProxy*>((EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Atlas::ILayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ILayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class ILayerFactoryProxy : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				private:
					EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					ILayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : ILayerFactory(pList)
					{
						m_EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType(EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer(EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->ILayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->ILayerFactory::createInstance();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& strXml)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strXml_Char = strXml.makeBuffer();
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_Callback(strXml_Char);
							return returnValue;
						}
						else
							return this->ILayerFactory::createInstance(strXml);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->ILayerFactory::createInstance(element);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->ILayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(ILayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayerFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX;
					if (dynamic_cast<ILayerFactoryProxy*>((EarthView::World::Spatial::Atlas::ILayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					ILayerFactoryProxy* ptr = dynamic_cast<ILayerFactoryProxy*>((EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ILayerFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayerFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX;
					if (dynamic_cast<ILayerFactoryProxy*>((EarthView::World::Spatial::Atlas::ILayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					ILayerFactoryProxy* ptr = dynamic_cast<ILayerFactoryProxy*>((EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ILayerFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString(void *pObjectXXXX, _in const char* strXml )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial::Atlas::ILayerFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX;
					if (dynamic_cast<ILayerFactoryProxy*>((EarthView::World::Spatial::Atlas::ILayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance(strXml1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(strXml1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					ILayerFactoryProxy* ptr = dynamic_cast<ILayerFactoryProxy*>((EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_EVString_NoVirtual(void *pObjectXXXX, _in const char* strXml )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial::Atlas::ILayerFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance(strXml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Atlas::ILayerFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX;
					if (dynamic_cast<ILayerFactoryProxy*>((EarthView::World::Spatial::Atlas::ILayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					ILayerFactoryProxy* ptr = dynamic_cast<ILayerFactoryProxy*>((EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Atlas::ILayerFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::ILayerFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX;
					if (dynamic_cast<ILayerFactoryProxy*>((EarthView::World::Spatial::Atlas::ILayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					ILayerFactoryProxy* ptr = dynamic_cast<ILayerFactoryProxy*>((EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ILayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::ILayerFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ILayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*  _stdcall EarthView_World_Spatial_Atlas_CLayerFactoryEnumerator_getSingletonPtr_CLayerFactoryEnumerator( )
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* objXXXX = EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_CLayerFactoryEnumerator_getSingleton_CLayerFactoryEnumerator( )
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator& objXXXX = EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator::getSingleton();
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CLayerFactoryEnumerator_releaseSingletonPtr_void( )
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator::releaseSingletonPtr();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CLayerFactoryEnumerator_existLayerFactory_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 layerType )
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existLayerFactory(layerType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerFactory*  _stdcall EarthView_World_Spatial_Atlas_CLayerFactoryEnumerator_getLayerFactory_ILayerFactory_ev_int32(void *pObjectXXXX, _in ev_int32 layerType )
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerFactory* objXXXX = ptrNativeObject->getLayerFactory(layerType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CLayerFactoryEnumerator_addLayerFactory_ev_bool_ILayerFactory(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerFactory* ref_factory )
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addLayerFactory(ref_factory);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CLayerFactoryEnumerator_removeLayerFactory_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 layerType )
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeLayerFactory(layerType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CLayerFactoryEnumerator_removeLayerFactory_ev_bool_ILayerFactory(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayerFactory* factory )
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeLayerFactory(factory);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CLayerFactoryEnumerator_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
