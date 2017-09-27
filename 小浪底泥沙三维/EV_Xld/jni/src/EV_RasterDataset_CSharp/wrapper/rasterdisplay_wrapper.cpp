/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterdisplay.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef const EarthView::World::Spatial::GeoDataset::IRasterDataset*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer_Callback)(_in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer);
				typedef const EarthView::World::Spatial2D::Raster::IRasterRenderer*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32_Callback)(_in ev_int32 iID);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32_Callback)(_in ev_int32 iBand);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32_Callback)(_in ev_int32 iBand);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32_Callback)(_in ev_int32 iBand);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 dfX, _in ev_real64 dfY, _inout ev_real64& dfRValue, _inout ev_real64& dfGValue, _inout ev_real64& dfBValue);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CRasterLayerProxy : public EarthView::World::Spatial2D::Raster::CRasterLayer
				{
				private:
					EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream_Callback;
				public:
					CRasterLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterLayer(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset(EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset(EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer(EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer(EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32(EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32(EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32(EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32(EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32(EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32(EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32(EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32(EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType(EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset(EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void(EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString(EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString(EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString(EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer(EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString(EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CRasterLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CRasterLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CRasterLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CRasterLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool_Callback(selected);
						}
						else
							return this->CRasterLayer::setSelectable(selected);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CRasterLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CRasterLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CRasterLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getDataset();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->CRasterLayer::setSpatialReference(sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CRasterLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRasterLayer::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CRasterLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::toXmlElement();
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CRasterLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getTransparentValue();
					}
					virtual void setRenderer(_in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer_Callback(pRenderer);
						}
						else
							return this->CRasterLayer::setRenderer(pRenderer);
					}
					virtual const EarthView::World::Spatial2D::Raster::IRasterRenderer* getRenderer() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::IRasterRenderer* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getRenderer();
					}
					virtual void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset_Callback(ref_pDataset);
						}
						else
							return this->CRasterLayer::setDataset(ref_pDataset);
					}
					virtual void assignRChannel(_in ev_int32 iBand)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32_Callback(iBand);
						}
						else
							return this->CRasterLayer::assignRChannel(iBand);
					}
					virtual void assignGChannel(_in ev_int32 iBand)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32_Callback(iBand);
						}
						else
							return this->CRasterLayer::assignGChannel(iBand);
					}
					virtual void assignBChannel(_in ev_int32 iBand)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32_Callback(iBand);
						}
						else
							return this->CRasterLayer::assignBChannel(iBand);
					}
					virtual ev_int32 getLayerID()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getLayerID();
					}
					virtual void setLayerID(_in ev_int32 iID)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32_Callback(iID);
						}
						else
							return this->CRasterLayer::setLayerID(iID);
					}
					virtual const EarthView::World::Spatial::GeoDataset::IRasterDataset* getRasterDataset() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IRasterDataset* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getRasterDataset();
					}
					virtual ev_int32 getRedIndex() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getRedIndex();
					}
					virtual ev_int32 getGreenIndex() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getGreenIndex();
					}
					virtual ev_int32 getBlueIndex() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getBlueIndex();
					}
					virtual void getPixelValue(_in ev_real64 dfX, _in ev_real64 dfY, _inout ev_real64& dfRValue, _inout ev_real64& dfGValue, _inout ev_real64& dfBValue) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(dfX, dfY, dfRValue, dfGValue, dfBValue);
						}
						else
							return this->CRasterLayer::getPixelValue(dfX, dfY, dfRValue, dfGValue, dfBValue);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CRasterLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void_Callback();
						}
						else
							return this->CRasterLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CRasterLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::getLayerSelection();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CRasterLayer::setCanEdit(can);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRasterLayer::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRasterLayer::toXML();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRasterLayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CRasterLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setDescription(value1);
					else
						ptrNativeObject->setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setSelectable(selected);
					else
						ptrNativeObject->setSelectable(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setSelectable(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getDisplayMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getDisplayMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setDisplayMaxScale(scale);
					else
						ptrNativeObject->setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getDisplayMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDisplayMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getDisplayMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setDisplayMinScale(scale);
					else
						ptrNativeObject->setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDisplayMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setSpatialReference(sr);
					else
						ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setRenderer(pRenderer);
					else
						ptrNativeObject->setRenderer(pRenderer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setRenderer_void_IRasterRenderer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setRenderer(pRenderer);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::IRasterRenderer*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getRenderer();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->getRenderer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::IRasterRenderer*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getRenderer_IRasterRenderer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getRenderer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setDataset(ref_pDataset);
					else
						ptrNativeObject->setDataset(ref_pDataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setDataset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setDataset(ref_pDataset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::assignRChannel(iBand);
					else
						ptrNativeObject->assignRChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_assignRChannel_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::assignRChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::assignGChannel(iBand);
					else
						ptrNativeObject->assignGChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_assignGChannel_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::assignGChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::assignBChannel(iBand);
					else
						ptrNativeObject->assignBChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_assignBChannel_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::assignBChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_saveChannelAsDataSet_void_ev_char_ev_int32_ev_int32_EVDataSetFormat_ev_real64_CProgressInfo(void *pObjectXXXX, _in const ev_char* fullPath, _in ev_int32 iChannelCount, _in ev_int32* piChannelIndex, _in int eDataSetType, _in ev_real64 dfNodataValue, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pProssiInfo )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->saveChannelAsDataSet(fullPath, iChannelCount, piChannelIndex, (EarthView::World::Spatial2D::Raster::EVDataSetFormat)eDataSetType, dfNodataValue, pProssiInfo);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getLayerID();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getLayerID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerID_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getLayerID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32(void *pObjectXXXX, _in ev_int32 iID )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setLayerID(iID);
					else
						ptrNativeObject->setLayerID(iID);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerID_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iID )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::setLayerID(iID);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IRasterDataset*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IRasterDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getRasterDataset();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IRasterDataset* objXXXX = ptrNativeObject->getRasterDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IRasterDataset*  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getRasterDataset_IRasterDataset_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getRasterDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getRedIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getRedIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getRedIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getRedIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getGreenIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getGreenIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getGreenIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getGreenIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getBlueIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getBlueIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getBlueIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterLayer::getBlueIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_setResampleType_void_ev_int32(void *pObjectXXXX, _in ev_int32 resampleIndex )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ptrNativeObject->setResampleType(resampleIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterLayer_getResampleType_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getResampleType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CRasterLayerProxy* ptr = dynamic_cast<CRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class RasterLayerFactoryProxy : public EarthView::World::Spatial2D::Raster::RasterLayerFactory
				{
				private:
					EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					RasterLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : RasterLayerFactory(pList)
					{
						m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType(EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer(EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->RasterLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->RasterLayerFactory::createInstance();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& strXml)
					{
						if(m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strXml_Char = strXml.makeBuffer();
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString_Callback(strXml_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->RasterLayerFactory::createInstance(strXml);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->RasterLayerFactory::createInstance(element);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->RasterLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(RasterLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::RasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX;
					if (dynamic_cast<RasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::RasterLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::RasterLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					RasterLayerFactoryProxy* ptr = dynamic_cast<RasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::RasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::RasterLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::RasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX;
					if (dynamic_cast<RasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::RasterLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::RasterLayerFactory::createInstance();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					RasterLayerFactoryProxy* ptr = dynamic_cast<RasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::RasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::RasterLayerFactory::createInstance();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString(void *pObjectXXXX, _in const char* strXml )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial2D::Raster::RasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX;
					if (dynamic_cast<RasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::RasterLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::RasterLayerFactory::createInstance(strXml1);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					RasterLayerFactoryProxy* ptr = dynamic_cast<RasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_EVString_NoVirtual(void *pObjectXXXX, _in const char* strXml )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial2D::Raster::RasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::RasterLayerFactory::createInstance(strXml1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Raster::RasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX;
					if (dynamic_cast<RasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::RasterLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::RasterLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					RasterLayerFactoryProxy* ptr = dynamic_cast<RasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Raster::RasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::RasterLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Raster::RasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX;
					if (dynamic_cast<RasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::RasterLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::RasterLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					RasterLayerFactoryProxy* ptr = dynamic_cast<RasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_RasterLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Raster::RasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::RasterLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::RasterLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
			}
		}
	}
}
