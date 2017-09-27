/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/irasterlayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer_Callback)(_in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer);
				typedef const EarthView::World::Spatial2D::Raster::IRasterRenderer*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32_Callback)(_in ev_int32 iID);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32_Callback)(_in ev_int32 iBand);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32_Callback)(_in ev_int32 iBand);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32_Callback)(_in ev_int32 iBand);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 dfX, _in ev_real64 dfY, _inout ev_real64& dfRValue, _inout ev_real64& dfGValue, _inout ev_real64& dfBValue);
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class IRasterLayerProxy : public EarthView::World::Spatial::Atlas::IRasterLayer
				{
				private:
					EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream_Callback;
				public:
					IRasterLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : IRasterLayer(pList)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset(EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer(EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer(EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32(EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32(EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32(EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32(EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32(EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32(EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32(EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32(EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType(EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset(EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString(EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource(EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void(EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString(EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString(EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString(EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString(EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope(EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer(EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream(EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString(EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream(EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset_Callback(ref_pDataset);
						}
						else
							return this->IRasterLayer::setDataset(ref_pDataset);
					}
					virtual void setRenderer(_in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer_Callback(pRenderer);
						}
						else
							return this->IRasterLayer::setRenderer(pRenderer);
					}
					virtual const EarthView::World::Spatial2D::Raster::IRasterRenderer* getRenderer() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::IRasterRenderer* returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getRenderer();
					}
					virtual ev_int32 getLayerID()
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getLayerID();
					}
					virtual void setLayerID(_in ev_int32 iID)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32_Callback(iID);
						}
						else
							return this->IRasterLayer::setLayerID(iID);
					}
					virtual void assignRChannel(_in ev_int32 iBand)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32_Callback(iBand);
						}
						else
							return this->IRasterLayer::assignRChannel(iBand);
					}
					virtual void assignGChannel(_in ev_int32 iBand)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32_Callback(iBand);
						}
						else
							return this->IRasterLayer::assignGChannel(iBand);
					}
					virtual void assignBChannel(_in ev_int32 iBand)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32_Callback(iBand);
						}
						else
							return this->IRasterLayer::assignBChannel(iBand);
					}
					virtual ev_int32 getRedIndex() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getRedIndex();
					}
					virtual ev_int32 getGreenIndex() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getGreenIndex();
					}
					virtual ev_int32 getBlueIndex() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getBlueIndex();
					}
					virtual void getPixelValue(_in ev_real64 dfX, _in ev_real64 dfY, _inout ev_real64& dfRValue, _inout ev_real64& dfGValue, _inout ev_real64& dfBValue) const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(dfX, dfY, dfRValue, dfGValue, dfBValue);
						}
						else
							return this->IRasterLayer::getPixelValue(dfX, dfY, dfRValue, dfGValue, dfBValue);
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getDataset();
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->IRasterLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void_Callback();
						}
						else
							return this->IRasterLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->IRasterLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getLayerSelection();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IRasterLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->IRasterLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::canEdit();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->IRasterLayer::setCanEdit(can);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->IRasterLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->IRasterLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->IRasterLayer::setSelectable(selectable);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->IRasterLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->IRasterLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->IRasterLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->IRasterLayer::setSpatialReference(ref_sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->IRasterLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getTransparentValue();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->IRasterLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IRasterLayer::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IRasterLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IRasterLayer::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IRasterLayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IRasterLayerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::setDataset(ref_pDataset);
					else
						ptrNativeObject->setDataset(ref_pDataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setDataset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::setDataset(ref_pDataset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::setRenderer(pRenderer);
					else
						ptrNativeObject->setRenderer(pRenderer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setRenderer_void_IRasterRenderer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::setRenderer(pRenderer);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::IRasterRenderer*  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getRenderer();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->getRenderer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::IRasterRenderer*  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getRenderer_IRasterRenderer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getRenderer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getLayerID();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getLayerID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getLayerID_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getLayerID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32(void *pObjectXXXX, _in ev_int32 iID )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::setLayerID(iID);
					else
						ptrNativeObject->setLayerID(iID);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_setLayerID_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iID )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::setLayerID(iID);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::assignRChannel(iBand);
					else
						ptrNativeObject->assignRChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_assignRChannel_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::assignRChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::assignGChannel(iBand);
					else
						ptrNativeObject->assignGChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_assignGChannel_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::assignGChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::assignBChannel(iBand);
					else
						ptrNativeObject->assignBChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_assignBChannel_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::assignBChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getRedIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getRedIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getRedIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getRedIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getGreenIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getGreenIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getGreenIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getGreenIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getBlueIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getBlueIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getBlueIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getBlueIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 dfX, _in ev_real64 dfY, _inout ev_real64& dfRValue, _inout ev_real64& dfGValue, _inout ev_real64& dfBValue )
				{
					const EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					if (dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getPixelValue(dfX, dfY, dfRValue, dfGValue, dfBValue);
					else
						ptrNativeObject->getPixelValue(dfX, dfY, dfRValue, dfGValue, dfBValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dfX, _in ev_real64 dfY, _inout ev_real64& dfRValue, _inout ev_real64& dfGValue, _inout ev_real64& dfBValue )
				{
					const EarthView::World::Spatial::Atlas::IRasterLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IRasterLayer::getPixelValue(dfX, dfY, dfRValue, dfGValue, dfBValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					IRasterLayerProxy* ptr = dynamic_cast<IRasterLayerProxy*>((EarthView::World::Spatial::Atlas::IRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRasterLayer_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
