/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/dbrasterdisplay.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef const EarthView::World::Spatial::GeoDataset::IRasterDataset*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer_Callback)(_in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer);
				typedef const EarthView::World::Spatial2D::Raster::IRasterRenderer*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32_Callback)(_in ev_int32 iID);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32_Callback)(_in ev_int32 iBand);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32_Callback)(_in ev_int32 iBand);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32_Callback)(_in ev_int32 iBand);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 dfX, _in ev_real64 dfY, _inout ev_real64& dfRValue, _inout ev_real64& dfGValue, _inout ev_real64& dfBValue);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CDBRasterLayerProxy : public EarthView::World::Spatial2D::Raster::CDBRasterLayer
				{
				private:
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream_Callback;
				public:
					CDBRasterLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDBRasterLayer(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void(EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer(EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString(EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getType();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::isValid();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getDataset();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getSpatialReference();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CDBRasterLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CDBRasterLayer::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CDBRasterLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::toXmlElement();
					}
					virtual void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset_Callback(ref_pDataset);
						}
						else
							return this->CDBRasterLayer::setDataset(ref_pDataset);
					}
					virtual void assignRChannel(_in ev_int32 iBand)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32_Callback(iBand);
						}
						else
							return this->CDBRasterLayer::assignRChannel(iBand);
					}
					virtual void assignGChannel(_in ev_int32 iBand)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32_Callback(iBand);
						}
						else
							return this->CDBRasterLayer::assignGChannel(iBand);
					}
					virtual void assignBChannel(_in ev_int32 iBand)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32_Callback(iBand);
						}
						else
							return this->CDBRasterLayer::assignBChannel(iBand);
					}
					virtual ev_int32 getLayerID()
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getLayerID();
					}
					virtual void setLayerID(_in ev_int32 iID)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32_Callback(iID);
						}
						else
							return this->CDBRasterLayer::setLayerID(iID);
					}
					virtual const EarthView::World::Spatial::GeoDataset::IRasterDataset* getRasterDataset() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IRasterDataset* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getRasterDataset();
					}
					virtual ev_int32 getRedIndex() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getRedIndex();
					}
					virtual ev_int32 getGreenIndex() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getGreenIndex();
					}
					virtual ev_int32 getBlueIndex() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getBlueIndex();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CDBRasterLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CDBRasterLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CDBRasterLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CDBRasterLayer::setVisible(visible);
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool_Callback(selected);
						}
						else
							return this->CDBRasterLayer::setSelectable(selected);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CDBRasterLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CDBRasterLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CDBRasterLayer::setDisplayMinScale(scale);
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->CDBRasterLayer::setSpatialReference(sr);
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CDBRasterLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getTransparentValue();
					}
					virtual void setRenderer(_in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer_Callback(pRenderer);
						}
						else
							return this->CDBRasterLayer::setRenderer(pRenderer);
					}
					virtual const EarthView::World::Spatial2D::Raster::IRasterRenderer* getRenderer() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::IRasterRenderer* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getRenderer();
					}
					virtual void getPixelValue(_in ev_real64 dfX, _in ev_real64 dfY, _inout ev_real64& dfRValue, _inout ev_real64& dfGValue, _inout ev_real64& dfBValue) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(dfX, dfY, dfRValue, dfGValue, dfBValue);
						}
						else
							return this->CDBRasterLayer::getPixelValue(dfX, dfY, dfRValue, dfGValue, dfBValue);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getDataSource();
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CDBRasterLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void_Callback();
						}
						else
							return this->CDBRasterLayer::clearSelection();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CDBRasterLayer::setLayerSelection(selection);
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::getLayerSelection();
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CDBRasterLayer::setCanEdit(can);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CDBRasterLayer::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterLayer::toXML();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CDBRasterLayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CDBRasterLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::setDataset(ref_pDataset);
					else
						ptrNativeObject->setDataset(ref_pDataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDataset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::setDataset(ref_pDataset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::assignRChannel(iBand);
					else
						ptrNativeObject->assignRChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignRChannel_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::assignRChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::assignGChannel(iBand);
					else
						ptrNativeObject->assignGChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignGChannel_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::assignGChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::assignBChannel(iBand);
					else
						ptrNativeObject->assignBChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_assignBChannel_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iBand )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::assignBChannel(iBand);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_saveChannelAsDataSet_void_ev_char_ev_int32_ev_int32_EVDataSetFormat_ev_real64_CProgressInfo(void *pObjectXXXX, _in const ev_char* fullPath, _in ev_int32 iChannelCount, _in ev_int32* piChannelIndex, _in int eDataSetType, _in ev_real64 dfNodataValue, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pProssiInfo )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ptrNativeObject->saveChannelAsDataSet(fullPath, iChannelCount, piChannelIndex, (EarthView::World::Spatial2D::Raster::EVDataSetFormat)eDataSetType, dfNodataValue, pProssiInfo);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getLayerID();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getLayerID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerID_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getLayerID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32(void *pObjectXXXX, _in ev_int32 iID )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::setLayerID(iID);
					else
						ptrNativeObject->setLayerID(iID);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerID_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 iID )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::setLayerID(iID);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IRasterDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IRasterDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getRasterDataset();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IRasterDataset* objXXXX = ptrNativeObject->getRasterDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IRasterDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRasterDataset_IRasterDataset_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getRasterDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getRedIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getRedIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRedIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getRedIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getGreenIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getGreenIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getGreenIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getGreenIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					if (dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getBlueIndex();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getBlueIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterLayer_getBlueIndex_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterLayer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterLayer::getBlueIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setRenderer_void_IRasterRenderer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getRenderer_IRasterRenderer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getPixelValue_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CDBRasterLayerProxy* ptr = dynamic_cast<CDBRasterLayerProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class DBRasterLayerFactoryProxy : public EarthView::World::Spatial2D::Raster::DBRasterLayerFactory
				{
				private:
					EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					DBRasterLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : DBRasterLayerFactory(pList)
					{
						m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType(EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer(EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->DBRasterLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->DBRasterLayerFactory::createInstance();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& strXml)
					{
						if(m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strXml_Char = strXml.makeBuffer();
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString_Callback(strXml_Char);
							return returnValue;
						}
						else
							return this->DBRasterLayerFactory::createInstance(strXml);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->DBRasterLayerFactory::createInstance(element);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->DBRasterLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(DBRasterLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::DBRasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX;
					if (dynamic_cast<DBRasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::DBRasterLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					DBRasterLayerFactoryProxy* ptr = dynamic_cast<DBRasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::DBRasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::DBRasterLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::DBRasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX;
					if (dynamic_cast<DBRasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::DBRasterLayerFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					DBRasterLayerFactoryProxy* ptr = dynamic_cast<DBRasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::DBRasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::DBRasterLayerFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString(void *pObjectXXXX, _in const char* strXml )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial2D::Raster::DBRasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX;
					if (dynamic_cast<DBRasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::DBRasterLayerFactory::createInstance(strXml1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(strXml1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					DBRasterLayerFactoryProxy* ptr = dynamic_cast<DBRasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_EVString_NoVirtual(void *pObjectXXXX, _in const char* strXml )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial2D::Raster::DBRasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::DBRasterLayerFactory::createInstance(strXml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Raster::DBRasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX;
					if (dynamic_cast<DBRasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::DBRasterLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					DBRasterLayerFactoryProxy* ptr = dynamic_cast<DBRasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Raster::DBRasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::DBRasterLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Raster::DBRasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX;
					if (dynamic_cast<DBRasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::DBRasterLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					DBRasterLayerFactoryProxy* ptr = dynamic_cast<DBRasterLayerFactoryProxy*>((EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_DBRasterLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Raster::DBRasterLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::DBRasterLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::DBRasterLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
			}
		}
	}
}
