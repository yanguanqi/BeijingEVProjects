/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/weblayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_COGCResult_getDataPtr_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCResult* ptrNativeObject = (EarthView::World::Spatial::COGCResult*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr& objXXXX = ptrNativeObject->getDataPtr();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CWebLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CWebLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWebLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CWebLayerProxy : public EarthView::World::Spatial::CWebLayer
			{
			private:
				EarthView_World_Spatial_CWebLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CWebLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CWebLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CWebLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CWebLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CWebLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CWebLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CWebLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CWebLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CWebLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CWebLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CWebLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CWebLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWebLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWebLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CWebLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CWebLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CWebLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CWebLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CWebLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CWebLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream_Callback;
			public:
				CWebLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebLayer(pList)
				{
					m_EarthView_World_Spatial_CWebLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_isSelected_ev_bool(EarthView_World_Spatial_CWebLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getType_EVLayerType(EarthView_World_Spatial_CWebLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getDataset_IDataset(EarthView_World_Spatial_CWebLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getDatasetName_EVString(EarthView_World_Spatial_CWebLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource(EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_clearSelection_void(EarthView_World_Spatial_CWebLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getName_EVString(EarthView_World_Spatial_CWebLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setName_void_EVString(EarthView_World_Spatial_CWebLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getDescription_EVString(EarthView_World_Spatial_CWebLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setDescription_void_EVString(EarthView_World_Spatial_CWebLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_canEdit_ev_bool(EarthView_World_Spatial_CWebLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_isEditing_ev_bool(EarthView_World_Spatial_CWebLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_isVisible_ev_bool(EarthView_World_Spatial_CWebLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_isValid_ev_bool(EarthView_World_Spatial_CWebLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool(EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope(EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_clone_ILayer(EarthView_World_Spatial_CWebLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream(EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_toXML_EVString(EarthView_World_Spatial_CWebLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CWebLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CWebLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CWebLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CWebLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CWebLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CWebLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CWebLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CWebLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CWebLayer::setVisible(visible);
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::isValid();
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CWebLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CWebLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CWebLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CWebLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWebLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWebLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CWebLayer::setSpatialReference(ref_sr);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getExtent();
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CWebLayer::draw(display, type);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CWebLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CWebLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CWebLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CWebLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_clearSelection_void_Callback();
					}
					else
						return this->CWebLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CWebLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CWebLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CWebLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CWebLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CWebLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CWebLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CWebLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CWebLayerProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWebLayer_getType_EVLayerType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getType_EVLayerType_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWebLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CWebLayer_getDataset_IDataset(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getDataset();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getDataset_IDataset_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CWebLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getDataset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebLayer_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getName_EVString_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWebLayer::setName(name1);
				else
					ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setName_void_EVString_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWebLayer::setName(name1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebLayer_getDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getDescription();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getDescription();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getDescription_EVString_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebLayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWebLayer::setDescription(value1);
				else
					ptrNativeObject->setDescription(value1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWebLayer::setDescription(value1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_canEdit_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::canEdit();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canEdit();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::canEdit();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_isEditing_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::isEditing();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isEditing();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::isEditing();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWebLayer::setEditing(editing);
				else
					ptrNativeObject->setEditing(editing);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWebLayer::setEditing(editing);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_isVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::isVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::isVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWebLayer::setVisible(visible);
				else
					ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWebLayer::setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::isValid();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_isValid_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_isSelected_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::isSelected();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isSelected();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::isSelected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool selected )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWebLayer::setSelected(selected);
				else
					ptrNativeObject->setSelected(selected);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selected )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWebLayer::setSelected(selected);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::ignoreScale();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->ignoreScale();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::ignoreScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWebLayer::setIgnoreScale(bIgnore);
				else
					ptrNativeObject->setIgnoreScale(bIgnore);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWebLayer::setIgnoreScale(bIgnore);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getDisplayMaxScale();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getDisplayMaxScale();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CWebLayer_getDisplayMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getDisplayMaxScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWebLayer::setDisplayMaxScale(scale);
				else
					ptrNativeObject->setDisplayMaxScale(scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWebLayer::setDisplayMaxScale(scale);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getDisplayMinScale();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getDisplayMinScale();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CWebLayer_getDisplayMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getDisplayMinScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWebLayer::setDisplayMinScale(scale);
				else
					ptrNativeObject->setDisplayMinScale(scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setDisplayMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWebLayer::setDisplayMinScale(scale);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWebLayer_clone_ILayer(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::clone();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_clone_ILayer_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWebLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CWebLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWebLayer::setSpatialReference(ref_sr);
				else
					ptrNativeObject->setSpatialReference(ref_sr);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWebLayer::setSpatialReference(ref_sr);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getExtent();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWebLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::getExtent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebLayer_toXML_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::toXML();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->toXML();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_toXML_EVString_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebLayer_toXML_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::toXML();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWebLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				else
					ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWebLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
			{
				EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWebLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				if (dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::toXmlElement();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CWebLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayer* ptrNativeObject = (EarthView::World::Spatial::CWebLayer*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayer::toXmlElement();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_clearSelection_void_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CWebLayerProxy* ptr = dynamic_cast<CWebLayerProxy*>((EarthView::World::Spatial::CWebLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CWebLayerFactoryProxy : public EarthView::World::Spatial::CWebLayerFactory
			{
			private:
				EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CWebLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CWebLayerFactory::getType();
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& strXml)
				{
					if(m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* strXml_Char = strXml.makeBuffer();
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString_Callback(strXml_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWebLayerFactory::createInstance(strXml);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWebLayerFactory::createInstance(element);
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CWebLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CWebLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CWebLayerFactoryProxy*>((EarthView::World::Spatial::CWebLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayerFactory::getType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CWebLayerFactoryProxy* ptr = dynamic_cast<CWebLayerFactoryProxy*>((EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWebLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayerFactory::getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString(void *pObjectXXXX, _in const char* strXml )
			{
				EarthView::World::Core::ev_string strXml1 = strXml;
				EarthView::World::Spatial::CWebLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CWebLayerFactoryProxy*>((EarthView::World::Spatial::CWebLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayerFactory::createInstance(strXml1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(strXml1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CWebLayerFactoryProxy* ptr = dynamic_cast<CWebLayerFactoryProxy*>((EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_EVString_NoVirtual(void *pObjectXXXX, _in const char* strXml )
			{
				EarthView::World::Core::ev_string strXml1 = strXml;
				EarthView::World::Spatial::CWebLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayerFactory::createInstance(strXml1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
			{
				EarthView::World::Spatial::CWebLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CWebLayerFactoryProxy*>((EarthView::World::Spatial::CWebLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CWebLayerFactoryProxy* ptr = dynamic_cast<CWebLayerFactoryProxy*>((EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
			{
				EarthView::World::Spatial::CWebLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
			{
				EarthView::World::Spatial::CWebLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CWebLayerFactoryProxy*>((EarthView::World::Spatial::CWebLayerFactory*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CWebLayerFactoryProxy* ptr = dynamic_cast<CWebLayerFactoryProxy*>((EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
			{
				EarthView::World::Spatial::CWebLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLayerFactory::destroyInstance(layer);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CWebLayerFactoryProxy* ptr = dynamic_cast<CWebLayerFactoryProxy*>((EarthView::World::Spatial::CWebLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLayerFactory_createInstance_ILayer(pCallback);
				}
			}
		}
	}
}
